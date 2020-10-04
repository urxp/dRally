#include "drally.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a01fch[];
	extern byte ___192870h[];

void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___13094h_cdecl(const char *, dword);

// UNDERGROUND LOANSHARK INFO BOX UPDATE
void ___26fach(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[4];

		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x2;
		eax -= ebx;
		L(ebx) = 0x5;
		L(ebx) -= B(eax*4+___1a01fch);
		edx = D(eax*4+___1a01fch);
		B(esp) = L(ebx);
		if(edx) goto ___26febh;
		B(esp) = 4;
___26febh:
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ebx ^= ebx;
		L(ebx) = B(esp);
		eax = ebx;
		eax <<= 0x4;
		eax -= ebx;
		ebx = ___192870h;
		eax <<= 0x4;
		ebx += eax;
		edx = 0x136aa;
		eax = ebx;
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = ebx+0x28;
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = ebx+0x50;
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = ebx+0x78;
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = ebx+0xa0;
		___13094h_cdecl(eax, edx);
		edx = 0x1feaa;
		eax = ebx+0xc8;
		___13094h_cdecl(eax, edx);
		return;
}
