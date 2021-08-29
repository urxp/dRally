#include "drally.h"

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1e98h;
	extern __DWORD__ ___1865fch[];
	extern void * ___1a1ea0h;
	extern byte ___1a1ee8h[];

void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, void * aEncoded, int * aOffsets);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

// MARKET CONTINUE INFO BOX MESSAGE
void ___2ddc8h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	void * 	ebxp;
	void *	esip;

	ecx = 0x60;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x27a30;
	esip = ___1a1e98h+0x9000;
	edx = ecx;
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esip);
			D(ebxp) = eax;
			ebxp += 0x4;
			esip += 0x4;
			H(ecx)--;
			if(H(ecx) == 0) break;
		}

		ebxp += 0x280;
		L(edx) <<= 2;
		ebxp -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	___13094h_cdecl("[CONTINUE", 0x136aa);
	___13094h_cdecl("", 0x15eaa);
	___13094h_cdecl("Exit the Underground Market and", 0x186aa);
	___13094h_cdecl("enter the Race Sign-Up.", 0x1aeaa);
	___13094h_cdecl("", 0x1d6aa);
	___13094h_cdecl("Press [Esc{ for previous menu", 0x1feaa);
	___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), ___1a1ea0h, ___1865fch);
}
