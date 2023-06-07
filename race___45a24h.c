#include "drally.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

typedef rgb24_t pal256_t[0x100];

	extern pal256_t ___1a4ec0h;
	extern __BYTE__ ___1a33c0h[];
	extern __BYTE__ ___196e70h[];

void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);

static __DWORD__ helper_color(__BYTE__ b){

	__DWORD__ 	eax, edx;

	edx = b;
	edx <<= 0x10;
	eax = edx / 63;

	return eax;
}

static __BYTE__ helper_color2(__DWORD__ eax, __DWORD__ edx){

	eax = edx / 0x10000 * eax;
	eax = eax+0x8000;
	eax = (int)eax>>0x10;

	return eax&0xff;
}

static __BYTE__ helper_color3(__DWORD__ eax, __DWORD__ edx, __DWORD__ ecx){

	eax = edx / 0x10000 * eax;
	ecx <<= 0x10;
	ecx -= eax;
	ecx += 0x8000;
	ecx = (int)ecx>>0x10;

	return ecx&0xff;
}

void race___45a24h(void){

	__DWORD__ 	eax, edx;
	int 		n;


	n = -1;
	while(++n < 0x100){

		__DISPLAY_SET_PALETTE_COLOR(0, 0, 0, n);
		D(___1a33c0h+0xc*n+0) = helper_color(___1a4ec0h[n].r);
		D(___1a33c0h+0xc*n+4) = helper_color(___1a4ec0h[n].g);
		D(___1a33c0h+0xc*n+8) = helper_color(___1a4ec0h[n].b);
	}
}

// RACE F1 INFOSCREENS COLORS
void race___45ad4h(void){

	int 		n;

	n = -1;
	while(++n < 0x100){

		D(___1a33c0h+0xc*n+0) = helper_color(___1a4ec0h[n].r);
		D(___1a33c0h+0xc*n+4) = helper_color(___1a4ec0h[n].g);
		D(___1a33c0h+0xc*n+8) = helper_color(___1a4ec0h[n].b);
	}
}

// RACE, INFO SCREEN FADE IN
void ___45c6ch(void){

	__DWORD__ 	rr, gg, bb;
	int 		n;


	D(___196e70h)++;

	n = -1;
	while(++n < 0x100){

		rr = helper_color2(D(___1a33c0h+0xc*n+0), 0x10000*D(___196e70h));
		gg = helper_color2(D(___1a33c0h+0xc*n+4), 0x10000*D(___196e70h));
		bb = helper_color2(D(___1a33c0h+0xc*n+8), 0x10000*D(___196e70h));

		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
	}
}

// RACE, INFO SCREEN FADE OUT
void ___45b60h(void){

	__DWORD__ 	rr, gg, bb;
	int 		n;


	D(___196e70h)++;

	n = -1;
	while(++n < 0x100){

		rr = helper_color3(D(___1a33c0h+0xc*n+0), 0x10000*D(___196e70h), ___1a4ec0h[n].r);
		gg = helper_color3(D(___1a33c0h+0xc*n+4), 0x10000*D(___196e70h), ___1a4ec0h[n].g);
		bb = helper_color3(D(___1a33c0h+0xc*n+8), 0x10000*D(___196e70h), ___1a4ec0h[n].b);

		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
	}
}
