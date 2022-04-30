#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"
#include "sfx.h"
#include "watcom106.h"

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___185a38h_delay[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void dRally_Sound_pushEffect(__BYTE__, __BYTE__, __DWORD__, __DWORD__, __DWORD__, __DWORD__);

// MONEY ACCOUNT CHECK
__DWORD__ ___28ab4h_cdecl(int value){

	int 		n;
	__BYTE__ 	esp[0x34];
	racer_t * 	s_6c;

	s_6c = (racer_t *)___1a01e0h;

	if(value <= (int)s_6c[D(___1a1ef8h)].money) return 0;

	n = -1;
	while(++n < 80) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(140+n)+170, 0xc4, 347);

	itoa_watcom106(value-s_6c[D(___1a1ef8h)].money, esp+0x20, 10);
	strcat(strcat(strcpy(esp, "honey. [You are $"), esp+0x20), " [short.");

	VESA101_16X16_FORMAT_PRINT("No dough, no go, bro. No money,",  170, 156);
	VESA101_16X16_FORMAT_PRINT(esp,                                170, 172);
	VESA101_16X16_FORMAT_PRINT("Gotta earn it. Go do it already.", 170, 188);

	___12cb8h__VESA101_PRESENTSCREEN();
	dRally_Sound_pushEffect(0x2, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500, 0x8000);
	D(___185a38h_delay) = 0x136;

	return 1; 
}
