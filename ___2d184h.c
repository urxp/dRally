#include "drally.h"
#include "drally_fonts.h"

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

// MARKET STUFF OUT OF STOCK INFO BOX MESSAGE
void ___2d184h(void){

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);

	VESA101_16X16_FORMAT_PRINT("[OUT OF STOCK", 170, 124);
	VESA101_16X16_FORMAT_PRINT("", 170, 140);
	VESA101_16X16_FORMAT_PRINT("Sorry, no can do. That's out of", 170, 156);
	VESA101_16X16_FORMAT_PRINT("stock. Hold your horse(power)s", 170, 172);
	VESA101_16X16_FORMAT_PRINT("till after the next race.", 170, 188);
	VESA101_16X16_FORMAT_PRINT("", 170, 204);
}
