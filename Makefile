#CC = clang --target=i386
CC = gcc
#CC = clang-10

DEFINES = #-D_REENTRANT #-DIPXNET
INCLUDES = -I/usr/include/SDL2
FLAGS = -O0 -m32 -march=i386
#FLAGS = -O3 -m32 -msse2
LDFLAGS = -lm -lSDL2 #-lSDL2_net

OBJS = ___11564h.obj ___13248h.obj ___14c50h.obj ___14cach.obj ___14dc4h.obj ___15130h.obj ___1549ch.obj ___15808h.obj ___15e3ch.obj ___164d0h.obj ___165ach.obj ___1678ch.obj ___168b4h.obj ___16e6ch.obj ___1716ch.obj ___17324h.obj ___17384h.obj ___17510h.obj ___18394h.obj ___18cf0h.obj ___190c4h.obj ___197d0h.obj ___198a0h.obj ___1ad30h.obj ___1b140h.obj ___1bc20h.obj ___1c374h.obj ___1c6bch.obj ___1ca00h.obj ___1d00ch.obj ___1d2a8h.obj ___1d4e8h.obj ___1d688h.obj ___1d83ch.obj ___1d9f8h.obj ___1e09ch.obj ___1e4f8h.obj ___1e62ch.obj ___1f094h.obj ___1f0dch.obj ___1f124h.obj ___20d18h.obj ___20f78h.obj ___210b4h.obj ___217b0h.obj ___21fd4h.obj ___232f8h.obj ___233c0h.obj ___23488h.obj ___23594h.obj ___23758h.obj ___250e0h.obj ___25138h.obj ___251e8h.obj ___25230h.obj ___252e0h.obj ___25330h.obj ___25a74h.obj ___25e40h.obj ___262b4h.obj ___26650h.obj ___269e4h.obj ___26e54h.obj ___26fach.obj ___27078h.obj ___273d8h.obj ___276f0h.obj ___27a10h.obj ___27d24h.obj ___27f80h.obj ___281d0h.obj ___28470h.obj ___28ab4h.obj ___2a608h.obj ___2a6a8h.obj ___2b5f0h.obj ___2b7a0h.obj ___2b81ch.obj  ___2d054h.obj ___2d0ech.obj ___2d184h.obj ___2d20ch.obj ___2d294h.obj ___2d618h.obj ___2d6a0h.obj ___2d728h.obj ___2d898h.obj ___2da10h.obj ___2db88h.obj ___2ddc8h.obj ___2deb0h.obj ___2df34h.obj ___2dfd0h.obj ___2e1b0h.obj ___2ed2ch.obj ___2fca4h.obj ___2fe64h.obj ___3079ch.obj ___30a84h.obj ___30c60h.obj ___31008h.obj ___3174ch.obj ___31868h.obj ___32230h.obj ___35b68h.obj ___35dd0h.obj ___35f34h.obj ___36068h.obj ___36358h.obj ___36718h.obj ___36adch.obj ___37ed4h.obj ___38184h.obj ___38708h.obj ___38768h.obj ___3881ch.obj ___38878h.obj ___3892ch.obj ___39634h.obj ___3986ch.obj ___3a968h.obj ___3d9c0h.obj ___3deb8h.obj ___3e03ch.obj ___3f1f0h__data.obj ___40564h.obj ___40864h.obj ___4256ch.obj ___44130h.obj ___44194h.obj ___446ach.obj ___44730h.obj ___4495ch.obj ___45ad4h.obj ___45b60h.obj ___45c6ch.obj ___47304h.obj ___47620h.obj ___47d8ch.obj ___47e90h.obj ___483d4h.obj ___4a064h.obj ___53378h.obj ___59720h.obj ___59b3ch.obj ___59cd8h.obj functions.obj data.obj bss.obj

MP_OBJS = __mp_60a28h.o __mp_60a84h.o __mp_60b48h.o __mp_60b60h.o __mp_611c0h.o __mp_61278h.o __mp_61418h.o __mp_61518h.o __mp_6168ch.o __mp_61b88h.o __mp_61cd0h.o __mp_623d4h.o __mp_631d4h.o __mp_63244h.o __mp_632c4h.o __mp_636d0h.o __mp_637cch.o __mp_638ech.o __mp_63b20h.o

LINUX_OBJS = drally_linux_c.o drally_linux.obj memory_linux_c.o sound_api.o sound_cb.o sound.o sound_s3m.o sound_xm.o sound2.o sound_thread.o sound_memory.o system_linux_c.o events.o ___13710h.o ___24548h.o ___3e164h.o ___3e1c4h.o ___3e3cch.o ___3e720h.o ___3f71ch.o ___3a2ach.o ___3aaf8h.o ___3d908h.o ___58b20h.o functions_c.o config_c.o display_c.o bpa.o bpk.o fpu.o ___2ec68h.o ___2415ch.o ___2b318h.o ___60420h.o  pal.o ___3d890h.o ___58c60h.o ___3d38ch.o ___135fch.o ___23230h.o console.o palx.o watcom106.o ___12200h.o cinem.o keyboard.o network.o db_ipx.o ___13cech.o gfx.o ___20220h.o ___5994ch.o ___10754h.o ___11378h.o ___3a6a4h.o ___2a394h.o ___2aa08h.o ___31588h.o ___30df8h.o ___12e78h.o ___17248h.o ___13094h.o ___33010h.o sound3.o sound4.o sound_thread_switches.o ___1aa28h.o ___13c9ch.o ___13bd4h.o ___2ab50h.o ___3a454h.o ___3a214h.o dr_math.o ___1123ch.o dos.o ___148cch.o ___3a7e0h.o ___18924h.o ___18808h.o ___596f0h.o ___44a4ch.o ___146c4h.o ___13a98h.o ___1caf4h.o ___1c178h.o ___59db8h.o ___1f6e4h.o ___3266ch.o ___424c8h.o ___22808h.o ___223c4h.o ___3ab5ch.o ___25180h.o ___12f60h.o ___259e0h.o

MENU_OBJS = menu_main.o menu_data.o menu___14010h.o menu___14368h.o menu___1e888h.o menu___3e4a0h.obj menu___194a8h.o menu___218b4h.o menu___22a80h.o menu___3d4f0h.o menu___3da48h.o menu___204fch.o

SHOP_OBJS = shop_main.o shop___28e40h.o shop___2836ch.o shop___283ech.o shop___285f8h.o shop___28880h.o shop___2b6a4h.o 

UNDERGROUND_OBJS = underground_main.o underground___28c1ch.o underground___2e350h.o

RACE_OBJS = race_main.o race___3f970h.o  race___400ech.o race___40164h.o race___405bch.obj race___4083ch.o race___40db4h.obj race___40f48h.obj race___4207ch.obj race___42218h.obj race___42824h.o race___44304h.obj race___44a78h.obj race___4539ch.o race___454ach.obj race___4580ch.obj race___45a24h.obj race___45d3ch.obj race___46738h.obj race___46814h.obj race___46a10h.obj race___477d4h.o race___478c8h.obj race___47808h.obj race___47ed8h.obj race___48458h.obj race___492f4h.o race___49390h.o race___496b0h.obj race___49a34h.o race___49bd4h.o race___4a25ch.obj race___4a6b4h.obj race___4adach.obj race___4af3ch.obj race___4b62ch.obj race___4c21ch.obj race___4dcach.obj race___4ee9ch.obj race___4f030h.obj race___4f170h.obj race___4f300h.obj race___4ff50h.obj race___50a48h.obj race___50ba4h.obj race___50ef4h.obj race___51204h.obj race___514d8h.obj race___51ce0h.obj race___5209ch.obj race___526ach.o race___52ac4h.o race___52d7ch.o race___53310h.obj race___53464h.o race___54668h.obj race___55ae0h.obj race___560d8h.obj race___56170h.obj race___563ach.obj race___56594h.obj race___5326ch.o race___51eb4h.o

BI_OBJS = race___4c434h.o

UNI_OBJS = drally.o

all: drally_linux

drally_linux: $(UNI_OBJS) $(LINUX_OBJS) $(RACE_OBJS) $(MENU_OBJS) $(SHOP_OBJS) $(UNDERGROUND_OBJS) $(MP_OBJS) $(BI_OBJS) $(OBJS) 
	$(CC) -o $@ $^ $(FLAGS) $(LDFLAGS)

%.o: %.c drally.h drally_keyboard.h Makefile
	$(CC) -g -c -o $@ $<  $(INCLUDES) $(FLAGS) $(DEFINES)

%.obj: %.asm Makefile
	nasm -g -f elf -o $@ $< -Ov

.PHONY: clean

clean:
	@rm -f *.o *.obj drally_linux
