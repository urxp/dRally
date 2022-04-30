#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___1de7d0h[];

void race___400ech(void){

	int 			n;
	struct_54_t * 	s_54;
	struct_94_t * 	s_94;


	s_54 = (struct_54_t *)___1de7d0h;
	s_94 = (struct_94_t *)___1de580h;

	n = -1;
	while(++n < 4){
	
		s_54[n].__10 = 100-(s_94[n].__18+1023)/1024;	// Damage
		s_54[n].__40 = s_94[n].__54;					// Bonus income multiplier
		s_54[n].__c = s_94[n].__50;
	}
}
