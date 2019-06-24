TARGET = math387r

LIB_NAME = $(TARGET).lib

OBJS = __mtherr.obj _matherr.obj ceil.obj cnvs2d.obj cvt.obj dosinite.obj fchop.obj floor.obj fpow10.obj frexp.obj ftos.obj grabfpe.obj i64ts386.obj log387.obj log87e.obj math2err.obj matherr.obj modf387.obj nan_inf.obj scale.obj strtod.obj

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
