#include "drally.h"

	extern byte ___192d20h[];
	extern byte ___192d48h[];
	extern byte ___192d70h[];
	extern byte ___192d98h[];
	extern byte ___192dc0h[];
	extern byte ___192de8h[];

void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

void ___2d618h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = 0x136aa;
		eax = ___192d20h;
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = ___192d48h;
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = ___192d70h;
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = ___192d98h;
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = ___192dc0h;
		___13094h_cdecl(eax, edx);
		edx = 0x1feaa;
		eax = ___192de8h;
		___13094h_cdecl(eax, edx);
		return;
}
