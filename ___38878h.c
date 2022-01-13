#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___196bdch[];
	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a1108h;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10fch;

void ___3881ch(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);

void ___38878h_cdecl(void){

	D(___196bdch)++;

	if(D(___196bdch) == 0xf){

		___3881ch();
		___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Waiting for other players...", 0x102be);
		___1398ch__VESA101_PRESENTRECTANGLE(0xfb08, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xfb08, 0x168, 0x14);
	}

	if(D(___196bdch) == 0x1e){

		___3881ch();
		___12e78h_cdecl(___1a10fch, (font_props_t *)___185c0bh, "Waiting for other players...", 0x102be);
		___1398ch__VESA101_PRESENTRECTANGLE(0xfb08, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xfb08, 0x168, 0x14);
		D(___196bdch) = 0;
	}

	return;
}
