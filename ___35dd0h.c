#include "drally.h"

	extern byte ___19bd60h[];
	extern byte ___196adch[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a0fc0h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];

char * itoa_watcom106(int value, char * buffer, int radix);
void ___12e78h_cdecl(dword, dword, dword, dword);

// RACE RESULTS FRAMES
void ___35dd0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x18];


		edx = 0x4;
		ebx = D(___19bd60h);
		D(esp+0x8) = edx;
		if(ebx == 0) goto ___35dffh;
		eax = D(___196adch);
		D(esp+0x8) = eax;
___35dffh:
		eax = D(esp+0x8);
		ebp = 4*eax;
		ebp += eax;
		ebp <<= 0x4;
		edx = 0x15e;
		ebp -= eax;
		ebx = eax+1;
		edx -= ebp;
		eax = edx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		esi = D(esp+0x8);
		ecx = eax+0x6c;
		ebp ^= ebp;
		edx = eax+0x4f;
		if((int)esi <= 0) goto ___35f27h;
		eax = 4*edx;
		eax += edx;
		ebx = 0*edx;
		eax <<= 0x7;
		esi = ecx+0x7;
		D(esp+0x4) = eax;
		eax = 4*esi;
		eax += esi;
		eax <<= 0x7;
		eax += ebx;
		D(esp+0x10) = eax;
		eax = D(esp+0x4);
		D(esp) = eax;
		eax = 4*ecx;
		eax += ecx;
		eax <<= 0x7;
		eax += ebx;
		D(esp+0xc) = eax;
___35e77h:
		ecx = D(esp+0xc);
		edx = 0xca;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a0fc0h);
		ebx += ecx;
		ecx = 0x4a;
		ebx += 0x185;
___35e99h:
		edi = edx;
___35e9bh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___35ea3h;
		B(ebx) = L(eax);
___35ea3h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___35e9bh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___35e99h;
		ebx = 0xa;
		edx = esp+0x14;
		eax = ebp+0x1;
		eax = itoa_watcom106(eax, edx, ebx);
		if(ebp) goto ___35ee2h;
		ecx = D(esp+0x10);
		ebx = esp+0x14;
		edx = ___185ba9h;
		eax = D(___1a10cch);
		ecx += 0x191;
		goto ___35efah;
___35ee2h:
		ecx = D(esp+0x10);
		ebx = esp+0x14;
		edx = ___185ba9h;
		eax = D(___1a10cch);
		ecx += 0x18c;
___35efah:
		___12e78h_cdecl(eax, edx, ebx, ecx);
		eax = D(esp+0x4);
		edi = D(esp+0x10);
		edx = D(esp+0xc);
		ebx = D(esp+0x8);
		edi += eax;
		eax = D(esp);
		ebp++;
		edx += eax;
		D(esp+0x10) = edi;
		D(esp+0xc) = edx;
		if((int)ebp < (int)ebx) goto ___35e77h;
___35f27h:
		return;
}
