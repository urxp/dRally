#include "drally.h"

	extern byte ___193cc0h[];
	extern byte ___193ce8h[];
	extern byte ___193d10h[];
	extern byte ___193d38h[];
	extern byte ___193d60h[];
	extern byte ___193d88h[];

void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

void ___2d20ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = 0x136aa;
		eax = ___193cc0h;
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = ___193ce8h;
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = ___193d10h;
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = ___193d38h;
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = ___193d60h;
		___13094h_cdecl(eax, edx);
		edx = 0x1feaa;
		eax = ___193d88h;
		___13094h_cdecl(eax, edx);
		return;
}
