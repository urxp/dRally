#include "drally.h"

	extern byte ___196ae0h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___185ba9h[];
	extern byte ___1a10e0h[];
	extern byte ___196ae4h[];
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern void * ___1a01b8h[6];
	extern byte ___1a1ed0h[];

void ___259e0h_cdecl(dword, dword, dword, dword, dword);
void ___2ab50h(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);

void ___17384h_cdecl(dword A1, dword A2, dword A3, dword A4, dword A5, dword A6){

	int 	n;

	dword 	H7F = 0x7f;

	___2ab50h();
	D(___196ae0h)++;

	if((int)D(___196ae0h) <= 0xa){

		___12e78h_cdecl(D(___1a10e0h), ___185ba9h, &H7F, 0x280*A2+A1+A3);
	}
	else {

		n = -1;
		while(++n < 0x1e) memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(A2+n+2)+A1+A3, 0xc4, 0x14);
	}
	
	if((int)D(___196ae0h) > 0x14) D(___196ae0h) = 0;

	___1398ch__VESA101_PRESENTRECTANGLE(
		0x280*A2+A1+A3,
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*A2+A1+A3,
		0x14,
		0x20);

	if(D(___196ae4h) == 0){

		if(A4 != 0){

			___259e0h_cdecl(A5+0x1a0, A6+0x50, D(___1a1ed0h), ___1a01b8h[0], CARENCS[0]);

			___1398ch__VESA101_PRESENTRECTANGLE(
				0x280*(A6+0x50)+A5+0x1a0,
				D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(A6+0x50)+A5+0x1a0,
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
