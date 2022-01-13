#include "drally.h"
#include "drally_fonts.h"

#pragma pack(1)
typedef struct menubox_s {
	__DWORD__ 	row_n;			// +00
	__DWORD__ 	x;				// +04
	__DWORD__ 	y;				// +08
	__DWORD__ 	row_h;			// +0C
	__DWORD__ 	w;				// +10
	__DWORD__ 	h;				// +14
	__DWORD__ 	row_i;			// +18
} menubox_t;

#define COOXY(x,y) (0x280*(y)+(x))

	extern menubox_t ___185a5ch[];
#define box ___185a5ch
	
	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___1a1e68h[];
	extern __BYTE__ * ___1a10f4h;

void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);

void ___13cech(__DWORD__ A1){

	int 	n,i,j;

	n = -1;
	while(++n < 0x16){

		memset(&___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+9,n+box[A1].y+box[A1].row_h*box[A1].row_i+10)], 0xc4, box[A1].w-0x14);
	}

	___12e78h_v3(___1a10e0h___185ba9h, ___1866b8h+450*A1+50*box[A1].row_i, box[A1].x+32, box[A1].y+box[A1].row_h*box[A1].row_i+5);
	___1398ch__VESA101_PRESENTRECTANGLE(COOXY(box[A1].x+7,box[A1].y+box[A1].row_h*box[A1].row_i+6), &___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+7,box[A1].y+box[A1].row_h*box[A1].row_i+6)], box[A1].w-0xa, 0x20);

	box[A1].row_i = box[A1].row_n-1;

	n = -1;
	while(++n < 0x16){

		memset(&___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+9,n+box[A1].y+box[A1].row_h*box[A1].row_i+10)], 0xc4, box[A1].w-0x14);
	}

	___12e78h_v3(___1a10cch___185ba9h, ___1866b8h+450*A1+50*box[A1].row_i, box[A1].x+32, box[A1].y+box[A1].row_i*box[A1].row_h+5);

	i = -1;
	while(++i < 0x14){

		j = -1;
		while(++j < 0x14){

			if(___1a10f4h[400*D(___1a1e68h)+0x14*i+j] != 0) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+j+9,box[A1].y+box[A1].row_i*box[A1].row_h+i+11)] = ___1a10f4h[400*(D(___1a1e68h))+0x14*i+j];
		}
	}

	___1398ch__VESA101_PRESENTRECTANGLE(COOXY(box[A1].x+7,box[A1].y+box[A1].row_h*box[A1].row_i+6), &___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+7,box[A1].y+box[A1].row_h*box[A1].row_i+6)], box[A1].w-0xa, 0x20);
}
