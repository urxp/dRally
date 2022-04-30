#include "drally.h"
#include "drally_structs_fixed.h"

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];

__DWORD__ ___14c50h(void){

	racer_t * 	s_6c;

	s_6c = (racer_t *)___1a01e0h;

	if(s_6c[D(___1a1ef8h)].engine > 0){

		s_6c[D(___1a1ef8h)].engine--;
	}
	else {

		s_6c[D(___1a1ef8h)].money /= 2;
	}

	return 0;
}
