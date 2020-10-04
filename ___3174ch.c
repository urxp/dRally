#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1124h__VESA101h_ScreenBufferA[];
	extern byte ___190bd8h[];
	extern byte ___180848h[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1854a4h[];
	extern byte ___24cc54h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___2ab50h(void);
byte ___5994ch(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

// GET BETTER CAR WARNING 
void ___3174ch_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5;

	eax = A1;

		ebp = eax;
		ecx = 0x1f400;
		ebx = 0x244;
		esi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edi = D(___1a1124h__VESA101h_ScreenBufferA);
		esi += 0x1a900;
		edx = 0xb6;
		memcpy(edi, esi, ecx);
		ecx = 0x91;
		eax = 0x21;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ecx = ebp;
		ebx = 4*ecx;
		ebx += ecx;
		ebx <<= 0x2;
		ecx = ebx;
		ebx <<= 0x4;
		esi = ___190bd8h;
		ebx -= ecx;
		esi += ebx;
		ecx = 0x1ea3c;
		ebx = esi;
		esi += 0x12c;
___317c9h:
		edx = ecx;
		eax = ebx;
		___13094h_cdecl(eax, edx);
		ebx += 0x3c;
		ecx += 0x2800;
		if(ebx != esi) goto ___317c9h;
		ecx = 0x2e250;
		ebx = ___180848h;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		eax = D(___1854a4h);
		edx = 0x17;
		eax -= 0x1000;
		ecx = D(___24cc54h);
		p5 = eax;
		ebx ^= ebx;
		eax = 0x1;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, p5, 0x8000);
___31824h:
		___2ab50h();
		L(eax) = ___5994ch();
		if(L(eax) == 0) goto ___31824h;
		ecx = 0x1f400;
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1124h__VESA101h_ScreenBufferA);
		edi += 0x1a900;
		memcpy(edi, esi, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
}
