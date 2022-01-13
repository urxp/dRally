#include "drally.h"
#include "drally_keyboard.h"
#include "sfx.h"
#include "drally_fonts.h"

	extern __DWORD__ ___24cc58h_msx_volume;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___196a84h[];
	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
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
void dRally_Sound_setMusicVolume(__DWORD__ vol);
void ___2ab50h(void);
void dRally_Sound_setEffectsVolume(__DWORD__ vol);
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

// CONFIGURE
void menu___218b4h(void){

	int 		i, j;
	__BYTE__ 	px;

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, cf;
	__BYTE__ 	esp[0x20];


	eax = ___24cc58h_msx_volume;
	edx = eax;
	edx = (int)edx>>0x1f;
	cf = (edx>>(0x20-9))&1;
	edx <<= 9;
	eax -= (edx+cf); 
	eax = (int)eax>>9;
	D(esp+0x1c) = eax;
	eax = ___24cc54h_sfx_volume;
	edx = eax;
	edx = (int)edx>>0x1f;
	cf = (edx>>(0x20-9))&1;
	edx <<= 9;
	eax -= (edx+cf); 
	eax = (int)eax>>9;
	D(esp+0x18) = eax;
	
	while(1){

		edx = D(___196a84h);
		if(edx) break;
		ecx = 0x2c380;
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd200, ___1a1138h__VESA101h_DefaultScreenBufferB+0xd200, ecx);
		eax = 0;
		___13710h(eax, edx);
		edx = 1;
		eax = 3;
		___13710h(eax, edx);
		___12cb8h__VESA101_PRESENTSCREEN();
		eax = 3;
		eax = ___146c4h_cdecl(eax);
		D(esp+0xc) = eax;

		switch(eax){
		case 0: // MUSIC VOLUME
			___13710h(3, 0);
			___13248h_cdecl(0xd6, 0xda, 0x14a, 0x46, 1);
			___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Adjust music volume:", 0x235e0);

			j = -1;
			while(++j < 0x18){

				i = -1;
				while(++i < 0xac){

					if((px = read_b(___1a1ea4h+0xac*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2723a+0x280*j+i, px);
				}
			}

			___12cb8h__VESA101_PRESENTSCREEN();

			B(esp+0x14) = 0;
			while(1){

				if((B(esp+0x14) == DR_SCAN_KP_ENTER)||(B(esp+0x14) == DR_SCAN_ESCAPE)||(D(___196a84h) != 0)) break;
				B(esp+0x14) = ___5994ch();
				
				if((B(esp+0x14) == DR_SCAN_LEFT)&&((int)D(esp+0x1c) > 0)) D(esp+0x1c) -= 2;
				if((B(esp+0x14) == DR_SCAN_KP_4)&&((int)D(esp+0x1c) > 0)) D(esp+0x1c) -= 2;
				if((B(esp+0x14) == DR_SCAN_RIGHT)&&((int)D(esp+0x1c) < 0x80)) D(esp+0x1c) += 2;
				if((B(esp+0x14) == DR_SCAN_KP_6)&&((int)D(esp+0x1c) < 0x80)) D(esp+0x1c) += 2;

#if defined(DR_MULTIPLAYER)
				if((B(esp+0x14) == DR_SCAN_F1)&&(___19bd60h != 0)) ___23758h();
#endif // DR_MULTIPLAYER

				j = -1;
				while(++j < 0x1e) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(246+j)+0xdc, 0xc4, 0x113);

				j = -1;
				while(++j < 0x18){

					i = -1;
					while(++i < 0xac){

						if((px = read_b(___1a1ea4h+0xac*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2723a+0x280*j+i, px);
					}
				}

				j = -1;
				while(++j < 0x18){

					i = -1;
					while(++i < 0xa){

						if((px = read_b(___1a1ebch+0xa*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2723a+D(esp+0x1c)+0xf+0x280*j+i, px);
					}
				}

				___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x1c)+0x27247, D(esp+0x1c)+___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2723a+0xd, 0xe, 0x18);
				eax = ___1f094h_cdecl(strcat(itoa_watcom106(0x64*D(esp+0x1c)/0x80, esp, 0xa), "%"));
				___12e78h_cdecl(___1a10cch, (font_props_t *)___185ba9h, esp, 0x265b5-eax);
				___1398ch__VESA101_PRESENTRECTANGLE(0x26560, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x26560, 0x78, 0x20);
				dRally_Sound_setMusicVolume(0x200*D(esp+0x1c));
				___2ab50h();
			
				if(B(esp+0x14) == DR_SCAN_ENTER) break;
			}

			___24cc58h_msx_volume = 0x200*D(esp+0x1c);
			dRally_Sound_pushEffect(1, SFX_CLICK_1, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			break;
		case 1: // EFFECT VOLUME
			___13710h(3, 0);
			___13248h_cdecl(0xd6, 0xda, 0x14a, 0x46, 1);
			___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Adjust effect volume:", 0x235e0);

			j = -1;
			while(++j < 0x18){

				i = -1;
				while(++i < 0xac){

					if((px = read_b(___1a1ea4h+0xac*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2723a+0x280*j+i, px);
				}
			}

			___12cb8h__VESA101_PRESENTSCREEN();

			B(esp+0x14) = 0;
			while(1){

				if((B(esp+0x14) == DR_SCAN_KP_ENTER)||(B(esp+0x14) == DR_SCAN_ESCAPE)||(D(___196a84h) != 0)) break;
				B(esp+0x14) = ___5994ch();

				if((B(esp+0x14) == DR_SCAN_LEFT)&&((int)D(esp+0x18) > 0)) D(esp+0x18) -= 2;
				if((B(esp+0x14) == DR_SCAN_KP_4)&&((int)D(esp+0x18) > 0)) D(esp+0x18) -= 2;
				if((B(esp+0x14) == DR_SCAN_RIGHT)&&((int)D(esp+0x18) < 0x80)) D(esp+0x18) += 2;
				if((B(esp+0x14) == DR_SCAN_KP_6)&&((int)D(esp+0x18) < 0x80)) D(esp+0x18) += 2;

#if defined(DR_MULTIPLAYER)
				if((B(esp+0x14) == DR_SCAN_F1)&&(___19bd60h != 0)) ___23758h();
#endif // DR_MULTIPLAYER

				j = -1;
				while(++j < 0x1e) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(246+j)+0xdc, 0xc4, 0x113);

				j = -1;
				while(++j < 0x18){

					i = -1;
					while(++i < 0xac){

						if((px = read_b(___1a1ea4h+0xac*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2723a+0x280*j+i, px);
					}
				}

				j = -1;
				while(++j < 0x18){

					i = -1;
					while(++i < 0xa){

						if((px = read_b(___1a1ebch+0xa*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2723a+D(esp+0x18)+0xf+0x280*j+i, px);
					}
				}

				___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x18)+0x27247, D(esp+0x18)+___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2723a+0xd, 0xe, 0x18);
				eax = ___1f094h_cdecl(strcat(itoa_watcom106(0x64*D(esp+0x18)/0x80, esp, 0xa), "%"));
				___12e78h_cdecl(___1a10cch, (font_props_t *)___185ba9h, esp, 0x265b5-eax);
				___1398ch__VESA101_PRESENTRECTANGLE(0x26560, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x26560, 0x78, 0x20);
				dRally_Sound_setEffectsVolume(0x200*D(esp+0x18));
				___2ab50h();
			
				if(B(esp+0x14) == DR_SCAN_ENTER) break;
			}

			___24cc54h_sfx_volume = 0x200*D(esp+0x18);
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
			D(esp+0xc) = 0xffffffff;
			D(___185a5ch+0x6c) = 0;

			while(B(D(___185a5ch+0x6c)+___185b58h+0x1b) == 0){

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

		if(D(esp+0xc) == 0xffffffff) break;
	}

	CONFIG_WRITE();
}
