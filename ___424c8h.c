#include "drally.h"

	extern __BYTE__ * BACKBUFFER;
	extern __BYTE__ ___1d7810h[];

static void ___424c8h_cdecl(int offset, const char * A2){

	int 	n, x, y;
	__BYTE__ 	px;

	n = -1;
	while(A2[++n]){

		y = -1;
		while(++y < 6){

			x = -1;
			while(++x < 6){

				if((px = ___1d7810h[0x24*(A2[n]-0x20)+6*y+x]) != 0) BACKBUFFER[offset+6*n+0x200*y+x] = px;
			}
		}
	}
}

void ___424c8h_v2(const char * s, int x, int y){ ___424c8h_cdecl(0x200*y+x, s); }
