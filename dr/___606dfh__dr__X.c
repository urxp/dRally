#include "x86.h"

    extern byte ___60434h[];
    extern byte ___60442h[];
    extern byte ___60441h[];

// 606dfh
void ___606dfh(void){

	dword 	eax;

//		pushad  
//		movzx   eax, word [__CEXT_V(___60434h)]
	eax = W(___60434h);
//		mov     [__CEXT_V(___60442h)], ax
	W(___60442h) = ax;
//		imul    eax, eax, 0aaaah
	eax = eax * 0xaaaa;
//		shr     eax, 10h
	eax >>= 0x10;
//		mov     [__CEXT_V(___60434h)], ax
	W(___60434h) = ax;
//		mov     byte [__CEXT_V(___60441h)], 1
	B(___60441h) = 1;
//		popad   
//		retn    
	return;
}
