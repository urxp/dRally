#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1124h__VESA101h_ScreenBufferA[];
	extern byte ___1a10c4h[];

void ___2aa08h(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
void dRally_Sound_setMasterVolume(dword vol);
byte ___5994ch(void);
byte ___59b3ch(void);

// GOING TO PREPARE TO RACE 
void ___3a968h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];

	eax = A1;


		D(esp) = eax;
		ebx = 0xb680;
		ecx = 0xfffc;
		edx ^= edx;
		D(esp+0x8) = ebx;
		D(esp+0xc) = ecx;
		D(esp+0x4) = edx;
		D(esp+0x10) = edx;
___3a99ah:
		___2aa08h();
		edx = 0xf*D(esp+0x10);
		edi ^= edi;
		ebp = 0xbb80;
		D(esp+0x1c) = edi;
		D(esp+0x18) = ebp;
		D(esp+0x14) = edx;
___3a9b7h:
		ecx = D(esp+0x18);
		edx ^= edx;
		esi = D(esp+0x14);
		D(esp+0x20) = edx;
		D(esp+0x24) = edx;
		ebp = ecx+esi;
___3a9cch:
		eax = D(esp+0x20);
		ecx = 0xf;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edi = D(___1a1124h__VESA101h_ScreenBufferA);
		esi = D(___1a10c4h);
		edx = ecx;
		ebx += ebp;
		edi += ebp;
		esi += eax;
		ebx -= 0x500;
		edi -= 0x500;
___3a9fbh:
		H(ecx) = L(edx);
___3a9fdh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___3aa07h;
		L(eax) = B(edi);
		B(ebx) = L(eax);
___3aa07h:
		ebx++;
		esi++;
		edi++;
		H(ecx)--;
		if(H(ecx)) goto ___3a9fdh;
		ebx += 0x280;
		ebx -= edx;
		edi += 0x280;
		edi -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___3a9fbh;
		ebp += 0xf;
		edx = D(esp+0x20);
		ebx = D(esp+0x24);
		edx += 0xe1;
		ebx++;
		D(esp+0x20) = edx;
		D(esp+0x24) = ebx;
		if((int)ebx < 0xa) goto ___3a9cch;
		edi = D(esp+0x1c);
		esi = D(esp+0x18);
		edi++;
		esi += 0x2580;
		D(esp+0x1c) = edi;
		D(esp+0x18) = esi;
		if((int)edi < 0x1b) goto ___3a9b7h;
		edx = 0xf*D(esp+0x10);
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = 0x195;
		ebx += 0xbb80;
		eax = D(esp+0x8);
		edx += ebx;
		ebx = 0x96;
		edx -= 0x500;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		if(D(esp) != 0xffffffff) goto ___3aa9ch;
		eax = D(esp+0xc);
		dRally_Sound_setMasterVolume(eax);
___3aa9ch:
		if(D(esp) != 1) goto ___3aaabh;
		eax = D(esp+0x4);
		dRally_Sound_setMasterVolume(eax);
___3aaabh:
		esi = D(esp+0xc);
		edi = D(esp+0x4);
		ebp = D(esp+0x10);
		ecx = D(esp+0x8);
		esi -= 0x5f4;
		edi += 0x5f4;
		ebp++;
		ecx += 0xf;
		D(esp+0xc) = esi;
		D(esp+0x4) = edi;
		D(esp+0x10) = ebp;
		D(esp+0x8) = ecx;
		if((int)ebp < 0x2b) goto ___3a99ah;
		___5994ch();
		___59b3ch();
		return;
}
