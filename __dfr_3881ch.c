#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1114h[];

void ___3881ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		ebx = 0xfa00;
		edx = 0;
___38832h:
		ecx = 0x168;
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1114h);
		edi += ebx;
		esi += edx;
		edi += 0x108;
		memcpy(edi, esi, ecx);
		edx += 0x168;
		ebx += 0x280;
		if(edx != 0x1c20) goto ___38832h;
		return;
}
