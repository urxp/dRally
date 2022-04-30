#include "drally.h"

	extern __BYTE__ ___243d14h[];
	extern int TRX_VIEWPORT_TL_X;
	extern int TRX_VIEWPORT_TL_Y;
	extern int Y_Inc;
	extern int X_Inc;
	extern int Y_IncOld;
	extern int X_IncOld;
	extern int Y___243c90h;
	extern int X___243c8ch;
	extern int ___243cbch;
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___1de580h[];
	extern int CURRENT_VIEWPORT_W;
	extern int CURRENT_VIEWPORT_CENTER_X;
	extern int CURRENT_VIEWPORT_H;
	extern int CURRENT_VIEWPORT_CENTER_Y;
	extern int CURRENT_VIEWPORT_X;
	extern __BYTE__ ___243cf0h[];
	extern __BYTE__ ___1df520h[];
	extern int ___243178h[4];
	extern __BYTE__ ___243ce4h[];
	extern __BYTE__ ___243d08h[];
	extern __BYTE__ ___196df4h[];
	extern __BYTE__ ___196dbch[];
	extern __BYTE__ ___196dc0h[];
	extern __BYTE__ ___196dc4h[];
	extern __BYTE__ ___196db8h[];
	extern __BYTE__ ___2438c8h[];
	extern __BYTE__ ___196dd4h[];
	extern __BYTE__ ___196dd8h[];
	extern __BYTE__ ___196de0h[];
	extern __BYTE__ ___196de8h[];
	extern __BYTE__ ___196dech[];
	extern __BYTE__ ___196df0h[];
	extern __BYTE__ ___196de4h[];
	extern __BYTE__ ___243ce0h[];
	extern __BYTE__ ___243cdch[];
	extern __BYTE__ ___243ca0h[];
	extern __BYTE__ ___243cb8h[];
	extern __BYTE__ ___243cd4h[];
	extern __BYTE__ ___196df8h[];

void race___49a34h(void){

	__DWORD__ 	n;

	D(___243d14h) = 0;
	TRX_VIEWPORT_TL_X = 0;
	TRX_VIEWPORT_TL_Y = 0;
	Y_Inc = 0;
	X_Inc = 0;
	Y_IncOld = 0;
	X_IncOld = 0;
	Y___243c90h = 0;
	X___243c8ch = 0;
	___243cbch = 0;
	F32(___243cf0h) = 3.75/(double)F32(___1de580h+0x94*D(MY_CAR_IDX)+0x14);
	CURRENT_VIEWPORT_W = 256;
	CURRENT_VIEWPORT_H = 200;
	CURRENT_VIEWPORT_CENTER_X = 128;
	CURRENT_VIEWPORT_CENTER_Y = 100;
	CURRENT_VIEWPORT_X = 64;
	resetCounter(6);

	n = -1;
	while(++n < 0x20){

		D(___1df520h+0x10*n+8) = -1;
		D(___1df520h+0x10*n+0xc) = 0;
	}

	D(___243ce4h) = 0;
	___243178h[0] = -1;
	___243178h[1] = -1;
	___243178h[2] = -1;
	___243178h[3] = -1;
	D(___196df4h) = 0;
	D(___196dbch) = 0;
	D(___196dc0h) = 0;
	D(___196dc4h) = 0;
	D(___196db8h) = 0;
	D(___2438c8h) = 0;
	D(___196dd4h) = 0;
	D(___196dd8h) = 0;
	D(___196de0h) = 0;
	D(___196de8h) = 0;
	D(___196dech) = 0;
	D(___196df0h) = 0;
	D(___196de4h) = 0;
	D(___243ce0h) = 0;
	resetCounter(1);
	D(___243cdch) = 0;
	D(___243ca0h) = 0;
	D(___243cb8h) = 0;
	D(___243cd4h) = 0;
	D(___243d08h) = 4;
	D(___196df8h) = 0x28000;
	resetCounter(5);
}
