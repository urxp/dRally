#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

typedef __BYTE__ let16x16_t[16][16];
typedef let16x16_t font16x16_t[0x60];


#define COOXY(x,y) (0x280*(y)+(x))

	extern font_props_t ___185c0bh;
	extern byte * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern font16x16_t * ___1a10fch;
	extern font16x16_t * ___1a110ch;
	extern font16x16_t * ___1a1108h;

void ___13094h_cdecl(const char * a_str, int a_offset){
// 16x16 fonts

	int 		n, dx, dy, sx, sy;
	byte		px;
	let16x16_t *	let16;
	font16x16_t *  	fnt16;

	fnt16 = ___1a10fch;
	n = -1;
	while(a_str[++n]){

		switch(a_str[n]){
		case 0x7b:
			fnt16 = ___1a10fch;
			break;
		case 0x7d:
			fnt16 = ___1a110ch;
			break;
		case 0x5b:
			fnt16 = ___1a1108h;
			break;
		default:
			let16 = &(*fnt16)[a_str[n]-0x20];
			dx = a_offset%0x280;
			dy = a_offset/0x280;
			sy = -1;
			while(++sy < ___185c0bh.h){

				sx = -1;
				while(++sx < ___185c0bh.w){

					if(px = (*let16)[sy][sx]) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(dx+sx, dy+sy)] = px;
				}
			}

			a_offset += ___185c0bh.props[a_str[n]-0x20];
			break;
		}
	}
}
