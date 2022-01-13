#include "drally.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a0fd8h;

// RACE RESULTS, PRESS ANY KEY TO CONTINUE BG
void ___38708h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;


	edx = 0x18810;
	ebx = 0x46c80;

	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx+0x162, ___1a0fd8h+edx, 0x110);
		edx += 0x110;
		ebx += 0x280;
		if(edx == 0x19a20) break;
	}
}
