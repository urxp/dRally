#include "drally.h"

	extern byte ___193bd0h[];
	extern byte ___193bf8h[];
	extern byte ___193c20h[];
	extern byte ___193c48h[];
	extern byte ___193c70h[];
	extern byte ___193c98h[];

void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
	
// MARKET STUFF OUT OF STOCK INFO BOX MESSAGE
void ___2d184h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = 0x136aa;
		eax = ___193bd0h;
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = ___193bf8h;
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = ___193c20h;
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = ___193c48h;
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = ___193c70h;
		___13094h_cdecl(eax, edx);
		edx = 0x1feaa;
		eax = ___193c98h;
		___13094h_cdecl(eax, edx);
		return;
}
