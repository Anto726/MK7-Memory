BUILD		:= 	include
SOURCES 	:= 	template

TEMPLATEFILES		:=	$(shell find $(SOURCES) -type f -printf %P\n)
OUTFILES			:=	$(foreach file,$(TEMPLATEFILES),$(BUILD)/$(file))

$(BUILD)/%: $(SOURCES)/%
	@mkdir -p $(@D)
	@python process.py $< $@

all: $(OUTFILES)

clean:
	@rm -rf $(BUILD)
	@echo Cleaned.