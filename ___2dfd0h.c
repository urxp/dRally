#include "drally.h"
#include "sfx.h"

	extern __BYTE__ ___1a1ef0h[];
	extern __DWORD__ ___24cc54h_sfx_volume;

void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___2d294h(void);
void ___281d0h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2d728h(void);
void ___2d898h(void);
void ___2da10h(void);
void ___2db88h(void);

// MARKET CONTROL LEFT
void ___2dfd0h(void){

	if((int)D(___1a1ef0h) > 0){

		dRally_Sound_pushEffect(0x1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
	}

	switch(D(___1a1ef0h)){
	case 1:
		D(___1a1ef0h) = 0;
		___2d294h();
		___281d0h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0xa, 0x73, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 2:
		D(___1a1ef0h) = 0x1;
		___2d728h();
		___281d0h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 3:
		D(___1a1ef0h) = 0x2;
		___2d898h();
		___281d0h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 4:
		D(___1a1ef0h) = 0x3;
		___2da10h();
		___281d0h_cdecl(0x142, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 5:
		D(___1a1ef0h) = 0x4;
		___2db88h();
		___281d0h_cdecl(0x1aa, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x142, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	default:
		break;
	}
}
