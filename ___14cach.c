#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e74h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];

void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___13094h_cdecl(const char *, dword);

void ___14cach(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);
	ecx = 0x80;
	edx = 0x68;
	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	esi = D(___1a1e74h);
	ebx += 0x1a42d;

	while(1){

		edi = edx;

		while(1){

			if(B(esi) != 0) B(ebx) = B(esi);
			ebx++;
			esi++;

			edi--;
			if(edi == 0) break;
		}

		ebx += 0x280;
		ebx -= edx;

		ecx--;
		if(ecx == 0) break;
	}

	___13094h_cdecl("", 0x154a1);
	___13094h_cdecl("", 0x17ca1);
	___13094h_cdecl("[You were lapped, you loser!", 0x1a4a1);
	___13094h_cdecl("", 0x1cca1);
	___13094h_cdecl("The pain, the humiliation! Your stunt", 0x1f4a1);
	___13094h_cdecl("made me the laughing stock of the", 0x21ca1);
	___13094h_cdecl("races. What were you trying to do,", 0x244a1);
	___13094h_cdecl("mimic slow-motion? No one is going", 0x26ca1);
	___13094h_cdecl("to take me seriously after this.", 0x294a1);
	___13094h_cdecl("[No money or points awarded.", 0x2bca1);
	___12e78h_cdecl(D(___1a10cch), ___185ba9h, "CONTINUE", 0x316c0);
}
