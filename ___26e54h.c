#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e70h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___185a4ch[];
	extern byte ___194da0h[];
	extern byte ___194dc8h[];
	extern byte ___194df0h[];
	extern byte ___194e18h[];
	extern byte ___194e40h[];
	extern byte ___194e68h[];
	extern byte ___194cb0h[];
	extern byte ___194cd8h[];
	extern byte ___194d00h[];
	extern byte ___194d28h[];
	extern byte ___194d50h[];
	extern byte ___194d78h[];
	extern byte ___1865fch[];
	extern byte ___1a1ea0h[];
	extern byte ___1a1ee8h[];

void ___13094h_cdecl(const char *, dword);
void ___259e0h_cdecl(dword, dword, dword, dword, dword);
dword underground___28c1ch(void);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

// SHOP CONTINUE
void ___26e54h(void){

	dword	eax, ebx, ecx, edx, edi, esi, ebp;


		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e70h);
		ebx += 0x27a30;
		edx = ecx;
		L(edx) >>= 0x2;
___26e7eh:
		H(ecx) = L(edx);
___26e80h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___26e80h;
		ebx += 0x280;
		L(edx) <<= 0x2;
		ebx -= edx;
		L(edx) >>= 0x2;
		L(ecx)--;
		if(L(ecx)) goto ___26e7eh;
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		eax = underground___28c1ch();
		edx = D(___185a14h_UseWeapons);
		D(___185a4ch) = eax;
		if(edx == 0) goto ___26f2ah;
		if(eax == 0) goto ___26f2ah;
		edx = 0x136aa;
		eax = ___194da0h;
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = ___194dc8h;
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = ___194df0h;
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = ___194e18h;
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = ___194e40h;
		___13094h_cdecl(eax, edx);
		edx = 0x1feaa;
		eax = ___194e68h;
		goto ___26f7fh;
___26f2ah:
		edx = 0x136aa;
		eax = ___194cb0h;
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = ___194cd8h;
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = ___194d00h;
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = ___194d28h;
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = ___194d50h;
		___13094h_cdecl(eax, edx);
		edx = 0x1feaa;
		eax = ___194d78h;
___26f7fh:
		___13094h_cdecl(eax, edx);
		edx = 0x10d;
		eax = 0x1b0;
		ecx = D(___1a1ea0h);
		ebx = D(___1a1ee8h);
		___259e0h_cdecl(eax, edx, ebx, ecx, ___1865fch);
		return; 
}
