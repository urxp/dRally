TARGET = clib3r

LIB_NAME = $(TARGET).lib

OBJS = cinit.obj cmp386.obj fmemcpy.obj fprtf.obj ftell.obj fwrite.obj getenv.obj int386.obj intx386.obj intxa386.obj memcpy.obj printf.obj start.obj stricmp.obj strnicmp.obj tell.obj

$(TARGET): $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -fo -c -b -n $@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $< -O7 -I../include -w-all
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
