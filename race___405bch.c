#include "drally.h"
#include "drmath.h"
#include "drally_structs_free.h"

	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___2435c4h[];
	extern __BYTE__ ___243334h[];
	extern __BYTE__ ___243338h[];
	extern __BYTE__ ___243854h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___1c9ee0h[];
	extern __BYTE__ ___1c9ed0h[];
	extern __BYTE__ ___1c9ef0h[];
	extern __BYTE__ ___1c9f00h[];
	extern __BYTE__ ___243330h[];

static int ___405bch_round(double dval){
// death rally correct
	return ((double)(dval-(int)dval) < 0.5) ? (int)dval : (int)(1.0+dval);
}

// IN RACE LEFT PANEL
void race___405bch(void){

	double 	dval, rad, dsin, dcos;
	int 	n;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	D(___243330h) = getCounter(3);
	D(___243334h) = 0;

	n = -1;
	rad = 180.0/dR_PI;
	while(++n < 162){

		dval = (double)(n+11)/rad;
		dcos = dRMath_cos(dval);
		dsin = dRMath_sin(dval);

		D(4*n+___243338h) = ___405bch_round(-25.0*dsin)+27;
		D(4*n+___2435c4h) = ___405bch_round(-26.0*dcos-dsin)+30;
	}

	D(___243854h) = D(MY_CAR_IDX);
	n = -1;
	if(D(MY_CAR_IDX) == ++n) n++;
	D(___243854h+4) = n;
	if(D(MY_CAR_IDX) == ++n) n++;
	D(___243854h+8) = n;
	if(D(MY_CAR_IDX) == ++n) n++;
	D(___243854h+0xc) = n;

	D(___1c9ee0h) = s_35e[D(___243854h)].Position;
	D(___1c9ee0h+4) = s_35e[D(___243854h+4)].Position;
	D(___1c9ee0h+8) = s_35e[D(___243854h+8)].Position;
	D(___1c9ee0h+0xc) = s_35e[D(___243854h+0xc)].Position;
	D(___1c9ed0h) = 7*(D(___1c9ee0h)-1);
	D(___1c9ed0h+4) = 7*(D(___1c9ee0h+4)-1);
	D(___1c9ed0h+8) = 7*(D(___1c9ee0h+8)-1);
	D(___1c9ed0h+0xc) = 7*(D(___1c9ee0h+0xc)-1);
	D(___1c9ef0h) = 0x10000*D(___1c9ed0h);
	D(___1c9ef0h+4) = 0x10000*D(___1c9ed0h+4);
	D(___1c9ef0h+8) = 0x10000*D(___1c9ed0h+8);
	D(___1c9ef0h+0xc) = 0x10000*D(___1c9ed0h+0xc);
	D(___1c9f00h) = 0;
	D(___1c9f00h+4) = 0;
	D(___1c9f00h+8) = 0;
	D(___1c9f00h+0xc) = 0;
}
