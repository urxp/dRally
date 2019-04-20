LIB_NAME = dr_ints.lib

OBJS = dr@61a04h.obj dr@762dch.obj dr@7786ah.obj dr@77e47h.obj dr@77f2dh.obj dr@80000h.obj dr@int08h.obj dr@int09h.obj

dr_ints: $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -n -fo $@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $<
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
