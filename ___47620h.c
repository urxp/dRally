#include "drally.h"

	extern byte ___24330ch[];
	extern byte ___2432dch[];
	extern byte ___243e74h[];
	extern void * ___2432d8h;

// PAUSE, RACE OVER, DIALOG BOX UNLOAD ANIMATION
int ___47620h(void){

	int 	i, j, n, rslt;

	rslt = 0;
	n = -1;
	while(++n < 969){

		if(B(___243e74h+0x21*n+0x20) <= 0x46){
	
			i = -1;
			while(++i < (int)D(___24330ch)){
				
				D(___243e74h+0x21*n+0xc) += D(___2432dch);
				D(___243e74h+0x21*n) += D(___243e74h+0x21*n+8);
				D(___243e74h+0x21*n+4) += D(___243e74h+0x21*n+0xc);
			}

			if((int)D(___243e74h+0x21*n) <= 0){

				D(___243e74h+0x21*n) = 0;
				D(___243e74h+0x21*n+8) = 0-D(___243e74h+0x21*n+8);
			}

			if((int)D(___243e74h+0x21*n) >= 0x13c0000){

				D(___243e74h+0x21*n) = 0x13c0000;
				D(___243e74h+0x21*n+8) = 0-D(___243e74h+0x21*n+8);
			}

			i = (int)(D(___243e74h+0x21*n+4)+0x8000)>>0x10;
			j = (int)(D(___243e74h+0x21*n)+0x8000)>>0x10;

			if(i <= 0xc4){

				D(___2432d8h+j+0x140*i) = D(___243e74h+0x21*n+0x10);
				D(___2432d8h+j+0x140*i+0x140) = D(___243e74h+0x21*n+0x14);
				D(___2432d8h+j+0x140*i+2*0x140) = D(___243e74h+0x21*n+0x18);
				D(___2432d8h+j+0x140*i+3*0x140) = D(___243e74h+0x21*n+0x1c);
			}
			else {

				B(___243e74h+0x21*n+0x20) = 0x46;
				rslt++;
			}
		}
	}

	return rslt;
}
