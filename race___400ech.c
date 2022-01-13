#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___1de7d0h[];

void race___400ech(void){

	int 			n;
	struct_54_t * 	s_54;


	s_54 = (struct_54_t *)___1de7d0h;

	n = -1;
	while(++n < 4){
	
		s_54[n].__10 = 0x64-(D(___1de580h+0x94*n+0x18)+0x3ff)/0x400;	// Damage
		s_54[n].__40 = D(___1de580h+0x94*n+0x54);						// Bonus income multiplier
		s_54[n].__c = D(___1de580h+0x94*n+0x50);
	}
}
