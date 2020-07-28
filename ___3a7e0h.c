#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1124h__VESA101h_ScreenBufferA[];
	extern byte ___1a10c4h[];

void ___2aa08h(void);
void dRally_Sound_setMasterVolume(dword vol);
byte ___5994ch(void);
byte ___59b3ch(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);

void ___3a7e0h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x2c];

	eax = A1;

	D(esp) = eax;
	ebx = 0xbb80;
	ecx = 0xfffc;
	edx = 0;
	D(esp+0xc) = ebx;
	D(esp+8) = ecx;
	D(esp+4) = edx;
	D(esp+0x10) = edx;
___3a812h:
		___2aa08h();
	edx = 0xf*D(esp+0x10);
	edi = 0;
	ebp = 0xbb80;
	D(esp+0x18) = edi;
	D(esp+0x1c) = ebp;
	D(esp+0x14) = edx;
___3a82fh:
	edx = 0;
	D(esp+0x24) = edx;
	D(esp+0x28) = edx;
	edx = D(esp+0x1c);
	ebp = D(esp+0x14);
	D(esp+0x20) = edx;
___3a845h:
	ecx = D(esp+0x20);
	eax = D(esp+0x28);
	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edi = D(___1a1124h__VESA101h_ScreenBufferA);
	esi = D(___1a10c4h);
	ebx += ecx;
	edi += ecx;
	esi += eax;
	ecx = 0xf;
	ebx += ebp;
	edi += ebp;
	edx = ecx;
___3a870h:
	H(ecx) = L(edx);
___3a872h:
	L(eax) = B(esi);
	if(L(eax) == 0) goto ___3a87ch;
	L(eax) = B(edi);
	B(ebx) = L(eax);
___3a87ch:
	ebx++;
	esi++;
	edi++;
	H(ecx)--;
	if(H(ecx)) goto ___3a872h;
	ebx += 0x280;
	ebx -= edx;
	edi += 0x280;
	edi -= edx;
	L(ecx)--;
	if(L(ecx)) goto ___3a870h;
	ebp += 0xf;
	edx = D(esp+0x28);
	ebx = D(esp+0x24);
	edx += 0xe1;
	ebx++;
	D(esp+0x28) = edx;
	D(esp+0x24) = ebx;
	if((int)ebx < 0xa) goto ___3a845h;
	edi = D(esp+0x18);
	esi = D(esp+0x1c);
	edi++;
	esi += 0x2580;
	D(esp+0x18) = edi;
	D(esp+0x1c) = esi;
	if((int)edi < 0x16) goto ___3a82fh;
	ebx = 0xf*D(esp+0x10);
	edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	ecx = 0x14a;
	edx += 0xbb80;
	eax = D(esp+0xc);
	edx += ebx;
	ebx = 0x96;
	___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
	if(D(esp) != 0xffffffff) goto ___3a90bh;
	eax = D(esp+8);
	dRally_Sound_setMasterVolume(eax);
___3a90bh:
	if(D(esp) != 1) goto ___3a91ah;
	eax = D(esp+4);
	dRally_Sound_setMasterVolume(eax);
___3a91ah:
	esi = D(esp+8);
	edi = D(esp+4);
	ebp = D(esp+0x10);
	ecx = D(esp+0xc);
	esi -= 0x5f4;
	edi += 0x5f4;
	ebp++;
	ecx += 0xf;
	D(esp+8) = esi;
	D(esp+4) = edi;
	D(esp+0x10) = ebp;
	D(esp+0xc) = ecx;
	if((int)ebp < 0x2b) goto ___3a812h;
	___5994ch();
	___59b3ch();
}
