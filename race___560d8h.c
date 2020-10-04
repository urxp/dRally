#include "drally.h"

	extern byte ___243ce8h[];
	extern byte ___243cf4h[];
	extern byte ___1e6fdah[];
	extern byte ___1e6fd9h[];
	extern byte ___243c60h[];

void race___560d8h(void){

	byte 	b_tmp;
	dword 	n;

	n = -1;
	while(++n < (int)D(___243cf4h)){

		if(n != D(___243ce8h)){

			if((D(0x35e*n+___1e6fdah) == 0)&&(D(0x35e*D(___243ce8h)+___1e6fdah) == 0)){

				if(B(0x35e*D(___243ce8h)+___1e6fd9h) < B(0x35e*n+___1e6fd9h)){

					b_tmp = B(0x35e*n+___1e6fd9h);
					B(0x35e*n+___1e6fd9h) = B(0x35e*D(___243ce8h)+___1e6fd9h);
					B(0x35e*D(___243ce8h)+___1e6fd9h) = b_tmp;
				}
			}
		}
	}

	D(___243c60h) = n;
}
