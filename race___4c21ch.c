#include "drally.h"
#include "drally_structs_free.h"

	const float ___3f6ech[6] = { 0.07f, 0.12f, 0.11f, 0.20f, 0.18f, 0.32f };
 	const float ___3f704h[6] = { 0.12f, 0.19f, 0.06f, 0.12f, 0.03f, 0.06f };

	extern __BYTE__ ___243cech[];
	extern __DWORD__ MY_CAR_IDX;
	extern __BYTE__ ___1de7d0h[];
	extern __DWORD__ NUM_OF_CARS;
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___243ce0h[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___185a50h[];
	extern __BYTE__ ___1de580h[];

// DIFFICULTY ADJUSTMENT
void race___4c21ch(void){

	float 			diff_f;
	int 			i, n;
	int 			dw0, dw1;
	struct_35e_t *	s_35e;
	struct_54_t * 	s_54;


	s_35e = (struct_35e_t *)___1e6ed0h;
	s_54 = (struct_54_t *)___1de7d0h;
	D(___243c60h) = 0;
	i = MY_CAR_IDX?s_54[0].__44:s_54[1].__44;

	n = -1;
	while(++n < (int)NUM_OF_CARS){

		diff_f = 1.0f;

		if((n != MY_CAR_IDX)||(D(___243ce0h) != 0)){

			if((int)D(___1de580h+0x94*n+0x18) > 0){
					
				dw0 = s_35e[MY_CAR_IDX].__108;
				dw0 = dw0*D(___243cech)+s_35e[MY_CAR_IDX].__0;
				dw1 = s_35e[n].__108;
				dw1 = dw1*D(___243cech)+s_35e[n].__0;
				dw0 -= 1;
				if(dw1 == dw0) diff_f = 1.0f+___3f6ech[2*i];
				dw1 = s_35e[MY_CAR_IDX].__108;
				dw1 = dw1*D(___243cech)+s_35e[MY_CAR_IDX].__0;
				dw0 = s_35e[n].__108;
				dw0 = dw0*D(___243cech)+s_35e[n].__0;
				dw1 -= 2;
				if(dw0 <= dw1) diff_f = 1.0f+___3f6ech[2*i+1];

				if(D(___185a50h) != 2){

					dw0 = s_35e[MY_CAR_IDX].__108;
					dw0 = dw0*D(___243cech)+s_35e[MY_CAR_IDX].__0;
					dw1 = s_35e[n].__108;
					dw1 = dw1*D(___243cech)+s_35e[n].__0;
					dw0 += 1;
					if(dw1 == dw0) diff_f = 1.0f-___3f704h[2*i];
					dw1 = s_35e[MY_CAR_IDX].__108;
					dw1 = dw1*D(___243cech)+s_35e[MY_CAR_IDX].__0;
					dw0= s_35e[n].__108;
					dw0 = dw0*D(___243cech)+s_35e[n].__0;
					dw1 += 2;
					if(dw0 >= dw1) diff_f = 1.0f-___3f704h[2*i+1];
				}
			}
		}

		F32(___1de580h+0x94*n+4) = (float)((double)F32(___1de580h+0x94*n+8)*(double)diff_f);
	}

	D(___243c60h) = n;
}
