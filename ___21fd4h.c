#include "drally.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10c0h[];
	extern char ___18d492h[][0xf];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte ___19f750h[];
	extern byte ___18e298h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];

dword ___1f094h_cdecl(dword);
char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);
void ___12e78h_cdecl(dword, dword, dword, dword);

void ___21fd4h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x6c];


	D(esp+0x5c) = A1;
	ebp = 0x14c80;
	ebx = 0x17d;

	while(1){

		eax = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		eax += ebp;
		esi = eax+0xe1;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax += ebp;
		ecx = ebx;
		edi = eax+0xe1;
		ebp += 0x280;
		memcpy(edi, esi, ecx);
		if(ebp == 0x19500) break;
	}

	ebp = 0x20300;
	edx = 0x170;

	while(1){

		eax = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		eax += ebp;
		esi = eax+0xe0;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax += ebp;
		ecx = edx;
		edi = eax+0xe0;
		ebp += 0x280;
		memcpy(edi, esi, ecx);
		if(ebp == 0x34800) break;
	}

	ecx = 0x44;
	edx = 0x280;
	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	esi = D(___1a10c0h);
	ebx += 0x14a00;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esi);
			if(L(eax) != 0) B(ebx) = L(eax);
			ebx++;
			esi++;
			edi--;
			if(edi == 0) break;
		}

		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx == 0) break;
	}

	strcpy(esp+0x14, ___18d492h[D(esp+0x5c)]);
	eax = ___1f094h_cdecl(esp+0x14);
	eax = (int)eax>>1;
	___12e78h_cdecl(D(___1a10cch), ___185ba9h, esp+0x14, 0x1559d-eax);
	D(esp+0x64) = 0x20a02;
	D(esp+0x58) = 0x20968;
	D(esp+0x50) = 0x208e4;
	D(esp+0x54) = ___19f750h+0x18*D(esp+0x5c)+0x870;
	D(esp+0x68) = 0x18*D(esp+0x5c)-0x1b0;
	D(esp+0x60) = ___18e298h+5*0x6e0;	// ___1904f8h

	ebp = 0x18*D(esp+0x5c)+0x870;
	while(1){

		strcpy(esp+0x14, D(esp+0x60));
		strupr_watcom106(esp+0x14);
		___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp+0x14, D(esp+0x50));
		strcpy(esp+0x14, D(esp+0x54));
		strupr_watcom106(esp+0x14);
		___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp+0x14, D(esp+0x58));
		itoa_watcom106(D(ebp+___19f750h+0xc), esp, 0xa);
		itoa_watcom106(D(ebp+___19f750h+0x10), esp+0x3c, 0xa);
		itoa_watcom106(D(ebp+___19f750h+0x14), esp+0x28, 0xa);

		if(strlen(esp) == 1){

			B(esp+2) = 0;
			B(esp+1) = B(esp);
			B(esp) = 0x30;
		}

		if(strlen(esp+0x3c) == 1){
				
			B(esp+0x3e) = 0;
			B(esp+0x3d) = B(esp+0x3c);
			B(esp+0x3c) = 0x30;
		}

		if(strlen(esp+0x28) == 1){

			B(esp+0x2a) = 0;
			B(esp+0x29) = B(esp+0x28);
			B(esp+0x28) = 0x30;
		}

		strcpy(esp+0x14, esp);
		strcat(esp+0x14, ":");
		strcat(esp+0x14, esp+0x3c);
		strcat(esp+0x14, ".");
		strcat(esp+0x14, esp+0x28);
		___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp+0x14, D(esp+0x64));
		D(esp+0x58) += 0x3700;
		D(esp+0x54) -= 0x1b0;
		D(esp+0x50) += 0x3700;
		D(esp+0x60) -= 0x6e0;
		D(esp+0x64) += 0x3700;
		ebp -= 0x1b0;
		if(ebp == D(esp+0x68)) break;
	}

	return;
}
