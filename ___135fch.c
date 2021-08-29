#include "drally.h"

	extern __BYTE__ * ___1a1138h__VESA101h_DefaultScreenBufferB;	// 640*480
	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;			// 640*480
	extern __BYTE__ * ___1a10b4h;									// 640x10

#define COOXY(x,y) (0x280*(y)+(x))	

void ___135fch(dword A1, dword A2, dword A3, dword A4){

	int 	m, n;

	n = -1;
	while(++n < A4){

		memcpy(&___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(A1+2,n+A2-4)], &___1a1138h__VESA101h_DefaultScreenBufferB[COOXY(A1+2,n+A2-4)], A3-6);
	}

	m = -1;
	while(++m < 0xa){

		n = -1;
		while(++n < 0x280){

			if(___1a10b4h[COOXY(n,m)]){
				
				___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(n,m+A2+1)] = ___1a10b4h[COOXY(n,m)];
				___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(n,m+A2+A4-9)] = ___1a10b4h[COOXY(n,m)];
			}
		}
	}
}
