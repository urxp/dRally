#include "drally.h"
#include "sfx.h"

	extern byte ___1a1ef0h[];
	extern __DWORD__ ___24cc54h_sfx_volume;

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___2d728h(void);
void ___281d0h_cdecl(dword, dword, dword, dword);
void ___27f80h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);

void ___2df34h(void){

	if(D(___1a1ef0h) == 0){

		dRally_Sound_pushEffect(0x1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		D(___1a1ef0h) = 0x1;
		___2d728h();
		___281d0h_cdecl(0xa, 0x73, 0x6c, 0x72);
		___27f80h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
	}
}
