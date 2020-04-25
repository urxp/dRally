#include "drally.h"

#pragma pack(1)
typedef struct coo_s {
	dword 	row_n;
	int 	x;
	int 	y;
	dword 	row_h;
	dword 	w;
	dword 	h;
	dword 	row_i;
} coo_t;

	extern coo_t ___185a5ch[];
#define box ___185a5ch
	extern byte ___1866b8h[];
	extern byte * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte ___1a1e68h[];
	extern byte ___1a10f4h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte ___1a10d0h[];
	extern byte ___185b58h[];
	extern byte ___1a10e0h[];

#define COOXY(x,y) (0x280*(y)+(x))	

void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___12e78h_cdecl(dword, dword, dword, dword);

void ___13710h(dword A1, dword A2){

	int 	n,i,j;
	dword 	ebx, esi;

	___13248h_cdecl(box[A1].x, box[A1].y, box[A1].w, box[A1].h, A2);

	n = -1;
	while(++n < box[A1].row_n){

		if(n != box[A1].row_i){

			if(B(9*A1+n+___185b58h) != 1){

				___12e78h_cdecl(D(___1a10d0h), ___185ba9h, ___1866b8h+450*A1+0x32*n, COOXY(box[A1].x+32,box[A1].y+n*box[A1].row_h+5));
			}
			else {

				if(A2 == 0){
					
					___12e78h_cdecl(D(___1a10d0h), ___185ba9h, ___1866b8h+450*A1+0x32*n, COOXY(box[A1].x+32,box[A1].y+n*box[A1].row_h+5));
				}

				if(A2 == 1){

					___12e78h_cdecl(D(___1a10e0h), ___185ba9h, ___1866b8h+450*A1+0x32*n, COOXY(box[A1].x+32,box[A1].y+n*box[A1].row_h+5));
				}
			}
		}
		else {

			if(A2 == 0){

				___12e78h_cdecl(D(___1a10d0h), ___185ba9h, ___1866b8h+450*A1+0x32*n, COOXY(box[A1].x+32,box[A1].y+n*box[A1].row_h+5));
			}
			else {

				i = -1;
				while(++i < 0x14){

					j = -1;
					while(++j < 0x14){

						if(B(D(___1a10f4h)+(int)D(___1a1e68h)*0x190+0x14*i+j)) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(box[A1].x+j+9,box[A1].y+n*box[A1].row_h+i+11)] = B(D(___1a10f4h)+(int)D(___1a1e68h)*0x190+0x14*i+j);
					}
				}

				___12e78h_cdecl(D(___1a10cch), ___185ba9h, ___1866b8h+450*A1+0x32*n, COOXY(box[A1].x+32,box[A1].y+n*box[A1].row_h+5));
			}
		}
	}
}
