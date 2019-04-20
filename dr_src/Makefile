LIB_NAME = dr_src.lib

OBJS = chkcmdln.obj createdescriptor.obj exitwerrmsg.obj dr@198a0h.obj dr@28e40h.obj dr@2b8ach.obj dr@33010h.obj dr@36adch.obj dr@3ab5ch.obj dr@40f48h.obj dr@4c434h.obj dr@4dcach.obj dr@54668h.obj dr@56774h.obj dr@5eb70h.obj dr@60030h.obj dr@6ef2ch.obj dr@71da4h.obj exitcbs.obj keyboard.obj main.obj memblock.obj printstartup.obj   rendertext.obj segbaseaddress.obj seglimit.obj

dr_src: $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -fo -n $@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $< -w-all
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
