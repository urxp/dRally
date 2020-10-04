#include "drally.h"

	extern byte ___243ce8h[];
	extern byte ___2435c4h[];
	extern byte ___243334h[];
	extern byte ___243338h[];
	extern byte ___243854h[];
	extern byte ___243858h[];
	extern byte ___24385ch[];
	extern byte ___243860h[];
	extern byte ___1e6fd9h[];
	extern byte ___1c9ee0h[];
	extern byte ___1c9ee4h[];
	extern byte ___1c9ee8h[];
	extern byte ___1c9eech[];
	extern byte ___1c9ed0h[];
	extern byte ___1c9ef0h[];
	extern byte ___1c9ed4h[];
	extern byte ___1c9ef4h[];
	extern byte ___1c9f0ch[];
	extern byte ___1c9ed8h[];
	extern byte ___1c9ef8h[];
	extern byte ___1c9f08h[];
	extern byte ___1c9f04h[];
	extern byte ___1c9edch[];
	extern byte ___1c9f00h[];
	extern byte ___1c9efch[];
	extern byte ___243894h[];
	extern byte ___243330h[];

double dR_Math_sin(double);
double dR_Math_cos(double);

static int ___405bch_round(double dval){
// death rally correct
	return ((double)(dval-(int)dval) < 0.5) ? (int)dval : (int)(1.0+dval);
}

// IN RACE LEFT PANEL
void race___405bch(void){

	double 	dval, rad, dsin, dcos;
	int 	n;


	D(___243330h) = D(___243894h);
	D(___243334h) = 0;

	n = -1;
	rad = 180.0/dR_PI;
	while(++n < 162){

		dval = (double)(n+11)/rad;
		dcos = dR_Math_cos(dval);
		dsin = dR_Math_sin(dval);

		D(4*n+___243338h) = ___405bch_round(-25.0*dsin)+27;
		D(4*n+___2435c4h) = ___405bch_round(-26.0*dcos-dsin)+30;
	}

	D(___243854h) = D(___243ce8h);
	n = -1;
	if(D(___243ce8h) == ++n) n++;
	D(___243858h) = n;
	if(D(___243ce8h) == ++n) n++;
	D(___24385ch) = n;
	if(D(___243ce8h) == ++n) n++;
	D(___243860h) = n;

	D(___1c9ee0h) = B(0x35e*D(___243854h)+___1e6fd9h);
	D(___1c9ee4h) = B(0x35e*D(___243858h)+___1e6fd9h);
	D(___1c9ee8h) = B(0x35e*D(___24385ch)+___1e6fd9h);
	D(___1c9eech) = B(0x35e*D(___243860h)+___1e6fd9h);
	D(___1c9ed0h) = 7*(D(___1c9ee0h)-1);
	D(___1c9ed4h) = 7*(D(___1c9ee4h)-1);
	D(___1c9ed8h) = 7*(D(___1c9ee8h)-1);
	D(___1c9edch) = 7*(D(___1c9eech)-1);
	D(___1c9ef0h) = 0x10000*D(___1c9ed0h);
	D(___1c9ef4h) = 0x10000*D(___1c9ed4h);
	D(___1c9ef8h) = 0x10000*D(___1c9ed8h);
	D(___1c9efch) = 0x10000*D(___1c9edch);
	D(___1c9f00h) = 0;
	D(___1c9f04h) = 0;
	D(___1c9f08h) = 0;
	D(___1c9f0ch) = 0;
}
