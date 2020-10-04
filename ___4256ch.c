#include "drally.h"

	extern byte ___243d80h[];

dword ___4256ch_cdecl(dword A1, dword A2, dword A3, dword A4, dword A5, dword A6, dword A7, dword A8){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x10+0x10+0x10];


	eax = A1;
	edx = A2;
	ebx = A3;
	ecx = A4;
	D(esp+0x20) = A5;
	D(esp+0x24) = A6;
	D(esp+0x28) = A7;
	D(esp+0x2c) = A8;


		ebp = D(esp+0x24);
		D(esp) = eax;
		D(esp+0xc) = edx;
		D(esp+0x8) = ebx;
		edi = ecx;
		eax = edx;
		eax = eax*ebx;
		D(esp+0x4) = eax;
		if((int)ecx >= 0) goto ___4259ch;
		edi ^= ecx;
___4259ch:
		if((int)edi < 0) goto ___42637h;
		if((int)edi >= 0xa) goto ___42637h;
		ebx = D(esp+0x28);
		if((int)ebx <= 0) goto ___425f5h;
		esi = D(esp+0x4);
		esi = esi*D(esp+0x20);
		edx = D(esp);
		ebp -= ebx;
		ebx = D(___243d80h);
		ecx = D(esp+0x8);
		ebx += ebp;
		esi += edx;
		edx = D(esp+0xc);
___425d5h:
		H(ecx) = L(edx);
___425d7h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___425dfh;
		B(ebx) = L(eax);
___425dfh:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___425d7h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___425d5h;
		ebp += D(esp+0xc);
___425f5h:
		esi = D(esp+0x20);
		ecx = D(esp+0x4);
		esi += edi;
		esi = esi*ecx;
		eax = D(esp);
		ebx = D(___243d80h);
		edx = D(esp+0xc);
		ebx += ebp;
		ecx = D(esp+0x8);
		esi += eax;
___42617h:
		H(ecx) = L(edx);
___42619h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___42621h;
		B(ebx) = L(eax);
___42621h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___42619h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___42617h;
		ebp += D(esp+0xc);
___42637h:
		if((int)edi <= 9) goto ___426feh;
		if((int)edi >= 0x64) goto ___426feh;
		ebx = D(esp+0x28);
		if((int)ebx <= 0) goto ___42656h;
		eax = ebx+ebx;
		ebp -= eax;
___42656h:
		esi = D(esp+0x28);
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		ebp += esi;
		esi = 0xa;
		___idiv32(&eax, &edx, esi);
		edx = D(esp+0x20);
		ecx = D(esp+0x4);
		eax += edx;
		eax = eax*ecx;
		ebx = D(___243d80h);
		ebx += ebp;
		esi = D(esp);
		edx = D(esp+0xc);
		ecx = D(esp+0x8);
		esi += eax;
___4268ch:
		H(ecx) = L(edx);
___4268eh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___42696h;
		B(ebx) = L(eax);
___42696h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___4268eh;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___4268ch;
		esi = D(esp+0xc);
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		ebp += esi;
		esi = 0xa;
		___idiv32(&eax, &edx, esi);
		eax = D(esp+0x20);
		ecx = D(esp+0x4);
		edx += eax;
		edx = edx*ecx;
		ebx = D(___243d80h);
		ebx += ebp;
		esi = D(esp);
		ecx = D(esp+0x8);
		esi += edx;
		edx = D(esp+0xc);
___426deh:
		H(ecx) = L(edx);
___426e0h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___426e8h;
		B(ebx) = L(eax);
___426e8h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___426e0h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___426deh;
		ebp += D(esp+0xc);
___426feh:
		if((int)edi <= 0x63) goto ___42819h;
		if((int)edi >= 0x3e8) goto ___42819h;
		eax = D(esp+0x2c);
		edx = edi;
		esi = 0x64;
		edx = (int)edx>>0x1f;
		ebp += eax;
		eax = edi;
		___idiv32(&eax, &edx, esi);
		edx = D(esp+0x20);
		esi = D(esp+0x4);
		eax += edx;
		esi = esi*eax;
		ebx = D(___243d80h);
		ecx = D(esp);
		ebx += ebp;
		edx = D(esp+0xc);
		esi += ecx;
		ecx = D(esp+0x8);
___42749h:
		H(ecx) = L(edx);
___4274bh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___42753h;
		B(ebx) = L(eax);
___42753h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___4274bh;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___42749h;
		ebx = 0x64;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		ebp += D(esp+0xc);
		esi = 0xa;
		edi = edx;
		eax = edx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, esi);
		edx = D(esp+0x20);
		esi = D(esp+0x4);
		eax += edx;
		esi = esi*eax;
		ebx = D(___243d80h);
		ecx = D(esp);
		ebx += ebp;
		edx = D(esp+0xc);
		esi += ecx;
		ecx = D(esp+0x8);
___427a7h:
		H(ecx) = L(edx);
___427a9h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___427b1h;
		B(ebx) = L(eax);
___427b1h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___427a9h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___427a7h;
		esi = D(esp+0xc);
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		ebp += esi;
		esi = 0xa;
		___idiv32(&eax, &edx, esi);
		edi = D(esp+0x20);
		eax = D(esp+0x4);
		edx += edi;
		edx = edx*eax;
		ecx = D(esp+0x8);
		ebx = D(___243d80h);
		esi = D(esp);
		ebx += ebp;
		esi += edx;
		edx = D(esp+0xc);
___427f9h:
		H(ecx) = L(edx);
___427fbh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___42803h;
		B(ebx) = L(eax);
___42803h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___427fbh;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___427f9h;
		ebp += D(esp+0xc);
___42819h:
		eax = ebp;

		return eax;
}
