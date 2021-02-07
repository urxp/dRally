#include "drally.h"

	extern byte ___196bd8h[];
	extern byte ___185c0bh[];
	extern byte ___1a10fch[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1108h[];

void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___38708h(void);

// RACE RESULTS, PRESS ANY KEY TO CONTINUE BLINKING
void ___38768h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		edx = D(___196bd8h);
		edx++;
		D(___196bd8h) = edx;
		if(edx != 0x1e) goto ___387c6h;
		___38708h();
		ecx = 0x46b6e;
		ebx = "Press any key to continue...";
		edx = ___185c0bh;
		eax = D(___1a10fch);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x10;
		ebx = 0x10e;
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax = 0x46b62;
		edx += 0x46b62;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
___387c6h:
		if(D(___196bd8h) != 0x3c) goto ___38815h;
		___38708h();
		ecx = 0x46b6e;
		ebx = "Press any key to continue...";
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x10;
		ebx = 0x10e;
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax = 0x46b62;
		edx += 0x46b62;
		esi = 0;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		D(___196bd8h) = esi;
___38815h:
		return;
}
