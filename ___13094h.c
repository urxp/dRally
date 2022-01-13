#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	__BYTE__ 	w;
	__BYTE__ 	h;
	__BYTE__ 	props[];
} font_props_t;

typedef __BYTE__ let16x16_t[16][16];
typedef let16x16_t font16x16_t[0x60];


#define COOXY(x,y) (0x280*(y)+(x))

	extern font_props_t ___185c0bh;
	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern font16x16_t * ___1a10fch;
	extern font16x16_t * ___1a110ch;
	extern font16x16_t * ___1a1108h;

void ___13094h_cdecl(const char * a_str, int a_offset){
// 16x16 fonts

	int 		n, x, y, dx, dy;
	__BYTE__		px;
	let16x16_t *	let16;
	font16x16_t *  	fnt16;

	fnt16 = ___1a10fch;
	n = -1;
	while(a_str[++n]){

		switch(a_str[n]){
		case 0x7b:	// '{'
			fnt16 = ___1a10fch;
			break;
		case 0x7d:	// '}'
			fnt16 = ___1a110ch;
			break;
		case 0x5b:	// '['
			fnt16 = ___1a1108h;
			break;
		default:
			let16 = &(*fnt16)[a_str[n]-0x20];
			x = a_offset%0x280;
			y = a_offset/0x280;
			dy = -1;
			while(++dy < ___185c0bh.h){

				dx = -1;
				while(++dx < ___185c0bh.w){

					if(px = (*let16)[dy][dx]) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(x+dx, y+dy)] = px;
				}
			}

			a_offset += ___185c0bh.props[a_str[n]-0x20];
			break;
		}
	}
}

void VESA101_16X16_FORMAT_PRINT(const char * str, int x, int y){

	___13094h_cdecl(str, 0x280*y+x);
}
