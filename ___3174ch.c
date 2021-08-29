#include "drally.h"
#include "sfx.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1124h__VESA101h_ScreenBufferA[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern __DWORD__ ___24cc54h_sfx_volume;

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___2ab50h(void);
byte ___5994ch(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

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
void ___3174ch_cdecl(dword A1){

	int 	n;

	memcpy(D(___1a1124h__VESA101h_ScreenBufferA), D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x1a900, 0x1f400);
	___13248h_cdecl(0x21, 0xb6, 0x244, 0x91, 1);

	n = -1;
	while(++n < 5) ___13094h_cdecl(___190bd8h[A1][n], 0x1ea3c+0x2800*n);

	___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Press any key to continue.", 0x2e250);
	___12cb8h__VESA101_PRESENTSCREEN();
	dRally_Sound_pushEffect(0x1, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500-0x1000, 0x8000);

	while(1){

		___2ab50h();
	
		if(___5994ch() != 0) break;
	}

	memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x1a900, D(___1a1124h__VESA101h_ScreenBufferA), 0x1f400);
	___12cb8h__VESA101_PRESENTSCREEN();
}
