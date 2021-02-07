#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;


#define COOXY(x,y) (0x280*(y)+(x))

	extern byte * ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off){

	dword 	n, src_n, x, y;
	byte * 	src;
	byte *	dst;

	dst = ___1a112ch__VESA101_ACTIVESCREEN_PTR+dst_off;
	n = -1;
	while(A3[++n]){

		if(A3[n] != (char)0xfa){

			src_n = A3[n]-0x20;
			src = A1+A2->w*A2->h*src_n;

			y = -1;
			while(++y < A2->h){

				x = -1;
				while(++x < A2->w){

					if(src[x] != 0) dst[COOXY(x, y)] = src[x];
				}
				src += A2->w;
			}

			dst += A2->props[src_n];
		}
		else {
		
			dst++;
		}
	}
}
