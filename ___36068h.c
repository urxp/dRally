#include "drally.h"

	extern byte ___1a1028h[];
	extern byte ___1de810h[];
	extern byte ___1a0ef8h[];
	extern byte ___1a0efbh[];
	extern byte ___1a0efah[];
	extern byte ___1a0ef9h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a0fech[];
	extern byte ___1824ech[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1a01ech[];
	extern byte ___1a1ef8h[];
	extern byte ___196ab0h[];
	extern byte ___1a0fb0h[];
	extern byte ___1a0224h[];
	extern byte ___182500h[];
	extern byte ___182504h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern byte ___182508h[];
	extern byte ___18250ch[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___38184h_cdecl(dword, dword);
void ___35dd0h(void);
void ___35f34h_cdecl(dword, dword, dword);

// SOMETHING WITH EASY RACE RESULTS
void ___36068h_cdecl(dword A1){

    dword   eax, ebx, ecx, edx, edi, esi, ebp;
    byte    esp[8];

    eax = A1;


		D(esp+0x4) = eax;
		edx = D(___1a1028h);
		if(edx) goto ___360e5h;
		ebx = 0x4;
		ebp ^= ebp;
___36090h:
		if(D(edx+___1de810h) != 1) goto ___360a2h;
		L(eax) = B(ebp+___1a0ef8h);
		B(esp) = L(eax);
___360a2h:
		if(D(edx+___1de810h) != 2) goto ___360b5h;
		L(eax) = B(ebp+___1a0ef8h);
		B(esp+1) = L(eax);
___360b5h:
		if(D(edx+___1de810h) != 3) goto ___360c8h;
		L(eax) = B(ebp+___1a0ef8h);
		B(esp+2) = L(eax);
___360c8h:
		if(ebx != D(edx+___1de810h)) goto ___360dah;
		L(eax) = B(ebp+___1a0ef8h);
		B(esp+3) = L(eax);
___360dah:
		ebp++;
		edx += 0x54;
		if((int)ebp >= 4) goto ___36116h;
		goto ___36090h;
___360e5h:
		edx = 0x3;
		ebx ^= ebx;
		eax ^= eax;
        ___35f34h_cdecl(eax, edx, ebx);
		L(eax) = B(___1a0efbh);
		B(esp) = L(eax);
		L(eax) = B(___1a0efah);
		B(esp+1) = L(eax);
		L(eax) = B(___1a0ef9h);
		B(esp+2) = L(eax);
		L(eax) = B(___1a0ef8h);
		B(esp+3) = L(eax);
___36116h:
		if(D(esp+4) != 0) goto ___3617dh;
        ___35dd0h();
		ecx = 0x14;
		edx = 0x110;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0fech);
		ebx += 0xd362;
___3613eh:
		edi = edx;
___36140h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___36148h;
		B(ebx) = L(eax);
___36148h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___36140h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___3613eh;
		ecx = 0xd890;
		ebx = ___1824ech;
		edx = ___185c0bh;
		eax = D(___1a1108h);
        ___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = esp;
		eax = 0x4;
	    ___38184h_cdecl(eax, edx);
___3617dh:
		ebp ^= ebp;
___3617fh:
		if(D(esp+4) != 0) goto ___361f5h;
		eax ^= eax;
		L(eax) = B(esp+ebp);
		edx = 0x6c*eax;
		if(D(edx+___1a01ech) == 0x64) goto ___361f5h;
		if(eax != D(___1a1ef8h)) goto ___361ach;
		if(D(___196ab0h) == 1) goto ___36328h;
___361ach:
		eax ^= eax;
		L(eax) = B(esp+ebp);
		eax = 0x13*eax;
		eax += 0x57;
		eax = 0x280*eax;
		ecx = 0x12;
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0fb0h);
		eax += edx;
		edx = 0x2a;
		ebx = eax+0xd9;
___361dbh:
		edi = edx;
___361ddh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___361e5h;
		B(ebx) = L(eax);
___361e5h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___361ddh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___361dbh;
___361f5h:
		if(ebp < 1) goto ___3620ah;
        if(ebp <= 1) goto ___36263h;
		if(ebp == 2) goto ___362c1h;
		goto ___3631eh;
___3620ah:
		if(ebp) goto ___3631eh;
		eax ^= eax;
		L(eax) = B(esp+ebp);
		edx = 0x6c*eax;
		if(D(edx+___1a01ech) == 0x64) goto ___3631eh;
		if(eax != D(___1a1ef8h)) goto ___3623ch;
		if(D(___196ab0h) == 1) goto ___3631eh;
___3623ch:
		edx ^= edx;
		L(edx) = B(esp+ebp);
		eax = 0x6c*edx;
		edx = 0x13*edx;
		ecx = edx+0x59;
		ecx = 0x280*ecx;
		edi = D(eax+___1a0224h);
		edi += 0x3;
		ebx = ___182500h;
		goto ___36303h;
___36263h:
		eax ^= eax;
		L(eax) = B(esp+ebp);
		edx = 0x6c*eax;
		if(D(edx+___1a01ech) == 0x64) goto ___3631eh;
		if(eax != D(___1a1ef8h)) goto ___3628dh;
		if(D(___196ab0h) == 1) goto ___3631eh;
___3628dh:
		eax ^= eax;
		L(eax) = B(esp+ebp);
		edx = 0x6c*eax;
		eax = 0x13*eax;
		eax += 0x59;
		ecx = 0x280*eax;
		edi = D(edx+___1a0224h);
		edi += 0x2;
		ebx = ___182504h;
		D(edx+___1a0224h) = edi;
		edx = ___185c7ah;
		eax = D(___1a10b8h);
		goto ___36313h;
___362c1h:
		eax ^= eax;
		L(eax) = B(esp+ebp);
		edx = 0x6c*eax;
		if(D(edx+___1a01ech) == 0x64) goto ___3631eh;
		if(eax != D(___1a1ef8h)) goto ___362e3h;
		if(D(___196ab0h) == 1) goto ___3631eh;
___362e3h:
		edx ^= edx;
		L(edx) = B(esp+ebp);
		eax = 0x6c*edx;
		edx = 0x13*edx;
		edx += 0x59;
		ecx = 0x280*edx;
		edi = D(eax+___1a0224h);
		edi++;
		ebx = ___182508h;
___36303h:
		D(eax+___1a0224h) = edi;
		eax = D(___1a10b8h);
		edx = ___185c7ah;
___36313h:
		ecx += 0xe6;
        ___12e78h_cdecl(eax, edx, ebx, ecx);
___3631eh:
		ebp++;
		if((int)ebp < 3) goto ___3617fh;
___36328h:
		if(D(esp+4) != 0) goto ___3634dh;
		ecx = 0x46b6e;
		ebx = ___18250ch;
		edx = ___185c0bh;
		eax = D(___1a1108h);
        ___12e78h_cdecl(eax, edx, ebx, ecx);
        ___12cb8h__VESA101_PRESENTSCREEN();
___3634dh:
		return;
}
