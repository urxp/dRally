#include "drally.h"

	extern byte ___1a1f67h[];
	extern byte ___1a01fch[];
	extern byte ___1a1ef8h[];
	extern byte ___1a0f04h[];
	extern byte ___1a0ef8h[];
	extern byte ___1a0228h[];
	extern byte ___180130h[];
	extern byte ___181f50h[];
	extern byte ___180724h[];
	extern byte ___1a01e0h[];
	extern byte ___1a10b8h[];
	extern byte ___185c7ah[];

void ___12e78h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
char * itoa_watcom106(int value, char * buffer, int radix);
int rand_watcom106(void);

// RACE SIGNUP RANDOMIZATION
void ___3079ch_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x6c];

	eax = A1;

		ebx = eax;
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		if(edx != 0) goto ___30a78h;
		ebx ^= ebx;
		ecx = 0x3;
___307cch:
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		ebx++;
		H(eax) = B(edx+___1a1f67h);
		ebp = edx;
		if(L(ecx) >= H(eax)) goto ___307eah;
		if((int)ebx < 0x32) goto ___307cch;
___307eah:
		if((int)ebx >= 0x32) goto ___30a78h;
		ecx = 0x2;
		edi ^= edi;
___307fah:
		if(ebp != 0) goto ___30831h;
		esi = 0x14;
		ebx = edi;
___30805h:
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, esi);
		D(esp+0x68) = edx;
		edx = 0x6c*edx;
		eax = D(edx+___1a01fch);
		ebx++;
		if(edi == eax) goto ___30831h;
		if(eax == 1) goto ___30831h;
		if(ecx == eax) goto ___30831h;
		if((int)ebx < 0x64) goto ___30805h;
___30831h:
		if(ebp != 1) goto ___308b5h;
		ebx = edi;
		esi = 0x3;
___30841h:
		eax = rand_watcom106();
		edx = eax;
		D(esp+0x64) = 0x14;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, D(esp+0x64));
		eax = D(___1a1ef8h);
		D(esp+0x68) = edx;
		edx = 0x6c*eax;
		eax = D(edx+___1a01fch);
		ebx++;
		if((int)edi > (int)eax) goto ___30886h;
		if((int)ecx < (int)eax) goto ___30886h;
		edx = 0x6c*D(esp+0x68);
		eax = D(edx+___1a01fch);
		if((int)eax < 1) goto ___30886h;
		if((int)esi >= (int)eax) goto ___308b5h;
___30886h:
		edx = 0x6c*D(___1a1ef8h);
		eax = D(edx+___1a01fch);
		if((int)esi > (int)eax) goto ___308b0h;
		if((int)eax > 5) goto ___308b0h;
		edx = 0x6c*D(esp+0x68);
		eax = D(edx+___1a01fch);
		if((int)ecx > (int)eax) goto ___308b0h;
		if((int)eax <= 4) goto ___308b5h;
___308b0h:
		if((int)ebx < 0x64) goto ___30841h;
___308b5h:
		if(ebp != 2) goto ___308efh;
		esi = 0x14;
		ebx = edi;
___308c1h:
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, esi);
		D(esp+0x68) = edx;
		edx = 0x6c*edx;
		eax = D(edx+___1a01fch);
		ebx++;
		if(eax == 3) goto ___308efh;
		if(eax == 4) goto ___308efh;
		if(eax == 5) goto ___308efh;
		if((int)ebx < 0x64) goto ___308c1h;
___308efh:
		eax = D(esp+0x68);
		if(B(eax+___1a0f04h) == 1) goto ___307fah;
		B(eax+___1a0f04h) = 1;
		eax ^= eax;
		edx = 4*ebp;
		L(eax) = B(ebp+___1a1f67h);
		eax += edx;
		L(edx) = B(esp+0x68);
		ebx = D(esp+0x68);
		B(eax+___1a0ef8h) = L(edx);
		edx = 8*ebx;
		edx -= ebx;
		edx <<= 0x2;
		edx -= ebx;
		L(ebx) = B(ebp+___1a1f67h);
		eax = D(edx*4+___1a0228h);
		L(ebx)++;
		edx = esp+0x50;
		B(ebp+___1a1f67h) = L(ebx);
		ebx = 0xa;
		eax = itoa_watcom106(eax, edx, ebx);
		L(eax) = B(___180130h);
		edi = esp+0x50;
		B(esp) = L(eax);
		ecx = strlen(edi);
		if(ecx >= 2) goto ___3099bh;
		esi = ___181f50h;
		edi = esp;
		strcat(edi, esi);
___3099bh:
		esi = esp+0x50;
		edi = esp;
		ebx = D(esp+0x68);
		strcat(edi, esi);
		edx = 8*ebx;
		esi = ___180724h;
		edx -= ebx;
		edi = esp;
		edx <<= 0x2;
		strcat(edi, esi);
		edx -= ebx;
		esi = ___1a01e0h;
		edx <<= 0x2;
		edi = esp;
		esi += edx;
		ebx ^= ebx;
		strcat(edi, esi);
		L(ebx) = B(ebp+___1a1f67h);
		edx = 8*ebx;
		edx += ebx;
		edx += edx;
		eax = edx+0x100;
		ebx = esp;
		ecx = 4*eax;
		edx = 4*ebp;
		ecx += eax;
		edx += ebp;
		ecx <<= 0x7;
		edx <<= 0x5;
		eax = D(___1a10b8h);
		ecx += edx;
		edx = ___185c7ah;
		ecx += 0x22;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___30a78h:
		return;
}
