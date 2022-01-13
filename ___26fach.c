#include "drally.h"
#include "drally_fonts.h"

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

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[4];

		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x2;
		eax -= ebx;
		L(ebx) = 0x5;
		L(ebx) -= B(eax*4+___1a01e0h+0x1c);
		edx = D(eax*4+___1a01e0h+0x1c);
		B(esp) = L(ebx);
		if(edx) goto ___26febh;
		B(esp) = 4;
___26febh:
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		VESA101_16X16_FORMAT_PRINT(___192870h[B(esp)][0], 170, 124);
		VESA101_16X16_FORMAT_PRINT(___192870h[B(esp)][1], 170, 140);
		VESA101_16X16_FORMAT_PRINT(___192870h[B(esp)][2], 170, 156);
		VESA101_16X16_FORMAT_PRINT(___192870h[B(esp)][3], 170, 172);
		VESA101_16X16_FORMAT_PRINT(___192870h[B(esp)][4], 170, 188);
		VESA101_16X16_FORMAT_PRINT(___192870h[B(esp)][5], 170, 204);
		return;
}
