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

	extern menubox_t ___185a5ch[9];
	extern __BYTE__ ___185b58h[9][9];
	extern char ___1866b8h[9][9][50];
	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___1a1e68h[];
	extern __POINTER__ ___1a10f4h;

#define COOXY(x,y) (0x280*(y)+(x))	

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);


void ___13710h(__DWORD__ A1, __DWORD__ A2){

	int 			n, i, j;
	__BYTE__ 			px;
	menubox_t * 	mBox;
	__BYTE__ *			mSwitch;
	char(*mList)[50];

	mBox = &___185a5ch[A1];
	mList = ___1866b8h[A1];
	mSwitch = ___185b58h[A1];

	___13248h_cdecl(mBox->x, mBox->y, mBox->w, mBox->h, A2);

	n = -1;
	while(++n < mBox->row_n){

		if(n != mBox->row_i){

			if((mSwitch[n] != 1)||(A2 == 0)){

				___12e78h_v3(___1a10d0h___185ba9h, mList[n], mBox->x+32, mBox->y+n*mBox->row_h+5);
			}
			else {

				___12e78h_v3(___1a10e0h___185ba9h, mList[n], mBox->x+32, mBox->y+n*mBox->row_h+5);
			}
		}
		else {

			if(A2 == 0){

				___12e78h_v3(___1a10d0h___185ba9h, mList[n], mBox->x+32, mBox->y+n*mBox->row_h+5);
			}
			else {

				i = -1;
				while(++i < 0x14){

					j = -1;
					while(++j < 0x14){

						px = B(___1a10f4h+(int)D(___1a1e68h)*0x190+0x14*i+j);
						if(px) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(mBox->x+j+9,mBox->y+n*mBox->row_h+i+11)] = px;
					}
				}

				___12e78h_v3(___1a10cch___185ba9h, mList[n], mBox->x+32, mBox->y+n*mBox->row_h+5);
			}
		}
	}
}