#include "drally.h"
#include "drally_fonts.h"

typedef char char40[40];

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

static const char40 ___193720h[4][6] = {
	[0] = {
		[0] = "[Mines",
		[1] = "",
		[2] = "Sow these seeds of destruction",
		[3] = "after a blind bend where headlight",
		[4] = "eyes are tire-smoke tired.",
		[5] = ""
	},
	[1] = {
		[0] = "[Spiked Bumpers",
		[1] = "",
		[2] = "Nothing wakes you up like an enemy",
		[3] = "car, closing in to give you",
		[4] = "a sharp kiss with spiked bumpers.",
		[5] = ""
	},
	[2] = {
		[0] = "[Rocket Fuel",
		[1] = "",
		[2] = "This nectar in the veins of your",
		[3] = "vehicle takes you right into",
		[4] = "orbit, real speedy like.",
		[5] = ""
	},
	[3] = {
		[0] = "[Sabotage",
		[1] = "",
		[2] = "Do you have bad luck always riding",
		[3] = "shotgun? Time for that golden",
		[4] = "racer boy to get some. Right?",
		[5] = ""
	}
};

// MARKET STUFF INFO BOX DESCRIPTION
void ___2d054h_cdecl(int n){

	char40 * lines;

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);

	lines = (char40 *)___193720h[n];
	VESA101_16X16_FORMAT_PRINT(lines[0], 170, 124);
	VESA101_16X16_FORMAT_PRINT(lines[1], 170, 140);
	VESA101_16X16_FORMAT_PRINT(lines[2], 170, 156);
	VESA101_16X16_FORMAT_PRINT(lines[3], 170, 172);
	VESA101_16X16_FORMAT_PRINT(lines[4], 170, 188);
	VESA101_16X16_FORMAT_PRINT(lines[5], 170, 204);
}
