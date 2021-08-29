#include "drally.h"
#include "drmath.h"

	extern byte ___243cbch[];
	extern byte ___243c90h[];
	extern byte ___243c8ch[];
	extern byte ___243ce8h[];
	extern byte ___1e6ed0h[];
	extern byte ___243cc0h[];
	extern byte ___243cc8h[];
	extern byte ___243cc4h[];
	extern byte ___243ccch[];
	extern byte ___196d8ch[];
	extern byte ___196d94h[];
	extern byte ___243d28h[];
	extern byte ___196d88h[];
	extern byte ___196d90h[];
	extern byte ___243d2ch[];
	extern byte ___196dcch[];
	extern byte ___196dc8h[];


#define L_PI create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40)

void race___4ee9ch(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x18];


	edi = D(___243c90h);
	ebp = D(___243c8ch);

	D(___243cc8h) = D(___243cc0h);
	D(___243ccch) = D(___243cc4h);
	D(___243cc0h) = (int)(48.0*dRMath_sin(L_PI*((double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xac)+180.0)/180.0)*(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb0)/3.0);
	D(___243cc4h) = (int)(32.0*dRMath_cos(L_PI*((double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xac)+180.0)/180.0)*(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb0)/3.0);

	esi = ((D(___243cc8h) != D(___243cc0h))||(D(___243cc4h) != D(___243ccch))) ? 5 : D(___243cbch);

	if((int)esi > 0){

		ebp += (int)(D(___243cc0h)-ebp)/(int)esi;
		edi += (int)(D(___243cc4h)-edi)/(int)esi;

		esi--;
	}

	ebx = ebp+(int)(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb4)-D(___196d8ch);
	ecx = edi+(int)(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb8)-D(___196d94h);

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
