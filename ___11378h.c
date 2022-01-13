#include "drally.h"

void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);

void ___11378h_cdecl(__DWORD__ A1, __DWORD__ A2, __DWORD__ A3){

	__DWORD__ 	n;

	n = -1;
	while(++n < 0x10){

		__DISPLAY_SET_PALETTE_COLOR(A3*(9*n+16)/160, A2*(9*n+16)/160, A1*(9*n+16)/160, 0x40+n);
		__DISPLAY_SET_PALETTE_COLOR(A3+n*(63-A3)/16, A2+n*(63-A2)/16, A1+n*(63-A1)/16, 0x50+n);
	}
}

void ___11378h_cdecl_float(float A1, float A2, float A3){

	___11378h_cdecl(A1, A2, A3);
}
