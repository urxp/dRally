#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1eb0h[];

// GAME OVER, MY HALL OF FAME POSITON BORDER
void ___27d24h_cdecl(dword A1, dword A2, dword A3, dword A4){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x10];

	eax = A1;
	edx = A2;
	ebx = A3;
	ecx = A4;

		ebp = eax;
		D(esp+0x8) = edx;
		D(esp+0xc) = ebx;
		D(esp+0x4) = ecx;
		eax = 4*edx;
		eax += edx;
		eax <<= 0x7;
		D(esp) = eax;
		ecx = 0xc;
		edx = D(esp);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1eb0h);
		eax += edx;
		edx = 0x18;
		ebx = eax+ebp;
___27d6eh:
		edi = edx;
___27d70h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___27d78h;
		B(ebx) = L(eax);
___27d78h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___27d70h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___27d6eh;
		ebx = D(esp);
		ecx = 0xc;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x18;
		eax += ebx;
		ebx = D(esp+0xc);
		eax += ebp;
		esi = D(___1a1eb0h);
		ebx += eax;
		esi += 0x240;
		ebx -= 0x18;
___27db3h:
		edi = edx;
___27db5h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___27dbdh;
		B(ebx) = L(eax);
___27dbdh:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___27db5h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___27db3h;
		eax = D(esp+0x8);
		eax += D(esp+4);
		edx = eax-0xc;
		eax = 4*edx;
		eax += edx;
		eax <<= 0x7;
		D(esp) = eax;
		ecx = 0xc;
		esi = D(esp);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x18;
		eax += esi;
		esi = D(___1a1eb0h);
		ebx = eax+ebp;
		esi += 0x5a0;
___27e0ah:
		edi = edx;
___27e0ch:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___27e14h;
		B(ebx) = L(eax);
___27e14h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___27e0ch;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___27e0ah;
		edi = D(esp);
		ebx = D(esp+0xc);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = 0xc;
		eax += edi;
		edx = 0x18;
		eax += ebp;
		esi = D(___1a1eb0h);
		ebx += eax;
		esi += 0x7e0;
		ebx -= 0x18;
___27e4fh:
		edi = edx;
___27e51h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___27e59h;
		B(ebx) = L(eax);
___27e59h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___27e51h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___27e4fh;
		edx = D(esp+0x8);
		edx += 0x2;
		ebx = D(esp+0xc);
		esi = 4*edx;
		eax ^= eax;
		esi += edx;
		ebx -= 0x30;
		esi <<= 0x7;
		if((int)ebx <= 0) goto ___27e9dh;
___27e89h:
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx += esi;
		eax++;
		edx += ebp;
		B(edx+eax+0x17) = 0x16;
		if((int)eax < (int)ebx) goto ___27e89h;
___27e9dh:
		edx = D(esp+0x8);
		edx += D(esp+4);
		edx -= 0x3;
		eax ^= eax;
		esi = 4*edx;
		ebx = D(esp+0xc);
		esi += edx;
		ebx -= 0x30;
		esi <<= 0x7;
		if((int)ebx <= 0) goto ___27ed5h;
___27ec1h:
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx += esi;
		eax++;
		edx += ebp;
		B(edx+eax+0x17) = 0x16;
		if((int)eax < (int)ebx) goto ___27ec1h;
___27ed5h:
		edx = D(esp+0x8);
		esi = D(esp+0x4);
		ebx = 4*edx;
		esi -= 0x30;
		ebx += edx;
		edx = 4*esi;
		edx += esi;
		ebx <<= 0x7;
		edx <<= 0x7;
		ecx = ebx+0x3c00;
		edx += 0x3c00;
		ebx += edx;
		eax = ecx;
		if((int)ecx >= (int)ebx) goto ___27f22h;
___27f0ch:
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx += eax;
		eax += 0x280;
		B(edx+ebp+2) = 0x16;
		if((int)eax < (int)ebx) goto ___27f0ch;
___27f22h:
		edx = D(esp+0x8);
		ebx = D(esp+0x4);
		esi = 4*edx;
		ebx -= 0x30;
		esi += edx;
		edx = 4*ebx;
		edx += ebx;
		esi <<= 0x7;
		edx <<= 0x7;
		ecx = esi+0x3c00;
		edx += 0x3c00;
		ebx = esi+edx;
		eax = ecx;
		if((int)ecx >= (int)ebx) goto ___27f77h;
		ecx = D(esp+0xc);
___27f5eh:
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx += eax;
		edx += ebp;
		edx += ecx;
		eax += 0x280;
		B(edx-3) = 0x16;
		if((int)eax < (int)ebx) goto ___27f5eh;
___27f77h:
		return;
}
