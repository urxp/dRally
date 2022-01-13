#include "drally.h"
#include "drally_structs_fixed.h"
#include "drmemory.h"

	extern racer_t ___1a01e0h[20];
	extern __BYTE__ ___1a1ef8h[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);

static void helper00(int A1){

	int 			n;
	racer_t * 		vp;

	vp = (racer_t *)___3f71ch__allocateMemory(20*sizeof(racer_t));
	memcpy(vp, ___1a01e0h, 20*sizeof(racer_t));

	n = -1;
	while(++n < A1) memcpy(&___1a01e0h[n], &vp[A1-n-1], sizeof(racer_t));

	dRMemory_free((__POINTER__)vp);
	D(___1a1ef8h) = (A1-1)-D(___1a1ef8h);
}


// SOMETHING WITH RANKINGS SORTING 
void ___30c60h_cdecl(int A1){

	int 			n;

	helper00(A1);

	if(A1 > 0){
		
		___1a01e0h[0].rank = 1;

		n = 0;
		while(++n < A1){

			if(___1a01e0h[n-1].points != ___1a01e0h[n].points){

				___1a01e0h[n].rank = n+1;
			}
			else {
			
				___1a01e0h[n].rank = ___1a01e0h[n-1].rank;
			}
		}
	}

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) helper00(A1);
#endif // DR_MULTIPLAYER
}
