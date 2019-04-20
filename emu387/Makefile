LIB_NAME = emu387.lib

OBJS = 386inite.obj emu387.obj

emu387: $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -fo -n $@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $<
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
