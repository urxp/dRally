#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___185ba9h[];
	extern __POINTER__ ___1a10cch;

void ___12e78h_cdecl(__BYTE__ * A1, const font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

void ___1716ch(void){

	___13248h_cdecl(0x2d, 0x83, 0x1ca, 0xe6, 1);
	VESA101_16X16_FORMAT_PRINT("", 60, 141);
	VESA101_16X16_FORMAT_PRINT("[Psst...Yeah you, driver.", 60, 157);
	VESA101_16X16_FORMAT_PRINT("", 60, 173);
	VESA101_16X16_FORMAT_PRINT("Jealousy burns you like a dragon inside, you", 60, 189);
	VESA101_16X16_FORMAT_PRINT("[want that road all to yourself?{ So jinx", 60, 205);
	VESA101_16X16_FORMAT_PRINT("those rival suckers, let them go out in a", 60, 221);
	VESA101_16X16_FORMAT_PRINT("blaze; you take the glory. [Welcome to the", 60, 237);
	VESA101_16X16_FORMAT_PRINT("[Underground Market.{ What you want, we got.", 60, 253);
	VESA101_16X16_FORMAT_PRINT("Dig out the dough, this gonna cost you.", 60, 269);
	VESA101_16X16_FORMAT_PRINT("", 60, 285);
	___12e78h_cdecl(___1a10cch, (font_props_t *)___185ba9h, "CONTINUE", 0x316c0);
}
