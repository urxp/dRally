#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern void * ___1a1e98h;
	extern byte ___185a14h_UseWeapons[];
	extern byte ___185a4ch[];
	extern __DWORD__ ___1865fch[];
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
		esi = ___1a1e98h+0x9000;
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
		eax = "[CONTINUE";
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = "";
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = "Exit the Shop and enter the";
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = "Underground Market.";
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = "";
		___13094h_cdecl(eax, edx);
		edx = 0x1feaa;
		eax = "Press [Esc{ for previous menu";
		goto ___26f7fh;
___26f2ah:
		edx = 0x136aa;
		eax = "[CONTINUE";
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = "";
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = "Exit the Shop and enter the Race";
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = "Sign-Up.";
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = "";
		___13094h_cdecl(eax, edx);
		edx = 0x1feaa;
		eax = "Press [Esc{ for previous menu";
___26f7fh:
		___13094h_cdecl(eax, edx);
		___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), D(___1a1ea0h), ___1865fch);
		return; 
}
