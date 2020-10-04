#include "drally.h"

	extern byte ___1a0a50h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e5ch[];
	extern byte ___1a0170h_PriceMines[];
	extern byte ___180728h[];

dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___2d184h(void);
void ___2d20ch(void);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___2d054h_cdecl(dword);

// MARKET MINES
void ___2d728h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];

		if(D(___1a0a50h) != 1) goto ___2d7e8h;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x27890;
		edx = ecx;
		L(edx) >>= 2;
___2d763h:
		H(ecx) = L(edx);
___2d765h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2d765h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2d763h;
		ebx = 0xa;
		eax = 0;
		edx = esp;
		___2d054h_cdecl(eax);
		eax = D(___1a0170h_PriceMines);
		edi = esp+0x14;
		eax = itoa_watcom106(eax, edx, ebx);
		X(eax) = W(___180728h);
		esi = esp;
		W(esp+0x14) = X(eax);
		strcat(edi, esi);
		eax = esp+0x14;
		eax = ___25180h_cdecl(eax);
		edx = eax+0x34590;
		eax = esp+0x14;
		___12f60h_cdecl(eax, edx);
___2d7e8h:
		if(D(___1a0a50h) != 0) goto ___2d83ah;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x27890;
		esi += 0x12000;
		edx = ecx;
		L(edx) >>= 2;
___2d813h:
		H(ecx) = L(edx);
___2d815h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2d815h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2d813h;
		___2d184h();
___2d83ah:
		if(D(___1a0a50h) != 0xffffffff) goto ___2d88ch;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x27890;
		esi += 0x9000;
		edx = ecx;
		L(edx) >>= 2;
___2d865h:
		H(ecx) = L(edx);
___2d867h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2d867h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2d865h;
		___2d20ch();
___2d88ch:
		return;
}
