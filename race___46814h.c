#include "drally.h"

	extern byte ___2432f0h[];
	extern byte ___243d08h[];
	extern byte ___243d80h[];
	extern byte ___1a54d0h[];
	extern byte ___196e78h[];
	extern byte ___183505h[];
	extern byte ___18350dh[];
	extern byte ___183515h[];
	extern byte ___18351dh[];
	extern byte ___183525h[];
	extern byte ___243304h[];
	extern byte ___243308h[];
	extern byte ___2432f8h[];
	extern byte ___2432ech[];
	extern byte ___2432f4h[];

double dR_Math_sin(double);
double dR_Math_cos(double);

void race___46814h(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[8];

		ebp = D(___2432f0h);
		edx = 0;
		D(___243d08h) = edx;
		edx = 0x100;
___4683ah:
		esi = D(___243d08h);
		eax = D(___243d80h);
		esi <<= 9;
		esi += eax;
		eax = D(___243d08h);
		edi = ___1a54d0h;
		eax <<= 8;
		ecx = edx;
		eax += 0x100;
		esi += 0xa0;
		edi += eax;
		memcpy(edi, esi, ecx);
		ebx = D(___243d08h);
		ebx++;
		D(___243d08h) = ebx;
		if((int)ebx < 0xc8) goto ___4683ah;
		FPUSH(F32(___196e78h));
		ST(0) = ST(0)*F64(___183505h);
		ST(0) = ST(0)/F64(___18350dh);
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*F64(___183515h);
		ST(0) = F64(___18351dh)/ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*F64(___183525h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(___243304h) = (int)FPOP();
		edx = D(___243304h);
		esi = 0xa0020;
		eax = 4*edx;
		edi = 0;
		eax -= edx;
		D(___243308h) = esi;
		eax <<= 3;
		D(___243d08h) = edi;
		eax += edx;
		ST(0) = (int)ST(0);
		eax <<= 3;
		D(___2432f8h) = (int)FPOP();
		D(___2432ech) = eax;
___46902h:
		eax = D(___2432ech);
		L(eax) = 0;
		D(___2432f4h) = eax;
		if((int)eax <= 0xc900) goto ___4691fh;
		D(___2432f4h) = 0xc900;
___4691fh:
		eax = D(___2432f4h);
		eax = eax*D(___2432f8h);
		ebx = D(___243308h);
		ebp = eax;
		eax = (int)eax>>0x11;
		ebp = (int)ebp>>0x10;
		edx = eax-0xa;
		D(___2432f0h) = ebp;
		ebx += edx;
		L(ecx) = 0xa;
		L(eax) = 0;
___46948h:
		if((short)X(edx) < 0) goto ___4694fh;
		B(ebx) = L(eax);
___4694fh:
		ebx++;
		X(edx)++;
		L(ecx)--;
		if(L(ecx)) goto ___46948h;
		edx = 0xff;
		ebx = 0xc900;
		ebp = D(___2432f0h);
		ecx = D(___2432f4h);
		esi = D(___243308h);
		edi = ebp;
		edx -= ebp;
		ebx -= ecx;
		edi = (int)edi>>1;
		ebx = ___1a54d0h+ebx;
		edi += esi;
		ecx = 0x100;
___46987h:
		L(eax) = B(ebx);
		H(edx) += L(edx);
		B(edi) = L(eax);
		edi += !!(H(edx) < L(edx));
		ebx++;
		ecx--;
		if(ecx) goto ___46987h;
		ebp = D(___2432f0h);
		edx = ebp;
		edx = (int)edx>>1;
		edx += 0xff;
		ebx = D(___243308h);
		edx -= ebp;
		ebx += edx;
		L(ecx) = 0xa;
		L(eax) = 0;
___469b2h:
		if((short)X(edx) > 0xff) goto ___469c2h;
		B(ebx) = L(eax);
		ebx++;
		X(edx)++;
		L(ecx)--;
		if(L(ecx)) goto ___469b2h;
___469c2h:
		ebp = D(___2432f0h);
		edi = D(___243308h);
		eax = D(___243304h);
		edx = D(___2432ech);
		ebx = D(___243d08h);
		edi += 0x140;
		ebx++;
		edx -= eax;
		D(___243308h) = edi;
		D(___2432ech) = edx;
		D(___243d08h) = ebx;
		if((int)ebx < 0xc8) goto ___46902h;
		return;
}
