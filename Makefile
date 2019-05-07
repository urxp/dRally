subdirs = dr

segs = @text.inc @data.inc @bss.inc

dr = dr/dr.lib

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

drally.obj: drally.asm serial16.bin Makefile
	nasm -f obj -o $@ $<

serial16.bin: serial16.asm Makefile
	nasm -f bin -o $@ $<

drally.lnk: Makefile drally.obj $(dr)
#	@echo option osname="'DOS/4G'"		> $@
	@echo option osname="'CauseWay'"	> $@
	@echo format os2 le					>> $@
#	@echo option stub=wstub.exe			>> $@
	@echo option stub=cwstub.exe		>> $@
	@echo seg "'@text'" pre, "'@data'" pre		>> $@
	@echo op start=start				>> $@
	@echo file $(dr)					>> $@
	@echo file drally.obj				>> $@

drle.lnk: Makefile drally.obj $(dr)
	@echo option osname="'DOS/4G'"		> $@
	@echo format os2 le					>> $@
#	@echo option stub=wstub.exe			>> $@
	@echo seg "'@text'" pre, "'@data'" pre		>> $@
	@echo op start=start				>> $@
	@echo file $(dr)					>> $@
	@echo file drally.obj				>> $@

drlx.lnk: Makefile drally.obj $(dr)
	@echo option osname="'DOS/4G non-zero base'"	> $@
	@echo disable 123    				>> $@
	@echo op internalrelocs				>> $@					
	@echo op togglerelocs				>> $@
	@echo format os2 lx					>> $@
#	@echo option stub=wstub.exe			>> $@
	@echo seg "'@text'" pre, "'@data'" pre		>> $@
	@echo op start=start				>> $@
	@echo file $(dr)					>> $@
	@echo file drally.obj				>> $@

drally.asm: $(segs)
	@touch $@

.PHONY: clean $(subdirs)
clean: $(subdirs)
	@rm -f drally.obj drally.exe drally.le drally.lx serial16.bin
