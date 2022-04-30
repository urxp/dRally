#include "drally.h"
#include "drally_structs_free.h"
#include "drally_structs_fixed.h"

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___1a01e0h[];
	extern cardata_t ___18e298h[6];

// REPAIR COST
__DWORD__ ___2b81ch(void){

	racer_t * 		s_6c;
	cardata_t * 	cdp;

	s_6c = (racer_t *)___1a01e0h;
	cdp = (cardata_t *)___18e298h;

	return cdp[s_6c[D(___1a1ef8h)].car].price_repair/(1+!!D(___185a14h_UseWeapons));
}
