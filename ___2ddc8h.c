#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e70h[];
	extern byte ___194e90h[];
	extern byte ___194eb8h[];
	extern byte ___194ee0h[];
	extern byte ___194f08h[];
	extern byte ___194f30h[];
	extern byte ___194f58h[];
	extern byte ___1865fch[];
	extern byte ___1a1ea0h[];
	extern byte ___1a1ee8h[];

void ___259e0h_cdecl(dword, dword, dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

// MARKET CONTINUE INFO BOX MESSAGE
void ___2ddc8h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e70h);
		ebx += 0x27a30;
		edx = ecx;
		L(edx) >>= 2;
___2ddf2h:
		H(ecx) = L(edx);
___2ddf4h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2ddf4h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2ddf2h;
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = 0x136aa;
		eax = ___194e90h;
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = ___194eb8h;
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = ___194ee0h;
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = ___194f08h;
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = ___194f30h;
		___13094h_cdecl(eax, edx);
		edx = 0x1feaa;
		eax = ___194f58h;
		___13094h_cdecl(eax, edx);
		edx = 0x10d;
		eax = 0x1b0;
		ecx = D(___1a1ea0h);
		ebx = D(___1a1ee8h);
		___259e0h_cdecl(eax, edx, ebx, ecx, ___1865fch);
		return;
}
