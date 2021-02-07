#include "drally.h"

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

double dR_Math_sin(double);
double dR_Math_cos(double);

void race___4ee9ch(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x18];

		esi = D(___243cbch);
		edi = D(___243c90h);
		ebp = D(___243c8ch);
		edx = 0x35e*D(___243ce8h);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		eax = D(___243cc0h);
		D(___243cc8h) = eax;
		eax = D(___243cc4h);
		D(___243ccch) = eax;
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*48.0;
		FPUSH(F32(edx+___1e6ed0h+0xb0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		FPUSH(3.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*32.0;
		ST(2) = ST(2)*ST(0); FPOP();
		ST(1) = ST(1)/ST(0); FPOP();
		eax = D(___243cc8h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(___243cc0h) = (int)FPOP();
		ecx = D(___243cc0h);
		D(___243cc4h) = (int)FPOP();
		if(eax != ecx) goto ___4ef60h;
		edx = D(___243cc4h);
		if(edx == D(___243ccch)) goto ___4ef65h;
___4ef60h:
		esi = 5;
___4ef65h:
		if((int)esi <= 0) goto ___4ef8ch;
		edx = D(___243cc0h);
		edx -= ebp;
		eax = edx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, esi);
		edx = D(___243cc4h);
		edx -= edi;
		ebp += eax;
		eax = edx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, esi);
		esi--;
		edi += eax;
___4ef8ch:
		eax = 0x35e*D(___243ce8h);
		ecx = D(___196d8ch);
		edx = D(___196d94h);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x10) = (int)FPOP();
		D(esp+0x14) = (int)FPOP();
		ebx = D(esp+0x10);
		eax = D(esp+0x14);
		ebx -= ecx;
		eax -= edx;
		edx = D(___243d28h);
		ecx = edi+eax;
		eax = D(___196d88h);
		ebx += ebp;
		edx -= eax;
		if((int)ebx <= (int)edx) goto ___4efe8h;
		ebx = edx;
___4efe8h:
		if((int)ebx >= 0) goto ___4efeeh;
		ebx = 0;
___4efeeh:
		eax = D(___196d90h);
		edx = D(___243d2ch);
		edx -= eax;
		if((int)ecx <= (int)edx) goto ___4f001h;
		ecx = edx;
___4f001h:
		if((int)ecx >= 0) goto ___4f007h;
		ecx = 0;
___4f007h:
		D(___243c8ch) = ebp;
		D(___243c90h) = edi;
		D(___243cbch) = esi;
		D(___196dcch) = ecx;
		D(___196dc8h) = ebx;
		return;
}
