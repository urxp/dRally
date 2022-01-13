#include "drally.h"

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

	extern menubox_t ___185a5ch[];
#define box ___185a5ch
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __DWORD__ ___1a1e68h;
	extern __POINTER__ ___1a10f4h;


void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);

void ___13a98h_cdecl(__DWORD__ A1){

	int 		i, j, n, offset;
	__BYTE__ 	px;


	offset = 0x280*(box[A1].y+box[A1].row_h*box[A1].row_i+11)+box[A1].x+9;

	n = -1;
	while(++n < 0x14) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+offset+0x280*n, 0xc4, 0x14);

	j = -1;
	while(++j < 0x14){

		i = -1;
		while(++i < 0x14){

			if((px = read_b(___1a10f4h+0x190*___1a1e68h+0x14*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+offset+0x280*j+i, px);
		}
	}

	___1398ch__VESA101_PRESENTRECTANGLE(offset, ___1a112ch__VESA101_ACTIVESCREEN_PTR+offset, 0x14, 0x14);

	if(++___1a1e68h > 0x31) ___1a1e68h = 0;
}
