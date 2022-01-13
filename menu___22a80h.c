#include "drally.h"
#include "drally_keyboard.h"
#include "sfx.h"
#include "drally_fonts.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __POINTER__ ___1a10dch;
	extern __BYTE__ ___1a0e28h[];
	extern __BYTE__ ___185c7ah[];
	extern __POINTER__ ___1a10b8h;
	extern char ___18768ah[][0x18];
	extern __BYTE__ ___1a1ef4h[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __POINTER__ ___1a10ach;
	extern __BYTE__ ___196abch[];
	extern __POINTER__ ___1a1040h[0x13];
	extern __POINTER__ ___1a10a4h;
	extern __DWORD__ ___24cc54h_sfx_volume;

char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___3a7e0h_cdecl(int);
void ___21fd4h_cdecl(__DWORD__);
void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
__DWORD__ dRally_Sound_getPosition(void);
__BYTE__ dRally_Sound_setPosition(__DWORD__ pos_n);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
void ___2ab50h(void);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void ___3a6a4h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void restoreDefaultScreenBuffer(void);

// HALL OF FAME
void menu___22a80h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x40];
	__BYTE__ 	px;
	int 		i, j, n;


	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10680, ___1a1138h__VESA101h_DefaultScreenBufferB+0x10680, 0x28f00);

	j = -1;
	while(++j < 0x36){

		i = -1;
		while(++i < 0x280){

			if((px = B(___1a10dch+0x280*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(j+0x54)+i) = px;
		}
	}

	
	n = -1;
	while(++n < 0xa){

		itoa_watcom106(n+1, esp, 0xa);
		strcat(esp, ".");
		ecx = 0x280*(0x16*n+0x90);
		ecx += (n != 9) ? 0x24 : 0x1c;
		___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, esp, ecx);
		strcpy(esp, ___1a0e28h+0x14*n);
		strupr_watcom106(esp);
		___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, esp, 0x16889+0x3700*n);
		itoa_watcom106(D(___1a0e28h+0x14*n+0xc), esp, 0xa);

		if(((int)D(___1a0e28h+0x14*n+0xc) >= 0)&&((int)D(___1a0e28h+0x14*n+0xc) < 0xa)){
		
			___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, esp, 0x280*(0x16*n+0x90)+0x158);
		}

		if(((int)D(___1a0e28h+0x14*n+0xc) >= 0xa)&&((int)D(___1a0e28h+0x14*n+0xc) < 0x64)){
		
			___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, esp, 0x16950+0x3700*n);
		}

		if((int)D(___1a0e28h+0x14*n+0xc) >= 0x64){
				
			___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, esp, 0x16948+0x3700*n);
		}

		strcpy(esp, ___18768ah[D(___1a0e28h+0x14*n+0x10)]);
		___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, strupr_watcom106(esp), 0x169ad+0x3700*n);
	}

	restoreDefaultScreenBuffer();
	___3a7e0h_cdecl(-1);
	D(___1a1ef4h) = dRally_Sound_getPosition()&0xff00;
	dRally_Sound_setPosition(0x5100);
	dRally_Sound_setMasterVolume(0x10000);
	___5994ch();
	___59b3ch();

	while(1){

		___2ab50h();
		H(eax) = ___5994ch();
		
#if defined(DR_MULTIPLAYER)
		if(___19bd60h != 0){

			if(L(eax) == 0x3b){

				___23758h();
				H(eax) = 0;
			}
		}
#endif // DR_MULTIPLAYER

		if(H(eax) != 0) break;
	}

	___5994ch();
	___59b3ch();
	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd200, ___1a1138h__VESA101h_DefaultScreenBufferB+0xd200, 0x2c380);

	j = -1;
	while(++j < 0x10){

		i = -1;
		while(++i < 0x280){

			if((px = B(___1a10ach+0x280*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xe600+0x280*j+i) = px;
		}
	}

	___21fd4h_cdecl(B(___196abch));

	j = -1;
	while(++j < 0x62){

		i = -1;
		while(++i < 0x80){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x21728+0x280*j+i) = B(___1a1040h[B(___196abch)]+0x80*j+i);
		}
	}

	j = -1;
	while(++j < 0x54){

		i = -1;
		while(++i < 0x10){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x23a18+0x280*j+i) = B(___1a10a4h+0x10*j+i);
		}
	}

	j = -1;
	while(++j < 0x54){

		i = -1;
		while(++i < 0x10){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x23aa8+0x280*j+i) = B(___1a10a4h+0x540+0x10*j+i);
		}
	}

	___27f80h_cdecl(0xf, 0xcc, 0xb2, 0x75);
	restoreDefaultScreenBuffer();
	___3a6a4h();

	ebp = 0;
	edi = 0;
	while(1){

		___2ab50h();
		eax = ___5994ch();

		switch(L(eax)){
		case DR_SCAN_ESCAPE:
		case DR_SCAN_ENTER:
		case DR_SCAN_KP_ENTER:
			edi = -1;
			break;
		case DR_SCAN_F1:
#if defined(DR_MULTIPLAYER)
					if(___19bd60h != 0) ___23758h();
#endif // DR_MULTIPLAYER
			break;		
		case DR_SCAN_KP_4:
		case DR_SCAN_LEFT:
			if((int)ebp <= 0){

				ebp = 0x11;
			}
			else {

				ebp--;
			}

			dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			
			j = -1;
			while(++j < 0x54){

				i = -1;
				while(++i < 0x10) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x23a18+0x280*j+i) = B(___1a10a4h+0xa80+0x10*j+i);
			}

			j = -1;
			while(++j < 0x62){

				i = -1;
				while(++i < 0x80) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x21728+0x280*j+i) = B(___1a1040h[B(___196abch+ebp)]+0x80*j+i);
			}

			___21fd4h_cdecl(B(___196abch+ebp));
			___12cb8h__VESA101_PRESENTSCREEN();

			n = -1;
			while(++n < 8) ___2ab50h();

			j = -1;
			while(++j < 0x54){

				i = -1;
				while(++i < 0x10) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x23a18+0x280*j+i) = B(___1a10a4h+0x10*j+i);
			}

			___12cb8h__VESA101_PRESENTSCREEN();
			break;
		case DR_SCAN_KP_6:
		case DR_SCAN_RIGHT:
			if((int)ebp >= 0x11){

				ebp = 0;
			}
			else {
			
				ebp++;
			}

			dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

			j = -1;
			while(++j < 0x54){

				i = -1;
				while(++i < 0x10) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x23aa8+0x280*j+i) = B(___1a10a4h+0xfc0+0x10*j+i);
			}

			j = -1;
			while(++j < 0x62){

				i = -1;
				while(++i < 0x80) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x21728+0x280*j+i) = B(___1a1040h[B(___196abch+ebp)]+0x80*j+i);
			}

			___21fd4h_cdecl(B(___196abch+ebp));
			___12cb8h__VESA101_PRESENTSCREEN();

			n = -1;
			while(++n < 8) ___2ab50h();

			j = -1;
			while(++j < 0x54){

				i = -1;
				while(++i < 0x10) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x23aa8+0x280*j+i) = B(___1a10a4h+0x540+0x10*j+i);
			}

			___12cb8h__VESA101_PRESENTSCREEN();
			break;
		default:
			break;
		}

		if(edi != 0) break;
	}

	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
}
