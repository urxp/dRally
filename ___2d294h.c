#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"
#include "watcom106.h"

typedef char char40[40];

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

static const char40 ___1923c0h[5][6] = {
	[0] = {
		[0] = "[Borrow $12,000 - Pay $18,000",
		[1] = "",
		[2] = "With better gear you'd already be",
		[3] = "on the top, eh? So how does a",
		[4] = "short-term loan of [$12,000{ sound?",
		[5] = ""
	},
	[1] = {
		[0] = "[Borrow $9,000 - Pay $13,500",
		[1] = "",
		[2] = "With better gear you'd already be",
		[3] = "on the top, eh? So how does a",
		[4] = "short-term loan of [$9,000{ sound?",
		[5] = ""
	},
	[2] = {
		[0] = "[Borrow $6,000 - Pay $9,000",
		[1] = "",
		[2] = "With better gear you'd already be",
		[3] = "on the top, eh? So how does a",
		[4] = "short-term loan of [$6,000{ sound?",
		[5] = ""
	},
	[3] = {
		[0] = "[Borrow $3,000 - Pay $4,500",
		[1] = "",
		[2] = "With better gear you'd already be",
		[3] = "on the top, eh? So how does a",
		[4] = "short-term loan of [$3,000{ sound?",
		[5] = ""
	},
	[4] = {
		[0] = "[Borrow $1,500 - Pay $2,250",
		[1] = "",
		[2] = "With better gear you'd already be",
		[3] = "on the top, eh? So how does a",
		[4] = "short-term loan of [$1,500{ sound?",
		[5] = ""
	}
};

// LOANSHARK STUFF
void ___2d294h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x64];
	racer_t * 	s_6c;

	s_6c = (racer_t *)___1a01e0h;
	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	edx = 5-s_6c[D(___1a1ef8h)].car;
	if(s_6c[D(___1a1ef8h)].car == 0) edx = 4;

	if(s_6c[D(___1a1ef8h)].loanshark_counter == -1){

		VESA101_16X16_FORMAT_PRINT(___1923c0h[edx][0], 170, 124);
		VESA101_16X16_FORMAT_PRINT(___1923c0h[edx][1], 170, 140);
		VESA101_16X16_FORMAT_PRINT(___1923c0h[edx][2], 170, 156);
		VESA101_16X16_FORMAT_PRINT(___1923c0h[edx][3], 170, 172);
		VESA101_16X16_FORMAT_PRINT(___1923c0h[edx][4], 170, 188);
		VESA101_16X16_FORMAT_PRINT(___1923c0h[edx][5], 170, 204);
	}
	else {

		switch(s_6c[D(___1a1ef8h)].loanshark_type){
		case 0:
			itoa_watcom106((int)((((double)(int)(s_6c[D(___1a1ef8h)].loanshark_counter-1)/3.0)*6000.0)+12000.0), esp+0x50, 10);
			break;
		case 1:
			itoa_watcom106((int)((((double)(int)(s_6c[D(___1a1ef8h)].loanshark_counter-1)/3.0)*4500.0)+9000.0), esp+0x50, 10);
			break;
		case 2:
			itoa_watcom106((int)((((double)(int)(s_6c[D(___1a1ef8h)].loanshark_counter-1)/3.0)*3000.0)+6000.0), esp+0x50, 10);
			break;
		case 3:
			itoa_watcom106((int)((((double)(int)(s_6c[D(___1a1ef8h)].loanshark_counter-1)/3.0)*1500.0)+3000.0), esp+0x50, 10);
			break;
		case 4:	
			itoa_watcom106((int)((((double)(int)(s_6c[D(___1a1ef8h)].loanshark_counter-1)/3.0)*750.0)+1500.0), esp+0x50, 10);
			break;
		default:
			break;
		}

		VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(esp, "[Pay back $"), esp+0x50), "."), 170, 124);
		VESA101_16X16_FORMAT_PRINT("",                                                        170, 140);
		VESA101_16X16_FORMAT_PRINT("Petrol brain, you owe me. You'd",                         170, 156);
		VESA101_16X16_FORMAT_PRINT("better be here to pay me back, or",                       170, 172);
		VESA101_16X16_FORMAT_PRINT("else we have nothing to discuss.",                        170, 188);
		VESA101_16X16_FORMAT_PRINT("",                                                        170, 204);
	}
}
