#include "drally.h"

	extern byte ___2432cch[];
	extern byte ___2432d0h[];
	extern byte ___2432e0h[];
	extern byte ___2432e8h[];
	extern byte ___2432d8h[];
	extern byte ___2432d4h[];
	extern byte ___243d80h[];
	extern byte ___243e53h[];
	extern byte ___243e57h[];
	extern byte ___243e5fh[];
	extern byte ___243e5bh[];
	extern byte ___243e73h[];
	extern byte ___1a309ch[];
	extern byte kmap[];
	extern byte ___2432e4h[];
	extern byte ___243d14h[];
	extern byte ___243898h[];
	extern byte ___243874h[];
	extern byte ___24330ch[];
	extern byte ___243e74h[];
	extern byte ___2432dch[];
	extern byte ___243e94h[];
	extern byte ___243e80h[];
	extern byte ___243e7ch[];
	extern byte ___243d70h[];
	extern byte ___243894h[];
	extern byte ___243878h[];
	extern byte ___243330h[];
	extern byte VGA13_ACTIVESCREEN[];

void ___59cd8h(void);
void * ___3f71ch__allocateMemory(dword);
int rand_watcom106(void);
void dRally_Sound_freeEffectChannel(byte ch_num);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___58c60h(void);
void ___47304h(void);
dword ___47620h(void);
void dRally_Memory_free(void *);
void __VGA13_PRESENTSCREEN__(void);

void race___478c8h(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x338];

	eax = A1;


		ebp = eax;
		edx ^= edx;
		eax = 0xfa00;
		D(___2432cch) = edx;
		D(___2432d0h) = edx;
		D(___2432e0h) = edx;
		D(___2432e8h) = edx;
		eax = ___3f71ch__allocateMemory(eax);
		D(___2432d8h) = eax;
		eax = 0xfa00;
		ebx = 0xfa00;
		eax = ___3f71ch__allocateMemory(eax);
		D(___2432d4h) = eax;
		eax = D(___2432d8h);
		D(esp+0x330) = edx;
		memset(eax, edx, ebx);
		ebx ^= ebx;
		edx ^= edx;
___47932h:
		ecx = 0x140;
		esi = D(___243d80h);
		edi = D(___2432d4h);
		esi += 0x60;
		edi += edx;
		esi += ebx;
		memcpy(edi, esi, ecx);
		edx += 0x140;
		ebx += 0x200;
		if((int)edx < 0xfa00) goto ___47932h;
		eax ^= eax;
		L(ebx) = 0x64;
		edx ^= edx;
___47974h:
		eax += 0x21;
		D(eax+___243e53h) = edx;
		D(eax+___243e57h) = edx;
		D(eax+___243e5fh) = edx;
		D(eax+___243e5bh) = edx;
		B(eax+___243e73h) = L(ebx);
		if(eax != 0x7ce9) goto ___47974h;
		esi = 0x13c;
		ebx ^= ebx;
___479a3h:
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, esi);
		ebx += 0x4;
		D(ebx+___1a309ch) = edx;
		if(ebx != 0x190) goto ___479a3h;
		ecx = 0x3e80;
		esi = D(___2432d4h);
		edi = D(___2432d8h);
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		ecx = 0x3e80;
		edi = VGA13_ACTIVESCREEN;
		esi = D(___2432d8h);
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		__VGA13_PRESENTSCREEN__();
		eax = 0x5;
		dRally_Sound_freeEffectChannel(eax);
		edx = 0x11;
		ebx ^= ebx;
		ecx = 0x10000;
		eax = 0x5;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
		ecx = 0x100;
		eax = kmap;
		edx ^= edx;
		memset(eax, edx, ecx);
		edx ^= edx;
		ebx ^= ebx;
		D(___2432e4h) = edx;
___47a2ah:
		if((int)D(___2432e4h) < 0x3c8) goto ___47a49h;
		if(ebx != 0) goto ___47a49h;
		eax = 0x5;
		ebx = 0x1;
		dRally_Sound_freeEffectChannel(eax);
___47a49h:
		___59cd8h();
		if(B(kmap+0x1c) != 0) goto ___47a72h;
		if(B(kmap+0x9c) != 0) goto ___47a72h;
		if(B(kmap+0x15) != 0) goto ___47a72h;
		if(B(kmap+0x31) == 0) goto ___47a77h;
___47a72h:
		edx = 0x1;
___47a77h:
		if(B(kmap+0x3b) == 0) goto ___47a8ch;
		edx = 0x1;
		D(esp+0x330) = edx;
___47a8ch:
		if(D(___243d14h) != 0xffffffff) goto ___47aa8h;
		if(B(kmap+0x15) != 1) goto ___47aa8h;
		D(___243d14h) = 0x1;
___47aa8h:
		ecx ^= ecx;
		D(___243898h) = ecx;
		eax = D(___243898h);
		D(___243874h) = eax;
		___58c60h();
		ecx = 0x2a80;
		esi = D(___2432d8h);
		edi = VGA13_ACTIVESCREEN+0x5000;
		esi += 0x5000;
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		__VGA13_PRESENTSCREEN__();
		ecx = 0x2a80;
		esi = D(___2432d4h);
		edi = D(___2432d8h);
		esi += 0x5000;
		edi += 0x5000;
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		___47304h();
		eax = D(___243898h);
		D(___24330ch) = eax;
		if((int)eax >= 1) goto ___47b14h;
		D(___24330ch) = 1;
___47b14h:
		if((int)D(___2432e4h) < 0x3c8) goto ___47b29h;
		if(ebp == 0) goto ___47b29h;
		edx = 0x1;
___47b29h:
		if(edx == 0) goto ___47a2ah;
		ecx = 0x100;
		eax = kmap;
		edx ^= edx;
		esi = 0x19;
		memset(eax, edx, ecx);
		ebx ^= ebx;
		eax = 0x5;
		edi ^= edi;
		dRally_Sound_freeEffectChannel(eax);
___47b55h:
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, esi);
		edi += 0x4;
		eax = 0-eax;
		ebx++;
		D(esp+edi-4) = eax;
		if((int)ebx < 0x66) goto ___47b55h;
		eax = 0x198;
		edx = eax;
___47b74h:
		eax += 0x4;
		ebx = D(esp+edx);
		edx -= 0x4;
		D(esp+eax-4) = ebx;
		if(eax != 0x330) goto ___47b74h;
		esi = 0x3333;
		ebp = ___243e74h;
		edx ^= edx;
		edi ^= edi;
		D(___2432d0h) = edx;
		D(esp+0x334) = edx;
		D(___2432dch) = esi;
		ebp += 0x10;
		D(___2432cch) = edx;
___47bb2h:
		eax = 0x21*edi;
		if(B(eax+___243e94h) == 0x64) goto ___47bc5h;
		D(esp+0x334)++;
___47bc5h:
		ebx = D(___2432cch);
		eax = rand_watcom106();
		edx = eax;
		esi = 0x3;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, esi);
		ecx = D(esp+4*ebx);
		ebx = 0x21*edi;
		edx += ecx;
		edx <<= 0x10;
		D(ebx+___243e80h) = edx;
		eax = rand_watcom106();
		edx = eax;
		esi = 0x4;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, esi);
		eax = edx-2;
		eax <<= 0x10;
		esi = D(___2432d0h);
		D(ebx+___243e7ch) = eax;
		eax = 0xcc*esi;
		ecx = 0xcc;
		edx = D(___243d70h);
		ebx = ebp;
		esi = D(___2432cch);
		eax += edx;
		edx = 0x4;
		esi += eax;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		eax = D(___2432d0h);
		eax += 0x4;
		D(___2432d0h) = eax;
		if(eax != 0x4c) goto ___47c77h;
		ecx = D(___2432cch);
		ebx ^= ebx;
		ecx += 0x4;
		D(___2432d0h) = ebx;
		D(___2432cch) = ecx;
___47c77h:
		edi++;
		ebp += 0x21;
		if((int)edi < 0x3c9) goto ___47bb2h;
		ecx = 0x10000;
		edx = 0x15;
		eax = 0x5;
		ebx ^= ebx;
		ebp = VGA13_ACTIVESCREEN;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
		edx = 0x3e80;
		ebx = 0x1;
___47cb6h:
		esi ^= esi;
		D(___243898h) = esi;
		eax = D(___243898h);
		D(___243874h) = eax;
		___58c60h();
		esi = D(___2432d8h);
		ecx = edx;
		edi = ebp;
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		__VGA13_PRESENTSCREEN__();
		esi = D(___2432d4h);
		edi = D(___2432d8h);
		ecx = edx;
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		edi = D(esp+0x334);
		eax = ___47620h();
		if((int)eax >= (int)edi) goto ___47d0fh;
		eax = D(___243898h);
		D(___24330ch) = eax;
		if((int)ebx <= (int)eax) goto ___47cb6h;
		D(___24330ch) = ebx;
		goto ___47cb6h;
___47d0fh:
		eax = 0x5;
		ecx = 0x3e80;
		edi = VGA13_ACTIVESCREEN;
		dRally_Sound_freeEffectChannel(eax);
		esi = D(___2432d4h);
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		__VGA13_PRESENTSCREEN__();
		eax = D(___2432d8h);
		dRally_Memory_free(eax);
		eax = D(___2432d4h);
		edx ^= edx;
		dRally_Memory_free(eax);
		D(___243898h) = edx;
		eax = D(___243898h);
		D(___243874h) = eax;
		D(___243894h) = edx;
		eax = D(___243878h);
		D(___243894h) = eax;
		eax = D(___243894h);
		ecx = D(esp+0x330);
		D(___243330h) = eax;
		if(ecx == 0) goto ___47d7dh;
		B(kmap+0x3b) = 0x1;
___47d7dh:
		return;
}
