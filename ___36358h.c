#include "drally.h"

	extern byte ___1a1028h[];
	extern byte ___1de7d0h[];
	extern byte ___1a0ef8h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a0fc4h[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1a01e0h[];
	extern byte ___1a1ef8h[];
	extern byte ___196ab0h[];
	extern byte ___1a0ff0h[];
	extern byte ___1a10b8h[];
	extern byte ___185c7ah[];
	extern byte ___19eb50h[];

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___38184h_cdecl(dword, dword);
void ___35dd0h(void);
void ___35f34h_cdecl(dword, dword, dword);

// SOMETHING WITH MEDIUM RACE RESULTS
void ___36358h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	byte 	esp[8];

	eax = A1;


		ebp = eax;
		if(D(___1a1028h) != 1) goto ___363f3h;
		ebx ^= ebx;
		edx ^= edx;
		D(esp+0x4) = ebx;
		ebx = 0x4;
___36387h:
		if(D(edx+___1de7d0h+0x40) != 1) goto ___3639dh;
		eax = D(esp+0x4);
		L(eax) = B(eax+___1a0ef8h+4);
		B(esp) = L(eax);
___3639dh:
		if(D(edx+___1de7d0h+0x40) != 2) goto ___363b4h;
		eax = D(esp+0x4);
		L(eax) = B(eax+___1a0ef8h+4);
		B(esp+1) = L(eax);
___363b4h:
		if(D(edx+___1de7d0h+0x40) != 3) goto ___363cbh;
		eax = D(esp+0x4);
		L(eax) = B(eax+___1a0ef8h+4);
		B(esp+2) = L(eax);
___363cbh:
		if(ebx != D(edx+___1de7d0h+0x40)) goto ___363e1h;
		eax = D(esp+0x4);
		L(eax) = B(eax+___1a0ef8h+4);
		B(esp+3) = L(eax);
___363e1h:
		ecx = D(esp+0x4);
		ecx++;
		edx += 0x54;
		D(esp+0x4) = ecx;
		if((int)ebx <= (int)ecx) goto ___36427h;
		goto ___36387h;
___363f3h:
		ebx = 0x1;
		edx = 0x3;
		eax ^= eax;
		___35f34h_cdecl(eax, edx, ebx);
		L(eax) = B(___1a0ef8h+7);
		B(esp) = L(eax);
		L(eax) = B(___1a0ef8h+6);
		B(esp+1) = L(eax);
		L(eax) = B(___1a0ef8h+5);
		B(esp+2) = L(eax);
		L(eax) = B(___1a0ef8h+4);
		B(esp+3) = L(eax);
___36427h:
		if(ebp) goto ___3648bh;
		___35dd0h();
		ecx = 0x14;
		edx = 0x110;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0fc4h);
		ebx += 0xd362;
___3644ch:
		edi = edx;
___3644eh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___36456h;
		B(ebx) = L(eax);
___36456h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___3644eh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___3644ch;
		ecx = 0xd890;
		ebx = "Medium Race Results";
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = esp;
		eax = 0x4;
		___38184h_cdecl(eax, edx);
___3648bh:
		edi ^= edi;
		D(esp+0x4) = edi;
___36491h:
		if(ebp) goto ___3650fh;
		edx = D(esp+0x4);
		eax ^= eax;
		L(eax) = B(esp+edx);
		edx = 0x6c*eax;
		if(D(edx+___1a01e0h+0xc) == 0x64) goto ___3650fh;
		if(eax != D(___1a1ef8h)) goto ___364c3h;
		if(D(___196ab0h) == 1) goto ___36664h;
___364c3h:
		edx = D(esp+0x4);
		eax ^= eax;
		L(eax) = B(esp+edx);
		eax = 0x13*eax;
		eax += 0x57;
		edx = 0x280*eax;
		ecx = 0x12;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0ff0h);
		eax += edx;
		edx = 0x2a;
		ebx = eax+0xd9;
___364f5h:
		edi = edx;
___364f7h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___364ffh;
		B(ebx) = L(eax);
___364ffh:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___364f7h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___364f5h;
___3650fh:
		edi = D(esp+0x4);
		if(edi < 1) goto ___3652ch;
		if(edi <= 1) goto ___3659fh;
		if(edi == 2) goto ___365f1h;
		goto ___36652h;
___3652ch:
		if(edi) goto ___36652h;
		eax ^= eax;
		L(eax) = B(esp+edi);
		edx = 0x6c*eax;
		if(D(edx+___1a01e0h+0xc) == 0x64) goto ___36652h;
		if(eax != D(___1a1ef8h)) goto ___3655eh;
		if(D(___196ab0h) == 1) goto ___36652h;
___3655eh:
		eax = D(esp+0x4);
		edx ^= edx;
		L(edx) = B(esp+eax);
		eax = 0x6c*edx;
		edx = 0x13*edx;
		edx += 0x59;
		edx = 0x280*edx;
		edi = D(eax+___1a01e0h+0x44);
		edi += 0x5;
		ebx = "+5";
		D(eax+___1a01e0h+0x44) = edi;
		ecx = edx+0xe6;
		eax = D(___1a10b8h);
		edx = ___185c7ah;
		goto ___3664dh;
___3659fh:
		eax ^= eax;
		L(eax) = B(esp+edi);
		edx = 0x6c*eax;
		if(D(edx+___1a01e0h+0xc) == 0x64) goto ___36652h;
		if(eax != D(___1a1ef8h)) goto ___365c9h;
		if(D(___196ab0h) == 1) goto ___36652h;
___365c9h:
		eax = D(esp+0x4);
		edx ^= edx;
		L(edx) = B(esp+eax);
		eax = 0x6c*edx;
		edx = 0x13*edx;
		edx += 0x59;
		ecx = 0x280*edx;
		edi = D(eax+___1a01e0h+0x44);
		edi += 0x3;
		ebx = "+3";
		goto ___36637h;
___365f1h:
		eax ^= eax;
		L(eax) = B(esp+edi);
		edx = 0x6c*eax;
		if(D(edx+___1a01e0h+0xc) == 0x64) goto ___36652h;
		if(eax != D(___1a1ef8h)) goto ___36613h;
		if(D(___196ab0h) == 1) goto ___36652h;
___36613h:
		eax = D(esp+0x4);
		edx ^= edx;
		L(edx) = B(esp+eax);
		eax = 0x6c*edx;
		edx = 0x13*edx;
		edx += 0x59;
		ecx = 0x280*edx;
		edi = D(eax+___1a01e0h+0x44);
		edi++;
		ebx = "+1";
___36637h:
		D(eax+___1a01e0h+0x44) = edi;
		eax = D(___1a10b8h);
		edx = ___185c7ah;
		ecx += 0xe6;
___3664dh:
		___12e78h_cdecl(eax, edx, ebx, ecx);
___36652h:
		eax = D(esp+0x4);
		eax++;
		D(esp+0x4) = eax;
		if((int)eax < 3) goto ___36491h;
___36664h:
		if(ebp) goto ___3670ch;
		D(esp+0x4) = ebp;
		esi ^= esi;
		ebp = 0x640000;
___36677h:
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
		if((int)ecx < 0x100) goto ___36677h;
		___12cb8h__VESA101_PRESENTSCREEN();
___3670ch:
		return;
}
