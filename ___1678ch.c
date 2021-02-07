#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e74h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte kmap[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___17324h(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

// TOO SLOW
void ___1678ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	px;


	___13248h_cdecl(0x21, 0x83, 0x1f1, 0xe6, 1);
	ecx = 0x80;
	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x1a42d;
	esi = D(___1a1e74h);

	while(1){

		edi = 0x68;

		while(1){

			px = B(esi);
			if(px != 0) B(ebx) = px;
			ebx++;
			esi++;
			edi--;

			if(edi == 0) break;
		}

		ebx += 0x280;
		ebx -= 0x68;
		ecx--;
	
		if(ecx == 0) break;
	}

	___13094h_cdecl("", 0x154a1);
	___13094h_cdecl("", 0x17ca1);
	___13094h_cdecl("[Too slow, no dough!", 0x1a4a1);
	___13094h_cdecl("", 0x1cca1);
	___13094h_cdecl("Death Rally is for winners. You", 0x1f4a1);
	___13094h_cdecl("totally lost this race. [All the", 0x21ca1);
	___13094h_cdecl("[bonus $$ you collected on the way", 0x244a1);
	___13094h_cdecl("[are null and void.{ You get nothing,", 0x26ca1);
	___13094h_cdecl("get it? Zero, none, naught, nix,", 0x294a1);
	___13094h_cdecl("nada, zilch. Next time, be better.", 0x2bca1);
	___12e78h_cdecl(D(___1a10cch), ___185ba9h, "CONTINUE", 0x316c0);
	B(kmap+0x1c) = 0;
	___12cb8h__VESA101_PRESENTSCREEN();
	___17324h();
}
