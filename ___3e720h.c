#include "drally.h"

    extern byte ___1a202fh[];
	extern byte ___199fa0h[];
	extern byte ___1a2148h[];
	extern byte ___1a1f3ch[];
	extern byte ___2432c8h[];
	extern byte ___24cc58h[];
	extern byte ___24cc54h[];
	extern byte ___196abch[];
	extern byte ___1a2011h[];
	extern byte ___196abdh[];
	extern byte ___1a2012h[];
	extern byte ___196abeh[];
	extern byte ___19bd58h[];
	extern byte ___1a2013h[];
	extern byte ___196abfh[];
	extern byte ___196ab8h[];
	extern byte ___1a2014h[];
	extern byte ___1866b8h[];
	extern byte ___196a90h[];
	extern byte ___1866b8h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a020ch[];
	extern byte ___1a0fb8h[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a0220h[];
	extern byte ___1a01e0h[];
	extern byte ___1a116ch[];
	extern byte ___1a1f4dh[];
	extern byte ___1a1dbah[];
	extern byte ___1a1f63h[];
	extern byte ___1a1f4fh[];
	extern byte ___1a1f4eh[];
	extern byte ___196d84h[];
	extern byte ___185a2ch[];
	extern byte ___196a84h[];
	extern byte ___1a1100h__VESA101h_DefaultScreenBuffer[];
	extern byte ___1a1124h__VESA101h_ScreenBufferA[];
	extern byte ___1a1ef4h[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte ___1854bch[];
	extern byte ___19bd60h[];
	extern byte ___1866b8h[];
	extern byte CONNECTION_TYPE[];

void ___3aaf8h(void);
void ___24ec0h(void);
void ___2fc50h(void);
void ___12200h(void);
void ___12a54h(void);
void ___3d79ch(void);
void ___61278h(void);
void ___623d4h(void);
void ___3e3cch(void);
void ___3e164h(void);
void ___3e1c4h(void);
void ___2415ch(void);
void CONFIG_READ(void);
void CONFIG_WRITE(void);
void ___3d908h(void);
void ___596f0h(void);
void ___606dfh(void);
void ___3d38ch(void);
void ___3d890h(void);
void ___117f4h(void);
void ___1240ch(void);
void ___24548h(void);
void ___2faf0h(void);
void ___3d2bch(void);
void ___12940h(void);
void restoreDefaultScreenBuffer();
void restoreDefaultScreenBufferA();

void dRally_Sound_load(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch);
void dRally_Sound_setMusicVolume(dword vol);
void dRally_Sound_setEffectsVolume(dword vol);
void dRally_Sound_setMasterVolume(dword vol);
byte dRally_Sound_setPosition(dword pos_n);
void dRally_Sound_setSampleRate(dword freq);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, 
						dword a0, dword a1, dword a2);
void dRally_Sound_play(void);
void dRally_Sound_release(void);
void dRally_Sound_stop(void);
dword __GET_TIMER_TICKS(void);
void srand_watcom106(dword);
void __VESA101_SETMODE(void);
dword ___12c38h__VESA101_CHECKBANKS(void);
void VGA3_SETMODE(void);
void dRally_System_clean(void);
void ___605deh_cdecl(dword, dword);
void ___117d4h(void);
void ___11564h_cdecl(dword, dword, dword);
void ___135fch(dword, dword, dword, dword);
void ___23230h(void);
void ___13710h(dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2b318h(void);
void ___58c60h(void);
void ___13a98h_cdecl(dword);
void ___3a7e0h_cdecl(dword);
dword ___146c4h_cdecl(dword);
dword ___3e4a0h(void);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13bd4h_cdecl(dword, dword);
byte ___5994ch(void);
byte ___59b3ch(void);
void ___2ab50h(void);
void ___194a8h(void);
void ___1e888h_cdecl(dword);
void ___218b4h(void);
void ___22a80h(void);
void ___3d4f0h(void);
void ___3da48h(void);
byte ___148cch_cdecl(dword, dword, dword, dword);
void ___23488h_cdecl(dword, dword, dword);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);

void dRally_Console_clear(void);
void dRally_Console_newLine(const char *, int);
void setIntensity___19eb50h(dword);

void ___3e720h(void){

    dword   n;
    dword   eax, ebx, ecx, edx, esi, edi, ebp;
    byte    esp[0x2c];

	D(esp+0x24) = 0;
	D(esp+0xc) = 0;
	D(esp+0x18) = 0x4e;
	___3e3cch();
	___3e164h();
	___3e1c4h();
	D(___199fa0h) = 0;
	memset(___1a202fh, 0, 0x13);
	B(___1a2148h) = 0;
	___2415ch();
	CONFIG_READ();
	D(___2432c8h) = ___3aaf8h;
	D(___1a1f3ch)++;
	CONFIG_WRITE();
	D(esp+0x20) = 0xaf;
	printf("\nLoading music & effects, please wait...\n");
	___3d908h();
	dRally_Sound_load(1, "MEN-MUS.CMF", 2, "MEN-SAM.CMF", 5);
	dRally_Sound_setMusicVolume(D(___24cc58h));
	dRally_Sound_setEffectsVolume(D(___24cc54h));
	dRally_Sound_setPosition(0x2d00);
	dRally_Sound_setSampleRate(0x5622);
	dRally_Sound_play();
	B(___1a2011h) = B(___196abch);
	B(___1a2012h) = B(___196abdh);
	B(___1a2013h) = B(___196abeh);
	D(___196ab8h) = 4;
	B(___1a2014h) = B(___196abfh);

	if((D(___19bd58h) == 1)||(D(___19bd58h) == 2)){

		___596f0h();
		strcpy(___1866b8h+0x60e, "Gamepad/Joystick Enabled");
	}
	else {

		strcpy(___1866b8h+0x60e, "Gamepad/Joystick Disabled");
	}

	if(D(___196a90h) == 0) strcpy(___1866b8h+0xd7a, "Pulse Dialing");  

	srand_watcom106(__GET_TIMER_TICKS());
	___606dfh();
	__VESA101_SETMODE();

	if(___12c38h__VESA101_CHECKBANKS()){
			
		VGA3_SETMODE();
		printf(	"DEATH RALLY Error: Your VGA-adapter is not fully VESA (VBE 1.0) compliant.\n"
				"                   Use UNIVBE or similar emulator to fix the problem.\n");
		printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");

		dRally_Sound_release();
		dRally_System_clean();
		exit(0x70);
	}

	___605deh_cdecl(0x3c, 0);
	___117d4h();
	//___3d38ch();	// APOGEE/GT/REMEDY
	___3d890h();
	___117f4h();
	___1240ch();
	___24548h();
	___2faf0h();
	___3d2bch();
	___12940h();

	edx = 3*D(___1a020ch+0x6c*D(___1a1ef8h))+D(___1a0fb8h);
	___11564h_cdecl(B(edx), B(edx+1), B(edx+2));
	memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR), D(___1a1138h__VESA101h_DefaultScreenBufferB), 0x4b000);
	D(0x6c*D(___1a1ef8h)+___1a0220h) = 0;
	B(0x6c*D(___1a1ef8h)+___1a01e0h) = 0;

	dRally_Console_clear();
	dRally_Console_newLine("          Welcome to Death Rally - Full version 1.1", 1);
	dRally_Console_newLine("    Developed by Remedy Entertainment for Apogee Software", 1);
	dRally_Console_newLine("", 1);
	dRally_Console_newLine("Use arrow keys to change selection and press enter to confirm.", 1);
	dRally_Console_newLine("", 1);

	___135fch(0, 0x173, 0x27f, 0x6d);
	___23230h();

    if(D(esp+0xc) == 0){

		D(esp+4) = D(esp+0x20)+0x38;
		D(esp+0x10) = 640*(D(esp+0x20)+0x12)+D(esp+0x18)+0x28;
		D(esp+0x14) = 640*(D(esp+0x20)+0x32)+D(esp+0x18)+0xa6;
		ebp = D(esp+0x18)+0x8c;

		while(1){

			memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0xd200, D(___1a1138h__VESA101h_DefaultScreenBufferB)+0xd200, 0x2c380);
			___13710h(0, 1);

			if(D(___196d84h)||D(___185a2ch)){
				
				if(D(___196a84h) == 0){

					___12cb8h__VESA101_PRESENTSCREEN();
					___2b318h();

					D(esp+0x1c) = -1;
					D(esp) = 0;
					while(++D(esp+0x1c) < 0x32){

						___58c60h();
						if(D(esp+0x1c)%2) ___13a98h_cdecl(0);
						setIntensity___19eb50h(D(esp));
						D(esp) += 2;
					}

					D(___196d84h) = 0;

					if(D(___185a2ch)){

						D(___185a2ch) = 0;
						memcpy(D(___1a1100h__VESA101h_DefaultScreenBuffer), D(___1a1124h__VESA101h_ScreenBufferA), 0x4b000);
						restoreDefaultScreenBuffer();
						restoreDefaultScreenBufferA();
					}
				}
			}

			if(D(esp+0x24) != 0){

				if(D(___196a84h) == 0){

					restoreDefaultScreenBuffer();
					___3a7e0h_cdecl(0xffffffff);
					dRally_Sound_stop();
					dRally_Sound_play();
					dRally_Sound_setPosition(D(___1a1ef4h));
					D(esp+0x24) = 0;
					dRally_Sound_setMasterVolume(0x10000);
				}
			}

			if(D(___196a84h) == 0) ___12cb8h__VESA101_PRESENTSCREEN();

			eax = ___146c4h_cdecl(0)+1;

			switch(eax){
			case 0:
				___1e888h_cdecl(eax);
				break;
			case 1:
				if(___3e4a0h()){

					___194a8h();
				}
				else {
						
					___13710h(0, 0);
					___13248h_cdecl(D(esp+0x18), D(esp+0x20), 0x1e4, 0x61, 1);
					___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Please insert Death Rally to CD-ROM drive!", D(esp+0x10));
					___12e78h_cdecl(D(___1a10cch), ___185ba9h, "CONTINUE", D(esp+0x14));
					___13bd4h_cdecl(ebp, D(esp+4));
					___12cb8h__VESA101_PRESENTSCREEN();

					while(1){

						dRally_Sound_pushEffect(1, 0x1d, 0, D(___24cc54h), D(___1854bch), 0x8000);
						___5994ch();
						___59b3ch();
						H(ebx) = 0;

						while(1){

							if((H(ebx) == 0x1c)||(H(ebx) == 0x9c)) break;
							H(ebx) = ___5994ch();
							___2ab50h();
							___2ab50h();
							___13bd4h_cdecl(ebp, D(esp+4));
							if(H(ebx) == 1) break;
						}

						___5994ch();
						___59b3ch();
						if(___3e4a0h()) break;
						if(H(ebx) == 1) break;
					}

					if(H(ebx) != 1) ___194a8h();
				}
				break;
			case 2:
				___1e888h_cdecl(eax);
				break;
			case 3:
				___218b4h();
				break;
			case 4:
				___22a80h();
				D(esp+0x24) = 1;
				break;
			case 5:
				___3d4f0h();
				break;
			case 6:
				___3da48h();
				break;
			case 7:
				___13710h(0, 0);
				___13248h_cdecl(0xaa, 0xc8, 0x12c, 0x50, 1);
				___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Are you sure?", 0x208fd);
				___148cch_cdecl(0xb4, 0xee, 1, esp+0xc);
				break;
			default:
				break;
			}

			if(D(esp+0xc)) break;
		}
	}

	if(D(___19bd60h)){

		ebx = 6;
		strcpy(___1a1dbah, "-- ");
		strcat(___1a1dbah, ___1a01e0h+0x6c*D(___1a1ef8h));
		strcat(___1a1dbah, " has left from Death Rally.");
		B(___1a1f63h) = 0;

		if(strcmp(___1866b8h+0x3b6, "Abort Current Game") == 0){

			___23488h_cdecl(___1a1dbah, 0x64, 0x14);
			strcpy(___1a1dbah, "-- ");
			strcat(___1a1dbah, ___1a01e0h+0x6c*D(___1a1ef8h));
			strcat(___1a1dbah, " aborted current netgame.");
			B(___1a1f63h) = 0;

			if(D(CONNECTION_TYPE) != 2) ebx = 9;
		}

		___23488h_cdecl(___1a1dbah, 0x64, ebx);
		___61278h();
		___623d4h();
		D(___19bd60h) = 0;
		D(CONNECTION_TYPE) = 0;
	}

	___3d79ch();
	CONFIG_WRITE();
	___12200h();
	___12a54h();
	___24ec0h();
	___2fc50h();
	
    dRally_Sound_stop();
    dRally_Sound_release(); 
}
