#include "drally.h"

	extern byte ___1d7810h[];

// RACE, INFO SCREEN, SOMETHING
void ___483d4h_cdecl(dword A1, dword A2){

	dword	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[8];

	eax = A1;
	edx = A2;


		ebx = eax;
		D(esp) = edx;
		edx ^= edx;
		ebp = D(esp);
		D(esp+0x4) = edx;
		goto ___48438h;
___483f6h:
		esi = B(ebp);
		esi -= 0x20;
		esi = 0x24*esi;
		ecx = 6;
		edi = ebx;
		edx = ecx;
		esi = ___1d7810h+esi;
___4840fh:
		H(ecx) = L(edx);
___48411h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___48419h;
		B(edi) = L(eax);
___48419h:
		edi++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___48411h;
		edi += 0x140;
		edi -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___4840fh;
		edi = D(esp+0x4);
		ebp++;
		edi++;
		ebx += 6;
		D(esp+0x4) = edi;
___48438h:
		edi = D(esp);
		esi = D(esp+0x4);
		ecx = strlen(edi);
		if(ecx > esi) goto ___483f6h;
		return;
}
