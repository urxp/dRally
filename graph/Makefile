LIB_NAME = graph.lib

OBJS = colorr.obj cursorr.obj devutilsr.obj fast256r.obj getconfr.obj gstklowr.obj l0drwlinr.obj l1clipr.obj l1liner.obj plotactnr.obj seginitr.obj svgainfor.obj sysmtyper.obj textposr.obj

graph: $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -n -fo $@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $<
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
