#include "drally.h"

	extern __BYTE__ * ___243d80h;
	extern __BYTE__ ___1d7810h[];

void ___424c8h_cdecl(__DWORD__ A1, const char * A2){

	int 	n, x, y;
	__BYTE__ 	px;
	int 	b;

	n = -1;
	while(A2[++n]){

		y = -1;
		while(++y < 6){

			x = -1;
			while(++x < 6){

				px = ___1d7810h[0x24*(A2[n]-0x20)+6*y+x];
				if(px != 0) ___243d80h[A1+6*n+0x200*y+x] = px;
			}
		}
	}
}
