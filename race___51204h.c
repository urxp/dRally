#include "drally.h"

	extern byte ___243c60h[];
	extern byte ___1de5d8h[];
	extern byte ___1de5b4h[];
	extern byte ___1de5a0h[];
	extern byte ___1e6f7ch[];
	extern byte ___18421dh[];
	extern byte ___184221h[];
	extern byte ___184229h[];
	extern byte ___1de590h[];
	extern byte ___184231h[];
	extern byte ___184239h[];
	extern byte ___184241h[];
	extern byte ___1e6ed4h[];
	extern byte ___1e6ed8h[];
	extern byte ___1e6edch[];
	extern byte ___196efch[];
	extern byte ___243290h[];
	extern byte ___243d80h[];
	extern byte ___1e70aeh[];

dword __GET_FRAME_COUNTER(void);

double dR_Math_sin(double);
double dR_Math_cos(double);

void race___51204h(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, cf;
	byte 	esp[0xa0];


		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		edx += eax;
		edx <<= 0x2;
		if(D(edx+___1de5d8h) != 1) goto ___514b1h;
		if((int)D(edx+___1de5b4h) <= 0) goto ___514b1h;
		if(D(edx+___1de5a0h) == 0) goto ___514b1h;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___18421dh);
		ST(0) = ST(0)*F64(___184221h);
		ST(0) = ST(0)/F64(___184229h);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1de590h));
		ST(0) = ST(0)*F64(___184231h);
		F64(esp+0x78) = FPOP();
		ST(0) = ST(0)*F64(esp+0x78);
		F64(esp+0x80) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x9c) = (int)FPOP();
		FPUSH((int)D(esp+0x9c));
		ST(0) = F64(esp+0x80)-ST(0);
		//fcomp   qword [___184239h]
		//fnstsw  ax
		//sahf    
		//jb      short ___512d5h
		if(FPOP() < F64(___184239h)) goto ___512d5h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0x80);
		ST(0) = (int)ST(0);
		D(esp+0x64) = (int)FPOP();
		goto ___512e0h;
___512d5h:
		eax = D(esp+0x9c);
		D(esp+0x64) = eax;
___512e0h:
		edx = D(___243c60h);
		eax = 0x35e*edx;
		FPUSH(F32(eax+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___18421dh);
		ST(0) = ST(0)*F64(___184221h);
		ST(0) = ST(0)/F64(___184229h);
		ST(0) = dR_Math_cos(ST(0));
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH(F32(eax*4+___1de590h));
		ST(0) = ST(0)*F64(___184231h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*F64(___184241h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0x90) = FPOP();
		ST(0) = ST(0)*F64(esp+0x90);
		F64(esp+0x88) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x98) = (int)FPOP();
		FPUSH((int)D(esp+0x98));
		ST(0) = F64(esp+0x88)-ST(0);
		ebx = D(esp+0x64);
		//fcomp   qword [___184239h]
		//fnstsw  ax
		//sahf    
		//jb      short ___5137dh
		if(FPOP() < F64(___184239h)) goto ___5137dh;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0x88);
		ST(0) = (int)ST(0);
		D(esp+0x60) = (int)FPOP();
		goto ___51388h;
___5137dh:
		eax = D(esp+0x98);
		D(esp+0x60) = eax;
___51388h:
		edx = 0x35e*D(___243c60h);
		eax = D(edx+___1e6ed4h);
		eax -= 8;
		eax += ebx;
		ebx = D(edx+___1e6ed8h);
		esi = D(esp+0x60);
		ebx -= 8;
		D(esp+0x74) = eax;
		ebx += esi;
		if((int)eax < 0) goto ___514b1h;
		eax += 0x10;
		if((int)eax >= 0x140) goto ___514b1h;
		if((int)ebx < 0) goto ___514b1h;
		eax = ebx+0x10;
		if((int)eax >= 0xc8) goto ___514b1h;
		eax = D(edx+___1e6edch);
		edx = eax;
		edx = (int)edx>>0x1f;
		cf = !!(edx&0x40000000);
		edx <<= 0x2;
		eax -= edx+cf;
		eax = (int)eax>>0x2;
		eax <<= 0x8;
		ebx <<= 0x9;
		D(esp+0x70) = eax;
		eax ^= eax;
		D(esp+0x68) = ebx;
		D(esp+0x6c) = eax;
		edi = 0x10;
___51408h:
		esi = D(esp+0x68);
		ecx = D(esp+0x6c);
		eax ^= eax;
___51412h:
		edx = D(___196efch);
		edx = D(edx*4+___243290h);
		edx += eax;
		ebx = D(esp+0x70);
		edx += ecx;
		edx += ebx;
		if(B(edx) == 0) goto ___51440h;
		ebx = D(___243d80h);
		ebx += D(esp+0x74);
		ebx += eax;
		L(edx) = B(edx);
		B(esi+ebx+0x60) = L(edx);
___51440h:
		eax++;
		if((int)eax < 0x10) goto ___51412h;
		esi = D(esp+0x68);
		ecx = D(esp+0x6c);
		esi += 0x200;
		ecx += edi;
		D(esp+0x68) = esi;
		D(esp+0x6c) = ecx;
		if(ecx != 0x100) goto ___51408h;
		eax = 0x35e*D(___243c60h);
		edx = D(eax+___1e70aeh);
		edx += 4;
		eax = __GET_FRAME_COUNTER();
		if(eax < edx) goto ___514b1h;
		ebx = D(___196efch);
		ebx++;
		D(___196efch) = ebx;
		if((int)ebx <= 1) goto ___5149ch;
		esi ^= esi;
		D(___196efch) = esi;
___5149ch:
		eax = __GET_FRAME_COUNTER();
		edx = 0x35e*D(___243c60h);
		D(edx+___1e70aeh) = eax;
___514b1h:
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		edx ^= edx;
		D(eax*4+___1de5d8h) = edx;
		return;
}
