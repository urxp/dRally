#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"
#include "watcom106.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

	extern __DWORD__ ___24cc58h_msx_volume;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___196abch[];
	extern __BYTE__ ___1a2010h[];
	extern __DWORD__ ___19bd58h_gamepad;
	extern __BYTE__ ___196ab8h[];
	extern __DWORD__ ___196a90h_modem_dialing;
	extern __BYTE__ ___1a1ef8h[];
	extern rgb24_t * ___1a0fb8h;
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___196d84h[];
	extern __BYTE__ ___185a2ch[];
	extern __BYTE__ ___196a84h[];
	extern __POINTER__ ___1a1100h__VESA101h_DefaultScreenBuffer;
	extern __POINTER__ ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern __POINTER__ ___1a1124h__VESA101h_ScreenBufferA;
	extern __BYTE__ ___1a1ef4h[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185b58h[];

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

void dRally_Sound_load(__DWORD__ msx_t, const char * msx_f, __DWORD__ sfx_t, const char * sfx_f, __DWORD__ num_ch);
void dRally_Sound_setMusicVolume(__DWORD__ vol);
void dRally_Sound_setEffectsVolume(__DWORD__ vol);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
__BYTE__ dRally_Sound_setPosition(__DWORD__ pos_n);
void dRally_Sound_setSampleRate(__DWORD__ freq);
void dRally_Sound_play(void);
void dRally_Sound_release(void);
void dRally_Sound_stop(void);
__DWORD__ __GET_TIMER_TICKS(void);
void __VESA101_SETMODE(void);
__DWORD__ ___12c38h__VESA101_CHECKBANKS(void);
void __VGA3_SETMODE(void);
void dRally_System_clean(void);
void ___605deh_cdecl(__DWORD__, __DWORD__);
void ___117d4h(void);
void ___11564h_cdecl(__DWORD__, __DWORD__, __DWORD__);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);
void ___13710h(__DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2b318h(void);
void ___58c60h(void);
void menu___13a98h(__DWORD__);
void ___3a7e0h_cdecl(int);
__DWORD__ ___146c4h_cdecl(__DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void menu___194a8h_2(void);
void menu___1e888h(void);
void menu___218b4h(void);
void menu___22a80h(void);
void menu___3d4f0h(void);
void menu___3da48h(void);
__BYTE__ ___148cch_cdecl(__DWORD__, __DWORD__, __DWORD__, __BOOL__ *);

void dRChatbox_clear(void);
void dRChatbox_push(const char *, int);
void setIntensity___19eb50h(__DWORD__);

void menu_main(void){

    int   			n;
    __DWORD__   	ebx;
	racer_t * 		s_6c;
	rgb24_t * 		color;
	__BOOL__ 		IsMainMenuLoopToBreak, IsBackFromHOF;


	s_6c = (racer_t *)___1a01e0h;
	dRally_Sound_load(1, "MEN-MUS.CMF", 2, "MEN-SAM.CMF", 5);
	dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
	dRally_Sound_setEffectsVolume(___24cc54h_sfx_volume);
	dRally_Sound_setPosition(0x2d00);
	dRally_Sound_setSampleRate(0x5622);
	dRally_Sound_play();
	B(___1a2010h+1) = B(___196abch);
	B(___1a2010h+2) = B(___196abch+1);
	B(___1a2010h+3) = B(___196abch+2);
	B(___1a2010h+4) = B(___196abch+3);
	D(___196ab8h) = 4;

	if((___19bd58h_gamepad == 1)||(___19bd58h_gamepad == 2)){

		___596f0h();
		strcpy(___1866b8h+0x60e, "Gamepad/Joystick Enabled");
		B(___185b58h+3*9+3) = 1;
	}
	else {

		strcpy(___1866b8h+0x60e, "Gamepad/Joystick Disabled");
		B(___185b58h+3*9+3) = 0;
	}

	if(___196a90h_modem_dialing == 0) strcpy(___1866b8h+0xd7a, "Pulse Dialing");  

	srand_watcom106(__GET_TIMER_TICKS());
	___606dfh();
	__VESA101_SETMODE();

	if(___12c38h__VESA101_CHECKBANKS()){
			
		__VGA3_SETMODE();
		printf(	"DEATH RALLY Error: Your VGA-adapter is not fully VESA (VBE 1.0) compliant.\n"
				"                   Use UNIVBE or similar emulator to fix the problem.\n");
		printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");

		dRally_Sound_release();
		dRally_System_clean();
		exit(0x70);
	}

	___605deh_cdecl(60, 0);
	___117d4h();	// Allocate VESA101 Screen
	//___3d38ch();	// APOGEE/GT/REMEDY
	___3d890h();	// Title Screen
	___117f4h();	// Allocate Assets Memory
	___1240ch();	// Allocate Assets Memory
	___24548h();
	___2faf0h();
	___3d2bch();	// Fade Out
	___12940h();	// Fill Palette

	color = &___1a0fb8h[s_6c[D(___1a1ef8h)].color];
	___11564h_cdecl(color->r, color->g, color->b);
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1138h__VESA101_BACKGROUND, 0x4b000);
	s_6c[D(___1a1ef8h)].face = 0;
	memset(s_6c[D(___1a1ef8h)].name, 0, 12);

	dRChatbox_clear();
	dRChatbox_push("           Welcome to Death Rally - Full version 1.1",            1);
	dRChatbox_push("       Powered by dRally, open source Death Rally engine",        1);
	dRChatbox_push("",                                                                1);
	dRChatbox_push(" Use arrow keys to change selection and press enter to confirm.", 1);
	dRChatbox_push("",                                                                1);

	___135fch(0, 371, 639, 109);	// Render Chatbox Delimiters
	___23230h();					// Render Chatbox Text

	// MAIN MENU LOOP
	IsMainMenuLoopToBreak = 0;
	IsBackFromHOF = 0;
	while(!IsMainMenuLoopToBreak){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*84, ___1a1138h__VESA101_BACKGROUND+0x280*84, 0x280*283);
		___13710h(0, 1);

		if(D(___196d84h)||D(___185a2ch)){
			
			if(D(___196a84h) == 0){

				___12cb8h__VESA101_PRESENTSCREEN();
				___2b318h();

				n = -1;
				while(++n < 0x32){

					___58c60h();
					if(n%2) menu___13a98h(0);	// SPINNING TIRE ICON
					setIntensity___19eb50h(2*n);
				}

				D(___196d84h) = 0;

				if(D(___185a2ch)){

					D(___185a2ch) = 0;
					memcpy(___1a1100h__VESA101h_DefaultScreenBuffer, ___1a1124h__VESA101h_ScreenBufferA, 0x4b000);
					___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a1100h__VESA101h_DefaultScreenBuffer;
					___1a1124h__VESA101h_ScreenBufferA = ___1a10e4h__VESA101h_DefaultScreenBufferA;
				}
			}
		}

		if(IsBackFromHOF != 0){

			if(D(___196a84h) == 0){

				___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a1100h__VESA101h_DefaultScreenBuffer;
				___3a7e0h_cdecl(-1);
				dRally_Sound_stop();
				dRally_Sound_play();
				dRally_Sound_setPosition(D(___1a1ef4h));
				dRally_Sound_setMasterVolume(0x10000);
				IsBackFromHOF = 0;
			}
		}

		if(D(___196a84h) == 0) ___12cb8h__VESA101_PRESENTSCREEN();

		switch(___146c4h_cdecl(0)+1){
		case 0:
			menu___1e888h();
			break;
		case 1: // START RACING
			menu___194a8h_2();
			break;
		case 2:	// MULTIPLAYER
			menu___1e888h();
			break;
		case 3:	// CONFIGURE
			menu___218b4h();
			break;
		case 4: // HALL OF FAME
			menu___22a80h();
			IsBackFromHOF = 1;
			break;
		case 5: // CREDITS
			menu___3d4f0h();
			break;
		case 6: // SHOW PREVIEW
			menu___3da48h();
			break;
		case 7: // EXIT TO DOS
			___13710h(0, 0);
			___13248h_cdecl(170, 200, 300, 80, 1);
			___12e78h_v3(___1a1108h___185c0bh, "Are you sure?", 253, 208);
			___148cch_cdecl(180, 238, 1, &IsMainMenuLoopToBreak);
			break;
		default:
			break;
		}
	}
}
