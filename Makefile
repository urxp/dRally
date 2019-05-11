subdirs = clib3r dr serial video

segs = @text.inc @data.inc @bss.inc

clib3r = clib3r/clib3r.lib

dr = dr/dr.lib
serial = serial/serial.lib
video = video/video.lib

libs = $(clib3r) $(dr) $(serial) $(video)

default: $(subdirs) drally.exe drally.le drally.lx
	@rm -f drally.lnk drle.lnk drlx.lnk

$(subdirs):
	@$(MAKE) -C $@ $(MAKECMDGOALS)

drally.exe: drally.lnk
	wlink @ $< name $@

drally.le: drle.lnk
	wlink @ $< name $@ option nostub

drally.lx: drlx.lnk
	wlink @ $< name $@ option nostub

drally.obj: drally.asm Makefile
	nasm -f obj -o $@ $< -Iinclude -w-all

drally.lib: $(libs) drally.obj Makefile
	wlib -fo -c -b -n $@
	wlib -fo -c -b $@ +-$(clib3r)
	wlib -fo -c -b $@ +-$(dr)
	wlib -fo -c -b $@ +-$(serial)
	wlib -fo -c -b $@ +-$(video)
	wlib -fo -c -b $@ +-drally.obj

drally.lnk: Makefile drally.lib
#	@echo option osname="'DOS/4G'"                  > $@
	@echo option osname="'CauseWay'"                > $@
	@echo format os2 le                             >> $@
#	@echo option stub=wstub.exe                     >> $@
	@echo option stub=cwstub.exe                    >> $@
	@echo seg "'@text'" pre, "'@data'" pre          >> $@
	@echo op start=start                            >> $@
	@echo file drally.lib                           >> $@

drle.lnk: Makefile drally.obj $(dr)
	@echo option osname="'DOS/4G'"                  > $@
	@echo format os2 le                             >> $@
#	@echo option stub=wstub.exe                     >> $@
	@echo seg "'@text'" pre, "'@data'" pre          >> $@
	@echo op start=start                            >> $@
	@echo file drally.lib                           >> $@

drlx.lnk: Makefile drally.obj $(dr)
	@echo option osname="'DOS/4G non-zero base'"    > $@
	@echo disable 123                               >> $@
	@echo op internalrelocs                         >> $@
	@echo op togglerelocs                           >> $@
	@echo format os2 lx                             >> $@
#	@echo option stub=wstub.exe                     >> $@
	@echo seg "'@text'" pre, "'@data'" pre          >> $@
	@echo op start=start                            >> $@
	@echo file drally.lib                           >> $@

drally.asm: $(segs)
	@touch $@

.PHONY: clean $(subdirs)
clean: $(subdirs)
	@rm -f drally.lib drally.exe drally.le drally.lx drally.obj
