#include "drally.h"
#include "drally_fonts.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e98h;
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___185a4ch[];
	extern __DWORD__ ___1865fch[];
	extern __POINTER__ ___1a1ea0h;
	extern __BYTE__ ___1a1ee8h[];

void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
__DWORD__ underground___28c1ch(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

// SHOP CONTINUE
void ___26e54h(void){

	int 	i, j;

	__DWORD__	eax, ebx, ecx, edx, edi, esi, ebp;


	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x27a30+0x280*j+i, read_b(___1a1e98h+0x9000+0x60*j+i));
	}

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	D(___185a4ch) = underground___28c1ch();

	if((D(___185a14h_UseWeapons) == 0)||(D(___185a4ch) == 0)){

		VESA101_16X16_FORMAT_PRINT("[CONTINUE", 170, 124);
		VESA101_16X16_FORMAT_PRINT("", 170, 140);
		VESA101_16X16_FORMAT_PRINT("Exit the Shop and enter the Race", 170, 156);
		VESA101_16X16_FORMAT_PRINT("Sign-Up.", 170, 172);
	}
	else {

		VESA101_16X16_FORMAT_PRINT("[CONTINUE", 170, 124);
		VESA101_16X16_FORMAT_PRINT("", 170, 140);
		VESA101_16X16_FORMAT_PRINT("Exit the Shop and enter the", 170, 156);
		VESA101_16X16_FORMAT_PRINT("Underground Market.", 170, 172);
	}

	VESA101_16X16_FORMAT_PRINT("", 170, 188);
	VESA101_16X16_FORMAT_PRINT("Press [Esc{ for previous menu", 170, 204);
	___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), ___1a1ea0h, ___1865fch);
}
