#include "drally.h"

	extern byte ___19bd60h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e84h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte ___199f54h[];
	extern byte kmap[];

void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

void ___165ach(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0){

		ecx = 0x80;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x1a42d;
		esi = D(___1a1e84h);

		while(1){

			edi = 0x68;

			while(1){

				if(B(esi) != 0) B(ebx) = B(esi);
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
		___13094h_cdecl("[It ain't over till I say so!", 0x1a4a1);
		___13094h_cdecl("", 0x1cca1);
		___13094h_cdecl("So they think they got you beaten,", 0x1f4a1);
		___13094h_cdecl("eh? I think that this car-wreck has", 0x21ca1);
		___13094h_cdecl("only made you stronger, iron", 0x244a1);
		___13094h_cdecl("tempered, wicked. So [get back out", 0x26ca1);
		___13094h_cdecl("[there{ and let them find out to", 0x294a1);
		___13094h_cdecl("their cost. [This one's on me.", 0x2bca1);
	}
	else {
#endif // DR_MULTIPLAYER

		___13094h_cdecl("", 0x160bc);
		___13094h_cdecl("[End of the road, driver.", 0x188bc);
		___13094h_cdecl("", 0x1b0bc);
		___13094h_cdecl("[This then is how it ends{, not with a bang, but", 0x1d8bc);
		___13094h_cdecl("with a whimper. You had your shot at glory", 0x200bc);
		___13094h_cdecl("road, but [you blew it{. Life is hard and all", 0x228bc);
		___13094h_cdecl("that. In [Death Rally{, you get only one go, only", 0x250bc);
		___13094h_cdecl("the best can make it. But look at the bright", 0x278bc);
		___13094h_cdecl("side, at least you lived to tell the tale.", 0x2a0bc);
		___13094h_cdecl("", 0x2c8bc);
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER

	___12e78h_cdecl(D(___1a10cch), ___185ba9h, "CONTINUE", 0x280*(0x83+0xb9)+0xc0);
	D(___199f54h) = 0;
	B(kmap+0x1c) = 0;
}
