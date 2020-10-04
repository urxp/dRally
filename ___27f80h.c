#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1eb0h[];

// SHOP, UNDERGROUND, RACE SIGNUP COPPER FRAME
void ___27f80h_cdecl(dword A1, dword A2, dword A3, dword A4){

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
		ecx = 0x18;
		edx = D(esp);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1eb0h);
		eax += edx;
		edx = ecx;
		ebx = eax+ebp;
___27fc7h:
		edi = edx;
___27fc9h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___27fd1h;
		B(ebx) = L(eax);
___27fd1h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___27fc9h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___27fc7h;
		ebx = D(esp);
		ecx = 0x18;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1eb0h);
		eax += ebx;
		ebx = D(esp+0xc);
		eax += ebp;
		esi += 0x240;
		ebx += eax;
		edx = ecx;
		ebx -= 0x18;
___28009h:
		edi = edx;
___2800bh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___28013h;
		B(ebx) = L(eax);
___28013h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___2800bh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___28009h;
		eax = D(esp+0x8);
		eax += D(esp+0x4);
		edx = eax-0x18;
		eax = 4*edx;
		eax += edx;
		eax <<= 0x7;
		D(esp) = eax;
		ecx = 0x18;
		esi = D(esp);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = ecx;
		eax += esi;
		esi = D(___1a1eb0h);
		ebx = eax+ebp;
		esi += 0x480;
___2805dh:
		edi = edx;
___2805fh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___28067h;
		B(ebx) = L(eax);
___28067h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___2805fh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___2805dh;
		edi = D(esp);
		ebx = D(esp+0xc);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = 0x18;
		eax += edi;
		esi = D(___1a1eb0h);
		eax += ebp;
		esi += 0x6c0;
		ebx += eax;
		edx = ecx;
		ebx -= 0x18;
___2809fh:
		edi = edx;
___280a1h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___280a9h;
		B(ebx) = L(eax);
___280a9h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___280a1h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___2809fh;
		edx = D(esp+0x8);
		edx += 0x2;
		ebx = D(esp+0xc);
		esi = 4*edx;
		eax ^= eax;
		esi += edx;
		ebx -= 0x30;
		esi <<= 0x7;
		if((int)ebx <= 0) goto ___280edh;
___280d9h:
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx += esi;
		eax++;
		edx += ebp;
		B(edx+eax+0x17) = 0x16;
		if((int)eax < (int)ebx) goto ___280d9h;
___280edh:
		edx = D(esp+0x8);
		edx += D(esp+0x4);
		edx -= 0x3;
		eax ^= eax;
		esi = 4*edx;
		ebx = D(esp+0xc);
		esi += edx;
		ebx -= 0x30;
		esi <<= 0x7;
		if((int)ebx <= 0) goto ___28125h;
___28111h:
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx += esi;
		eax++;
		edx += ebp;
		B(edx+eax+0x17) = 0x16;
		if((int)eax < (int)ebx) goto ___28111h;
___28125h:
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
		if((int)ecx >= (int)ebx) goto ___28172h;
___2815ch:
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx += eax;
		eax += 0x280;
		B(edx+ebp+2) = 0x16;
		if((int)eax < (int)ebx) goto ___2815ch;
___28172h:
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
		if((int)ecx >= (int)ebx) goto ___281c7h;
		ecx = D(esp+0xc);
___281aeh:
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx += eax;
		edx += ebp;
		edx += ecx;
		eax += 0x280;
		B(edx-3) = 0x16;
		if((int)eax < (int)ebx) goto ___281aeh;
___281c7h:
		return;
}
