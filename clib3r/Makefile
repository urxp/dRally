TARGET = clib3r

LIB_NAME = $(TARGET).lib

OBJS = ___argc.obj __stos.obj _8087386.obj _clse.obj 8087cw.obj abort.obj allocfp.obj amblksiz.obj amodf386.obj argcv386.obj atoi.obj chint386.obj chipbug.obj chipd32.obj chipvar.obj chk8087.obj chktty.obj cinit.obj close.obj cmain386.obj cmp386.obj crwd386.obj cstrt386.obj d_getvec.obj d_setvec.obj dosret.obj efgfmt.obj enterdb.obj environ.obj errno.obj exit.obj fclose.obj fdfs386.obj fflush.obj fgetc.obj filelen.obj fltused.obj flush.obj flushall.obj fmemcpy.obj fopen.obj fpe387.obj fpedos4g.obj fpeergo.obj fpeint.obj fpeintel.obj fpeinth.obj fpephar.obj fprtf.obj fputc.obj fputs.obj fread.obj fscanf.obj fseek.obj ftell.obj fwrite.obj getenv.obj grabfp87.obj grownear.obj gtche.obj gtime386.obj gtpid.obj heapen.obj heapmod.obj histsplt.obj hook387.obj hugeval.obj ini87386.obj inirt386.obj initargv.obj initfile.obj inp.obj int386.obj intx386.obj intxa386.obj ioalloc.obj iob.obj iobaddr.obj ioexit.obj iomode.obj isatt.obj istable.obj itoa.obj kbhit.obj lseek.obj ltoa.obj memalloc.obj memcpy.obj nfree.obj nmalloc.obj nmemneed.obj noefgfmt.obj open.obj outp.obj printf.obj prtf.obj putch.obj putchar.obj qread.obj qwrit.obj rand.obj remove.obj save8087.obj sbrk386.obj scanf.obj scnf.obj seg386.obj segread.obj set386.obj setefg.obj setenvp.obj seterrno.obj signl.obj sigsy.obj sscanf.obj stack386.obj stinit.obj stk386.obj strcat.obj strcpy.obj stricmp.obj strlen.obj strlwr.obj strncmp.obj strnicmp.obj strstr.obj strupr.obj tell.obj tolower.obj toupper.obj umaskval.obj ungetc.obj unlnk.obj xmsg.obj

$(TARGET): $(LIB_NAME) $(OBJS)

$(LIB_NAME): Makefile
	wlib -fo -c -b -n $@

%.obj: %.asm Makefile
	nasm -f obj -o $@ $< -O7 -I../include -w-all
	wlib -fo -c -b $(LIB_NAME) +-$@


.PHONY: clean
clean:
	@rm -f $(LIB_NAME) $(OBJS)
