#include "drally.h"

	extern byte ___243334h[];
	extern byte ___243328h[];
	extern byte ___243324h[];
	extern byte ___243d80h[];
	extern byte ___243d50h[];
	extern byte ___24332ch[];

// FINISH LINE FLAG
void race___4207ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	
		edx = D(___243334h);
		eax = D(___243328h);
		eax -= edx;
		if((int)eax <= 0) goto ___420a3h;
		D(___243328h) = eax;
		goto ___420abh;
___420a3h:
		ebx = 0;
		D(___243328h) = ebx;
___420abh:
		edx = D(___243324h);
		edx += 0x8000;
		ebx = D(___243d80h);
		edx = (int)edx>>0x10;
		ecx = D(___243328h);
		eax = 4*edx;
		esi = D(___243d50h);
		eax += edx;
		ebx += 0x150;
		eax <<= 6;
		ebx += ecx;
		edx = eax;
		eax <<= 4;
		ecx = 0x3c;
		eax -= edx;
		edx = 0x50;
		esi += eax;
		L(edx) >>= 2;
___420f6h:
		H(ecx) = L(edx);
___420f8h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___420f8h;
		ebx += 0x200;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___420f6h;
		eax = D(___24332ch);
		esi = D(___243324h);
		esi += eax;
		D(___243324h) = esi;
		eax = esi+0x8000;
		eax = (int)eax>>0x10;
		if((int)eax <= 0x3f) goto ___42141h;
		edi = 0;
		D(___243324h) = edi;
___42141h:
		return;
}
