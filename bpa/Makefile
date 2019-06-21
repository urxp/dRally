TARGET = bpa

LIB_NAME = $(TARGET).lib

OBJS = decode__bpa.obj rextract__bpa.obj getentrysize__bpa.obj ead__bpa.obj

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
