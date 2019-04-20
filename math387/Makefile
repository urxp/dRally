LIB_NAME = math387.lib

OBJS = __mtherr.obj _matherr.obj ceil.obj cnvs2d.obj cvt.obj dosinite.obj fchop.obj floor.obj frexp.obj ftos.obj grabfpe.obj i64ts386.obj log387.obj log87e.obj math2err.obj matherr.obj modf387.obj nan_inf.obj scale.obj strtod.obj

math387: $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -n -fo $@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $<
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
