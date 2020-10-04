#include "drally.h"

	extern byte ___243d70h[];
	extern byte ___1d7810h[];

void race___47808h(dword A1, dword A2, dword A3){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x10];

	ebx = A3;
	edx = A2;
	eax = A1;


		ecx = edx;
		D(esp+0x8) = ebx;
		ebx = ecx;
		ebx <<= 2;
		ebx -= ecx;
		ebx <<= 5;
		ecx = ebx;
		ebx <<= 4;
		ebx += ecx;
		D(esp+0x4) = ebx;
		ebx = 4*eax;
		edx = 0;
		ebx -= eax;
		ebp = 0;
		ebx += ebx;
		D(esp+0xc) = edx;
		D(esp) = ebx;
		ebx = D(esp+0x8);
		goto ___478a9h;
___47850h:
		ecx = D(___243d70h);
		ecx += 0x4ce;
		edi = D(esp+0x4);
		ecx += ebp;
		ecx += edi;
		edi = D(esp);
		edi += ecx;
		ecx = 0;
		L(ecx) = B(ebx);
		ecx -= 0x20;
		esi = 0x24*ecx;
		ecx = 6;
		esi = ___1d7810h+esi;
		edx = ecx;
___47880h:
		H(ecx) = L(edx);
___47882h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___4788ah;
		B(edi) = L(eax);
___4788ah:
		edi++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___47882h;
		edi += 0xcc;
		edi -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___47880h;
		eax = D(esp+0xc);
		ebx++;
		eax++;
		ebp += 6;
		D(esp+0xc) = eax;
___478a9h:
		edi = D(esp+0x8);
		esi = D(esp+0xc);
		ecx = strlen(edi);
		if(ecx > esi) goto ___47850h;
		return;
}
