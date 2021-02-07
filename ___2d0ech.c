#include "drally.h"

typedef char char40[40];

void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

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
void ___2d0ech_cdecl(dword A1){

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	___13094h_cdecl(___193db0h[A1][0], 0x136aa);
	___13094h_cdecl(___193db0h[A1][1], 0x15eaa);
	___13094h_cdecl(___193db0h[A1][2], 0x186aa);
	___13094h_cdecl(___193db0h[A1][3], 0x1aeaa);
	___13094h_cdecl(___193db0h[A1][4], 0x1d6aa);
	___13094h_cdecl(___193db0h[A1][5], 0x1feaa);
}
