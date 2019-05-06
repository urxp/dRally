subdirs = dr_src

segs = obj_1.inc obj_3.inc obj_4.inc bss_4.inc

dr_src = dr_src/dr_src.lib

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

drally.obj: drally.asm obj_2.bin Makefile
	nasm -f obj -o $@ $<

obj_2.bin: obj_2.asm Makefile
	nasm -f bin -o $@ $<

%.obj: %.c Makefile
	clang-9 -c $< -o $@ -O2 -m32

drally.lnk: Makefile drally.obj $(dr_src)
#	@echo option osname="'DOS/4G'"		> $@
	@echo option osname="'CauseWay'"	> $@
	@echo format os2 le					>> $@
#	@echo option stub=wstub.exe			>> $@
	@echo option stub=cwstub.exe		>> $@
	@echo file $(dr_src)				>> $@
	@echo file drally.obj				>> $@

drle.lnk: Makefile drally.obj $(dr_src)
	@echo option osname="'DOS/4G'"		> $@
	@echo format os2 le					>> $@
#	@echo option stub=wstub.exe			>> $@
	@echo file $(dr_src)				>> $@
	@echo file drally.obj				>> $@

drlx.lnk: Makefile drally.obj $(dr_src)
	@echo option osname="'DOS/4G non-zero base'"	> $@
	@echo disable 123    				>> $@
	@echo op internalrelocs				>> $@					
	@echo op togglerelocs				>> $@
	@echo format os2 lx					>> $@
#	@echo option stub=wstub.exe			>> $@
	@echo file $(dr_src)				>> $@
	@echo file drally.obj				>> $@

drally.asm: $(segs)
	@touch $@

.PHONY: clean $(subdirs)
clean: $(subdirs)
	@rm -f drally.obj drally.exe drally.le drally.lx obj_2.bin
