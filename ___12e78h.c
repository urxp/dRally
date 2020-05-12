#include "drally.h"

#define COOXY(x,y) (0x280*(y)+(x))

	extern byte * ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void ___12e78h_cdecl(byte * A1, byte * A2, const char * A3, dword A4){

	dword 	n, i, j;
	byte 	c;

	n = -1;
	while(A3[++n]){

		if(A3[n] != 0xfa){

			j = -1;
			while(++j < A2[1]){

				i = -1;
				while(++i < A2[0]){

					c = A1[A2[0]*(j+A2[1]*(A3[n]-0x20))+i];
					if(c != 0) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(i+(A4%0x280), j+(A4/0x280))] = c;
				}
			}

			A4 += A2[A3[n]-0x1e];
		}
		else {
		
			A4++;
		}
	}
}
