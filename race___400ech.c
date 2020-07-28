#include "drally.h"

	extern byte ___1de598h[];
	extern byte ___1de7e0h[];
	extern byte ___1de5d4h[];
	extern byte ___1de810h[];
	extern byte ___1de5d0h[];
	extern byte ___1de7dch[];

void race___400ech(void){

	int 	n;

	n = -1;
	while(++n < 4){
	
		D(0x54*n+___1de7e0h) = 0x64-(D(0x94*n+___1de598h)+0x3ff)/0x400;		// Damage
		D(0x54*n+___1de810h) = D(0x94*n+___1de5d4h);						// Bonus income multiplier
		D(0x54*n+___1de7dch) = D(0x94*n+___1de5d0h);
	}
}
