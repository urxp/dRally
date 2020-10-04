#include "drally.h"

	extern byte ___1a01e0h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a0fcch[];
	extern byte ___1a0fd0h[];
	extern byte ___1a0fd4h[];
	extern byte ___1a0fc8h[];
	extern byte ___1a0fdch[];
	extern byte ___1a0fach[];
	extern byte ___180724h[];
	extern byte ___1a0228h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern byte ___1a0224h[];

void ___12e78h_cdecl(dword, dword, dword, dword);
dword ___251e8h_cdecl(const char *);
char * strupr_watcom106(char * s);
char * itoa_watcom106(int value, char * buffer, int radix);

// RESULTS DISPLAY RANKINGS
void ___37ed4h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x30];

	eax = A1;


		D(esp+0x18) = eax;
		edx ^= edx;
		D(esp+0x2c) = edx;
		if((int)eax <= 0) goto ___3817ah;
		esi = 0xdf48;
		edi = 0xdec2;
		eax = ___1a01e0h;
		edx = 0xe13e;
		ebp = 0xd980;
		D(esp+0x28) = esi;
		D(esp+0x20) = edi;
		D(esp+0x1c) = eax;
		D(esp+0x24) = edx;
___37f22h:
		eax = D(esp+0x2c);
		if(eax == D(___1a1ef8h)) goto ___37fb8h;
		ecx = 0x12;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x1f;
		ebx += ebp;
		esi = D(___1a0fcch);
		ebx += 0x1d;
___37f4dh:
		edi = edx;
___37f4fh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___37f57h;
		B(ebx) = L(eax);
___37f57h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___37f4fh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___37f4dh;
		ecx = 0x12;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x65;
		ebx += ebp;
		esi = D(___1a0fd0h);
		ebx += 0x3d;
___37f82h:
		edi = edx;
___37f84h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___37f8ch;
		B(ebx) = L(eax);
___37f8ch:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___37f84h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___37f82h;
		ecx = 0x12;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x35;
		eax += ebp;
		esi = D(___1a0fd4h);
		goto ___38038h;
___37fb8h:
		ecx = 0x12;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x1f;
		ebx += ebp;
		esi = D(___1a0fc8h);
		ebx += 0x1d;
___37fd3h:
		edi = edx;
___37fd5h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___37fddh;
		B(ebx) = L(eax);
___37fddh:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___37fd5h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___37fd3h;
		ecx = 0x12;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x65;
		eax += ebp;
		esi = D(___1a0fdch);
		ebx = eax+0x3d;
___38007h:
		edi = edx;
___38009h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___38011h;
		B(ebx) = L(eax);
___38011h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___38009h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___38007h;
		ecx = 0x12;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x35;
		eax += ebp;
		esi = D(___1a0fach);
___38038h:
		ebx = eax+0xa3;
___3803eh:
		edi = edx;
___38040h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___38048h;
		B(ebx) = L(eax);
___38048h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___38040h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___3803eh;
		eax = 0x6c*D(esp+0x2c);
		ebx = 0xa;
		edx = esp;
		esi = ___180724h;
		edi = esp;
		D(esp+0x14) = eax;
		eax = D(eax+___1a0228h);
		ebp += 0x2f80;
		eax = itoa_watcom106(eax, edx, ebx);
		strcat(edi, esi);
		eax = esp;
		ecx = D(esp+0x24);
		ebx = esp;
		edx = ___185c7ah;
		esi = D(esp+0x1c);
		eax = ___251e8h_cdecl(eax);
		ecx -= eax;
		eax = D(___1a10b8h);
		edi = esp;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		strcpy(edi, esi);
		eax = esp;
		ecx = D(esp+0x20);
		ebx = esp;
		edx = ___185c7ah;
		esi = D(esp+0x28);
		eax = strupr_watcom106(eax);
		eax = D(___1a10b8h);
		edi = D(esp+0x20);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		esi += 0x2f80;
		edi += 0x2f80;
		eax = D(esp+0x14);
		ebx = 0xa;
		edx = esp;
		ecx = D(esp+0x28);
		eax = D(eax+___1a0224h);
		D(esp+0x20) = edi;
		eax = itoa_watcom106(eax, edx, ebx);
		eax = esp;
		ebx = esp;
		edx = ___185c7ah;
		eax = ___251e8h_cdecl(eax);
		ecx -= eax;
		eax = D(___1a10b8h);
		D(esp+0x28) = esi;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		eax = D(esp+0x1c);
		edx = D(esp+0x24);
		ebx = D(esp+0x2c);
		ecx = D(esp+0x18);
		eax += 0x6c;
		edx += 0x2f80;
		ebx++;
		D(esp+0x1c) = eax;
		D(esp+0x24) = edx;
		D(esp+0x2c) = ebx;
		if((int)ebx < (int)ecx) goto ___37f22h;
___3817ah:
		return;
}
