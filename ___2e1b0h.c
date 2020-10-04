#include "drally.h"

	extern byte ___1a1ef0h[];
	extern byte ___1854b0h[];
	extern byte ___24cc54h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___2d898h(void);
void ___281d0h_cdecl(dword, dword, dword, dword);
void ___27f80h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2da10h(void);
void ___2db88h(void);
void ___2ddc8h(void);

// MARKET CONTROL
void ___2e1b0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		if((int)D(___1a1ef0h) >= 5) goto ___2e1ech;
		edx = 0x1a;
		eax = 0x1;
		ecx = D(___24cc54h);
		ebx = 0;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, D(___1854b0h), 0x8000);
___2e1ech:
		ecx = D(___1a1ef0h);
		ecx--;
		if(ecx > 3) goto ___2e32fh;
		switch(ecx){
		case 0: goto ___2e204h;
		case 1: goto ___2e24fh;
		case 2: goto ___2e29ah;
		case 3: goto ___2e2e8h;
		default: goto ___2e32fh;
		}
___2e204h:
		ebp = 0x2;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		D(___1a1ef0h) = ebp;
		___2d898h();
		eax = 0xa;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = ecx;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e24fh:
		edi = 0x3;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		D(___1a1ef0h) = edi;
		___2da10h();
		eax = ecx;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0xda;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e29ah:
		esi = 0x4;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		D(___1a1ef0h) = esi;
		___2db88h();
		eax = 0xda;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0x142;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e2e8h:
		ecx = 0x5;
		ebx = 0x6c;
		edx = 0xf3;
		D(___1a1ef0h) = ecx;
		___2ddc8h();
		ecx = 0x72;
		eax = 0x142;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0x1aa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___2e32fh:
		return;
}
