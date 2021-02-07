#include "drally.h"

	extern byte ___1de580h[];
	extern byte ___1de7d0h[];

void race___400ech(void){

	int 	n;

	n = -1;
	while(++n < 4){
	
		D(0x54*n+___1de7d0h+0x10) = 0x64-(D(0x94*n+___1de580h+0x18)+0x3ff)/0x400;		// Damage
		D(0x54*n+___1de7d0h+0x40) = D(0x94*n+___1de580h+0x54);						// Bonus income multiplier
		D(0x54*n+___1de7d0h+0xc) = D(0x94*n+___1de580h+0x50);
	}
}
