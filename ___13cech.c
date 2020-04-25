#include "drally.h"

#pragma pack(1)
typedef struct coo_s {
	dword 	row_n;			// +00
	int 	x;				// +04
	int 	y;				// +08
	dword 	row_h;			// +0C
	dword 	w;				// +10
	dword 	h;				// +14
	dword 	row_i;			// +18
} coo_t;

#define COOXY(x,y) (0x280*(y)+(x))

	extern coo_t ___185a5ch[];
#define box ___185a5ch
	
	extern byte * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte ___1866b8h[];
	extern byte ___185ba9h[];
	extern byte ___1a10e0h[];
	extern byte ___1a10cch[];
	extern byte ___1a1e68h[];
	extern byte * ___1a10f4h;

void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
void ___12e78h_cdecl(dword, dword, dword, dword);

void ___13cech(dword A1){

	int 	n,i,j;

	n = -1;
	while(++n < 0x16){

		memset(&___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+9,n+box[A1].y+box[A1].row_h*box[A1].row_i+10)], 0xc4, box[A1].w-0x14);
	}

	___12e78h_cdecl(D(___1a10e0h), ___185ba9h, ___1866b8h+450*A1+50*box[A1].row_i, COOXY(box[A1].x+32,box[A1].y+box[A1].row_h*box[A1].row_i+5));
	___1398ch__VESA101_PRESENTRECTANGLE(COOXY(box[A1].x+7,box[A1].y+box[A1].row_h*box[A1].row_i+6), &___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+7,box[A1].y+box[A1].row_h*box[A1].row_i+6)], box[A1].w-0xa, 0x20);

	box[A1].row_i = box[A1].row_n-1;

	n = -1;
	while(++n < 0x16){

		memset(&___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+9,n+box[A1].y+box[A1].row_h*box[A1].row_i+10)], 0xc4, box[A1].w-0x14);
	}

	___12e78h_cdecl(D(___1a10cch), ___185ba9h, ___1866b8h+450*A1+50*box[A1].row_i, COOXY(box[A1].x+32,box[A1].y+box[A1].row_i*box[A1].row_h+5));

	i = -1;
	while(++i < 0x14){

		j = -1;
		while(++j < 0x14){

			if(___1a10f4h[400*D(___1a1e68h)+0x14*i+j] != 0) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+j+9,box[A1].y+box[A1].row_i*box[A1].row_h+i+11)] = ___1a10f4h[400*(D(___1a1e68h))+0x14*i+j];
		}
	}

	___1398ch__VESA101_PRESENTRECTANGLE(COOXY(box[A1].x+7,box[A1].y+box[A1].row_h*box[A1].row_i+6), &___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+7,box[A1].y+box[A1].row_h*box[A1].row_i+6)], box[A1].w-0xa, 0x20);
}
