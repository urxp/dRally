#include "drally.h"

	extern byte ___1a01e0h[];
	extern byte ___1a1ef8h[];
	extern byte ___19bd60h[];

void * ___3f71ch__allocateMemory(dword);
void dRally_Memory_free(void *);

// SOMETHING WITH RANKINGS SORTING 
void ___30c60h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x18];

	eax = A1;


		ebp = eax;
		eax = 0x870;
		ecx = 0x870;
		esi = ___1a01e0h;
		eax = ___3f71ch__allocateMemory(eax);
		ebx = eax;
		edi = eax;
		D(esp) = eax;
		memcpy(edi, esi, ecx);
		eax = ebp;
		eax--;
		D(esp+0x8) = eax;
		ecx = eax;
		eax <<= 0x3;
		eax -= ecx;
		eax <<= 0x2;
		edx ^= edx;
		eax -= ecx;
		D(esp+0x14) = edx;
		eax <<= 0x2;
		edx = ___1a01e0h;
		ebx += eax;
		if((int)ebp <= 0) goto ___30cf3h;
___30cc7h:
		ecx = 0x6c;
		esi = ebx;
		edi = edx;
		memcpy(edi, esi, ecx);
		ecx = D(esp+0x14);
		edx += 0x6c;
		ecx++;
		ebx -= 0x6c;
		D(esp+0x14) = ecx;
		if((int)ebp > (int)ecx) goto ___30cc7h;
___30cf3h:
		eax = D(esp);
		edx = D(esp+0x8);
		dRally_Memory_free(eax);
		eax = D(___1a1ef8h);
		edx -= eax;
		D(___1a1ef8h) = edx;
		eax ^= eax;
		if((int)ebp <= 0) goto ___30d47h;
		edx = 0xffffff94;
		ecx ^= ecx;
___30d19h:
		esi = D(edx+___1a01e0h+0x44);
		if(esi != D(ecx+___1a01e0h+0x44)) goto ___30d33h;
		if((int)eax <= 0) goto ___30d33h;
		ebx = D(edx+___1a01e0h+0x48);
		goto ___30d36h;
___30d33h:
		ebx = eax+1;
___30d36h:
		D(ecx+___1a01e0h+0x48) = ebx;
		edx += 0x6c;
		eax++;
		ecx += 0x6c;
		if((int)eax < (int)ebp) goto ___30d19h;
___30d47h:
		if(D(___19bd60h) == 0) goto ___30dedh;
		eax = 0x870;
		ecx = 0x870;
		esi = ___1a01e0h;
		eax = ___3f71ch__allocateMemory(eax);
		ebx = eax;
		edi = eax;
		D(esp+0x4) = eax;
		memcpy(edi, esi, ecx);
		eax ^= eax;
		D(esp+0x10) = eax;
		eax = ebp-1;
		D(esp+0xc) = eax;
		ecx = eax;
		eax <<= 0x3;
		eax -= ecx;
		eax <<= 0x2;
		eax -= ecx;
		eax <<= 0x2;
		edx = ___1a01e0h;
		ebx += eax;
		if((int)ebp <= 0) goto ___30dd3h;
___30da7h:
		ecx = 0x6c;
		esi = ebx;
		edi = edx;
		memcpy(edi, esi, ecx);
		edi = D(esp+0x10);
		edx += 0x6c;
		edi++;
		ebx -= 0x6c;
		D(esp+0x10) = edi;
		if((int)ebp > (int)edi) goto ___30da7h;
___30dd3h:
		eax = D(esp+0x4);
		edx = D(esp+0xc);
		dRally_Memory_free(eax);
		eax = D(___1a1ef8h);
		edx -= eax;
		D(___1a1ef8h) = edx;
___30dedh:
		return;
}
