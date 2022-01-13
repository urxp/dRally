#include "drally.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1114h;

void ___3881ch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;


	ebx = 0xfa00;
	edx = 0;

	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx+0x108, ___1a1114h+edx, 0x168);
		edx += 0x168;
		ebx += 0x280;
		if(edx == 0x1c20) break;
	}

		return;
}
