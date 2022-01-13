#include "drally.h"

#define COOXY(x,y) (0x280*(y)+(x))

	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void ___12cb8h__VESA101_PRESENTSCREEN(void);

void ___13c9ch_cdecl(__DWORD__ A1, __DWORD__ A2){

	__DWORD__ 	n;

	n = -1;
	while(++n < 0x14) memset(&___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(A1, A2+n)], 0xc4, 0x14);
	
	___12cb8h__VESA101_PRESENTSCREEN();	
}
