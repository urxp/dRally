TARGET = dpmi

LIB_NAME = $(TARGET).lib

OBJS = allocdos.obj allocdoslock.obj allocmemlock.obj freeallocs.obj freedosmem.obj freemem.obj int386REGS1.obj

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
