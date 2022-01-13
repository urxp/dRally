#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ NUM_OF_CARS[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___243ce4h[];
	extern int ___243178h[4];
	extern __BYTE__ ___243c60h[];

// UPDATE POSITION AFTER KILL
void race___56170h(void){

	__BYTE__ 	tmp_b;
	int 		i, m, n;
	struct_35e_t *	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	n = -1;
	while(++n < (int)D(NUM_OF_CARS)){

		m = -1;
		while(++m < (int)D(NUM_OF_CARS)){

			if(m != n){
				
				if(s_35e[n].Position > s_35e[m].Position){

					if(((int)D(___1de580h+0x94*n+0x18) > 0)&&((int)D(___1de580h+0x94*m+0x18) <= 0)){

						tmp_b = s_35e[n].Position;
						s_35e[n].Position = s_35e[m].Position;
						s_35e[m].Position = tmp_b;

					}
				}
			}
		}
	}

	n = -1;
	while(++n < (int)D(NUM_OF_CARS)){

		if(D(___1de580h+0x94*n+0x18) == 0){

			i = 0;

			m = -1;
			while(++m < (int)D(___243ce4h)){

				if(___243178h[m] == n) i = 1;
			}

			if(i == 0){
			
				___243178h[D(___243ce4h)] = n;
				D(___243ce4h)++;
			}
		}

		if((int)D(___1de580h+0x94*n+0x18) > 0){

			i = -1;
			m = -1;
			while(++m < (int)D(___243ce4h)){

				if(___243178h[m] == n) i = m;
			}

			if(i != -1){

				D(___243ce4h)--;

				while(i < (int)D(___243ce4h)){

					___243178h[i] = ___243178h[i+1];
					i++;
				}

				___243178h[D(___243ce4h)] = -1;
			}
		}
	}

	m = -1;
	while(++m < (int)D(___243ce4h)){

		s_35e[___243178h[m]].Position = B(NUM_OF_CARS)-m;
	}

	D(___243c60h) = n;
}
