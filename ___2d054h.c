#include "drally.h"

typedef char char40[40];

void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

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
void ___2d054h_cdecl(dword A1){

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	___13094h_cdecl(___193720h[A1][0], 0x136aa);
	___13094h_cdecl(___193720h[A1][1], 0x15eaa);
	___13094h_cdecl(___193720h[A1][2], 0x186aa);
	___13094h_cdecl(___193720h[A1][3], 0x1aeaa);
	___13094h_cdecl(___193720h[A1][4], 0x1d6aa);
	___13094h_cdecl(___193720h[A1][5], 0x1feaa);
}
