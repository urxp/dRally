#include "drally.h"
#include "sfx.h"

	extern __BYTE__ ___1a1ec4h[];
	extern __DWORD__ ___24cc54h_sfx_volume;


void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___25e40h(void);
void ___281d0h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);

void shop___283ech(void){

	if(D(___1a1ec4h) == 0){

		dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		D(___1a1ec4h) = 1;
		___25e40h();
		___281d0h_cdecl(0, 0x73, 0x80, 0x72);
		___27f80h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
	}
}
