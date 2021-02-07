#include "drally.h"

	extern byte ___24330ch[];
	extern byte ___2432dch[];
	extern byte ___243e74h[];
	extern byte ___2432d8h[];

// RACE OVER, LEAVING RACE DIALOG BOX UNLOAD ANIMATION
dword ___47620h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x8];


		edi = D(___24330ch);
		ebp = D(___2432dch);
		edx ^= edx;
		D(esp+0x4) = edx;
		D(esp) = edx;
___47648h:
		eax = D(esp+0x4);
		D(___24330ch) = edi;
		L(edx) = B(eax+___243e74h+0x20);
		D(___2432dch) = ebp;
		if(L(edx) > 0x46) goto ___477a1h;
		eax ^= eax;
		if((int)edi <= 0) goto ___47684h;
		edx = D(esp+0x4);
___47671h:
		ecx = D(edx+___243e74h+0xc);
		ecx += ebp;
		eax++;
		D(edx+___243e74h+0xc) = ecx;
		if((int)eax < (int)edi) goto ___47671h;
___47684h:
		edx ^= edx;
		if((int)edi <= 0) goto ___476a7h;
		eax = D(esp+0x4);
___4768eh:
		ebx = D(eax+___243e74h+8);
		esi = D(eax+___243e74h);
		esi += ebx;
		edx++;
		D(eax+___243e74h) = esi;
		if((int)edx < (int)edi) goto ___4768eh;
___476a7h:
		eax = D(esp+0x4);
		edx ^= edx;
		if((int)edi <= 0) goto ___476c8h;
___476b1h:
		ecx = D(eax+___243e74h+4);
		ecx += D(eax+___243e74h+0xc);
		edx++;
		D(eax+___243e74h+4) = ecx;
		if((int)edx < (int)edi) goto ___476b1h;
___476c8h:
		if((int)D(eax+___243e74h) > 0) goto ___476e7h;
		edx ^= edx;
		D(eax+___243e74h) = edx;
		edx = D(eax+___243e74h+8);
		edx = 0-edx;
		D(eax+___243e74h+8) = edx;
___476e7h:
		eax = D(esp+0x4);
		if((int)D(eax+___243e74h) < 0x13c0000) goto ___47713h;
		D(eax+___243e74h) = 0x13c0000;
		eax = D(eax+___243e74h+8);
		edx = D(esp+0x4);
		eax = 0-eax;
		D(edx+___243e74h+8) = eax;
___47713h:
		eax = D(esp+0x4);
		ebx = D(esp+0x4);
		D(___24330ch) = edi;
		D(___2432dch) = ebp;
		eax = D(eax+___243e74h+4);
		ebx = D(ebx+___243e74h);
		eax += 0x8000;
		ebx += 0x8000;
		eax = (int)eax>>0x10;
		ebx = (int)ebx>>0x10;
		if((int)eax <= 0xc4) goto ___47760h;
		ebx = D(esp);
		eax = D(esp+0x4);
		H(edx) = 0x46;
		ebx++;
		B(eax+___243e74h+0x20) = H(edx);
		D(esp) = ebx;
		goto ___477a1h;
___47760h:
		esi = ___243e74h;
		esi += D(esp+4);
		edx = 0x140*eax;
		ecx = 4;
		eax = D(___2432d8h);
		esi += 0x10;
		eax += edx;
		edx = 0x140;
		ebx += eax;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
___477a1h:
		ecx = D(esp+0x4);
		ebp = D(___2432dch);
		ecx += 0x21;
		edi = D(___24330ch);
		D(esp+0x4) = ecx;
		if(ecx != 0x7ce9) goto ___47648h;
		eax = D(esp);
		return eax;
}
