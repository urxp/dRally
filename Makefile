subdirs = dr_src

segs = obj_1.inc obj_2.inc obj_3.inc obj_4.inc bss_4.inc

dr_src = dr_src/dr_src.lib

default: $(subdirs) drally.exe drally.le
	@rm -f drally.lnk

$(subdirs):
	@$(MAKE) -C $@ $(MAKECMDGOALS)

drally.exe: drally.lnk
#	wlink @ $< name $@ option stub=wstub.exe 
	wlink @ $< name $@ option stub=cwstub.exe 

drally.le: drally.lnk
	wlink @ $< name $@ option nostub

drally.obj: drally.asm Makefile
	nasm -f obj -o $@ $<

%.obj: %.c Makefile
	clang-9 -c $< -o $@ -O2 -m32

drally.lnk: Makefile drally.obj $(dr_src)
#	@echo option osname='DOS/4G'		> $@
	@echo option osname='CauseWay'		> $@
	@echo format os2 le					>> $@
	@echo file $(dr_src)				>> $@
	@echo file drally.obj				>> $@

drally.asm: $(segs)
	@touch $@

.PHONY: clean $(subdirs)
clean: $(subdirs)
	@rm -f drally.obj drally.exe drally.le
