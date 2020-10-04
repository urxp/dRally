#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a0fd8h[];

// RACE RESULTS, PRESS ANY KEY TO CONTINUE BG
void ___38708h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		edx = 0x18810;
		ebx = 0x46c80;
___38721h:
		ecx = 0x110;
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0fd8h);
		edi += ebx;
		esi += edx;
		edi += 0x162;
		memcpy(edi, esi, ecx);
		edx += 0x110;
		ebx += 0x280;
		if(edx != 0x19a20) goto ___38721h;
		return;
}
