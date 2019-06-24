TARGET = graph

LIB_NAME = $(TARGET).lib

OBJS = colorr.obj cursorr.obj devutilsr.obj fast256r.obj getconfr.obj globalr.obj gstklowr.obj l0drwlinr.obj l1clipr.obj l1liner.obj plotactnr.obj seginitr.obj std.obj svgainfor.obj sysmtyper.obj textposr.obj

$(TARGET): $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -fo -c -b -n $@

%.obj: %.c Makefile
	wcc386 -fo=$@ $< -3r -zl -nt=@text -I../include
	wlib -fo -c -b $(LIB_NAME) +-$@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $< -O7 -I../include
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
