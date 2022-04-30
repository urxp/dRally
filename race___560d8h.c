#include "drally.h"
#include "drally_structs_free.h"

	extern __DWORD__ MY_CAR_IDX;
	extern __DWORD__ NUM_OF_CARS;
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___243c60h[];

void race___560d8h(void){

	__BYTE__ 		b_tmp;
	int 			n;
	struct_35e_t *	s_35e;

	s_35e = (struct_35e_t *)___1e6ed0h;
	n = -1;
	while(++n < (int)NUM_OF_CARS){

		if(n != MY_CAR_IDX){

			if((s_35e[n].Finished == 0)&&(s_35e[MY_CAR_IDX].Finished == 0)){

				if(s_35e[MY_CAR_IDX].Position < s_35e[n].Position){

					b_tmp = s_35e[n].Position;
					s_35e[n].Position = s_35e[MY_CAR_IDX].Position;
					s_35e[MY_CAR_IDX].Position = b_tmp;
				}
			}
		}
	}

	D(___243c60h) = n;
}
