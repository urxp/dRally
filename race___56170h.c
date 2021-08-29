#include "drally.h"
#include "drally_structs_free.h"

	extern byte ___243cf4h[];
	extern struct_35e_t ___1e6ed0h[4];
	extern byte ___1de580h[];
	extern byte ___243ce4h[];
	extern int ___243178h[4];
	extern byte ___243c60h[];

// UPDATE POSITION AFTER KILL
void race___56170h(void){

	byte 	tmp_b;
	int 	i, m, n;


	n = -1;
	while(++n < (int)D(___243cf4h)){

		m = -1;
		while(++m < (int)D(___243cf4h)){

			if(m != n){
				
				if(___1e6ed0h[n].Position > ___1e6ed0h[m].Position){

					if(((int)D(___1de580h+0x94*n+0x18) > 0)&&((int)D(___1de580h+0x94*m+0x18) <= 0)){

						tmp_b = ___1e6ed0h[n].Position;
						___1e6ed0h[n].Position = ___1e6ed0h[m].Position;
						___1e6ed0h[m].Position = tmp_b;

					}
				}
			}
		}
	}

	n = -1;
	while(++n < (int)D(___243cf4h)){

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

		___1e6ed0h[___243178h[m]].Position = B(___243cf4h)-m;
	}

	D(___243c60h) = n;
}
