#include "drally.h"

#define COOXY(x,y) (0x280*(y)+(x))
#define COO14UV(u,v) (0x14*(v)+(u))

	extern byte * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte ___1a1e68h[];
	extern byte * ___1a10f4h;

void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);

void ___13bd4h_cdecl(dword A1, dword A2){

	dword 	m, n;
	byte * 	cursor;
	byte 	pix;

	n = -1;
	while(++n < 0x14) memset(&___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(A1, A2+n)], 0xc4, 0x14);

	cursor = &___1a10f4h[400*D(___1a1e68h)];
	n = -1;
	while(++n < 0x14){

		m = -1;
		while(++m < 0x14){

			if((pix = cursor[COO14UV(m, n)])) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(A1+m, A2+n)] = pix;
		}
	}

	___1398ch__VESA101_PRESENTRECTANGLE(COOXY(A1, A2), &___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(A1, A2)], 0x14, 0x14);
	if(++D(___1a1e68h) > 0x31) D(___1a1e68h) = 0;
}
