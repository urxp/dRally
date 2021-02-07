#include "drally.h"

	extern byte ___1a1028h[];
	extern byte ___1de7d0h[];
	extern byte ___1a0ef8h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a0fe4h[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1a01e0h[];
	extern byte ___1a1ef8h[];
	extern byte ___196ab0h[];
	extern byte ___1a0fa8h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern byte ___19eb50h[];

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___38184h_cdecl(dword, dword);
void ___35f34h_cdecl(dword, dword, dword);
void ___35dd0h(void);


// HARD RACE RESULTS
void ___36718h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	byte 	esp[8];

	eax = A1;


		ebp = eax;
		if(D(___1a1028h) != 2) goto ___367b3h;
		ebx ^= ebx;
		edx ^= edx;
		D(esp+0x4) = ebx;
		ebx = 0x4;
___36747h:
		if(D(edx+___1de7d0h+0x40) != 1) goto ___3675dh;
		eax = D(esp+0x4);
		L(eax) = B(eax+___1a0ef8h+8);
		B(esp) = L(eax);
___3675dh:
		if(D(edx+___1de7d0h+0x40) != 2) goto ___36774h;
		eax = D(esp+0x4);
		L(eax) = B(eax+___1a0ef8h+8);
		B(esp+0x1) = L(eax);
___36774h:
		if(D(edx+___1de7d0h+0x40) != 3) goto ___3678bh;
		eax = D(esp+0x4);
		L(eax) = B(eax+___1a0ef8h+8);
		B(esp+0x2) = L(eax);
___3678bh:
		if(ebx != D(edx+___1de7d0h+0x40)) goto ___367a1h;
		eax = D(esp+0x4);
		L(eax) = B(eax+___1a0ef8h+8);
		B(esp+0x3) = L(eax);
___367a1h:
		ecx = D(esp+0x4);
		ecx++;
		edx += 0x54;
		D(esp+0x4) = ecx;
		if((int)ebx <= (int)ecx) goto ___367e7h;
		goto ___36747h;
___367b3h:
		ebx = 0x2;
		edx = 0x3;
		eax ^= eax;
		___35f34h_cdecl(eax, edx, ebx);
		L(eax) = B(___1a0ef8h+0xb);
		B(esp) = L(eax);
		L(eax) = B(___1a0ef8h+0xa);
		B(esp+0x1) = L(eax);
		L(eax) = B(___1a0ef8h+9);
		B(esp+0x2) = L(eax);
		L(eax) = B(___1a0ef8h+8);
		B(esp+0x3) = L(eax);
___367e7h:
		if(ebp) goto ___3684bh;
		___35dd0h();
		ecx = 0x14;
		edx = 0x110;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0fe4h);
		ebx += 0xd362;
___3680ch:
		edi = edx;
___3680eh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___36816h;
		B(ebx) = L(eax);
___36816h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___3680eh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___3680ch;
		ecx = 0xd890;
		ebx = "Hard Race Results";
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = esp;
		eax = 0x4;
		___38184h_cdecl(eax, edx);
___3684bh:
		edi ^= edi;
		D(esp+0x4) = edi;
___36851h:
		if(ebp) goto ___368d0h;
		eax = D(esp+0x4);
		edx ^= edx;
		L(edx) = B(esp+eax);
		eax = 0x6c*edx;
		if(D(eax+___1a01e0h+0xc) == 0x64) goto ___368d0h;
		if(edx != D(___1a1ef8h)) goto ___36883h;
		if(D(___196ab0h) == 1) goto ___36a27h;
___36883h:
		edx = D(esp+0x4);
		eax ^= eax;
		L(eax) = B(esp+edx);
		eax = 0x13*eax;
		eax += 0x57;
		eax = 0x280*eax;
		ecx = 0x12;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0fa8h);
		ebx += eax;
		edx = 0x2a;
		ebx += 0xd9;
___368b6h:
		edi = edx;
___368b8h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___368c0h;
		B(ebx) = L(eax);
___368c0h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___368b8h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___368b6h;
___368d0h:
		edi = D(esp+0x4);
		if(edi < 1) goto ___368edh;
		if(edi <= 1) goto ___36960h;
		if(edi == 2) goto ___369b2h;
		goto ___36a15h;
___368edh:
		if(edi) goto ___36a15h;
		edx ^= edx;
		L(edx) = B(esp+edi);
		eax = 0x6c*edx;
		if(D(eax+___1a01e0h+0xc) == 0x64) goto ___36a15h;
		if(edx != D(___1a1ef8h)) goto ___3691fh;
		if(D(___196ab0h) == 1) goto ___36a15h;
___3691fh:
		edx = D(esp+0x4);
		eax ^= eax;
		L(eax) = B(esp+edx);
		edx = 0x6c*eax;
		eax = 0x13*eax;
		eax += 0x59;
		eax = 0x280*eax;
		edi = D(edx+___1a01e0h+0x44);
		edi += 0xa;
		ebx = "+10";
		D(edx+___1a01e0h+0x44) = edi;
		ecx = eax+0xe6;
		edx = ___185c7ah;
		eax = D(___1a10b8h);
		goto ___36a10h;
___36960h:
		eax ^= eax;
		L(eax) = B(esp+edi);
		edx = 0x6c*eax;
		if(D(edx+___1a01e0h+0xc) == 0x64) goto ___36a15h;
		if(eax != D(___1a1ef8h)) goto ___3698ah;
		if(D(___196ab0h) == 1) goto ___36a15h;
___3698ah:
		eax = D(esp+0x4);
		edx ^= edx;
		L(edx) = B(esp+eax);
		eax = 0x6c*edx;
		edx = 0x13*edx;
		edx += 0x59;
		edx = 0x280*edx;
		edi = D(eax+___1a01e0h+0x44);
		edi += 0x7;
		ebx = "+7";
		goto ___369fah;
___369b2h:
		eax ^= eax;
		L(eax) = B(esp+edi);
		edx = 0x6c*eax;
		if(D(edx+___1a01e0h+0xc) == 0x64) goto ___36a15h;
		if(eax != D(___1a1ef8h)) goto ___369d4h;
		if(D(___196ab0h) == 1) goto ___36a15h;
___369d4h:
		eax = D(esp+0x4);
		edx ^= edx;
		L(edx) = B(esp+eax);
		eax = 0x6c*edx;
		edx = 0x13*edx;
		edx += 0x59;
		edx = 0x280*edx;
		edi = D(eax+___1a01e0h+0x44);
		edi += 0x4;
		ebx = "+4";
___369fah:
		D(eax+___1a01e0h+0x44) = edi;
		ecx = edx+0xe6;
		eax = D(___1a10b8h);
		edx = ___185c7ah;
___36a10h:
		___12e78h_cdecl(eax, edx, ebx, ecx);
___36a15h:
		eax = D(esp+0x4);
		eax++;
		D(esp+0x4) = eax;
		if((int)eax < 3) goto ___36851h;
___36a27h:
		if(ebp) goto ___36acfh;
		D(esp+0x4) = ebp;
		esi ^= esi;
		ebp = 0x640000;
___36a3ah:
		eax ^= eax;
		L(eax) = B(esp+4);
		nn = eax;
		edx = ebp;
		eax = D(esi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = ebp;
		eax = D(esi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = ebp;
		eax = D(esi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ecx = D(esp+0x4);
		ecx++;
		esi += 0xc;
		D(esp+0x4) = ecx;
		if((int)ecx < 0x100) goto ___36a3ah;
		___12cb8h__VESA101_PRESENTSCREEN();
___36acfh:
		return;
}
