BUILD 		:= include
SOURCES 	:= template

TEMPLATEFILES 	:= $(shell find $(SOURCES) -type f -printf '%P\n')
OUTFILES 		:= $(foreach file,$(TEMPLATEFILES),$(BUILD)/$(file))

.PHONY: all clean verify

$(BUILD)/%: $(SOURCES)/%
	@mkdir -p $(@D)
	@python3 process.py $< $@

all: $(OUTFILES)

verify:
	@cmake -S . -B . -DCMAKE_REQUIRED_FLAGS=-m32

clean:
	@rm -rf $(BUILD)
	@echo Cleaned.
