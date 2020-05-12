#include "drally.h"

#define COOXY(x,y) (0x280*(y)+(x))

	extern byte ___185c0bh;
	extern byte ___185c0ch;
	extern byte * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte * ___1a10fch;
	extern byte * ___1a110ch;
	extern byte * ___1a1108h;
	extern byte ___185bedh[];

void ___13094h_cdecl(const char * A1, dword A2){

	dword 	ebx, ecx, edi;
	dword 	n, f_color, i, j;
	byte	c;

	byte * 	fonts[3] = { ___1a10fch, ___1a110ch, ___1a1108h };

	f_color = 0;
	n = -1;
	while(A1[++n]){

		switch(A1[n]){
		case 0x7b:
			f_color = 0;
			break;
		case 0x7d:
			f_color = 1;
			break;
		case 0x5b:
			f_color = 2;
			break;
		default:
			j = -1;
			while(++j < ___185c0ch){

				i = -1;
				while(++i < ___185c0bh){

					c = fonts[f_color][___185c0bh*(j+(A1[n]-0x20)*___185c0ch)+i];
					if(c != 0) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(i+(A2%0x280), j+(A2/0x280))] = c;
				}
			}

			A2 += ___185bedh[A1[n]];
			break;
		}
	}
}
