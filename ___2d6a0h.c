#include "drally.h"

	extern byte ___192f00h[];
	extern byte ___192f28h[];
	extern byte ___192f50h[];
	extern byte ___192f78h[];
	extern byte ___192fa0h[];
	extern byte ___192fc8h[];

void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

void ___2d6a0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = 0x136aa;
		eax = ___192f00h;
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = ___192f28h;
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = ___192f50h;
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = ___192f78h;
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = ___192fa0h;
		___13094h_cdecl(eax, edx);
		edx = 0x1feaa;
		eax = ___192fc8h;
		___13094h_cdecl(eax, edx);
		return;
}
