#CC = clang --target=i386
CC = gcc

FLAGS = -O0 -m32 -march=i386

OBJS = ___10110h.obj ___10474h.obj ___105e0h__data.obj ___10754h.obj ___1123ch.obj ___112d4h.obj ___11378h.obj ___11564h.obj ___12e78h.obj ___12f60h.obj ___13094h.obj ___13248h.obj ___135fch.obj ___13710h.obj ___13a98h.obj ___13bd4h.obj ___13c9ch.obj ___13cech.obj ___14010h.obj ___14368h.obj ___146c4h.obj ___148cch.obj ___14c50h.obj ___14cach.obj ___14dc4h.obj ___15130h.obj ___1549ch.obj ___15808h.obj ___15e3ch.obj ___164d0h.obj ___165ach.obj ___1678ch.obj ___168b4h.obj ___16e6ch.obj ___1716ch.obj ___17248h.obj ___17324h.obj ___17384h.obj ___17510h.obj ___18394h.obj ___18808h.obj ___18924h.obj ___18cf0h.obj ___190c4h.obj ___194a8h.obj ___197d0h.obj ___198a0h.obj ___1aa28h.obj ___1ad30h.obj ___1b140h.obj ___1bc20h.obj ___1c178h.obj ___1c374h.obj ___1c6bch.obj ___1ca00h.obj ___1caf4h.obj ___1d00ch.obj ___1d2a8h.obj ___1d4e8h.obj ___1d688h.obj ___1d83ch.obj ___1d9f8h.obj ___1e09ch.obj ___1e4f8h.obj ___1e62ch.obj ___1e888h.obj ___1f094h.obj ___1f0dch.obj ___1f124h.obj ___1f6e4h.obj ___20220h.obj ___204fch.obj ___20d18h.obj ___20f78h.obj ___210b4h.obj ___217b0h.obj ___218b4h.obj ___21fd4h.obj ___223c4h.obj ___22808h.obj ___22a80h.obj ___232f8h.obj ___233c0h.obj ___23488h.obj ___23594h.obj ___23758h.obj ___250e0h.obj ___25138h.obj ___25180h.obj ___251e8h.obj ___25230h.obj ___252e0h.obj ___25330h.obj ___259e0h.obj ___25a74h.obj ___25e40h.obj ___262b4h.obj ___26650h.obj ___269e4h.obj ___26e54h.obj ___26fach.obj ___27078h.obj ___273d8h.obj ___276f0h.obj ___27a10h.obj ___27d24h.obj ___27f80h.obj ___281d0h.obj ___2836ch.obj ___283ech.obj ___28470h.obj ___285f8h.obj ___28880h.obj ___28ab4h.obj ___28c1ch.obj ___28e40h.obj ___2a394h.obj ___2a608h.obj ___2a6a8h.obj ___2aa08h.obj ___2ab50h.obj ___2b5f0h.obj ___2b6a4h.obj ___2b7a0h.obj ___2b81ch.obj ___2b8ach.obj ___2d054h.obj ___2d0ech.obj ___2d184h.obj ___2d20ch.obj ___2d294h.obj ___2d618h.obj ___2d6a0h.obj ___2d728h.obj ___2d898h.obj ___2da10h.obj ___2db88h.obj ___2ddc8h.obj ___2deb0h.obj ___2df34h.obj ___2dfd0h.obj ___2e1b0h.obj ___2e350h.obj ___2ed2ch.obj ___2ee78h.obj ___2fca4h.obj ___2fe64h.obj ___3079ch.obj ___30a84h.obj ___30c60h.obj ___30df8h.obj ___31008h.obj ___31588h.obj ___3174ch.obj ___31868h.obj ___32230h.obj ___3266ch.obj ___33010h.obj ___35b68h.obj ___35dd0h.obj ___35f34h.obj ___36068h.obj ___36358h.obj ___36718h.obj ___36adch.obj ___37ed4h.obj ___38184h.obj ___38708h.obj ___38768h.obj ___3881ch.obj ___38878h.obj ___3892ch.obj ___39634h.obj ___3986ch.obj ___3a214h.obj ___3a6a4h.obj ___3a7e0h.obj ___3a968h.obj ___3ab5ch.obj ___3d4f0h.obj ___3d9c0h.obj ___3da48h.obj ___3deb8h.obj ___3e03ch.obj ___3e4a0h.obj ___3f1f0h__data.obj ___3f77ch.obj ___3f970h.obj ___400ech.obj ___40164h.obj ___40564h.obj ___405bch.obj ___4083ch.obj ___40864h.obj ___40db4h.obj ___40f48h.obj ___4207ch.obj ___42218h.obj ___424c8h.obj ___4256ch.obj ___42824h.obj ___42be4h.obj ___42f04h.obj ___4313ch.obj ___432d8h.obj ___43488h.obj ___43744h.obj ___43884h.obj ___43984h.obj ___43b14h.obj ___43db0h.obj ___43de8h.obj ___43e20h.obj ___44130h.obj ___44194h.obj ___44304h.obj ___446ach.obj ___44730h.obj ___4495ch.obj ___44a4ch.obj ___44a78h.obj ___4539ch.obj ___45484h.obj ___454ach.obj ___4580ch.obj ___45a24h.obj ___45ad4h.obj ___45b60h.obj ___45c6ch.obj ___45d3ch.obj ___46738h.obj ___46814h.obj ___46a10h.obj ___47304h.obj ___47620h.obj ___477d4h.obj ___47808h.obj ___478c8h.obj ___47d8ch.obj ___47e90h.obj ___47ed8h.obj ___483d4h.obj ___492f4h.obj ___496b0h.obj ___49a34h.obj ___49bd4h.obj ___4a064h.obj ___4a25ch.obj ___4a6b4h.obj ___4adach.obj ___4af3ch.obj ___4b62ch.obj ___4c21ch.obj ___4c434h.obj ___4dcach.obj ___4ee9ch.obj ___4f030h.obj ___4f170h.obj ___4f300h.obj ___4ff50h.obj ___50a48h.obj ___50ba4h.obj ___50ef4h.obj ___51204h.obj ___514d8h.obj ___51ce0h.obj ___51eb4h.obj ___5209ch.obj ___526ach.obj ___52ac4h.obj ___52d7ch.obj ___5326ch.obj ___53310h.obj ___53378h.obj ___53464h.obj ___54668h.obj ___55ae0h.obj ___560d8h.obj ___56170h.obj ___563ach.obj ___56594h.obj ___56774h.obj ___5905ch__asm.obj ___596f0h.obj ___59720h.obj ___5994ch.obj ___59b3ch.obj ___59cd8h.obj ___59db8h.obj ___59e10h__asm.obj ___5f7fch_s.obj ___608ech__mp.obj ___80000h__16.obj ___100000h__16.obj \
functions.obj data.obj bss.obj

LINUX_OBJS = drally_linux_c.o drally_linux.obj main_linux_c.o memory_linux_c.o sound_linux.obj sound_cb.o sound.o sound_s3m.o sound_xm.o sound2.o sound_thread.o sound_memory.o system_linux_c.o events.o ___24548h.o ___3e164h.o ___3e1c4h.o ___3e3cch.o ___3e720h.o ___3f71ch.o ___48458h_linux.obj ___3a2ach_linux.obj ___3aaf8h.o ___3d908h.o ___49390h_linux.obj ___3a454h_linux.obj ___58b20h_linux_c.o functions_c.o config_c.o display_c.o bpa.o bpk.o fpu.o ___2ec68h.o ___2415ch.o ___2b318h.o ___60420h.o  pal.o ___3d890h.o ___58c60h.o ___3d38ch.o ___135fch.o ___23230h.o console.o palx.o watcom106.o ___12200h.o cinem.o

all: drally_linux

drally_linux: $(LINUX_OBJS) $(OBJS) 
	$(CC) -o $@ $^ $(FLAGS) -lSDL2 -lm

serial16.bin: serial16.asm Makefile
	nasm -f bin -o $@ $<

___80000h__16.obj: ___80000h__16.asm serial16.bin
	nasm -f elf -o $@ $< -Ov

%.o: %.c drally.h Makefile
	$(CC) -g -c -o $@ $< $(FLAGS)

%.obj: %.asm Makefile
	nasm -g -f elf -o $@ $< -Ov

.PHONY: clean

clean:
	@rm -f serial16.bin *.o *.obj drally_linux
