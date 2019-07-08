#include "x86.h"

    extern byte Sound_SampleRate[];


dword setSampleRate__esp(dword A0){

	dword 	eax;
	
	eax = A0;

//		cmp     ax, word 1f40h
//		jae     ___6599bh
	if(ax >= 0x1f40) goto ___6599bh;
//		mov     eax, 1f40h
	eax = 0x1f40;
___6599bh:
//		cmp     ax, word 0ac44h
//		jbe     ___659a6h
	if(ax <= 0xac44) goto ___659a6h;
//		mov     eax, 0ac44h
	eax = 0xac44;
___659a6h:
//		mov     [__CEXT_V(Sound_SampleRate)], ax
	W(Sound_SampleRate) = ax;
//		retn    
	return eax;
}
