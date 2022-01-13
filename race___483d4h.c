#include "drally.h"

	extern __BYTE__ ___1d7810h[];

// RACE, INFO SCREEN, SOMETHING
void ___483d4h_cdecl(__POINTER__ A1, const char * A2){

	__BYTE__ 	px;
	int 	i, j, n;

	n = -1;
	while(A2[++n]){

		j = -1;
		while(++j < 6){

			i = -1;
			while(++i < 6){

				if((px = read_b(___1d7810h+0x24*(A2[n]-0x20)+6*j+i)) != 0) write_b(A1+6*n+0x140*j+i, px);
			}
		}
	}
}
