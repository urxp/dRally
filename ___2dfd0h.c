#include "drally.h"

	extern byte ___1a1ef0h[];
	extern byte ___1854b0h[];
	extern byte ___24cc54h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___2d294h(void);
void ___281d0h_cdecl(dword, dword, dword, dword);
void ___27f80h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2d728h(void);
void ___2d898h(void);
void ___2da10h(void);
void ___2db88h(void);

// MARKET CONTROL
void ___2dfd0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		if((int)D(___1a1ef0h) <= 0) goto ___2e00ch;
		edx = 0x1a;
		eax = 0x1;
		ecx = D(___24cc54h);
		ebx = 0;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, D(___1854b0h), 0x8000);
___2e00ch:
		ecx = D(___1a1ef0h);
		ecx--;
		if(ecx > 4) goto ___2e199h;
		switch(ecx){
		case 0: goto ___2e024h;
		case 1: goto ___2e06eh;
		case 2: goto ___2e0b9h;
		case 3: goto ___2e104h;
		case 4: goto ___2e152h;
		default: goto ___2e199h;
		}
___2e024h:
		ecx = 0x72;
		ebx = 0x6c;
		eax = 0;
		edx = 0xf3;
		D(___1a1ef0h) = eax;
		___2d294h();
		eax = 0xa;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0x73;
		eax = 0xa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e06eh:
		ebp = 0x1;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		D(___1a1ef0h) = ebp;
		___2d728h();
		eax = ecx;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0xa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e0b9h:
		edi = 0x2;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		D(___1a1ef0h) = edi;
		___2d898h();
		eax = 0xda;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = ecx;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e104h:
		esi = 0x3;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		D(___1a1ef0h) = esi;
		___2da10h();
		eax = 0x142;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0xda;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e152h:
		ecx = 0x4;
		ebx = 0x6c;
		edx = 0xf3;
		D(___1a1ef0h) = ecx;
		___2db88h();
		ecx = 0x72;
		eax = 0x1aa;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0x142;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___2e199h:
		return;
}
