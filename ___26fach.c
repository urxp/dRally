#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

typedef char char40[40];

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];

static const char40 ___192870h[5][6] = {
	[0] = {
		[0] = "[Loan of $12,000 granted.",
		[1] = "",
		[2] = "You have 3 races to pay me back the",
		[3] = "[$18,000{. Fair is fair [<GRIN>{.",
		[4] = "",
		[5] = "Press [ESC{ to go back to the shop."
	},
	[1] = {
		[0] = "[Loan of $9,000 granted.",
		[1] = "",
		[2] = "You have 3 races to pay me back the",
		[3] = "[$13,500{. Fair is fair [<GRIN>{.",
		[4] = "",
		[5] = "Press [ESC{ to go back to the shop."
	},
	[2] = {
		[0] = "[Loan of $6,000 granted.",
		[1] = "",
		[2] = "You have 3 races to pay me back the",
		[3] = "[$9,000{. Fair is fair [<GRIN>{.",
		[4] = "",
		[5] = "Press [ESC{ to go back to the shop."
	},
	[3] = {
		[0] = "[Loan of $3,000 granted.",
		[1] = "",
		[2] = "You have 3 races to pay me back the",
		[3] = "[$4,500{. Fair is fair [<GRIN>{.",
		[4] = "",
		[5] = "Press [ESC{ to go back to the shop."
	},
	[4] = {
		[0] = "[Loan of $1,500 granted.",
		[1] = "",
		[2] = "You have 3 races to pay me back the",
		[3] = "[$2,250{. Fair is fair [<GRIN>{.",
		[4] = "",
		[5] = "Press [ESC{ to go back to the shop."
	}
};

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

// UNDERGROUND LOANSHARK INFO BOX UPDATE
void ___26fach(void){

	int 		n;
	racer_t * 	s_6c;

	s_6c = (racer_t *)___1a01e0h;
	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	n = 5-s_6c[D(___1a1ef8h)].car;
	VESA101_16X16_FORMAT_PRINT(___192870h[n][0], 170, 124);
	VESA101_16X16_FORMAT_PRINT(___192870h[n][1], 170, 140);
	VESA101_16X16_FORMAT_PRINT(___192870h[n][2], 170, 156);
	VESA101_16X16_FORMAT_PRINT(___192870h[n][3], 170, 172);
	VESA101_16X16_FORMAT_PRINT(___192870h[n][4], 170, 188);
	VESA101_16X16_FORMAT_PRINT(___192870h[n][5], 170, 204);
}

void ___2d618h(void){

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);

	VESA101_16X16_FORMAT_PRINT("[Loan denied, Vagabond driver.",     170, 124);
	VESA101_16X16_FORMAT_PRINT("",                                   170, 140);
	VESA101_16X16_FORMAT_PRINT("This is a business, not a charity.", 170, 156);
	VESA101_16X16_FORMAT_PRINT("We don't invest in unproven wild",   170, 172);
	VESA101_16X16_FORMAT_PRINT("cards. So buzz off, bug.",           170, 188);
	VESA101_16X16_FORMAT_PRINT("",                                   170, 204);
}
