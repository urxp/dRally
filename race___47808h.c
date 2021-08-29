#include "drally.h"

	extern void * ___243d70h;
	extern byte ___1d7810h[];

void race___47808h(dword A1, dword A2, const char * A3){

	__BYTE__ 	px;
	int 		i, j, n;


	n = -1;
	//while(++n < strlen(A3)){
	while(A3[++n]){

		j = -1;
		while(++j < 6){

			i = -1;
			while(++i < 6){

				if((px = read_b(___1d7810h+0x24*(A3[n]-0x20)+6*j+i)) != 0) write_b(___243d70h+0xcc*(j+8*A2+6)+6*(A1+n+1)+i, px);
			}
		}
	}
}
