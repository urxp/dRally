#include "drally.h"

	extern byte ___180144h[];
	extern byte ___1a54d0h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];

void bpk_decode2(void *, void *);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3d1f0h(void);
void __VRETRACE_WAIT_FOR_START(void);
byte ___5994ch(void);
void ___3d2bch(void);
void bpa_read(const char *, void *, const char *);
void ___3d154h(const char * pal_name);

// LOAD SLIDE PALETTE
dword ___3d9c0h_cdecl(dword A1, dword A2, dword A3){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


	eax = A1;
	edx = A2;
	ebx = A3;

		esi = ebx;
		___3d154h(eax);
		eax = ___180144h;
		ebx = edx;
		edx = ___1a54d0h;
		bpa_read(eax, edx, ebx);
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		bpk_decode2(edx, ___1a54d0h);
		___12cb8h__VESA101_PRESENTSCREEN();
		___3d1f0h();
		eax = esi;
		esi <<= 0x4;
		esi -= eax;
		L(edx) = 0;
		esi <<= 0x2;
___3da0bh:
		if((int)esi <= 0) goto ___3da20h;
		__VRETRACE_WAIT_FOR_START();
		L(eax) = ___5994ch();
		esi--;
		L(edx) = L(eax);
		if(L(eax) == 0) goto ___3da0bh;
___3da20h:
		___3d2bch();
		if(L(edx) == 0x1c) goto ___3da38h;
		if(L(edx) == 0x39) goto ___3da38h;
		if(L(edx) == 0x9c) goto ___3da38h;
		if(L(edx)) goto ___3da3dh;
___3da38h:
		eax ^= eax;
		return eax;
___3da3dh:
		eax = 0x1;
		return eax;
}
