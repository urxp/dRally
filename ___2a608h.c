#include "drally.h"

	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte ___180848h[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte kmap[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
byte ___5994ch(void);
byte ___59b3ch(void);
void ___2ab50h(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
dword ___252e0h_cdecl(dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

void ___2a608h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5;
	
	eax = A1;
		esi = eax;
		p5 = 1;
		ecx = 0x5a;
		ebx = 0x1ac;
		edx = 0xd2;
		eax = 0x6e;
		___13248h_cdecl(eax, edx, ebx, ecx, p5);
		ecx = 0x24044;
		eax = esi;
		edx = ___185ba9h;
		eax = ___252e0h_cdecl(eax);
		ebx = esi;
		ecx -= eax;
		eax = D(___1a10cch);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x2a650;
		ebx = ___180848h;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		L(eax) = ___5994ch();
		L(eax) = ___59b3ch();
___2a67ah:
		L(eax) = ___5994ch();
		if(L(eax) != 0) goto ___2a68ah;
		___2ab50h();
		goto ___2a67ah;
___2a68ah:
		H(eax) = 0;
		B(kmap+0x3c) = H(eax);
		B(kmap+0x3d) = H(eax);
		L(eax) = ___5994ch();
		L(eax) = ___59b3ch();
		return;
}
