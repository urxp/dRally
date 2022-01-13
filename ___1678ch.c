#include "drally.h"
#include "drally_fonts.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e74h;
	extern __BYTE__ ___185ba9h[];
	extern __POINTER__ ___1a10cch;
	extern __BYTE__ kmap[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___17324h(void);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

// TOO SLOW
void ___1678ch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	px;
	int 	i, j;

	___13248h_cdecl(0x21, 0x83, 0x1f1, 0xe6, 1);

	j = -1;
	while(++j < 0x80){

		i = -1;
		while(++i < 0x68){

			if((px = read_b(___1a1e74h+0x68*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x1a42d+0x280*j+i, px);
		}
	}

	VESA101_16X16_FORMAT_PRINT("", 161, 136);
	VESA101_16X16_FORMAT_PRINT("", 161, 152);
	VESA101_16X16_FORMAT_PRINT("[Too slow, no dough!", 161, 168);
	VESA101_16X16_FORMAT_PRINT("", 161, 184);
	VESA101_16X16_FORMAT_PRINT("Death Rally is for winners. You", 161, 200);
	VESA101_16X16_FORMAT_PRINT("totally lost this race. [All the", 161, 216);
	VESA101_16X16_FORMAT_PRINT("[bonus $$ you collected on the way", 161, 232);
	VESA101_16X16_FORMAT_PRINT("[are null and void.{ You get nothing,", 161, 248);
	VESA101_16X16_FORMAT_PRINT("get it? Zero, none, naught, nix,", 161, 264);
	VESA101_16X16_FORMAT_PRINT("nada, zilch. Next time, be better.", 161, 280);
	___12e78h_cdecl(___1a10cch, (font_props_t *)___185ba9h, "CONTINUE", 0x316c0);
	B(kmap+0x1c) = 0;
	___12cb8h__VESA101_PRESENTSCREEN();
	___17324h();
}
