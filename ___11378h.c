#include "drally.h"

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);

void ___11378h_cdecl(dword A1, dword A2, dword A3){

	dword 	n;

	n = -1;
	while(++n < 0x10){

		__DISPLAY_SET_PALETTE_COLOR(A3*(9*n+16)/160, A2*(9*n+16)/160, A1*(9*n+16)/160, 0x40+n);
		__DISPLAY_SET_PALETTE_COLOR(A3+n*(63-A3)/16, A2+n*(63-A2)/16, A1+n*(63-A1)/16, 0x50+n);
	}
}

void ___11378h_cdecl_float(float A1, float A2, float A3){

	___11378h_cdecl(A1, A2, A3);
}
