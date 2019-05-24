TARGET = bpa

LIB_NAME = $(TARGET).lib

OBJS = read__bpa.obj ___10240h__bpa.obj

$(TARGET): $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -fo -c -b -n $@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $< -O7 -I../include -w-all
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
