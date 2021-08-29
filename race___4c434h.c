#include "drally.h"
#include "drmath.h"

	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern byte ___243cfch[];
	extern byte ___1de580h[];
	extern byte ___243ca8h[];
	extern byte ___243ce8h[];
	extern byte ___196db8h[];
	extern byte ___243d24h[];
	extern byte ___243d20h[];
	extern byte ___243d28h[];
	extern byte ___243d2ch[];
	extern void * ___243d60h;
	extern void * ___243d74h;
	extern byte ___243cb0h[];
	extern byte ___243cb4h[];

int rand_watcom106(void);

// RACE ENGINE
void race___4c434h(void){

	long long 	ll_tmp;
	double 	d_tmp, d_st0, d_st1;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x64];
	int 	breaker, i, j;
	void * 	ebxp;
	void * 	edip;	


		ebx = D(___243c60h);
		eax = 0x35e*ebx;
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)/50.0;
		edx = edx^edx;
		D(___243cfch) = edx;
		D(eax+___1e6ed0h+0x15e) = edx;
		edx = 8*ebx;
		edx += ebx;
		edx <<= 2;
		FPUSH(F32(eax+___1e6ed0h+0x15e));
		edx += ebx;
		F32(eax+___1e6ed0h+0x15a) = (float)FPOP();
		edx <<= 2;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb0)-ST(0);
		esi = D(edx+___1de580h+0x18);
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
		if((int)esi <= 0) goto ___4cb16h;
		if(D(eax+___1e6ed0h+0x10a) != 0) goto ___4c771h;
		ebx = D(___243ca8h);
		ebx <<= 2;
		ebx += eax;
		L(ecx) = B(ebx+___1e6ed0h+0x20);
		if((L(ecx)&1) == 0) goto ___4c5d6h;
		if((L(ecx)&0x10) == 0) goto ___4c569h;
		if((int)D(edx+___1de580h+0x34) <= 0) goto ___4c569h;
		if(D(edx+___1de580h+0x20) == 0) goto ___4c549h;
		FPUSH(F32(edx+___1de580h+4));
		ST(0) = ST(0)*1.5;
		ST(0) = ST(0)/30.0;
		edi = D(edx+___1de580h+0x18);
		edi -= 0x16;
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xb0);
		D(edx+___1de580h+0x18) = edi;
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
		if((int)edi >= 0) goto ___4c528h;
		ebx = ebx^ebx;
		D(edx+___1de580h+0x18) = ebx;
___4c528h:
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		D(eax*4+___1de580h+0x58) = 1;
		goto ___4c5a2h;
___4c549h:
		FPUSH(F32(edx+___1de580h+4));
		ST(0) = ST(0)*1.3;
		ST(0) = ST(0)/30.0;
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xb0);
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
		goto ___4c5a2h;
___4c569h:
		ecx = D(___243c60h);
		ebx = 0x35e*ecx;
		eax = 8*ecx;
		eax += ecx;
		eax <<= 2;
		eax += ecx;
		FPUSH(F32(eax*4+___1de580h+4));
		ST(0) = ST(0)*0.8;
		ST(0) = ST(0)/30.0;
		ST(0) = ST(0)+(double)F32(ebx+___1e6ed0h+0xb0);
		F32(ebx+___1e6ed0h+0xb0) = (float)FPOP();
___4c5a2h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)/30.0;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb0)-ST(0);
		F32(eax+___1e6ed0h+0xb0) = (float)ST(0);
		ST(0) = ST(0)/50.0;
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xb0);
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
___4c5d6h:
		edi = D(___243ce8h);
		if(edi != D(___243c60h)) goto ___4c60ah;
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		edx = D(eax*4+___1de580h+0x58);
		if(edx != 1) goto ___4c60ah;
		D(___196db8h) += edx;
___4c60ah:
		ecx = D(___243ce8h);
		if(ecx != D(___243c60h)) goto ___4c63dh;
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		esi = D(eax*4+___1de580h+0x58);
		if(esi) goto ___4c63dh;
		D(___196db8h) = esi;
___4c63dh:
		edx = 0x35e*D(___243c60h);
		eax = D(___243ca8h);
		eax <<= 2;
		eax += edx;
		L(edx) = B(eax+___1e6ed0h+0x20);
		if((L(edx)&2) == 0) goto ___4c6c3h;
		if((L(edx)&2) == 0) goto ___4c666h;
		if(L(edx)&0x40) goto ___4c6c3h;
___4c666h:
		ebx = D(___243c60h);
		edx = 0x35e*ebx;
		eax = 8*ebx;
		eax += ebx;
		eax <<= 2;
		eax += ebx;
		FPUSH(F32(eax*4+___1de580h+4));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)/30.0;
		ST(0) = (double)F32(edx+___1e6ed0h+0xb0)-ST(0);
		F32(edx+___1e6ed0h+0xb0) = (float)ST(0);
		ST(0) = ST(0)/30.0;
		ST(0) = (double)F32(edx+___1e6ed0h+0xb0)-ST(0);
		F32(edx+___1e6ed0h+0xb0) = (float)ST(0);
		ST(0) = ST(0)/50.0;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xb0);
		F32(edx+___1e6ed0h+0xb0) = (float)FPOP();
___4c6c3h:
		ecx = D(___243c60h);
		edx = 0x35e*ecx;
		eax = D(___243ca8h);
		if((B(edx+4*eax+___1e6ed0h+0x20)&0x10) == 0) goto ___4c71ah;
		eax = 8*ecx;
		eax += ecx;
		eax <<= 2;
		eax += ecx;
		eax <<= 2;
		esi = D(eax+___1de580h+0x34);
		if((int)esi <= 0) goto ___4c71ah;
		if((int)D(eax+___1de580h+0x18) <= 0) goto ___4c71ah;
		edx = esi+0xfffffe70;
		D(eax+___1de580h+0x34) = edx;
		if((int)edx >= 0) goto ___4c71ah;
		ecx = ecx^ecx;
		D(eax+___1de580h+0x34) = ecx;
___4c71ah:
		esi = D(___243c60h);
		eax = 0x35e*esi;
		edx = D(___243ca8h);
		if(B(eax+edx*4+___1e6ed0h+0x20)&0x10) goto ___4c771h;
		eax = 8*esi;
		eax += esi;
		eax <<= 2;
		eax += esi;
		eax <<= 2;
		if((int)D(eax+___1de580h+0x18) <= 0) goto ___4c771h;
		edx = D(eax+___1de580h+0x34);
		edx += 0x14;
		D(eax+___1de580h+0x34) = edx;
		if((int)edx <= 0x19000) goto ___4c771h;
		D(eax+___1de580h+0x34) = 0x19000;
___4c771h:
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		eax <<= 2;
		if((int)D(eax+___1de580h+0x18) > 0) goto ___4c799h;
		edi = edi^edi;
		D(eax+___1de580h+4) = edi;
___4c799h:
		eax = D(___243c60h);
		edx = 0x35e*eax;
		if(D(edx+___1e6ed0h+0x10a) != 0) goto ___4c847h;
		ebx = eax;
		eax <<= 3;
		eax += ebx;
		eax <<= 2;
		ebx += eax;
		ebx <<= 2;
		FPUSH(0.0);
		//fcomp   dword [ebx+___1de580h+4]
		//fnstsw  ax
		//sahf    
		//jae     near ___4c847h
		d_st0 = FPOP();
		if(d_st0 >= (double)F32(ebx+___1de580h+4)) goto ___4c847h;
		FPUSH(F32(edx+___1e6ed0h+0xc0));
		ST(0) = ST(0)*(double)F32(edx+___1e6ed0h+0xb0);
		ST(0) = ST(0)*(double)F32(ebx+___1de580h+0xc);
		ST(0) = ST(0)/(double)F32(ebx+___1de580h+4);
		FPUSH(0.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6ed0h+0xbc) = (float)FPOP();
		//fcomp   dword [edx+___1e6ed0h+0xbc]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4c80ch
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6ed0h+0xbc)) goto ___4c80ch;
		FPUSH(F32(edx+___1e6ed0h+0xbc));
		ST(0) = -1.0*ST(0);
		F32(esp+0x18) = (float)FPOP();
		goto ___4c816h;
___4c80ch:
		eax = D(edx+___1e6ed0h+0xbc);
		D(esp+0x18) = eax;
___4c816h:
		FPUSH(F32(esp+0x18));
		d_st0 = FPOP();
		if(d_st0 <= 20.0) goto ___4c867h;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		FPUSH(ST(0));
		ST(0) = ST(0)/50.0;
		ST(1) = ST(1)-ST(0); FPOP();
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
		goto ___4c867h;
___4c847h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xbc));
		FPUSH(ST(0));
		ST(0) = ST(0)/10.0;
		ST(1) = ST(1)-ST(0); FPOP();
		F32(eax+___1e6ed0h+0xbc) = (float)FPOP();
___4c867h:
		edi = D(___243c60h);
		edx = 0x35e*edi;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ed0h+0x20)&8) == 0) goto ___4c92ah;
		if(D(edx+___1e6ed0h+0x18) != 0) goto ___4c92ah;
		if(D(edx+___1e6ed0h+0x1c) != 0) goto ___4c92ah;
		FPUSH(90.0);
		ST(0) = ST(0)/(double)F32(edx+___1e6ed0h+0xa8);
		eax = 8*edi;
		eax += edi;
		eax <<= 2;
		eax += edi;
		ST(0) = (double)F32(eax*4+___1de580h+0x10)/ST(0);
		FPUSH(F32(edx+___1e6ed0h+0xbc));
		ST(0) = ST(0)/36.0;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(___243cfch)-ST(0);
		F32(___243cfch) = (float)ST(0);
		ST(0) = ST(0)*2.0;
		ST(1) = ST(1)*ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xc0));
		FPUSH(F32(edx+___1e6ed0h+0xa8));
		ST(0) = (double)F32(edx+___1e6ed0h+0xac)-ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = (double)F32(___243cfch)-ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6ed0h+0xac) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(___243cfch) = (float)FPOP();
		d_st0 = FPOP();
		if(d_st0 <= -36.0) goto ___4c92ah;
		FPUSH(F32(edx+___1e6ed0h+0xc0));
		ST(0) = ST(0)-2.0;
		F32(edx+___1e6ed0h+0xc0) = (float)FPOP();
___4c92ah:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6ed0h+0xac]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4c953h
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6ed0h+0xac)) goto ___4c953h;
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+360.0;
		F32(edx+___1e6ed0h+0xac) = (float)FPOP();
___4c953h:
		esi = D(___243c60h);
		edx = 0x35e*esi;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ed0h+0x20)&4) == 0) goto ___4ca15h;
		if(D(edx+___1e6ed0h+0x18) != 0) goto ___4ca15h;
		if(D(edx+___1e6ed0h+0x1c) != 0) goto ___4ca15h;
		FPUSH(90.0);
		ST(0) = ST(0)/(double)F32(edx+___1e6ed0h+0xa8);
		eax = 8*esi;
		eax += esi;
		eax <<= 2;
		eax += esi;
		ST(0) = (double)F32(eax*4+___1de580h+0x10)/ST(0);
		FPUSH(F32(edx+___1e6ed0h+0xbc));
		ST(0) = ST(0)/36.0;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(___243cfch);
		F32(___243cfch) = (float)ST(0);
		ST(0) = ST(0)*2.0;
		ST(1) = ST(1)*ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xa8));
		ebx = D(edx+___1e6ed0h+0xc0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xac);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(___243cfch);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6ed0h+0xac) = (float)FPOP();
		F32(___243cfch) = (float)FPOP();
		if((int)ebx >= 0x42100000) goto ___4ca15h;
		FPUSH(F32(edx+___1e6ed0h+0xc0));
		FPUSH(ST(0));
		ST(0) = ST(0)+2.0;
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6ed0h+0xc0) = (float)FPOP();
___4ca15h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6ed0h+0xac) < 0x43b40000) goto ___4ca3dh;
		FPUSH(F32(eax+___1e6ed0h+0xac));
		ST(0) = ST(0)-360.0;
		F32(eax+___1e6ed0h+0xac) = (float)FPOP();
___4ca3dh:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6ed0h+0xc0]
		//fnstsw  ax
		//sahf    
		//jae     short ___4ca66h
		d_st0 = FPOP();
		if(d_st0 >= (double)F32(edx+___1e6ed0h+0xc0)) goto ___4ca66h;
		FPUSH(F32(edx+___1e6ed0h+0xc0));
		ST(0) = ST(0)-1.0;
		F32(edx+___1e6ed0h+0xc0) = (float)FPOP();
___4ca66h:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6ed0h+0xc0]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4ca8bh
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6ed0h+0xc0)) goto ___4ca8bh;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xc0);
		F32(edx+___1e6ed0h+0xc0) = (float)FPOP();
___4ca8bh:
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		if((int)D(eax*4+___1de580h+0x18) <= 0) goto ___4cac5h;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xac);
		F32(eax+___1e6ed0h+0xac) = (float)FPOP();
___4cac5h:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6ed0h+0xac]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4caeeh
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6ed0h+0xac)) goto ___4caeeh;
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+360.0;
		F32(edx+___1e6ed0h+0xac) = (float)FPOP();
___4caeeh:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6ed0h+0xac) < 0x43b40000) goto ___4cb16h;
		FPUSH(F32(eax+___1e6ed0h+0xac));
		ST(0) = ST(0)-360.0;
		F32(eax+___1e6ed0h+0xac) = (float)FPOP();
___4cb16h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+180.0;
		FPUSH(create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		FPUSH(180.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		FPUSH(ST(0));
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+90.0;
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)*ST(4);
		ST(0) = ST(0)/ST(3);
		FPUSH(ST(0));
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)-90.0;
		ST(0) = ST(0)+180.0;
		ST(6) = ST(6)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(4) = ST(0)/ST(4); FPOP();
		FPUSH(ST(3));
		ST(0) = dRMath_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = dRMath_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dRMath_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = dRMath_cos(ST(0));
		F64(esp+0x10) = FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xbc));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(3);
		ST(0) = ST(0)/11.0;
		FPUSH(F64(esp+0x10));
		ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
		ST(4) = ST(4)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)/11.0;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0x10) = FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xb0));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)*ST(2);
		FPUSH(F64(esp+0x10));
		ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
		ST(3) = ST(3)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F64(esp+8) = FPOP();
		FPUSH(F32(___243cfch));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)*ST(5);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F32(esp+0x34) = (float)ST(0);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(esp+0x38) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x38);
		FPUSH(F64(esp+8));
		ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(esp+0x30) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(esp+0x3c) = (float)FPOP();
		FPUSH(F32(esp+0x30));
		ST(0) = ST(0)+(double)F32(esp+0x3c);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(4) = ST(4)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(___243d24h) = (float)FPOP();
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(___243d20h) = (float)FPOP();
		FPUSH(0.0);
		//fcompp  
		//fnstsw  ax
		//sahf    
		//je      short ___4cc7ah
		d_st0 = FPOP();
		d_st1 = FPOP();
		if(d_st0 == d_st1) goto ___4cc7ah;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6ed0h+0xb0]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4cc4ch
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6ed0h+0xb0)) goto ___4cc4ch;
		FPUSH(F32(edx+___1e6ed0h+0xb0));
		ST(0) = -1.0*ST(0);
		F32(esp+0x60) = (float)FPOP();
		goto ___4cc56h;
___4cc4ch:
		eax = D(edx+___1e6ed0h+0xb0);
		D(esp+0x60) = eax;
___4cc56h:
		FPUSH(F32(esp+0x60));
		FPUSH(F32(esp+0x34));
		ST(0) = ST(0)+(double)F32(esp+0x38);
		ST(0) = ST(0)*ST(0);
		FPUSH(F32(esp+0x30));
		ST(0) = ST(0)+(double)F32(esp+0x3c);
		ST(0) = ST(0)*ST(0);
		ST(1) = ST(1)+ST(0); FPOP();
		ST(0) = dRMath_sqrt(ST(0));
		ST(1) = ST(1)/ST(0); FPOP();
		F32(esp+0x58) = (float)FPOP();
		goto ___4cc82h;
___4cc7ah:
		D(esp+0x58) = 0x3f800000;
___4cc82h:
		edx = 0x35e*D(___243c60h);
		FPUSH(180.0);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(1);
		FPUSH(26.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		FPUSH(create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		FPUSH(180.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(5);
		ST(4) = ST(4)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(2);
		ST(0) = ST(0)/ST(1);
		ST(0) = dRMath_cos(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(5);
		ST(0) = ST(0)-26.0;
		ST(0) = ST(0)*ST(3);
		ST(0) = ST(0)/ST(2);
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(6) = ST(6)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)-26.0;
		ST(3) = ST(3)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(0)/ST(1); FPOP();
		ST(0) = dRMath_cos(ST(0));
		FPUSH(F32(esp+0x58));
		ST(0) = ST(0)*(double)F32(esp+0x34);
		FPUSH(F32(esp+0x58));
		ST(0) = ST(0)*(double)F32(esp+0x38);
		FPUSH(F32(esp+0x58));
		ST(0) = ST(0)*(double)F32(esp+0x30);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6ed0h+0x15a) = (float)FPOP();
		FPUSH(F32(esp+0x58));
		ST(0) = ST(0)*(double)F32(esp+0x3c);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)*18.0;
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(0) = ST(0)*18.0;
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(0) = ST(0)*18.0;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15a);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(0) = ST(0)*18.0;
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		F32(edx+___1e6ed0h+0x15a) = (float)FPOP();
		FPUSH(F32(___243d24h));
		ecx = ecx^ecx;
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6ed0h+0x15e) = (float)FPOP();
		FPUSH(F32(___243d20h));
		D(___243d24h) = ecx;
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15e);
		D(___243d20h) = ecx;
		F32(edx+___1e6ed0h+0x15e) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xfc));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15a);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15e);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(edx+___1e6ed0h+0x15a) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x100));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(edx+___1e6ed0h+0x15e) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15a);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15e);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F32(edx+___1e6ed0h+0x15a) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(edx+___1e6ed0h+0x15e) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x15a));
		FPUSH(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0x15e));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(4) = ST(4)+ST(0); FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6ed0h+0xc4) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x15e));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6ed0h+0xcc) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(2) = ST(2)+ST(0); FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		F32(edx+___1e6ed0h+0xc8) = (float)FPOP();
		F32(edx+___1e6ed0h+0xd0) = (float)FPOP();
		FPUSH(180.0);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(1);
		FPUSH(154.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		FPUSH(180.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(4);
		ST(3) = ST(3)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/ST(1);
		ST(0) = dRMath_cos(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(4);
		FPUSH(-154.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/ST(3);
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(6);
		ST(2) = ST(2)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/ST(3);
		ST(0) = dRMath_cos(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(6) = ST(6)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+90.0;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(3) = ST(0)/ST(3); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = dRMath_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		FPUSH(18.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		FPUSH(create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*ST(2);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*8.0;
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x15a));
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x15a));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6ed0h+0xd4) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x15a));
		FPUSH(F32(edx+___1e6ed0h+0x15e));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(6) = ST(6)+ST(0); FPOP();
		ST(3) = ST(3)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F32(edx+___1e6ed0h+0xdc) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x15e));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6ed0h+0xe4) = (float)FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		F32(edx+___1e6ed0h+0xd8) = (float)FPOP();
		F32(edx+___1e6ed0h+0xe0) = (float)FPOP();
		FPUSH(180.0);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(1);
		FPUSH(create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(3);
		ST(0) = ST(0)*ST(2);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_cos(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(4);
		ST(0) = ST(0)+90.0;
		ST(0) = ST(0)*ST(3);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_cos(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+ST(5);
		ST(0) = ST(0)-90.0;
		ST(0) = ST(0)*ST(4);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_sin(ST(0));
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(6) = ST(6)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)-90.0;
		ST(4) = ST(4)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		ST(0) = ST(0)*22.0;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15e);
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6ed0h+0xf8) = (float)FPOP();
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xf8);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		eax = D(esp+0x5c);
		eax = eax*edi;
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)*22.0;
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(2);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		FPUSH(8.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(3) = ST(3)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*ST(4);
		FPUSH(F32(edx+___1e6ed0h+0x15a));
		ST(4) = ST(4)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(4) = ST(4)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6ed0h+0xf4) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x15a));
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6ed0h+0xec) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x15e));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xf4);
		FPUSH(F32(edx+___1e6ed0h+0x15e));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		ST(3) = ST(3)+ST(0); FPOP();
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6ed0h+0xf0) = (float)FPOP();
		F32(edx+___1e6ed0h+0xe8) = (float)FPOP();
		eax += D(esp+0x5c);
		if((int)eax < 0) goto ___4d08ch;
		ebx = D(___243d2ch);
		edx = edi;
		edx = edx*ebx;
		if((int)eax >= (int)edx) goto ___4d08ch;
		edx = ___243d60h;
		L(eax) = B(___243d60h+eax);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x2c) = eax;
		goto ___4d094h;
___4d08ch:
		D(esp+0x2c) = 0xf;
___4d094h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xc8);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xc4);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		eax = D(esp+0x5c);
		eax += edx;
		if((int)eax < 0) goto ___4d104h;
		ebx = D(___243d2ch);
		edx = edi;
		edx = edx*ebx;
		if((int)eax >= (int)edx) goto ___4d104h;
		edx = ___243d60h;
		L(eax) = B(___243d60h+eax);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x50) = eax;
		goto ___4d10ch;
___4d104h:
		D(esp+0x50) = 0xf;
___4d10ch:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xd0);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xcc);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx += D(esp+0x5c);
		if((int)edx < 0) goto ___4d179h;
		ebx = D(___243d2ch);
		eax = edi;
		eax = eax*ebx;
		if((int)edx >= (int)eax) goto ___4d179h;
		eax = ___243d60h;
		L(eax) = B(___243d60h+edx);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x48) = eax;
		goto ___4d181h;
___4d179h:
		D(esp+0x48) = 0xf;
___4d181h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xd8);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xd4);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx += D(esp+0x5c);
		if((int)edx < 0) goto ___4d1eeh;
		ebx = D(___243d2ch);
		eax = edi;
		eax = eax*ebx;
		if((int)edx >= (int)eax) goto ___4d1eeh;
		eax = ___243d60h;
		L(eax) = B(___243d60h+edx);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x4c) = eax;
		goto ___4d1f6h;
___4d1eeh:
		D(esp+0x4c) = 0xf;
___4d1f6h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xe0);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xdc);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		eax = D(esp+0x5c);
		eax += edx;
		if((int)eax < 0) goto ___4d266h;
		ebx = D(___243d2ch);
		edx = edi;
		edx = edx*ebx;
		if((int)eax >= (int)edx) goto ___4d266h;
		edx = ___243d60h;
		L(eax) = B(___243d60h+eax);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x54) = eax;
		goto ___4d26eh;
___4d266h:
		D(esp+0x54) = 0xf;
___4d26eh:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xe8);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xe4);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx += D(esp+0x5c);
		if((int)edx < 0) goto ___4d2dbh;
		ebx = D(___243d2ch);
		eax = edi;
		eax = eax*ebx;
		if((int)edx >= (int)eax) goto ___4d2dbh;
		eax = ___243d60h;
		L(eax) = B(___243d60h+edx);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x40) = eax;
		goto ___4d2e3h;
___4d2dbh:
		D(esp+0x40) = 0xf;
___4d2e3h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xf0);
		edi = D(___243d28h);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xec);
		D(esp+0x5c) = (int)FPOP();
		edx += D(esp+0x5c);

		if((int)edx < 0){

			D(esp+0x44) = 0xf;
		}
		else {

			eax = edi*D(___243d2ch);

			if((int)edx >= (int)eax){

				D(esp+0x44) = 0xf;
			}
			else {

				D(esp+0x44) = B(___243d60h+edx)&0xf;
			}
		}

		D(___1e6ed0h+0x35e*D(___243c60h)+0xc) = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)/3.75);
		D(___1e6ed0h+0x35e*D(___243c60h)+0x10) = 0x25800*D(___243c60h)+0x640*D(___1e6ed0h+0x35e*D(___243c60h)+0xc);
		ecx = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x15e)+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8)-20.0);
		ebxp = ___243d74h+(int)D(___1e6ed0h+0x35e*D(___243c60h)+0x10);
		edip = ___243d60h+(int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4)-0x14+(int)D(___243d28h)*(int)ecx+(int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x15a);
		esi = 0xf;

		j = -1;
		while(++j < 0x28){

			breaker = 0;

			i = -1;
			while(++i < 0x28){

				if(((signed char)B(ebxp+0x28*j+i) > 3)&&((signed char)(B(edip+D(___243d28h)*j+i)&0xf) < 4)){

					esi = B(edip+D(___243d28h)*j+i)&0xf;
					D(___243cb0h) = i;
					D(___243cb4h) = j;
					breaker = 1;
					break;
				}
			}

			if(breaker == 1) break;
		}

		eax = 0x35e*D(___243c60h);
		D(eax+___1e6ed0h+0x14) = esi;
		if((int)esi >= 4) goto ___4d7deh;
		edx = D(___243cb0h);
		edx -= 0x14;
		D(eax+___1e6ed0h+0x172) = edx;
		edx = D(___243cb4h);
		D(eax+___1e6ed0h+0x18e) = esi;
		edx -= 0x14;
		ecx = D(eax+___1e6ed0h+0x192);
		D(eax+___1e6ed0h+0x176) = edx;
		if((int)ecx <= 3) goto ___4d693h;
		esi = esi^esi;
		edi = 1;
		D(eax+___1e6ed0h+0xb0) = esi;
		D(eax+___1e6ed0h+0x16a) = edi;
		D(eax+___1e6ed0h+0x16e) = esi;
___4d4c3h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6ed0h+0x14) >= 4) goto ___4d68bh;
		ebx = D(eax+___1e6ed0h+0x16a);
		eax = rand_watcom106();
		ebx += ebx;
		edx = eax;
		ebx++;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)ebx;
		eax = 0x35e*D(___243c60h);
		ebx = D(eax+___1e6ed0h+0x16a);
		edx -= ebx;
		D(esp+0x5c) = edx;
		ebx = D(eax+___1e6ed0h+0x16a);
		FPUSH((int)D(esp+0x5c));
		F32(eax+___1e6ed0h+0x162) = (float)FPOP();
		eax = rand_watcom106();
		ebx += ebx;
		edx = eax;
		ebx++;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)ebx;
		ebx = 0x35e*D(___243c60h);
		edi = D(ebx+___1e6ed0h+0x16e);
		esi = D(ebx+___1e6ed0h+0x16a);
		edi++;
		edx -= esi;
		esi = 5;
		D(esp+0x5c) = edx;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)esi;
		D(ebx+___1e6ed0h+0x16e) = edi;
		FPUSH((int)D(esp+0x5c));
		F32(ebx+___1e6ed0h+0x166) = (float)FPOP();
		if(edx) goto ___4d577h;
		eax = D(ebx+___1e6ed0h+0x16a);
		if((int)eax >= 0x1e) goto ___4d577h;
		edx = eax+1;
		D(ebx+___1e6ed0h+0x16a) = edx;
___4d577h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0x166));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xb8);
		F32(eax+___1e6ed0h+0xb8) = (float)ST(0);
		ST(0) = ST(0)-20.0;
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0x15e);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edi = edi*D(esp+0x5c);
		FPUSH(F32(eax+___1e6ed0h+0x15a));
		FPUSH(F32(eax+___1e6ed0h+0x162));
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xb4);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ed0h+0xb4) = (float)ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		ecx = D(esp+0x5c);
		D(esp+0x5c) = (int)FPOP();
		edip = ___243d60h+(int)ecx+(int)edi-0x14+(int)D(esp+0x5c);
		ecx = D(eax+___1e6ed0h+0x10);
		ebxp = ___243d74h+ecx;
		esi = 0xf;
		edx = 0;
		eax = 0;

	ecx = 0;
	while(1){

		if((signed char)B(ebxp) <= 3){

			edip++;
			ebxp++;
			ecx++;

			if(ecx == 0x28){

				edip = edip+D(___243d28h)-0x28;
				edx++;
				if(edx == 0x28) break;
				ecx = 0;
			}
		}
		else {

			L(eax) = B(edip);
			L(eax) &= 0xf;

			if((signed char)L(eax) >= 4){

				edip++;
				ebxp++;
				ecx++;

				if(ecx == 0x28){

					edip = edip+D(___243d28h)-0x28;
					edx++;
					if(edx == 0x28) break;
					ecx = 0;
				}
			}
			else {

				esi = eax;
				D(___243cb0h) = ecx;
				D(___243cb4h) = edx;
				break;
			}
		}
	}

		eax = 0x35e*D(___243c60h);
		D(eax+___1e6ed0h+0x14) = esi;
		if((int)esi >= 4) goto ___4d4c3h;
		FPUSH(F32(eax+___1e6ed0h+0x162));
		FPUSH(F32(eax+___1e6ed0h+0x166));
		ST(0) = (double)F32(eax+___1e6ed0h+0xb8)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb4)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ed0h+0xb8) = (float)FPOP();
		F32(eax+___1e6ed0h+0xb4) = (float)FPOP();
		goto ___4d4c3h;
___4d68bh:
		esi = esi^esi;
		D(eax+___1e6ed0h+0x14) = esi;
___4d693h:
		eax = 0x35e*D(___243c60h);
		ecx = D(eax+___1e6ed0h+0x192);
		if(ecx == 0) goto ___4d6e3h;
		if((int)ecx > 3) goto ___4d6e3h;
		FPUSH(-1.0);
		FPUSH(F32(eax+___1e6ed0h+0x15a));
		ST(0) = ST(0)*ST(1);
		FPUSH(F32(eax+___1e6ed0h+0x15e));
		ST(2) = ST(2)*ST(0); FPOP();
		edi = edi^edi;
		edx = 1;
		D(eax+___1e6ed0h+0xb0) = edi;
		D(eax+___1e6ed0h+0x14) = edx;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ed0h+0x100) = (float)FPOP();
		F32(eax+___1e6ed0h+0xfc) = (float)FPOP();
___4d6e3h:
		eax = 0x35e*D(___243c60h);
		if(D(eax+___1e6ed0h+0x192) != 0) goto ___4d7e6h;
		if((int)D(esp+0x48) < 4) goto ___4d708h;
		if((int)D(esp+0x4c) >= 4) goto ___4d72fh;
___4d708h:
		if((int)D(esp+0x2c) < 4) goto ___4d72fh;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xac));
		FPUSH(ST(0));
		ST(0) = ST(0)+20.0;
		ST(1) = ST(0); FPOP();
		F32(eax+___1e6ed0h+0xac) = (float)FPOP();
___4d72fh:
		if((int)D(esp+0x50) < 4) goto ___4d73dh;
		if((int)D(esp+0x54) >= 4) goto ___4d760h;
___4d73dh:
		if((int)D(esp+0x2c) < 4) goto ___4d760h;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xac));
		ST(0) = ST(0)-20.0;
		F32(eax+___1e6ed0h+0xac) = (float)FPOP();
___4d760h:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6ed0h+0xac]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4d789h
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6ed0h+0xac)) goto ___4d789h;
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+360.0;
		F32(edx+___1e6ed0h+0xac) = (float)FPOP();
___4d789h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6ed0h+0xac) < 0x43b40000) goto ___4d7b1h;
		FPUSH(F32(eax+___1e6ed0h+0xac));
		ST(0) = ST(0)-360.0;
		F32(eax+___1e6ed0h+0xac) = (float)FPOP();
___4d7b1h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		FPUSH(ST(0));
		ST(0) = ST(0)*0.125;
		esi = 1;
		ST(1) = ST(1)-ST(0); FPOP();
		D(eax+___1e6ed0h+0x14) = esi;
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
		goto ___4d7e6h;
___4d7deh:
		ebx = ebx^ebx;
		D(eax+___1e6ed0h+0x14) = ebx;
___4d7e6h:
		if(D(esp+0x50) == 4) goto ___4d810h;
		if(D(esp+0x48) == 4) goto ___4d810h;
		if(D(esp+0x4c) == 4) goto ___4d810h;
		if(D(esp+0x54) == 4) goto ___4d810h;
		if(D(esp+0x40) == 4) goto ___4d810h;
		if(D(esp+0x44) != 4) goto ___4d832h;
___4d810h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)/35.0;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb0)-ST(0);
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
___4d832h:
		if(D(esp+0x48) == 5) goto ___4d840h;
		if(D(esp+0x4c) != 5) goto ___4d87ch;
___4d840h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)/30.0;
		FPUSH(F32(eax+___1e6ed0h+0x104));
		FPUSH(ST(0));
		ST(0) = ST(0)+0.2;
		ST(1) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb0)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
___4d87ch:
		if(D(esp+0x50) == 5) goto ___4d88ah;
		if(D(esp+0x54) != 5) goto ___4d8c2h;
___4d88ah:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)/30.0;
		FPUSH(F32(eax+___1e6ed0h+0x104));
		ST(0) = ST(0)-0.2;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb0)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
___4d8c2h:
		if(D(esp+0x50) == 6) goto ___4d8ech;
		if(D(esp+0x48) == 6) goto ___4d8ech;
		if(D(esp+0x4c) == 6) goto ___4d8ech;
		if(D(esp+0x54) == 6) goto ___4d8ech;
		if(D(esp+0x40) == 6) goto ___4d8ech;
		if(D(esp+0x44) != 6) goto ___4d90eh;
___4d8ech:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)/9.0;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb0)-ST(0);
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
___4d90eh:
		if(D(esp+0x50) == 7) goto ___4d938h;
		if(D(esp+0x48) == 7) goto ___4d938h;
		if(D(esp+0x4c) == 7) goto ___4d938h;
		if(D(esp+0x54) == 7) goto ___4d938h;
		if(D(esp+0x40) == 7) goto ___4d938h;
		if(D(esp+0x44) != 7) goto ___4d95ah;
___4d938h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)/20.0;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb0)-ST(0);
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
___4d95ah:
		if(D(esp+0x50) == 0xa) goto ___4d968h;
		if(D(esp+0x4c) != 0xa) goto ___4d984h;
___4d968h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		ST(0) = ST(0)-0.15;
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
___4d984h:
		if(D(esp+0x48) == 0xa) goto ___4d992h;
		if(D(esp+0x54) != 0xa) goto ___4d9b2h;
___4d992h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		FPUSH(ST(0));
		ST(0) = ST(0)+0.15;
		ST(1) = ST(0); FPOP();
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
___4d9b2h:
		if(D(esp+0x50) == 0xb) goto ___4d9dch;
		if(D(esp+0x48) == 0xb) goto ___4d9dch;
		if(D(esp+0x4c) == 0xb) goto ___4d9dch;
		if(D(esp+0x54) == 0xb) goto ___4d9dch;
		if(D(esp+0x40) == 0xb) goto ___4d9dch;
		if(D(esp+0x44) != 0xb) goto ___4d9feh;
___4d9dch:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)/75.0;
		ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xb0);
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
___4d9feh:
		if(D(esp+0x50) == 0xc) goto ___4da0ch;
		if(D(esp+0x4c) != 0xc) goto ___4da28h;
___4da0ch:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		ST(0) = ST(0)-0.05;
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
___4da28h:
		if(D(esp+0x48) == 0xc) goto ___4da36h;
		if(D(esp+0x54) != 0xc) goto ___4da56h;
___4da36h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		FPUSH(ST(0));
		ST(0) = ST(0)+0.05;
		ST(1) = ST(0); FPOP();
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
___4da56h:
		if(D(esp+0x50) == 0xd) goto ___4da84h;
		if(D(esp+0x48) == 0xd) goto ___4da84h;
		if(D(esp+0x4c) == 0xd) goto ___4da84h;
		if(D(esp+0x54) == 0xd) goto ___4da84h;
		if(D(esp+0x40) == 0xd) goto ___4da84h;
		if(D(esp+0x44) != 0xd) goto ___4db80h;
___4da84h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6ed0h+0xb0));
		ST(0) = ST(0)*7.0;
		F64(esp+0x10) = FPOP();
		eax = rand_watcom106();
		D(esp+0x5c) = eax;
		FPUSH((int)D(esp+0x5c));
		ST(0) = ST(0)*F64(esp+0x10);
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0xf0,0x3e);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		eax = D(___243c60h);
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6ed0h+0xac) = (float)FPOP();
		edx = 0x35e*eax;
		FPUSH(F32(edx+___1e6ed0h+0xb0));
		ST(0) = ST(0)*7.0;
		F64(esp+0x10) = FPOP();
		eax = rand_watcom106();
		D(esp+0x5c) = eax;
		FPUSH((int)D(esp+0x5c));
		ST(0) = ST(0)*F64(esp+0x10);
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0xf0,0x3e);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(1)-ST(0);
		ebx = D(___243c60h);
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6ed0h+0xac) = (float)FPOP();
		edx = 0x35e*ebx;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6ed0h+0xac]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4db36h
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6ed0h+0xac)) goto ___4db36h;
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)+360.0;
		F32(edx+___1e6ed0h+0xac) = (float)FPOP();
___4db36h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6ed0h+0xac) < 0x43b40000) goto ___4db5eh;
		FPUSH(F32(eax+___1e6ed0h+0xac));
		ST(0) = ST(0)-360.0;
		F32(eax+___1e6ed0h+0xac) = (float)FPOP();
___4db5eh:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)/30.0;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb0)-ST(0);
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
___4db80h:
		if(D(esp+0x50) == 0xe) goto ___4dbaah;
		if(D(esp+0x48) == 0xe) goto ___4dbaah;
		if(D(esp+0x4c) == 0xe) goto ___4dbaah;
		if(D(esp+0x54) == 0xe) goto ___4dbaah;
		if(D(esp+0x40) == 0xe) goto ___4dbaah;
		if(D(esp+0x44) != 0xe) goto ___4dbcch;
___4dbaah:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)/40.0;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb0)-ST(0);
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
___4dbcch:
		edx = 0x35e*D(___243c60h);
		eax = D(___243d28h);
		eax -= 0x14;
		D(esp+0x20) = eax;
		FPUSH((int)D(esp+0x20));
		F32(esp+0x28) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x15e));
		FPUSH(F32(edx+___1e6ed0h+0x15a));
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xb4);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xb8);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6ed0h+0xb4) = (float)FPOP();
		F32(edx+___1e6ed0h+0xb8) = (float)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		//fcomp   dword [esp+28h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4dc2bh
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(esp+0x28)) goto ___4dc2bh;
		eax = D(esp+0x28);
		D(edx+___1e6ed0h+0xb4) = eax;
___4dc2bh:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6ed0h+0xb4) >= 0x41a00000) goto ___4dc4bh;
		D(eax+___1e6ed0h+0xb4) = 0x41a00000;
___4dc4bh:
		edx = 0x35e*D(___243c60h);
		eax = D(___243d2ch);
		eax -= 0x14;
		D(esp+0x1c) = eax;
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		FPUSH((int)D(esp+0x1c));
		F32(esp+0x24) = (float)FPOP();
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(esp+0x24)) goto ___4dc82h;
		eax = D(esp+0x24);
		D(edx+___1e6ed0h+0xb8) = eax;
___4dc82h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6ed0h+0xb8) >= 0x41a00000) goto ___4dca2h;
		D(eax+___1e6ed0h+0xb8) = 0x41a00000;
___4dca2h:
		return;
}
