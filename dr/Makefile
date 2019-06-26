TARGET = dr

LIB_NAME = $(TARGET).lib

OBJS = ___71b70h__tbd.obj ___7c69ch__tbd.obj main.obj startup__dr.obj chkarg__dr.obj chkcdrom__dr.obj loadcdromini__dr.obj chkfiles__dr.obj exitcb0__dr.obj exitcb1__dr.obj exitcb2__dr.obj footer__dr.obj restrdos__dr.obj selfm__tbd.obj welcome__dr.obj

$(TARGET): $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -fo -c -b -n $@

%.obj: %.c Makefile
	wcc386 -fo=$@ $< -3r -zl -nt=@text -I../include
	wlib -fo -c -b $(LIB_NAME) +-$@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $< -O7 -I../include -w-all
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
