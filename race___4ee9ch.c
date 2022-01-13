#include "drally.h"
#include "drmath.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243cbch[];
	extern __BYTE__ ___243c90h[];
	extern __BYTE__ ___243c8ch[];
	extern __DWORD__ MY_CAR_IDX;
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___243cc0h[];
	extern __BYTE__ ___243cc8h[];
	extern __BYTE__ ___243cc4h[];
	extern __BYTE__ ___243ccch[];
	extern __BYTE__ ___196d8ch[];
	extern __BYTE__ ___196d94h[];
	extern __BYTE__ ___243d28h[];
	extern __BYTE__ ___196d88h[];
	extern __BYTE__ ___196d90h[];
	extern __BYTE__ ___243d2ch[];
	extern __BYTE__ ___196dcch[];
	extern __BYTE__ ___196dc8h[];


#define L_PI create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40)

void race___4ee9ch(void){

	double 			d_tmp;
	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[0x18];
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;
	edi = D(___243c90h);
	ebp = D(___243c8ch);

	D(___243cc8h) = D(___243cc0h);
	D(___243ccch) = D(___243cc4h);
	D(___243cc0h) = (int)(48.0*dRMath_sin(L_PI*((double)s_35e[MY_CAR_IDX].Direction+180.0)/180.0)*(double)s_35e[MY_CAR_IDX].__b0/3.0);
	D(___243cc4h) = (int)(32.0*dRMath_cos(L_PI*((double)s_35e[MY_CAR_IDX].Direction+180.0)/180.0)*(double)s_35e[MY_CAR_IDX].__b0/3.0);

	esi = ((D(___243cc8h) != D(___243cc0h))||(D(___243cc4h) != D(___243ccch))) ? 5 : D(___243cbch);

	if((int)esi > 0){

		ebp += (int)(D(___243cc0h)-ebp)/(int)esi;
		edi += (int)(D(___243cc4h)-edi)/(int)esi;

		esi--;
	}

	ebx = ebp+(int)(double)s_35e[MY_CAR_IDX].XLocation-D(___196d8ch);
	ecx = edi+(int)(double)s_35e[MY_CAR_IDX].YLocation-D(___196d94h);

	if((int)ebx > (int)(D(___243d28h)-D(___196d88h))) ebx = D(___243d28h)-D(___196d88h);
	if((int)ebx < 0) ebx = 0;

	if((int)ecx > (int)(D(___243d2ch)-D(___196d90h))) ecx = D(___243d2ch)-D(___196d90h);
	if((int)ecx < 0) ecx = 0;

	D(___243c8ch) = ebp;
	D(___243c90h) = edi;
	D(___243cbch) = esi;
	D(___196dcch) = ecx;
	D(___196dc8h) = ebx;
}
