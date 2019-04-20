subdirs = start clib3r emu387 math387 graph dr_ints dr_src

segs = obj_1.inc obj_3.inc obj_4.inc bss_4.inc

clib3r = clib3r/clib3r.lib
emu387 = emu387/emu387.lib
math387 = math387/math387.lib
graph = graph/graph.lib
start = start/cstrt386.obj


dr_ints = dr_ints/dr_ints.lib
dr_src = dr_src/dr_src.lib

default: $(subdirs) drally.exe drally.le 

$(subdirs):
	@$(MAKE) -C $@ $(MAKECMDGOALS)

drally.exe: drally.lnk
	wlink @ $< name $@ option stub=wstub.exe 

drally.le: drally.lnk
	wlink @ $< name $@ option nostub

drally.obj: drally.asm Makefile
	nasm -f obj -o $@ $< -w-all

drally.lnk: Makefile drally.obj $(clib3r) $(emu387) $(math387) $(graph) $(start) $(dr_ints) $(dr_src)
	@echo option osname='DOS/4G'		> $@
	@echo format os2 le					>> $@
	@echo library $(clib3r)				>> $@
	@echo library $(emu387)				>> $@
	@echo library $(math387)			>> $@
	@echo library $(graph)				>> $@
	@echo file $(start)					>> $@
	@echo file $(dr_ints)				>> $@
	@echo file $(dr_src)				>> $@
	@echo file drally.obj				>> $@

drally.asm: $(segs)
	@touch $@

.PHONY: clean $(subdirs)
clean: $(subdirs)
	@rm -f drally.obj drally.exe drally.le
