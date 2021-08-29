#include "drally.h"
#include "sfx.h"

	extern byte ___1a1ef0h[];
	extern __DWORD__ ___24cc54h_sfx_volume;

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___2d898h(void);
void ___281d0h_cdecl(dword, dword, dword, dword);
void ___27f80h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2da10h(void);
void ___2db88h(void);
void ___2ddc8h(void);

// MARKET CONTROL RIGHT
void ___2e1b0h(void){

	if((int)D(___1a1ef0h) < 5){

		dRally_Sound_pushEffect(0x1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
	}

	switch(D(___1a1ef0h)){
	case 1:
		D(___1a1ef0h) = 0x2;
		___2d898h();
		___281d0h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
	case 2:
		D(___1a1ef0h) = 0x3;
		___2da10h();
		___281d0h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
	case 3:
		D(___1a1ef0h) = 0x4;
		___2db88h();
		___281d0h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x142, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
	case 4:
		D(___1a1ef0h) = 0x5;
		___2ddc8h();
		___281d0h_cdecl(0x142, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x1aa, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
	default:
		break;
	}
}
