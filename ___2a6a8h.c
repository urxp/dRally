#include "drally.h"

	extern byte ___19bd60h[];
	extern byte kmap[];
	extern byte ___1a0f9ch[];
	extern byte ___1a1ef8h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___196a94h[];
	extern byte ___18075ch[];
	extern byte ___1a01e0h[];
	extern byte ___1807bch[];
	extern byte ___182164h[];
	extern byte ___243d44h[];
	extern byte ___196ab4h[];
	extern byte ___180134h[];
	extern byte ___1a023ch[];
	extern byte ___1a0240h[];
	extern byte ___1a0a50h[];
	extern byte ___1a0244h[];
	extern byte ___1a0a54h[];
	extern byte ___1a0248h[];
	extern byte ___1a0a58h[];
	extern byte ___1a0a5ch[];

void * ___3f71ch__allocateMemory(dword);
void dRally_Memory_free(void *);
int rand_watcom106(void);

static byte ROL_BYTE(byte b, int n){

    return (b<<n)|(b>>(8-n));
}

static byte ROR_BYTE(byte b, int n){

    return (b>>n)|(b<<(8-n));
}

dword ___2a6a8h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x24];


		edx ^= edx;
		ebx = D(___19bd60h);
		D(esp+0x14) = edx;
		if(ebx != 0) goto ___2a9fah;
		if(B(kmap+0x3c) == 0) goto ___2a836h;
		ebp = 0x883;
		eax = ebp;
		eax = ___3f71ch__allocateMemory(eax);
		ebx = ebp;
		D(___1a0f9ch) = eax;
		memset(eax, edx, ebx);
		eax = rand_watcom106();
		edx = eax;
		ebx = 0xff;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		D(esp+0x10) = edx;
		eax = D(___1a0f9ch);
		L(edx) = B(esp+0x10);
		B(eax) = L(edx);
		L(edx) = B(___1a1ef8h);
		B(eax+1) = L(edx);
		L(edx) = B(___185a14h_UseWeapons);
		edi = esp;
		B(eax+2) = L(edx);
		L(edx) = B(___196a94h);
		esi = ___18075ch;
		B(eax+3) = L(edx);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
		B(edi++) = B(esi++);
		ecx = 0x1;
		esi ^= esi;
		D(esp+0x14) = ecx;
		D(esp+0x18) = esi;
		goto ___2a763h;
___2a74dh:
		edx = D(___1a0f9ch);
		ebx = edi+edx;
		L(edx) = B(esp+edi);
		B(ebx+4) = L(edx);
		edx = edi+1;
		D(esp+0x18) = edx;
___2a763h:
		edi = esp;
		ecx = strlen(edi);
		edi = D(esp+0x18);
		if(ecx > edi) goto ___2a74dh;
		ecx = 0x870;
		edi = D(___1a0f9ch);
		esi = ___1a01e0h;
		edi += 0x13;
		memcpy(edi, esi, ecx);
		eax = 0x1;
		D(esp+0x18) = eax;
		if((int)ebp <= (int)eax) goto ___2a801h;
		L(eax) = B(esp+0x18);
		H(eax) = 0x11;
		X(eax) = L(eax)*H(eax);
		B(esp+0x20) = L(eax);
___2a7b3h:
		ecx = D(esp+0x18);
		ebx = D(___1a0f9ch);
		ebx += ecx;
		L(eax) = B(esp+0x10);
		L(edx) = B(ebx);
		L(edx) -= L(eax);
		L(eax) = B(esp+0x20);
		B(ebx) = L(edx);
		H(edx) = L(edx);
		H(edx) += L(eax);
		eax = ecx;
		B(ebx) = H(edx);
		edx = ecx;
		ecx = 0x6;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		ecx = edx;
		esi = D(esp+0x18);
		eax = D(ebx);
		//ror     al, cl
		L(eax) = ROR_BYTE(L(eax), L(ecx));
		D(ebx) = eax;
		L(ebx) = B(esp+0x20);
		esi++;
		L(ebx) += 0x11;
		D(esp+0x18) = esi;
		B(esp+0x20) = L(ebx);
		if((int)ebp > (int)esi) goto ___2a7b3h;
___2a801h:
		edx = ___1807bch;
		eax = ___182164h;
		ebx = 0x1;
		eax = strupr_fopen(eax, edx);
		edi = eax;
		edx = ebp;
		eax = D(___1a0f9ch);
		ecx = edi;
		fwrite(eax, edx, ebx, ecx);
		eax = edi;
		fclose(eax);
		eax = D(___1a0f9ch);
		dRally_Memory_free(eax);
___2a836h:
		if(B(kmap+0x3d) == 0) goto ___2a9fah;
		ebp = 0x2;
		eax ^= eax;
		ebx = 0x883;
		D(___243d44h) = eax;
		D(___196ab4h) = eax;
		eax = 0x883;
		edx ^= edx;
		eax = ___3f71ch__allocateMemory(eax);
		D(___1a0f9ch) = eax;
		memset(eax, edx, ebx);
		edx = ___180134h;
		eax = ___182164h;
		D(esp+0x14) = ebp;
		eax = strupr_fopen(eax, edx);
		edi = eax;
		if(eax == 0) goto ___2a9f2h;
		ebx = 0x1;
		edx = 0x883;
		eax = D(___1a0f9ch);
		ecx = edi;
		fread(eax, edx, ebx, ecx);
		eax = edi;
		fclose(eax);
		eax = D(___1a0f9ch);
		L(eax) = B(eax);
		ecx = 0x1;
		eax &= 0xff;
		D(esp+0x18) = ecx;
		D(esp+0x10) = eax;
		L(eax) = B(esp+0x18);
		H(eax) = 0x11;
		X(eax) = L(eax)*H(eax);
		B(esp+0x1c) = L(eax);
___2a8ceh:
		eax = D(esp+0x18);
		edx = eax;
		ebx = 0x6;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		esi = D(esp+0x18);
		ebx = D(___1a0f9ch);
		ecx = edx;
		ebx += esi;
		eax = D(ebx);
		//rol     al, cl
		L(eax) = ROL_BYTE(L(eax), L(ecx));
		D(ebx) = eax;
		edx = D(___1a0f9ch);
		ebx = esi;
		L(eax) = B(esp+0x1c);
		L(ecx) = B(edx+ebx);
		L(ecx) -= L(eax);
		L(eax) = B(esp+0x10);
		B(edx+ebx) = L(ecx);
		H(ecx) = L(ecx);
		edi = esi+1;
		H(ecx) += L(eax);
		L(eax) = B(esp+0x1c);
		D(esp+0x18) = edi;
		L(eax) += 0x11;
		B(edx+ebx) = H(ecx);
		B(esp+0x1c) = L(eax);
		if((int)edi < 0x883) goto ___2a8ceh;
		eax ^= eax;
		L(eax) = B(edx+0x1);
		D(___1a1ef8h) = eax;
		eax ^= eax;
		L(eax) = B(edx+0x2);
		ecx = 0x870;
		D(___185a14h_UseWeapons) = eax;
		eax ^= eax;
		edi = ___1a01e0h;
		L(eax) = B(edx+0x3);
		esi = edx+0x13;
		D(___196a94h) = eax;
		memcpy(edi, esi, ecx);
		eax = D(___1a0f9ch);
		dRally_Memory_free(eax);
		eax = D(___1a1ef8h);
		edx = 8*eax;
		edx -= eax;
		edx <<= 0x2;
		edx -= eax;
		L(eax) = !!(D(edx*4+___1a023ch) != 8);
		eax &= 0xff;
		ecx = D(edx*4+___1a0240h);
		D(___1a0a50h) = eax;
		L(eax) = !!(ecx != 1);
		eax &= 0xff;
		esi = D(edx*4+___1a0244h);
		D(___1a0a54h) = eax;
		L(eax) = !!(esi != 1);
		eax &= 0xff;
		edi = D(edx*4+___1a0248h);
		D(___1a0a58h) = eax;
		if(edi != 1) goto ___2a9dah;
		eax ^= eax;
		D(___1a0a5ch) = eax;
		goto ___2a9fah;
___2a9dah:
		D(___1a0a5ch) = 1;
		eax = D(esp+0x14);
		return eax;
___2a9f2h:
		D(esp+0x14) = 3;
___2a9fah:
		eax = D(esp+0x14);
		return eax;
}
