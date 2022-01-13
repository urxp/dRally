#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___196ae0h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___196ae4h[];
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern __POINTER__ ___1a01b8h[6];
	extern __BYTE__ ___1a1ed0h[];

void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
void ___2ab50h(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);

void ___17384h_cdecl(__DWORD__ A1, __DWORD__ A2, __DWORD__ A3, __DWORD__ A4, __DWORD__ A5, __DWORD__ A6){

	int 	n, x, y;


	___2ab50h();
	D(___196ae0h)++;

	if((int)D(___196ae0h) <= 0xa){

		x = 0x280*A2+A1+A3;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a10e0h___185ba9h, "\x7f", x, y);
	}
	else {

		n = -1;
		while(++n < 0x1e) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A2+n+2)+A1+A3, 0xc4, 0x14);
	}
	
	if((int)D(___196ae0h) > 0x14) D(___196ae0h) = 0;

	___1398ch__VESA101_PRESENTRECTANGLE(
		0x280*A2+A1+A3,
		___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*A2+A1+A3,
		0x14,
		0x20);

	if(D(___196ae4h) == 0){

		if(A4 != 0){

			___259e0h_cdecl(A5+0x1a0, A6+0x50, D(___1a1ed0h), ___1a01b8h[0], CARENCS[0]);

			___1398ch__VESA101_PRESENTRECTANGLE(
				0x280*(A6+0x50)+A5+0x1a0,
				___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A6+0x50)+A5+0x1a0,
				0x60,
				0x40);

			D(___1a1ed0h)++;
			if((int)D(___1a1ed0h) > 0x3f) D(___1a1ed0h) = 0;
		}

		D(___196ae4h) = 1;
	}
	else {

		D(___196ae4h) = 0;
	}
}
