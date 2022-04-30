#include "drally.h"
#include "drally_keyboard.h"
#include "sfx.h"
#include "drally_fonts.h"

	extern __DWORD__ ___24cc58h_msx_volume;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___196a84h[];
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a1108h;
	extern __POINTER__ ___1a1ea4h;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __POINTER__ ___1a1ebch;
	extern __BYTE__ ___185ba9h[];
	extern __POINTER__ ___1a10cch;
	extern __DWORD__ ___19bd58h_gamepad;
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185a5ch[];
	extern __BYTE__ ___185b58h[];

void ___13710h(__DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
__DWORD__ ___146c4h_cdecl(__DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
__BYTE__ ___5994ch(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
char * itoa_watcom106(int value, char * buffer, int radix);
int ___1f094h_cdecl(const char * A1);
void dRally_Sound_setMusicVolume(int vol);
void ___2ab50h(void);
void dRally_Sound_setEffectsVolume(int vol);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void CONFIG_WRITE();
void ___596f0h(void);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void menu___204fch(void);
#if defined(DR_GAMEPAD)
void ___210b4h(void);
void ___217b0h(void);
void ___59db8h(void);
#endif // DR_GAMEPAD

static int helper_volume(int val){

	if(val < 0) val += 0x1ff;

	return val>>9;
}

static int helper_volume2(const char * label, int vol, void (*vol_cb)(int)){

	int 		i, j;
	__BYTE__ 	px, scankey;
	__DWORD__ 	eax;
	__BYTE__ 	esp[0xc];

	___13710h(3, 0);
	___13248h_cdecl(0xd6, 0xda, 0x14a, 0x46, 1);
	___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, label, 0x235e0);

	j = -1;
	while(++j < 0x18){

		i = -1;
		while(++i < 0xac){

			if((px = read_b(___1a1ea4h+0xac*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+160314+0x280*j+i, px);
		}
	}

	___12cb8h__VESA101_PRESENTSCREEN();

	scankey = 0;
	while(1){

		if((scankey == DR_SCAN_KP_ENTER)||(scankey == DR_SCAN_ESCAPE)||(D(___196a84h) != 0)) break;
		scankey = ___5994ch();
		
		if((scankey == DR_SCAN_LEFT)&&(vol > 0)) vol -= 2;
		if((scankey == DR_SCAN_KP_4)&&(vol > 0)) vol -= 2;
		if((scankey == DR_SCAN_RIGHT)&&(vol < 128)) vol += 2;
		if((scankey == DR_SCAN_KP_6)&&(vol < 128)) vol += 2;

#if defined(DR_MULTIPLAYER)
		if((scankey == DR_SCAN_F1)&&(___19bd60h != 0)) ___23758h();
#endif // DR_MULTIPLAYER

		j = -1;
		while(++j < 30) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(246+j)+220, 0xc4, 275);

		j = -1;
		while(++j < 24){

			i = -1;
			while(++i < 172){

				if((px = read_b(___1a1ea4h+172*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+160314+0x280*j+i, px);
			}
		}

		j = -1;
		while(++j < 24){

			i = -1;
			while(++i < 10){

				if((px = read_b(___1a1ebch+10*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+vol+160329+0x280*j+i, px);
			}
		}

		___1398ch__VESA101_PRESENTRECTANGLE(vol+160327, ___1a112ch__VESA101_ACTIVESCREEN_PTR+vol+160327, 14, 24);
		eax = ___1f094h_cdecl(strcat(itoa_watcom106(100*vol/128, esp, 10), "%"));
		___12e78h_cdecl(___1a10cch, (font_props_t *)___185ba9h, esp, 157109-eax);
		___1398ch__VESA101_PRESENTRECTANGLE(157024, ___1a112ch__VESA101_ACTIVESCREEN_PTR+157024, 120, 32);
		vol_cb(0x200*vol);
		___2ab50h();
	
		if(scankey == DR_SCAN_ENTER) break;
	}

	return vol;
}

// CONFIGURE
void menu___218b4h(void){

	int		opt, msx_vol, sfx_vol;


	msx_vol = helper_volume(___24cc58h_msx_volume);
	sfx_vol = helper_volume(___24cc54h_sfx_volume);

	while(1){

		if(D(___196a84h) != 0) break;

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*84, ___1a1138h__VESA101_BACKGROUND+0x280*84, 0x280*283);
		___13710h(0, 0);
		___13710h(3, 1);
		___12cb8h__VESA101_PRESENTSCREEN();

		switch((opt = ___146c4h_cdecl(3))){
		case 0: // MUSIC VOLUME
			___24cc58h_msx_volume = 0x200*(msx_vol = helper_volume2("Adjust music volume:", msx_vol, &dRally_Sound_setMusicVolume));
			dRally_Sound_pushEffect(1, SFX_CLICK_1, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			break;
		case 1: // EFFECT VOLUME
			___24cc54h_sfx_volume = 0x200*(sfx_vol = helper_volume2("Adjust effect volume:", sfx_vol, &dRally_Sound_setEffectsVolume));
			dRally_Sound_pushEffect(1, SFX_CLICK_1, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			break;
		case 2: // DEFINE KEYBOARD
			menu___204fch();
			break;
		case 3:	// DEFINE GAMEPAD/JOYSTICK
#if defined(DR_GAMEPAD)
			___210b4h();
#endif // DR_GAMEPAD
			break;
		case 4: // GAMEPAD/JOYSTICK
#if defined(DR_GAMEPAD)
			___19bd58h_gamepad = !___19bd58h_gamepad;

			if(___19bd58h_gamepad == 1){

				___59db8h();

				if(___19bd58h_gamepad == 0) ___217b0h();
				
				___596f0h();
				strcpy(___1866b8h+0x60e, "Gamepad/Joystick Enabled");
				B(___185b58h+3*9+3) = 1;
			}

			if(___19bd58h_gamepad == 0){
				
				B(___185b58h+3*9+3) = 0;
				strcpy(___1866b8h+0x60e, "Gamepad/Joystick Disabled");
			}
#endif // DR_GAMEPAD
			break;
		case 5: // PREVIOUS MENU
			opt = -1;
			D(___185a5ch+0x6c) = 0;

			while(B(___185b58h+D(___185a5ch+0x6c)+0x1b) == 0){

				if((int)D(___185a5ch+0x6c) >= (int)(D(___185a5ch+0x54)-1)){

					D(___185a5ch+0x6c) = 0;
				}
				else {

					D(___185a5ch+0x6c)++;
				}
			}
			break;
		default:
			break;
		}

		if(opt == -1) break;
	}

	CONFIG_WRITE();
}
