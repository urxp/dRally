#include "drally.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

static __BYTE__ helper_color(__DWORD__ eax, __DWORD__ edx){
	
	___imul32((__POINTER__)&eax, (__POINTER__)&edx, edx);
	eax += 0x8000;
	edx += !!(eax < 0x8000);
	eax = (eax >> 0x10)|(edx << 0x10);
	eax += 0x8000;
	eax = (int)eax>>0x10;

	return eax&0xff;
}

void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);

void ___2b5f0h(void){

	__DWORD__ 	rr, gg, bb;
	int 		n;


	n = -1;
	while(++n < 0x100){

		rr = helper_color(___19eb50h[n].r, 0x640000);
		gg = helper_color(___19eb50h[n].g, 0x640000);
		bb = helper_color(___19eb50h[n].b, 0x640000);
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
	}
}
