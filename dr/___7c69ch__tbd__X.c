#include "x86.h"

    extern byte ___24f760h[];

    void freedosmem__dpmi(dword);

// 7c69ch
void ___7c69ch(dword s_dma){

	dword 	eax, edx;

	eax = s_dma;

//		push    edx
//		xor     edx, edx
	edx = 0;
//		mov     dl, al
	edx = eax;
//		lea     eax, [edx*4+0]
	eax = 4*edx;
//		sub     eax, edx
	eax -= edx;
//		shl     eax, 2
	eax <<= 2;
//		add     eax, edx
	eax += edx;
//		add     eax, __CEXT_V(___24f760h)
	eax += (dword)___24f760h;
//		call    __CEXT_F(freedosmem__dpmi)
	freedosmem__dpmi(eax);
//		pop     edx
//		retn    
}
