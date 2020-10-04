#include "drally.h"

	extern byte ___193720h[];

void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

// MARKET STUFF INFO BOX DESCRIPTION
void ___2d054h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;

	eax = A1;


		esi = eax;
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ebx = esi;
		eax = ebx;
		eax <<= 0x4;
		eax -= ebx;
		ebx = ___193720h;
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
