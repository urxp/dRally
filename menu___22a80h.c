#include "drally.h"
#include "drally_keyboard.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10e4h__VESA101h_DefaultScreenBufferA[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a10dch[];
	extern byte ___1a0e28h[];
	extern byte ___180724h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern byte ___1a0e34h[];
	extern byte ___1a0e38h[];
	extern byte ___18768ah[];
	extern byte ___1a1100h__VESA101h_DefaultScreenBuffer[];
	extern byte ___1a1ef4h[];
	extern byte ___19bd60h[];
	extern byte ___1a10ach[];
	extern byte ___196abch[];
	extern byte ___1a1040h[];
	extern byte ___1a10a4h[];
	extern byte ___1854b0h[];
	extern byte ___24cc54h[];

char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___3a7e0h_cdecl(dword);
void ___21fd4h_cdecl(dword);
void ___27f80h_cdecl(dword, dword, dword, dword);
dword dRally_Sound_getPosition(void);
byte dRally_Sound_setPosition(dword pos_n);
void dRally_Sound_setMasterVolume(dword vol);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
byte ___5994ch(void);
byte ___59b3ch(void);
void ___2ab50h(void);
void ___23758h(void);
void ___3a6a4h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void restoreDefaultScreenBuffer(void);

void menu___22a80h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x40];

		ecx = 0x4b000;
		edx = 0x280;
		esi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edi = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
		ebp = 0x169ad;
		memcpy(edi, esi, ecx);
		ecx = 0x28f00;
		eax = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR) = eax;
		esi += 0x10680;
		edi = eax+0x10680;
		D(esp+0x3c) = ebp;
		memcpy(edi, esi, ecx);
		ecx = 0x36;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10dch);
		ebx += 0xd200;
		ebp = 0;
___22b0ch:
		edi = edx;
___22b0eh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___22b16h;
		B(ebx) = L(eax);
___22b16h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___22b0eh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___22b0ch;
		ebx = 0x16889;
		ecx = ___1a0e28h;
		esi = 0x16950;
		edx = 0;
		edi = 0x16948;
		D(esp+0x28) = edx;
		D(esp+0x2c) = ebx;
		D(esp+0x34) = ecx;
		D(esp+0x38) = esi;
		D(esp+0x30) = edi;
___22b50h:
		eax = D(esp+0x28);
		ebx = 0xa;
		edx = esp;
		esi = ___180724h;
		eax++;
		edi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		edx = D(esp+0x28);
		strcat(edi, esi);
		eax = 0x16*edx;
		eax += 0x90;
		eax = 0x280*eax;
		if(edx != 9) goto ___22ba8h;
		ebx = esp;
		ecx = eax+0x1c;
		goto ___22badh;
___22ba8h:
		ebx = esp;
		ecx = eax+0x24;
___22badh:
		edx = ___185c7ah;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		esi = D(esp+0x34);
		edi = esp;
		strcpy(edi, esi);
		eax = esp;
		ecx = D(esp+0x28);
		eax = strupr_watcom106(eax);
		eax = 0x16*ecx;
		eax += 0x90;
		esi = 0x280*eax;
		ebx = esp;
		edx = ___185c7ah;
		ecx = D(esp+0x2c);
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ebx = 0xa;
		edx = esp;
		eax = D(ebp+___1a0e34h);
		eax = itoa_watcom106(eax, edx, ebx);
		edi = D(ebp+___1a0e34h);
		if((int)edi < 0) goto ___22c42h;
		if((int)edi >= 0xa) goto ___22c42h;
		ebx = esp;
		edx = ___185c7ah;
		eax = D(___1a10b8h);
		ecx = esi+0x158;
		___12e78h_cdecl(eax, edx, ebx, ecx);
___22c42h:
		edx = D(ebp+___1a0e34h);
		if((int)edx < 0xa) goto ___22c67h;
		if((int)edx >= 0x64) goto ___22c67h;
		ecx = D(esp+0x38);
		ebx = esp;
		edx = ___185c7ah;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
___22c67h:
		if((int)D(ebp+___1a0e34h) < 0x64) goto ___22c85h;
		ecx = D(esp+0x30);
		ebx = esp;
		edx = ___185c7ah;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
___22c85h:
		esi = 0x18*D(ebp+___1a0e38h);
		ecx = D(esp+0x3c);
		edx = ___185c7ah;
		edi = esp;
		esi = esi+___18768ah;
		ebp += 0x14;
		strcpy(edi, esi);
		eax = esp;
		edi = D(esp+0x28);
		eax = strupr_watcom106(eax);
		esi = D(___1a10b8h);
		ebx = eax;
		eax = esi;
		edi++;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		D(esp+0x28) = edi;
		eax = D(esp+0x2c);
		edx = D(esp+0x34);
		ebx = D(esp+0x38);
		ecx = D(esp+0x30);
		esi = D(esp+0x3c);
		eax += 0x3700;
		edx += 0x14;
		ebx += 0x3700;
		ecx += 0x3700;
		esi += 0x3700;
		D(esp+0x2c) = eax;
		D(esp+0x34) = edx;
		D(esp+0x38) = ebx;
		D(esp+0x30) = ecx;
		D(esp+0x3c) = esi;
		if((int)edi < 0xa) goto ___22b50h;
		restoreDefaultScreenBuffer();
		eax = 0xffffffff;
		___3a7e0h_cdecl(eax);
		eax = dRally_Sound_getPosition();
		eax &= 0xff00;
		D(___1a1ef4h) = eax;
		eax = 0x5100;
		dRally_Sound_setPosition(eax);
		eax = 0x10000;
		dRally_Sound_setMasterVolume(eax);
		eax = ___5994ch();
		eax = ___59b3ch();
		edx = 0;
___22d67h:
		___2ab50h();
		eax = ___5994ch();
		H(eax) = L(eax);
		if(L(eax) != 0x3b) goto ___22d86h;
		if(edx == D(___19bd60h)) goto ___22d86h;
		___23758h();
		H(eax) = L(edx);
___22d86h:
		if(H(eax) == 0) goto ___22d67h;
		eax = ___5994ch();
		eax = ___59b3ch();
		ecx = 0x4b000;
		esi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edi = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
		memcpy(edi, esi, ecx);
		ecx = 0x2c380;
		eax = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR) = eax;
		esi += 0xd200;
		edi = eax+0xd200;
		edx = 0x280;
		memcpy(edi, esi, ecx);
		ecx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10ach);
		ebx += 0xe600;
___22e02h:
		edi = edx;
___22e04h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___22e0ch;
		B(ebx) = L(eax);
___22e0ch:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___22e04h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___22e02h;
		eax = 0;
		ecx = 0x62;
		L(eax) = B(___196abch);
		edx = 0x80;
		___21fd4h_cdecl(eax);
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = B(___196abch);
		ebx += 0x21728;
		esi = D(4*esi+___1a1040h);
		L(edx) >>= 2;
___22e4fh:
		H(ecx) = L(edx);
___22e51h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___22e51h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___22e4fh;
		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23a18;
		L(edx) >>= 2;
___22e90h:
		H(ecx) = L(edx);
___22e92h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___22e92h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___22e90h;
		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23aa8;
		esi += 0x540;
		L(edx) >>= 2;
___22ed7h:
		H(ecx) = L(edx);
___22ed9h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___22ed9h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___22ed7h;
		ecx = 0x75;
		ebx = 0xb2;
		edx = 0xcc;
		eax = 0xf;
		ebp = 0;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		edi = 0;
		restoreDefaultScreenBuffer();
		___3a6a4h();
___22f25h:
		___2ab50h();
		eax = ___5994ch();
		if(L(eax) < 0x4b) goto ___22f63h;
		if(L(eax) <= 0x4b) goto ___22f9ah;
		if(L(eax) < 0x9c) goto ___22f56h;
		if(L(eax) <= 0x9c) goto ___231eeh;
		if(L(eax) < 0xcb) goto ___231f3h;
		if(L(eax) <= 0xcb) goto ___22f9ah;
		if(L(eax) == 0xcd) goto ___230c3h;
		goto ___231f3h;
___22f56h:
		if(L(eax) == 0x4d) goto ___230c3h;
		goto ___231f3h;
___22f63h:
		if(L(eax) < 0x1c) goto ___22f76h;
		if(L(eax) <= 0x1c) goto ___231eeh;
		if(L(eax) == 0x3b) goto ___22f83h;
		goto ___231f3h;
___22f76h:
		if(L(eax) == 1) goto ___231eeh;
		goto ___231f3h;
___22f83h:
		if(D(___19bd60h) == 0) goto ___231f3h;
		___23758h();
		goto ___231f3h;
___22f9ah:
		if((int)ebp <= 0) goto ___22fa1h;
		ebp--;
		goto ___22fa6h;
___22fa1h:
		ebp = 0x11;
___22fa6h:
		edx = 0x1a;
		esi = D(___1854b0h);
		eax = 1;
		ecx = D(___24cc54h);
		ebx = 0;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, esi, 0x8000);
		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23a18;
		esi += 0xa80;
		L(edx) >>= 2;
___22feeh:
		H(ecx) = L(edx);
___22ff0h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___22ff0h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___22feeh;
		ecx = 0x62;
		edx = 0x80;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = B(ebp+___196abch);
		ebx += 0x21728;
		esi = D(4*esi+___1a1040h);
		L(edx) >>= 2;
___23037h:
		H(ecx) = L(edx);
___23039h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___23039h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___23037h;
		eax = 0;
		L(eax) = B(ebp+___196abch);
		edx = 0;
		___21fd4h_cdecl(eax);
		___12cb8h__VESA101_PRESENTSCREEN();
___2306dh:
		edx++;
		___2ab50h();
		if((int)edx < 8) goto ___2306dh;
		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23a18;
		L(edx) >>= 2;
___23097h:
		H(ecx) = L(edx);
___23099h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___23099h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___23097h;
		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___231f3h;
___230c3h:
		if((int)ebp >= 0x11) goto ___230cbh;
		ebp++;
		goto ___230cdh;
___230cbh:
		ebp = 0;
___230cdh:
		edx = 0x1a;
		ecx = D(___1854b0h);
		eax = 1;
		ebx = 0;
		dRally_Sound_pushEffect(eax, edx, ebx, D(___24cc54h), ecx, 0x8000);
		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23aa8;
		esi += 0xfc0;
		L(edx) >>= 2;
___23115h:
		H(ecx) = L(edx);
___23117h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___23117h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___23115h;
		ecx = 0x62;
		eax = 0;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		L(eax) = B(ebp+___196abch);
		edx = 0x80;
		ebx += 0x21728;
		esi = D(4*eax+___1a1040h);
		L(edx) >>= 2;
___2315fh:
		H(ecx) = L(edx);
___23161h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___23161h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2315fh;
		eax = 0;
		L(eax) = B(ebp+___196abch);
		edx = 0;
		___21fd4h_cdecl(eax);
		___12cb8h__VESA101_PRESENTSCREEN();
___23195h:
		edx++;
		___2ab50h();
		if((int)edx < 8) goto ___23195h;
		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23aa8;
		esi += 0x540;
		L(edx) >>= 2;
___231c5h:
		H(ecx) = L(edx);
___231c7h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___231c7h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___231c5h;
		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___231f3h;
___231eeh:
		edi = 0xffffffff;
___231f3h:
		if(edi == 0) goto ___22f25h;
		ecx = 0x4b000;
		esi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edi = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
		memcpy(edi, esi, ecx);
		eax = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR) = eax;
}
