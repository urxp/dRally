CC := gcc
MSBUILD := MSBuild.exe

DEFINES := -DDR_MULTIPLAYER -DIPXNET -DDR_LETTERBOX #-DDR_CDCHECK
INCLUDES := -I/usr/include/SDL2
FLAGS ?= -O3
FLAGS += -std=c99 -Werror -Wno-unused-result
LDFLAGS := -lm -lSDL2 -lSDL2_net

OBJS := data.o bss.o

MP_CMN_OBJS := __mp_60a28h.o __mp_60a84h.o __mp_60b48h.o __mp_60b60h.o __mp_611c0h.o __mp_61278h.o __mp_61418h.o __mp_61518h.o __mp_6168ch.o __mp_61b88h.o __mp_631d4h.o __mp_63244h.o __mp_632c4h.o __mp_63b20h.o __mp_data.o

MP_OBJS := __mp_623d4h.o __mp_61cd0h.o __mp_638ech.o

LINUX_OBJS := drally_linux_c.o drmemory.o draudio.o mod_s3m.o mod_xm.o sound_api.o sound_cb.o sound.o sound_s3m.o sound_xm.o sound2.o sound_thread.o sound_memory.o system_linux_c.o events.o ___13710h.o ___24548h.o ___3e164h.o ___3e1c4h.o ___3e3cch.o ___3e720h.o ___3f71ch.o ___3a2ach.o ___3aaf8h.o ___3d908h.o ___58b20h.o functions_c.o config_c.o display_c.o bpa.o bpa_old.o bpk.o fpu.o ___2ec68h.o ___2415ch.o ___2b318h.o ___60420h.o  pal.o ___3d890h.o ___58c60h.o ___3d38ch.o ___135fch.o ___23230h.o chatbox.o palx.o watcom106.o ___12200h.o cinem.o keyboard.o network.o db_ipx.o gfx.o ___20220h.o ___5994ch.o ___11378h.o ___3a6a4h.o ___2a394h.o ___2aa08h.o ___31588h.o ___30df8h.o ___12e78h.o ___17248h.o ___13094h.o ___33010h.o sound3.o sound4.o sound_thread_switches.o ___13c9ch.o ___13bd4h.o ___2ab50h.o ___3a454h.o ___3a214h.o drmath.o ___1123ch.o dos.o ___148cch.o ___18924h.o ___18808h.o ___596f0h.o ___44a4ch.o ___146c4h.o ___59db8h.o ___1f6e4h.o ___3266ch.o ___424c8h.o ___22808h.o ___223c4h.o ___3ab5ch.o ___12f60h.o ___259e0h.o ___17510h.o ___13248h.o ___14c50h.o ___14cach.o ___14dc4h.o ___164d0h.o ___15808h.o ___15e3ch.o ___165ach.o ___1678ch.o ___17324h.o ___168b4h.o ___1716ch.o ___17384h.o ___18cf0h.o ___190c4h.o ___1f094h.o ___21fd4h.o ___4256ch.o ___4a064h.o ___59cd8h.o ___251e8h.o ___252e0h.o ___25a74h.o ___2a608h.o ___25330h.o ___26650h.o ___269e4h.o ___26e54h.o ___26fach.o ___27078h.o ___27d24h.o ___27f80h.o ___281d0h.o ___28470h.o ___28ab4h.o ___2a6a8h.o ___2b5f0h.o ___2b7a0h.o ___2b81ch.o ___2d054h.o ___2d0ech.o ___2d184h.o ___2d20ch.o ___2d294h.o ___2d6a0h.o ___2d728h.o ___2d898h.o ___2da10h.o ___2db88h.o ___2ddc8h.o ___2deb0h.o ___2df34h.o ___2dfd0h.o ___2e1b0h.o ___2ed2ch.o ___3079ch.o ___30a84h.o ___30c60h.o ___31008h.o ___3174ch.o ___31868h.o ___32230h.o ___35b68h.o ___35dd0h.o ___35f34h.o ___36068h.o ___36358h.o ___36718h.o ___36adch.o ___37ed4h.o ___3d9c0h.o ___38184h.o ___38708h.o ___38768h.o ___3deb8h.o ___3e03ch.o ___3892ch.o ___59b3ch.o pxl.o assets.o car_data.o fonts.o ___10754h.o ___198a0h.o ___1c374h.o ___1d00ch.o ___23488h.o ___23594h.o ___23758h.o ___2fca4h.o ___2fe64h.o netpage.o ___1e4f8h.o ___233c0h.o ___1b140h.o ___1ad30h.o ___1c6bch.o ___38878h.o ___44194h.o ___44130h.o ___4495ch.o ___44730h.o ___446ach.o ___1caf4h.o ___47e90h.o

MENU_OBJS := menu_main.o menu_data.o menu___194a8h.o menu___1e888h.o menu___218b4h.o menu___22a80h.o menu___3d4f0h.o menu___3da48h.o menu___204fch.o cdcheck___3e4a0h.o 

SHOP_OBJS := shop_main.o shop___28e40h.o shop___2836ch.o shop___2b6a4h.o 

UNDERGROUND_OBJS := underground_main.o underground___28c1ch.o underground___2e350h.o

RACE_OBJS := race_main.o race_settings.o race___3f970h.o race___400ech.o race___40164h.o race___4083ch.o race___40864h.o race___42218h.o race___42824h.o race___4539ch.o race___4580ch.o race___45a24h.o race___46738h.o race___478c8h_p.o race___483d4h.o race___48458h.o race___492f4h.o race___49390h.o race___496b0h.o race___49a34h.o race___49bd4h.o race___4a25ch.o race___4a6b4h.o race___4af3ch.o race___4b62ch.o race___4c21ch.o race___4dcach.o race___4ee9ch.o race___4f030h.o race___4f170h.o race___4f300h.o race___4ff50h.o race___50a48h.o race___50ba4h.o race___50ef4h.o race___51204h.o race___514d8h.o race___51ce0h.o race___5209ch.o race___526ach.o race___52ac4h.o race___52d7ch.o race___53310h.o race___53464h.o race___54668h.o race___55ae0h.o race___560d8h.o race___56170h.o race___563ach.o race___56594h.o race___51eb4h.o race___4adach.o race___4c434h.o race___405bch.o race___40db4h.o race___4207ch.o race___454ach.o race___40f48h.o race___45d3ch.o ___race___44a78h_2.o ___race___44304h.o race_msg.o race_memory.o

DFR_OBJS := __dfr_1bc20h.o __dfr_197d0h.o __dfr_1c178h.o __dfr_3986ch.o __dfr_25138h.o __dfr_1aa28h.o __dfr_16e6ch.o __dfr_39634h.o     __dfr_1f124h.o __dfr_1d2a8h.o __dfr_1d9f8h.o __dfr_1e09ch.o __dfr_18394h.o __dfr_1f0dch.o __dfr_1ca00h.o __dfr_1d4e8h.o __dfr_1d688h.o __dfr_1d83ch.o __dfr_1e62ch.o __dfr_210b4h.o __dfr_20d18h.o __dfr_20f78h.o __dfr_217b0h.o __dfr_59720h.o __dfr_47d8ch.o __dfr_232f8h.o __dfr_3881ch.o __dfr_40564h.o 

UNI_OBJS := drally.o drencryption.o

all: drally_linux

drally_linux: $(UNI_OBJS) $(LINUX_OBJS) $(RACE_OBJS) $(MENU_OBJS) $(SHOP_OBJS) $(UNDERGROUND_OBJS) $(BI_OBJS) $(OBJS) $(MP_CMN_OBJS) $(MP_OBJS) $(DFR_OBJS)
	$(CC) -o $@ $^ $(FLAGS) $(LDFLAGS)

%.o: %.c drally.h drally_keyboard.h Makefile
	$(CC) -g -c -o $@ $<  $(INCLUDES) $(FLAGS) $(DEFINES)

.PHONY: clean dRally.exe

dRally.exe:
	@$(MSBUILD)

clean:
	@rm -f *.o drally_linux
