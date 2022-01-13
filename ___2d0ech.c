#include "drally.h"
#include "drally_fonts.h"

typedef char char40[40];

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

static const char40 ___193db0h[4][6] = {
	[0] = {
		[0] = "[8 Mines loaded into your car",
		[1] = "",
		[2] = "Now those rival wheels will reap",
		[3] = "only burning engine death, and",
		[4] = "that road will be all yours.",
		[5] = ""
	},
	[1] = {
		[0] = "[Spiked bumpers installed",
		[1] = "",
		[2] = "Now you are saying: 'Stay back or",
		[3] = "you sorry, you dead.' Now that's",
		[4] = "the attitude.",
		[5] = ""
	},
	[2] = {
		[0] = "[Rocket Fuel bought",
		[1] = "",
		[2] = "Warning! We're talking 'bout a",
		[3] = "backdraft barbecue party here.",
		[4] = "[Using the fuel causes damage!{",
		[5] = ""
	},
	[3] = {
		[0] = "[Sabotage in progress",
		[1] = "",
		[2] = "Sweet deal. Now your arch-racing-",
		[3] = "rival will tailslide down that",
		[4] = "vile road to wreckhood oblivion.",
		[5] = ""
	}
};

// MARKET STUFF BOUGHT INFO BOX MESSAGE
void ___2d0ech_cdecl(int n){

	char40 * lines;

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);

	lines = (char40 *)___193db0h[n];
	VESA101_16X16_FORMAT_PRINT(lines[0], 170, 124);
	VESA101_16X16_FORMAT_PRINT(lines[1], 170, 140);
	VESA101_16X16_FORMAT_PRINT(lines[2], 170, 156);
	VESA101_16X16_FORMAT_PRINT(lines[3], 170, 172);
	VESA101_16X16_FORMAT_PRINT(lines[4], 170, 188);
	VESA101_16X16_FORMAT_PRINT(lines[5], 170, 204);
}
