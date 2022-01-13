#include "drally.h"
#include "drally_fonts.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e98h;
	extern __DWORD__ ___1865fch[];
	extern __POINTER__ ___1a1ea0h;
	extern __BYTE__ ___1a1ee8h[];

void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

// MARKET CONTINUE INFO BOX MESSAGE
void ___2ddc8h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__POINTER__ 	ebxp;
	__POINTER__	esip;

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

	VESA101_16X16_FORMAT_PRINT("[CONTINUE", 170, 124);
	VESA101_16X16_FORMAT_PRINT("", 170, 140);
	VESA101_16X16_FORMAT_PRINT("Exit the Underground Market and", 170, 156);
	VESA101_16X16_FORMAT_PRINT("enter the Race Sign-Up.", 170, 172);
	VESA101_16X16_FORMAT_PRINT("", 170, 188);
	VESA101_16X16_FORMAT_PRINT("Press [Esc{ for previous menu", 170, 204);

	___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), ___1a1ea0h, ___1865fch);
}
