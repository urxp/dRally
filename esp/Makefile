TARGET = esp

LIB_NAME = $(TARGET).lib

OBJS = ___64864h.obj ___648d8h__esp.obj ___659b8h__esp.obj ___67e48h.obj ___682a4h__esp.obj samplerate__esp.obj volume__esp.obj

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
