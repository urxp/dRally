#include "drally.h"

	extern byte ___1a0a54h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e5ch[];
	extern byte ___1a0174h_PriceSpikedBumpers[];
	extern byte ___180728h[];

dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___2d184h(void);
void ___2d20ch(void);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___2d054h_cdecl(dword);

// MARKET SPIKES
void ___2d898h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];


		if(D(___1a0a54h) != 1) goto ___2d961h;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x278f8;
		esi += 0x2400;
		edx = ecx;
		L(edx) >>= 2;
___2d8d9h:
		H(ecx) = L(edx);
___2d8dbh:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2d8dbh;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2d8d9h;
		eax = 0x1;
		ebx = 0xa;
		edx = esp;
		___2d054h_cdecl(eax);
		eax = D(___1a0174h_PriceSpikedBumpers);
		edi = esp+0x14;
		eax = itoa_watcom106(eax, edx, ebx);
		X(eax) = W(___180728h);
		esi = esp;
		W(esp+0x14) = X(eax);
		strcat(edi, esi);
		eax = esp+0x14;
		eax = ___25180h_cdecl(eax);
		edx = eax+0x345f8;
		eax = esp+0x14;
		___12f60h_cdecl(eax, edx);
___2d961h:
		if(D(___1a0a54h) != 0) goto ___2d9b3h;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x278f8;
		esi += 0x14400;
		edx = ecx;
		L(edx) >>= 2;
___2d98ch:
		H(ecx) = L(edx);
___2d98eh:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2d98eh;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2d98ch;
		___2d184h();
___2d9b3h:
		if(D(___1a0a54h) != 0xffffffff) goto ___2da05h;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x278f8;
		esi += 0xb400;
		edx = ecx;
		L(edx) >>= 2;
___2d9deh:
		H(ecx) = L(edx);
___2d9e0h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2d9e0h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2d9deh;
		___2d20ch();
___2da05h:
		return;
}
