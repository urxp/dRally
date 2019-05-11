TARGET = video

LIB_NAME = $(TARGET).lib

OBJS = chkbankswitch__video.obj chkgx__video.obj setbank__video.obj

$(TARGET): $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -fo -c -b -n $@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $< -O7 -I../include
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
