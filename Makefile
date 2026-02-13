BUILD 		:= include
CMAKE_BUILD := build
SOURCES 	:= template

TEMPLATEFILES 	:= $(shell find $(SOURCES) -type f -printf '%P\n')
OUTFILES 		:= $(foreach file,$(TEMPLATEFILES),$(BUILD)/$(file))

.PHONY: all clean verify

$(BUILD)/%: $(SOURCES)/%
	@mkdir -p $(@D)
	@python3 process.py $< $@

all: $(OUTFILES)

verify:
	@rm -rf $(CMAKE_BUILD)
	@cmake -S . -B $(CMAKE_BUILD)
	@cmake --build $(CMAKE_BUILD)

clean:
	@rm -rf $(BUILD)
	@echo Cleaned.
