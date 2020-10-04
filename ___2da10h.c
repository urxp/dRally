#include "drally.h"

	extern byte ___1a0a58h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e5ch[];
	extern byte ___1a0178h_PriceRocketFuel[];
	extern byte ___180728h[];

dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___2d184h(void);
void ___2d20ch(void);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___2d054h_cdecl(dword);

// MARKET ROCKET FUEL
void ___2da10h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];


		if(D(___1a0a58h) != 1) goto ___2dad9h;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x27960;
		esi += 0x4800;
		edx = ecx;
		L(edx) >>= 2;
___2da51h:
		H(ecx) = L(edx);
___2da53h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2da53h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2da51h;
		eax = 0x2;
		ebx = 0xa;
		edx = esp;
		___2d054h_cdecl(eax);
		eax = D(___1a0178h_PriceRocketFuel);
		edi = esp+0x14;
		eax = itoa_watcom106(eax, edx, ebx);
		X(eax) = W(___180728h);
		esi = esp;
		W(esp+0x14) = X(eax);
		strcat(edi, esi);
		eax = esp+0x14;
		eax = ___25180h_cdecl(eax);
		edx = eax+0x34660;
		eax = esp+0x14;
		___12f60h_cdecl(eax, edx);
___2dad9h:
		if(D(___1a0a58h) != 0) goto ___2db2bh;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x27960;
		esi += 0x16800;
		edx = ecx;
		L(edx) >>= 2;
___2db04h:
		H(ecx) = L(edx);
___2db06h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2db06h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2db04h;
		___2d184h();
___2db2bh:
		if(D(___1a0a58h) != 0xffffffff) goto ___2db7dh;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x27960;
		esi += 0xd800;
		edx = ecx;
		L(edx) >>= 2;
___2db56h:
		H(ecx) = L(edx);
___2db58h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2db58h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2db56h;
		___2d20ch();
___2db7dh:
		return;
}
