#include "drally.h"

	extern __BYTE__ * BACKBUFFER;
	extern __BYTE__ ___1d7810h[];

static void ___424c8h_cdecl(int offset, const char * A2){

	int 	n, x, y;
	__BYTE__ 	px;

	n = -1;
	while(A2[++n]){

		__BYTE__* s = &___1d7810h[0x24 * (A2[n] - 0x20)];
		__BYTE__* d = &BACKBUFFER[offset + 6 * n];
		y = 6;
		do {
			x = 6;
			do {
				if ((px = *s++) != 0) *d = px;
				d++;
			} while (--x);
			d += (0x200 - 6);
		} while (--y);
	}
}

void ___424c8h_v2(const char * s, int x, int y){ ___424c8h_cdecl(0x200*y+x, s); }
