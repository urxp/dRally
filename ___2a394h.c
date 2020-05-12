#include "drally.h"

#pragma pack(1)

typedef struct x655_s {
	dword 	r;
	dword 	g;
	dword 	b;
} x655_t;

	extern x655_t ___19df50h[];
	extern dword ___1a1edch;
	extern dword ___1a1ecch;

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);

void ___2a394h(void){

	dword 	r, g, b, n;

	n = -1;
	while(++n < 0x10){

		r = ((___19df50h[0x10+n].r*___1a1edch+0x8000)>>0x10)&0xff;
		g = ((___19df50h[0x10+n].g*___1a1edch+0x8000)>>0x10)&0xff;
		b = ((___19df50h[0x10+n].b*___1a1edch+0x8000)>>0x10)&0xff;

		__DISPLAY_SET_PALETTE_COLOR(b, g, r, 0x10+n);
	}

	if(___1a1edch == 0x31) ___1a1ecch = 1;
	if(___1a1edch == 0x64) ___1a1ecch = 0;

	___1a1edch += 6*___1a1ecch-3;
}
