subdirs = clib3r emu387 audio bpa dpmi dr esp serial timer video

segs = @text.asm @data.asm @bss.asm

clib3r = clib3r/clib3r.lib
emu387 = emu387/emu387.lib

audio = audio/audio.lib
bpa = bpa/bpa.lib
dpmi = dpmi/dpmi.lib
dr = dr/dr.lib
esp = esp/esp.lib
serial = serial/serial.lib
timer = timer/timer.lib
video = video/video.lib

libs = $(clib3r) $(emu387) $(audio) $(bpa) $(dpmi) $(dr) $(esp) $(serial) $(timer) $(video)

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
	wlib -fo -c -b -n -t $@ +-$(clib3r) +-$(emu387) +-$(audio) +-$(bpa) +-$(dpmi) +-$(dr) +-$(esp) +-$(serial) +-$(timer) +-$(video) +-drally.obj

drally.lnk: Makefile drally.lib
#	@echo option osname="'DOS/4G'"                  > $@
	@echo option osname="'CauseWay'"                > $@
	@echo format os2 le                             >> $@
#	@echo option stub=wstub.exe                     >> $@
	@echo option stub=cwstub.exe                    >> $@
	@echo seg "'@text'" pre, "'@data'" pre          >> $@
	@echo op start=start                            >> $@
	@echo file drally.lib                           >> $@

drle.lnk: Makefile drally.lib
	@echo option osname="'DOS/4G'"                  > $@
	@echo format os2 le                             >> $@
	@echo seg "'@text'" pre, "'@data'" pre          >> $@
	@echo op start=start                            >> $@
	@echo file drally.lib                           >> $@

drlx.lnk: Makefile drally.lib
	@echo option osname="'DOS/4G non-zero base'"    > $@
	@echo format os2 lx                             >> $@
	@echo disable 123                               >> $@
	@echo op internalrelocs                         >> $@
	@echo op togglerelocs                           >> $@
	@echo seg "'@text'" pre, "'@data'" pre          >> $@
	@echo op start=start                            >> $@
	@echo file drally.lib                           >> $@

drally.asm: $(segs)
	@touch $@

.PHONY: clean $(subdirs)
clean: $(subdirs)
	@rm -f drally.lib drally.exe drally.le drally.lx drally.obj
