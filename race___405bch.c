#include "drally.h"

	extern byte ___243ce8h[];
	extern byte ___2435c4h[];
	extern byte ___243334h[];
	extern byte ___243338h[];
	extern byte ___243854h[];
	extern byte ___1e6ed0h[];
	extern byte ___1c9ee0h[];
	extern byte ___1c9ed0h[];
	extern byte ___1c9ef0h[];
	extern byte ___1c9f00h[];
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
	D(___243854h+4) = n;
	if(D(___243ce8h) == ++n) n++;
	D(___243854h+8) = n;
	if(D(___243ce8h) == ++n) n++;
	D(___243854h+0xc) = n;

	D(___1c9ee0h) = B(0x35e*D(___243854h)+___1e6ed0h+0x109);
	D(___1c9ee0h+4) = B(0x35e*D(___243854h+4)+___1e6ed0h+0x109);
	D(___1c9ee0h+8) = B(0x35e*D(___243854h+8)+___1e6ed0h+0x109);
	D(___1c9ee0h+0xc) = B(0x35e*D(___243854h+0xc)+___1e6ed0h+0x109);
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
