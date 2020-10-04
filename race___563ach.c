#include "drally.h"

	extern byte ___243ca4h[];
	extern byte ___243cf4h[];
	extern byte ___243c60h[];
	extern byte ___243874h[];
	extern byte ___1e6ef0h[];
	extern byte ___1de580h[];
	extern byte ___1e6fdah[];
	extern byte ___1e7226h[];
	extern byte ___243ce8h[];
	extern byte ___1e6f88h[];
	extern byte ___1e6f84h[];


void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void dRally_Sound_freeEffectChannel(byte ch_num);
double dR_Math_sqrt(double);

void race___563ach(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x10];


		if((int)D(___243ca4h) <= 0xbe) goto  ___56589h;
		ebx = 0;
		ecx = D(___243cf4h);
		D(___243c60h) = ebx;
		if((int)ecx <= 0) goto ___56589h;
___563e4h:
		edx = 0;
		ebx = 0;
		if((int)D(___243874h) <= 0) goto ___5642eh;
		eax = 0x35e*D(___243c60h);
___563fbh:
		L(ecx) = B(eax+___1e6ef0h);
		if((L(ecx)&2) == 0) goto ___56422h;
		if((L(ecx)&0x40) == 0) goto ___56422h;
		ecx = D(eax+___1e6ef0h);
		ecx &= 0xbd;
		ebx = 1;
		D(eax+___1e6ef0h) = ecx;
___56422h:
		eax += 4;
		edx++;
		if((int)edx < (int)D(___243874h)) goto ___563fbh;
___5642eh:
		esi = D(___243c60h);
		eax = 0x94*esi;
		L(eax) = !!((int)D(eax+___1de580h) > 1);
		eax &= 0xff;
		eax += 0x21;
		D(esp+0xc) = eax;
		if(ebx != 1) goto ___56542h;
		eax = 0x35e*esi;
		if(D(eax+___1e6fdah) != 0) goto ___56542h;
		if(D(eax+___1e7226h) != 0) goto ___5656eh;
		edx = D(___243c60h);
		ecx = D(___243ce8h);
		esi <<= 0xc;
		D(eax+___1e7226h) = ebx;
		L(ebx) = B(___243c60h);
		esi += 0x21000;
		L(ebx) += 0xb;
		if(edx != ecx) goto ___564c2h;
		edx ^= ecx;
		eax = 0;
		L(edx) = B(esp+0xc);
		ecx = 0x10000;
		L(eax) = L(ebx);
		ebx = 0;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, esi, 0x8000);
		goto ___5656eh;
___564c2h:
		edx = 0x35e*ecx;
		FPUSH(F32(eax+___1e6f88h));
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)-(double)F32(edx+___1e6f84h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e6f88h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+4) = (int)FPOP();
		edx = D(esp+4);
		edx = edx*edx;
		ST(0) = (int)ST(0);
		D(esp) = (int)FPOP();
		eax = D(esp);
		eax = eax*eax;
		edx += eax;
		D(esp+8) = edx;
		FPUSH((int)D(esp+8));
		ST(0) = dR_Math_sqrt(ST(0));
		ST(0) = (int)ST(0);
		D(esp+8) = (int)FPOP();
		ecx = 0x58*D(esp+8);
		eax = 0x9500;
		eax -= ecx;
		ecx = eax;
		if((int)eax <= 0) goto ___5656eh;
		edx = 0;
		eax = 0;
		L(edx) = B(esp+0xc);
		L(eax) = L(ebx);
		ebx = 0;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, esi, 0x8000);
		goto ___5656eh;
___56542h:
		eax = 0x35e*D(___243c60h);
		if(D(eax+___1e7226h) != 1) goto ___5656eh;
		esi = 0;
		D(eax+___1e7226h) = esi;
		L(eax) = B(___243c60h);
		L(eax) += 0xb;
		eax &= 0xff;
		dRally_Sound_freeEffectChannel(eax);
___5656eh:
		esi = D(___243c60h);
		esi++;
		edi = D(___243cf4h);
		D(___243c60h) = esi;
		if((int)esi < (int)edi) goto ___563e4h;
___56589h:
		return;
}
