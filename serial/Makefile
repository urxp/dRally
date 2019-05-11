TARGET = serial

LIB_NAME = $(TARGET).lib

OBJS = install__serial.obj handler16.obj

$(TARGET): $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -fo -c -b -n $@

serial16.bin: serial16.asm Makefile
	nasm -f bin -o $@ $<

handler16.obj: handler16.asm serial16.bin Makefile
	nasm -f obj -o $@ $< -O7 -I../include -w-all
	wlib -fo -c -b $(LIB_NAME) +-$@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $< -O7 -I../include -w-all
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS) serial16.bin
