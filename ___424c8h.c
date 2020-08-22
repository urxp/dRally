#include "drally.h"

	extern byte * ___243d80h;
	extern byte ___1d7810h[];

void ___424c8h_cdecl(dword A1, const char * A2){

	int 	n, x, y;
	byte 	px;

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
