#include "drally.h"
#include "drally_fonts.h"
#include "sfx.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1124h__VESA101h_ScreenBufferA;
	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a1108h;
	extern __DWORD__ ___24cc54h_sfx_volume;

void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___2ab50h(void);
__BYTE__ ___5994ch(void);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

static const char ___190bd8h[2][5][60] = {
	[0] = {
		[0] = "",
		[1] = "      [Hold on to your reins{, you mad, motorized",
		[2] = "   berserker! They would mow you dead out there.",
		[3] = "     [Sign up here only when you have a Sentinel",
		[4] = "      [or something even wilder under your tail."
	},
	[1] = {
		[0] = "",
		[1] = "      [Hold on to your reins{, you mad, motorized",
		[2] = "   berserker! They would mow you dead out there.",
		[3] = "     [Sign up here only when you have a Wraith",
		[4] = "      [or something even wilder under your tail."
	}
};

// GET BETTER CAR WARNING 
void ___3174ch_cdecl(__DWORD__ A1){

	int 	n;

	memcpy(___1a1124h__VESA101h_ScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x1a900, 0x1f400);
	___13248h_cdecl(0x21, 0xb6, 0x244, 0x91, 1);

	VESA101_16X16_FORMAT_PRINT(___190bd8h[A1][0], 60, 196);
	VESA101_16X16_FORMAT_PRINT(___190bd8h[A1][1], 60, 212);
	VESA101_16X16_FORMAT_PRINT(___190bd8h[A1][2], 60, 228);
	VESA101_16X16_FORMAT_PRINT(___190bd8h[A1][3], 60, 244);
	VESA101_16X16_FORMAT_PRINT(___190bd8h[A1][4], 60, 260);

	___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Press any key to continue.", 0x2e250);
	___12cb8h__VESA101_PRESENTSCREEN();
	dRally_Sound_pushEffect(0x1, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500-0x1000, 0x8000);

	while(1){

		___2ab50h();
	
		if(___5994ch() != 0) break;
	}

	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x1a900, ___1a1124h__VESA101h_ScreenBufferA, 0x1f400);
	___12cb8h__VESA101_PRESENTSCREEN();
}
