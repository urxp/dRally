#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243cd4h[];
	extern __BYTE__ ___243ca0h[];
	extern __BYTE__ ___243330h[];
	extern __BYTE__ ___243334h[];
	extern __BYTE__ ___24332ch[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___1a10a0h[];
	extern __BYTE__ ___1a10a8h[];
	extern int LAP_PREVIOUS_MIN;
	extern int LAP_PREVIOUS_SEC;
	extern __BYTE__ ___1a1090h[];
	extern int LAP_PREVIOUS_100;
	extern __BYTE__ ___243cdch[];

void race___40864h(void);

// TAB SWITCH
void race___40db4h(void){

	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[4];
	struct_35e_t *	s_35e;
	int n;


	s_35e = (struct_35e_t *)___1e6ed0h;


	D(___243334h) = getCounter(3) - D(___243330h);
	D(___243330h) = getCounter(3);
	D(___24332ch) = D(___243334h) << 15;

	if ((int)getCounter(1) > 0xbe) {

		if (s_35e[D(MY_CAR_IDX)].Finished == 0) {

			D(___243cd4h) += D(___243334h);
			D(___243ca0h) += D(___243334h);
			n = D(___243cd4h) / 70;
			D(___1a10a0h) = n / 60;
			D(___1a10a8h) = n % 60;
			D(___1a1090h) = (int)(1.42 * (double)(int)(D(___243cd4h) % 70));
			n = D(___243ca0h) / 70;
			LAP_PREVIOUS_MIN = n / 60;
			LAP_PREVIOUS_SEC = n % 60;
			LAP_PREVIOUS_100 = (int)(1.42 * (double)(int)(D(___243ca0h) % 70));
		}
	}

	race___40864h();
}
