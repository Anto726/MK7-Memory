import sys
import typing

class Parser:
    def __init__(self):
        self.child: Parser = None
    
    def parseCommand(self, line: str) -> dict:
        if not line.strip().startswith("/") or not line.strip().endswith("/"):
            return None
        
        result = {}
        parts = line.split("/")
        if (len(parts) < 2):
            return None
        
        result["preamble"] = parts[0]
        result["command"] = parts[1].lower()
        
        noncolon = 0
        for part in parts[2:]:
            if len(part.strip()) == 0:
                continue
            if "@" in part:
                key, value = part.split("@", 1)
                result[key.lower()] = value
            else:
                result[str(noncolon)] = part
                noncolon += 1

        return result

class Line(Parser):
    def __init__(self, line: str):
        super().__init__()
        self.line = line
    
    def repr(self):
        return self.line

    def write(self, o: typing.TextIO):
        o.write(self.repr())

class ClassParser(Parser):
    class Member:
        def __init__(self, parent, command: dict):
            if not "name" in command and not "0" in command:
                raise ValueError("NAME parameter is mandatory")
            self.name = command.get("name", command.get("0"))
            if not "size" in command and not "1" in command:
                raise ValueError("SIZE parameter is mandatory")
            self.size = int(command.get("size", command.get("1")), base=0)
            self.offset = int(command.get("offset", command.get("2", "-1")), base=0)
            self.preamble = command["preamble"]
            self.comment = " " + command.get("comment", "")
            self.parent = parent
            self.reprPadding = None
            self.isGap = command.get("gap", False)
            if len(self.comment) == 1: self.comment = ""
        
        def repr(self, withComment: bool):
            if (withComment and not self.isGap):
                if self.reprPadding is None:
                    maxLen = self.parent.getLongestElementReprLen()
                    while (maxLen % 4 != 0): maxLen += 1
                    self.reprPadding = " " * (maxLen - (len(self.preamble) + len(self.name) + 1))
                return "{}{};{}// (O:0x{:X},S:0x{:X}){}\n".format(self.preamble, self.name, self.reprPadding, self.offset, self.size, self.comment)
            else:
                return "{}{};\n".format(self.preamble, self.name)

        def write(self, o: typing.TextIO):
            o.write(self.repr(True))

    def __init__(self, command: dict, isStruct: bool):
        super().__init__()
        if not "name" in command:
            raise ValueError("NAME parameter is mandatory")
        if not "size" in command:
            raise ValueError("SIZE parameter is mandatory")
        self.preamble = command["preamble"]
        self.name = command["name"]
        self.size = int(command["size"], base=0)
        self.base_size = int(command.get("bsize", "0"), base=0)
        self.base = command.get("base", None)
        self.hasvtable = command.get("vtable", "False").lower() == "true"
        self.sizeof = command.get("sizeof")
        self.template = command.get("template")
        self.elements = []
        self.maxnamelen = None
        if self.template is not None:
            self.elements.append(Line("{}{}\n".format(self.preamble, self.template)))
        if self.base is not None:
            self.elements.append(Line("{}{} {} : public {}\n".format(self.preamble, "struct" if isStruct else "class", self.name, self.base)))
        else:
            self.elements.append(Line("{}{} {}\n".format(self.preamble, "struct" if isStruct else "class", self.name)))
        self.elements.append(Line("{}{{\n".format(self.preamble)))

    def processLine(self, line: str):
        res = True
        if self.child is not None:
            if not self.child.processLine(line):
                self.child = None
        else:
            command = self.parseCommand(line)
            if command is None:
                self.elements.append(Line(line))
            else:
                c = command["command"]
                if c == "m":
                    self.elements.append(ClassParser.Member(self, command))
                elif c == "end":
                    res = False
                elif c == "start_class" or c == "start_struct":
                    self.child = ClassParser(command, c == "start_struct")
                    self.elements.append(self.child)
                else:
                    raise ValueError("Unknown command: {}".format(c))
        return res
    
    def getLongestElementReprLen(self):
        if self.maxnamelen is None:
            maxlen = len(self.preamble) + 32
            for el in self.elements:
                if type(el) is ClassParser.Member:
                    l = len(el.repr(False))
                    if l > maxlen: maxlen = l
            self.maxnamelen = maxlen
        return self.maxnamelen

    def _calcElements(self):
        currOffset = self.base_size
        if self.base is None and self.hasvtable:
            currOffset += 4
        i = 0
        lastMember = None
        while i < len(self.elements):
            currEl = self.elements[i]
            if type(currEl) is ClassParser.Member:
                lastMember = currEl
                if currEl.offset == -1:
                    currEl.offset = currOffset
                if currOffset > currEl.offset:
                    raise ValueError("Current offset (0x{:X}) greater than current element offset.\n{}".format(currOffset, currEl.repr(False)))
                elif currOffset < currEl.offset:
                    command = {}
                    command["preamble"] = currEl.preamble
                    command["name"] = "u8 gap_0x{:X}[0x{:X}]".format(currOffset, currEl.offset - currOffset)
                    command["offset"] = str(currOffset)
                    command["size"] = str(currEl.offset - currOffset)
                    command["gap"] = True
                    padMember = ClassParser.Member(self, command)
                    self.elements = self.elements[:i] + [padMember] + self.elements[i:]
                    i += 1
                    currOffset += padMember.size
                currOffset += currEl.size
                if currOffset > self.size:
                    raise ValueError("Too many members for defined class size")
            i += 1
        if currOffset < self.size:
            preamble = self.preamble + "    "
            if lastMember is not None:
                preamble = lastMember.preamble
            command = {}
            command["preamble"] = preamble
            command["name"] = "u8 gap_0x{:X}[0x{:X}]".format(currOffset, self.size - currOffset)
            command["offset"] = str(currOffset)
            command["size"] = str(self.size - currOffset)
            command["gap"] = True
            padMember = ClassParser.Member(self, command)
            self.elements.append(padMember)
        self.elements.append(Line("{}}};\n".format(self.preamble)))
        self.elements.append(Line("{}static_assert(sizeof({}) == 0x{:X});\n".format(self.preamble, self.sizeof if self.sizeof is not None else self.name, self.size)))

    def write(self, o: typing.TextIO):
        self._calcElements()
        for el in self.elements:
            el.write(o)


class FileParser(Parser):

    def __init__(self, input: typing.TextIO, output: typing.TextIO):
        super().__init__()
        self.input = input
        self.output = output
        self.elements = []

    def processLine(self, line: str):
        res = True
        if self.child is not None:
            if not self.child.processLine(line):
                self.child = None
        else:
            command = self.parseCommand(line)
            if command is None:
                self.elements.append(Line(line))
            else:
                c = command["command"]
                if c == "start_class" or c == "start_struct":
                    self.child = ClassParser(command, c == "start_struct")
                    self.elements.append(self.child)
                else:
                    raise ValueError("Unknown command: {}".format(c))
        return res

    def write(self, o: typing.TextIO):
        for el in self.elements:
            el.write(o)

    def processFile(self):
        self.elements.append(Line("/*******************************************************/\n"))
        self.elements.append(Line("/* This file has been generated by the MK7-Memory tool */\n"))
        self.elements.append(Line("/*       !!! Do not edit this file manually !!!        */\n"))
        self.elements.append(Line("/*******************************************************/\n\n"))
        for line in self.input:
            self.processLine(line)
        self.write(self.output)

def main():
    if len(sys.argv) != 3:
        print("Usage: {} (inputFile) (outputFile)".format(sys.argv[0]))
        return
    print("Processing {}...".format(sys.argv[1]))
    with open(sys.argv[2], "w", encoding="UTF-8") as o:
        with open(sys.argv[1], "r", encoding="UTF-8") as i:
            FileParser(i, o).processFile()

if __name__ == "__main__":
    sys.exit(main())