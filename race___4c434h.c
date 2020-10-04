#include "drally.h"

	extern byte ___243c60h[];
	extern byte ___1e6f80h[];
	extern byte ___18400dh[];
	extern byte ___243cfch[];
	extern byte ___1e702eh[];
	extern byte ___1e702ah[];
	extern byte ___1de598h[];
	extern byte ___1e6fdah[];
	extern byte ___243ca8h[];
	extern byte ___1e6ef0h[];
	extern byte ___1de5b4h[];
	extern byte ___1de5a0h[];
	extern byte ___1de584h[];
	extern byte ___184029h[];
	extern byte ___184019h[];
	extern byte ___1de5d8h[];
	extern byte ___184021h[];
	extern byte ___184011h[];
	extern byte ___184031h[];
	extern byte ___243ce8h[];
	extern byte ___196db8h[];
	extern byte ___184035h[];
	extern byte ___1e6f90h[];
	extern byte ___1de58ch[];
	extern byte ___1e6f8ch[];
	extern byte ___184041h[];
	extern byte ___184045h[];
	extern byte ___184039h[];
	extern byte ___1e6ee8h[];
	extern byte ___1e6eech[];
	extern byte ___18404dh[];
	extern byte ___1e6f78h[];
	extern byte ___1de590h[];
	extern byte ___184051h[];
	extern byte ___184055h[];
	extern byte ___1e6f7ch[];
	extern byte ___184059h[];
	extern byte ___18405dh[];
	extern byte ___184065h[];
	extern byte ___184069h[];
	extern byte ___184071h[];
	extern byte ___184075h[];
	extern byte ___1e6fd4h[];
	extern byte ___18407dh[];
	extern byte ___184081h[];
	extern byte ___184089h[];
	extern byte ___184099h[];
	extern byte ___18409dh[];
	extern byte ___184091h[];
	extern byte ___243d24h[];
	extern byte ___243d20h[];
	extern byte ___1840a5h[];
	extern byte ___1840b1h[];
	extern byte ___1840a9h[];
	extern byte ___1e6fcch[];
	extern byte ___1e6fd0h[];
	extern byte ___1e6f94h[];
	extern byte ___1e6f9ch[];
	extern byte ___1e6f98h[];
	extern byte ___1e6fa0h[];
	extern byte ___1840b5h[];
	extern byte ___1840b9h[];
	extern byte ___1840bdh[];
	extern byte ___1e6fa4h[];
	extern byte ___1e6fach[];
	extern byte ___1e6fb4h[];
	extern byte ___1e6fa8h[];
	extern byte ___1e6fb0h[];
	extern byte ___1840c5h[];
	extern byte ___1e6f88h[];
	extern byte ___1e6fc8h[];
	extern byte ___243d28h[];
	extern byte ___1e6fc4h[];
	extern byte ___1e6f84h[];
	extern byte ___1e6fbch[];
	extern byte ___1e6fc0h[];
	extern byte ___1e6fb8h[];
	extern byte ___243d2ch[];
	extern byte ___243d60h[];
	extern byte ___1840cdh[];
	extern byte ___1e6edch[];
	extern byte ___1840d5h[];
	extern byte ___1e6ee0h[];
	extern byte ___243d74h[];
	extern byte ___243cb0h[];
	extern byte ___243cb4h[];
	extern byte ___1e6ee4h[];
	extern byte ___1e7042h[];
	extern byte ___1e705eh[];
	extern byte ___1e7062h[];
	extern byte ___1e7046h[];
	extern byte ___1e703ah[];
	extern byte ___1e703eh[];
	extern byte ___1e7032h[];
	extern byte ___1e7036h[];
	extern byte ___1840d9h[];
	extern byte ___1840e1h[];
	extern byte ___1840e9h[];
	extern byte ___1840f1h[];
	extern byte ___1840f5h[];
	extern byte ___1840fdh[];
	extern byte ___184105h[];
	extern byte ___184109h[];
	extern byte ___184111h[];
	extern byte ___184119h[];
	extern byte ___18411dh[];
	extern byte ___184125h[];
	extern byte ___18412dh[];
	extern byte ___184135h[];
	extern byte ___18413dh[];

int rand_watcom106(void);
double dR_Math_sin(double);
double dR_Math_cos(double);
double dR_Math_sqrt(double);

void race___4c434h(void){

	long long 	ll_tmp;
	double 	d_tmp, d_st0, d_st1;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x64];


		ebx = D(___243c60h);
		eax = 0x35e*ebx;
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)/(double)F32(___18400dh);
		edx = edx^edx;
		D(___243cfch) = edx;
		D(eax+___1e702eh) = edx;
		edx = 8*ebx;
		edx += ebx;
		edx <<= 2;
		FPUSH(F32(eax+___1e702eh));
		edx += ebx;
		F32(eax+___1e702ah) = (float)FPOP();
		edx <<= 2;
		ST(0) = (double)F32(eax+___1e6f80h)-ST(0);
		esi = D(edx+___1de598h);
		F32(eax+___1e6f80h) = (float)FPOP();
		if((int)esi <= 0) goto ___4cb16h;
		if(D(eax+___1e6fdah) != 0) goto ___4c771h;
		ebx = D(___243ca8h);
		ebx <<= 2;
		ebx += eax;
		L(ecx) = B(ebx+___1e6ef0h);
		if((L(ecx)&1) == 0) goto ___4c5d6h;
		if((L(ecx)&0x10) == 0) goto ___4c569h;
		if((int)D(edx+___1de5b4h) <= 0) goto ___4c569h;
		if(D(edx+___1de5a0h) == 0) goto ___4c549h;
		FPUSH(F32(edx+___1de584h));
		ST(0) = ST(0)*F64(___184029h);
		ST(0) = ST(0)/F64(___184019h);
		edi = D(edx+___1de598h);
		edi -= 0x16;
		ST(0) = ST(0)+(double)F32(eax+___1e6f80h);
		D(edx+___1de598h) = edi;
		F32(eax+___1e6f80h) = (float)FPOP();
		if((int)edi >= 0) goto ___4c528h;
		ebx = ebx^ebx;
		D(edx+___1de598h) = ebx;
___4c528h:
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		D(eax*4+___1de5d8h) = 1;
		goto ___4c5a2h;
___4c549h:
		FPUSH(F32(edx+___1de584h));
		ST(0) = ST(0)*F64(___184021h);
		ST(0) = ST(0)/F64(___184019h);
		ST(0) = ST(0)+(double)F32(eax+___1e6f80h);
		F32(eax+___1e6f80h) = (float)FPOP();
		goto ___4c5a2h;
___4c569h:
		ecx = D(___243c60h);
		ebx = 0x35e*ecx;
		eax = 8*ecx;
		eax += ecx;
		eax <<= 2;
		eax += ecx;
		FPUSH(F32(eax*4+___1de584h));
		ST(0) = ST(0)*F64(___184011h);
		ST(0) = ST(0)/F64(___184019h);
		ST(0) = ST(0)+(double)F32(ebx+___1e6f80h);
		F32(ebx+___1e6f80h) = (float)FPOP();
___4c5a2h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)/(double)F32(___184031h);
		ST(0) = (double)F32(eax+___1e6f80h)-ST(0);
		F32(eax+___1e6f80h) = (float)ST(0);
		ST(0) = ST(0)/(double)F32(___18400dh);
		ST(0) = ST(0)+(double)F32(eax+___1e6f80h);
		F32(eax+___1e6f80h) = (float)FPOP();
___4c5d6h:
		edi = D(___243ce8h);
		if(edi != D(___243c60h)) goto ___4c60ah;
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		edx = D(eax*4+___1de5d8h);
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
		esi = D(eax*4+___1de5d8h);
		if(esi) goto ___4c63dh;
		D(___196db8h) = esi;
___4c63dh:
		edx = 0x35e*D(___243c60h);
		eax = D(___243ca8h);
		eax <<= 2;
		eax += edx;
		L(edx) = B(eax+___1e6ef0h);
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
		FPUSH(F32(eax*4+___1de584h));
		ST(0) = ST(0)/(double)F32(___184035h);
		ST(0) = ST(0)/F64(___184019h);
		ST(0) = (double)F32(edx+___1e6f80h)-ST(0);
		F32(edx+___1e6f80h) = (float)ST(0);
		ST(0) = ST(0)/(double)F32(___184031h);
		ST(0) = (double)F32(edx+___1e6f80h)-ST(0);
		F32(edx+___1e6f80h) = (float)ST(0);
		ST(0) = ST(0)/(double)F32(___18400dh);
		ST(0) = ST(0)+(double)F32(edx+___1e6f80h);
		F32(edx+___1e6f80h) = (float)FPOP();
___4c6c3h:
		ecx = D(___243c60h);
		edx = 0x35e*ecx;
		eax = D(___243ca8h);
		if((B(edx+4*eax+___1e6ef0h)&0x10) == 0) goto ___4c71ah;
		eax = 8*ecx;
		eax += ecx;
		eax <<= 2;
		eax += ecx;
		eax <<= 2;
		esi = D(eax+___1de5b4h);
		if((int)esi <= 0) goto ___4c71ah;
		if((int)D(eax+___1de598h) <= 0) goto ___4c71ah;
		edx = esi+0xfffffe70;
		D(eax+___1de5b4h) = edx;
		if((int)edx >= 0) goto ___4c71ah;
		ecx = ecx^ecx;
		D(eax+___1de5b4h) = ecx;
___4c71ah:
		esi = D(___243c60h);
		eax = 0x35e*esi;
		edx = D(___243ca8h);
		if(B(eax+edx*4+___1e6ef0h)&0x10) goto ___4c771h;
		eax = 8*esi;
		eax += esi;
		eax <<= 2;
		eax += esi;
		eax <<= 2;
		if((int)D(eax+___1de598h) <= 0) goto ___4c771h;
		edx = D(eax+___1de5b4h);
		edx += 0x14;
		D(eax+___1de5b4h) = edx;
		if((int)edx <= 0x19000) goto ___4c771h;
		D(eax+___1de5b4h) = 0x19000;
___4c771h:
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		eax <<= 2;
		if((int)D(eax+___1de598h) > 0) goto ___4c799h;
		edi = edi^edi;
		D(eax+___1de584h) = edi;
___4c799h:
		eax = D(___243c60h);
		edx = 0x35e*eax;
		if(D(edx+___1e6fdah) != 0) goto ___4c847h;
		ebx = eax;
		eax <<= 3;
		eax += ebx;
		eax <<= 2;
		ebx += eax;
		ebx <<= 2;
		FPUSH(0.0);
		//fcomp   dword [ebx+___1de584h]
		//fnstsw  ax
		//sahf    
		//jae     near ___4c847h
		d_st0 = FPOP();
		if(d_st0 >= (double)F32(ebx+___1de584h)) goto ___4c847h;
		FPUSH(F32(edx+___1e6f90h));
		ST(0) = ST(0)*(double)F32(edx+___1e6f80h);
		ST(0) = ST(0)*(double)F32(ebx+___1de58ch);
		ST(0) = ST(0)/(double)F32(ebx+___1de584h);
		FPUSH(0.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6f8ch) = (float)FPOP();
		//fcomp   dword [edx+___1e6f8ch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4c80ch
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6f8ch)) goto ___4c80ch;
		FPUSH(F32(edx+___1e6f8ch));
		ST(0) = -1.0*ST(0);
		F32(esp+0x18) = (float)FPOP();
		goto ___4c816h;
___4c80ch:
		eax = D(edx+___1e6f8ch);
		D(esp+0x18) = eax;
___4c816h:
		FPUSH(F32(esp+0x18));
		//fcomp   dword [___184041h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4c867h
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(___184041h)) goto ___4c867h;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		FPUSH(ST(0));
		ST(0) = ST(0)/F64(___184045h);
		ST(1) = ST(1)-ST(0); FPOP();
		F32(eax+___1e6f80h) = (float)FPOP();
		goto ___4c867h;
___4c847h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f8ch));
		FPUSH(ST(0));
		ST(0) = ST(0)/F64(___184039h);
		ST(1) = ST(1)-ST(0); FPOP();
		F32(eax+___1e6f8ch) = (float)FPOP();
___4c867h:
		edi = D(___243c60h);
		edx = 0x35e*edi;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ef0h)&8) == 0) goto ___4c92ah;
		if(D(edx+___1e6ee8h) != 0) goto ___4c92ah;
		if(D(edx+___1e6eech) != 0) goto ___4c92ah;
		FPUSH(F32(___18404dh));
		ST(0) = ST(0)/(double)F32(edx+___1e6f78h);
		eax = 8*edi;
		eax += edi;
		eax <<= 2;
		eax += edi;
		ST(0) = (double)F32(eax*4+___1de590h)/ST(0);
		FPUSH(F32(edx+___1e6f8ch));
		ST(0) = ST(0)/(double)F32(___184051h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(___243cfch)-ST(0);
		F32(___243cfch) = (float)ST(0);
		ST(0) = ST(0)*(double)F32(___184055h);
		ST(1) = ST(1)*ST(0); FPOP();
		FPUSH(F32(edx+___1e6f90h));
		FPUSH(F32(edx+___1e6f78h));
		ST(0) = (double)F32(edx+___1e6f7ch)-ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = (double)F32(___243cfch)-ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6f7ch) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(___243cfch) = (float)FPOP();
		//fcomp   dword [___184059h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4c92ah
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(___184059h)) goto ___4c92ah;
		FPUSH(F32(edx+___1e6f90h));
		ST(0) = ST(0)+F64(___18405dh);
		F32(edx+___1e6f90h) = (float)FPOP();
___4c92ah:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f7ch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4c953h
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6f7ch)) goto ___4c953h;
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___184065h);
		F32(edx+___1e6f7ch) = (float)FPOP();
___4c953h:
		esi = D(___243c60h);
		edx = 0x35e*esi;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ef0h)&4) == 0) goto ___4ca15h;
		if(D(edx+___1e6ee8h) != 0) goto ___4ca15h;
		if(D(edx+___1e6eech) != 0) goto ___4ca15h;
		FPUSH(F32(___18404dh));
		ST(0) = ST(0)/(double)F32(edx+___1e6f78h);
		eax = 8*esi;
		eax += esi;
		eax <<= 2;
		eax += esi;
		ST(0) = (double)F32(eax*4+___1de590h)/ST(0);
		FPUSH(F32(edx+___1e6f8ch));
		ST(0) = ST(0)/(double)F32(___184051h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(___243cfch);
		F32(___243cfch) = (float)ST(0);
		ST(0) = ST(0)*(double)F32(___184055h);
		ST(1) = ST(1)*ST(0); FPOP();
		FPUSH(F32(edx+___1e6f78h));
		ebx = D(edx+___1e6f90h);
		ST(0) = ST(0)+(double)F32(edx+___1e6f7ch);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(___243cfch);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6f7ch) = (float)FPOP();
		F32(___243cfch) = (float)FPOP();
		if((int)ebx >= 0x42100000) goto ___4ca15h;
		FPUSH(F32(edx+___1e6f90h));
		FPUSH(ST(0));
		ST(0) = ST(0)+F64(___184069h);
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6f90h) = (float)FPOP();
___4ca15h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6f7ch) < 0x43b40000) goto ___4ca3dh;
		FPUSH(F32(eax+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___184071h);
		F32(eax+___1e6f7ch) = (float)FPOP();
___4ca3dh:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f90h]
		//fnstsw  ax
		//sahf    
		//jae     short ___4ca66h
		d_st0 = FPOP();
		if(d_st0 >= (double)F32(edx+___1e6f90h)) goto ___4ca66h;
		FPUSH(F32(edx+___1e6f90h));
		ST(0) = ST(0)+F64(___184075h);
		F32(edx+___1e6f90h) = (float)FPOP();
___4ca66h:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f90h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4ca8bh
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6f90h)) goto ___4ca8bh;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6f90h);
		F32(edx+___1e6f90h) = (float)FPOP();
___4ca8bh:
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		if((int)D(eax*4+___1de598h) <= 0) goto ___4cac5h;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6fd4h));
		ST(0) = ST(0)+(double)F32(eax+___1e6f7ch);
		F32(eax+___1e6f7ch) = (float)FPOP();
___4cac5h:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f7ch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4caeeh
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6f7ch)) goto ___4caeeh;
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___184065h);
		F32(edx+___1e6f7ch) = (float)FPOP();
___4caeeh:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6f7ch) < 0x43b40000) goto ___4cb16h;
		FPUSH(F32(eax+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___184071h);
		F32(eax+___1e6f7ch) = (float)FPOP();
___4cb16h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___18407dh);
		FPUSH(F64(___184081h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		FPUSH(F64(___184089h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___18404dh);
		ST(0) = ST(0)+(double)F32(___18407dh);
		ST(0) = ST(0)*ST(4);
		ST(0) = ST(0)/ST(3);
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___184099h);
		ST(0) = ST(0)+(double)F32(___18407dh);
		ST(6) = ST(6)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(4) = ST(0)/ST(4); FPOP();
		FPUSH(ST(3));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		F64(esp+0x10) = FPOP();
		FPUSH(F32(edx+___1e6f8ch));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(3);
		ST(0) = ST(0)/F64(___18409dh);
		FPUSH(F64(esp+0x10));
		ST(0) = ST(0)*F64(___184091h);
		ST(4) = ST(4)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)/F64(___18409dh);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0x10) = FPOP();
		FPUSH(F32(edx+___1e6f80h));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)*ST(2);
		FPUSH(F64(esp+0x10));
		ST(0) = ST(0)*F64(___184091h);
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
		ST(0) = ST(0)*F64(___184091h);
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
		//fcomp   dword [edx+___1e6f80h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4cc4ch
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6f80h)) goto ___4cc4ch;
		FPUSH(F32(edx+___1e6f80h));
		ST(0) = -1.0*ST(0);
		F32(esp+0x60) = (float)FPOP();
		goto ___4cc56h;
___4cc4ch:
		eax = D(edx+___1e6f80h);
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
		ST(0) = dR_Math_sqrt(ST(0));
		ST(1) = ST(1)/ST(0); FPOP();
		F32(esp+0x58) = (float)FPOP();
		goto ___4cc82h;
___4cc7ah:
		D(esp+0x58) = 0x3f800000;
___4cc82h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(___18407dh));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(1);
		FPUSH(F32(___1840a5h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		FPUSH(F64(___184081h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		FPUSH(F64(___184089h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(5);
		ST(4) = ST(4)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(2);
		ST(0) = ST(0)/ST(1);
		ST(0) = dR_Math_cos(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(5);
		ST(0) = ST(0)+(double)F32(___1840b1h);
		ST(0) = ST(0)*ST(3);
		ST(0) = ST(0)/ST(2);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(6) = ST(6)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(___1840b1h);
		ST(3) = ST(3)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(0)/ST(1); FPOP();
		ST(0) = dR_Math_cos(ST(0));
		FPUSH(F32(esp+0x58));
		ST(0) = ST(0)*(double)F32(esp+0x34);
		FPUSH(F32(esp+0x58));
		ST(0) = ST(0)*(double)F32(esp+0x38);
		FPUSH(F32(esp+0x58));
		ST(0) = ST(0)*(double)F32(esp+0x30);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e702ah) = (float)FPOP();
		FPUSH(F32(esp+0x58));
		ST(0) = ST(0)*(double)F32(esp+0x3c);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)*F64(___1840a9h);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*F64(___184091h);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(0) = ST(0)*F64(___1840a9h);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*F64(___184091h);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(0) = ST(0)*F64(___1840a9h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e702ah);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(0) = ST(0)*F64(___1840a9h);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		F32(edx+___1e702ah) = (float)FPOP();
		FPUSH(F32(___243d24h));
		ecx = ecx^ecx;
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e702eh) = (float)FPOP();
		FPUSH(F32(___243d20h));
		D(___243d24h) = ecx;
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e702eh);
		D(___243d20h) = ecx;
		F32(edx+___1e702eh) = (float)FPOP();
		FPUSH(F32(edx+___1e6fcch));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e702ah);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e702eh);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(edx+___1e702ah) = (float)FPOP();
		FPUSH(F32(edx+___1e6fd0h));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(edx+___1e702eh) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e702ah);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e702eh);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F32(edx+___1e702ah) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(edx+___1e702eh) = (float)FPOP();
		FPUSH(F32(edx+___1e702ah));
		FPUSH(ST(0));
		FPUSH(F32(edx+___1e702eh));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(4) = ST(4)+ST(0); FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6f94h) = (float)FPOP();
		FPUSH(F32(edx+___1e702eh));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6f9ch) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(2) = ST(2)+ST(0); FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		F32(edx+___1e6f98h) = (float)FPOP();
		F32(edx+___1e6fa0h) = (float)FPOP();
		FPUSH(F32(___18407dh));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(1);
		FPUSH(F32(___1840b5h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		ST(0) = ST(0)*F64(___184081h);
		FPUSH(F64(___184089h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(4);
		ST(3) = ST(3)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)*F64(___184081h);
		ST(0) = ST(0)/ST(1);
		ST(0) = dR_Math_cos(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(4);
		FPUSH(F32(___1840b9h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		ST(0) = ST(0)*F64(___184081h);
		ST(0) = ST(0)/ST(3);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(6);
		ST(2) = ST(2)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*F64(___184081h);
		ST(0) = ST(0)/ST(3);
		ST(0) = dR_Math_cos(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(6) = ST(6)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(___18404dh);
		ST(0) = ST(0)*F64(___184081h);
		ST(3) = ST(0)/ST(3); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		FPUSH(F64(___1840a9h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		FPUSH(F64(___184091h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*ST(2);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*F64(___1840bdh);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		FPUSH(F32(edx+___1e702ah));
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(edx+___1e702ah));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6fa4h) = (float)FPOP();
		FPUSH(F32(edx+___1e702ah));
		FPUSH(F32(edx+___1e702eh));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(6) = ST(6)+ST(0); FPOP();
		ST(3) = ST(3)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F32(edx+___1e6fach) = (float)FPOP();
		FPUSH(F32(edx+___1e702eh));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6fb4h) = (float)FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		F32(edx+___1e6fa8h) = (float)FPOP();
		F32(edx+___1e6fb0h) = (float)FPOP();
		FPUSH(F32(___18407dh));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(1);
		FPUSH(F64(___184081h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		ST(0) = ST(0)/F64(___184089h);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(3);
		ST(0) = ST(0)*ST(2);
		ST(0) = ST(0)/F64(___184089h);
		ST(0) = dR_Math_cos(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(4);
		ST(0) = ST(0)+(double)F32(___18404dh);
		ST(0) = ST(0)*ST(3);
		ST(0) = ST(0)/F64(___184089h);
		ST(0) = dR_Math_cos(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(5);
		ST(0) = ST(0)+(double)F32(___184099h);
		ST(0) = ST(0)*ST(4);
		ST(0) = ST(0)/F64(___184089h);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(6) = ST(6)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(___184099h);
		ST(4) = ST(4)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)/F64(___184089h);
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(F64(___184091h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		ST(0) = ST(0)*F64(___1840c5h);
		ST(0) = ST(0)+(double)F32(edx+___1e702eh);
		FPUSH(F32(edx+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6fc8h) = (float)FPOP();
		ST(0) = ST(0)+(double)F32(edx+___1e6fc8h);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		eax = D(esp+0x5c);
		eax = eax*edi;
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)*F64(___1840c5h);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(2);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		FPUSH(F64(___1840bdh));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(3) = ST(3)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*ST(4);
		FPUSH(F32(edx+___1e702ah));
		ST(4) = ST(4)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(4) = ST(4)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6fc4h) = (float)FPOP();
		FPUSH(F32(edx+___1e702ah));
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(edx+___1e6f84h));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(edx+___1e6fbch) = (float)FPOP();
		FPUSH(F32(edx+___1e702eh));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6fc4h);
		FPUSH(F32(edx+___1e702eh));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		ST(3) = ST(3)+ST(0); FPOP();
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6fc0h) = (float)FPOP();
		F32(edx+___1e6fb8h) = (float)FPOP();
		eax += D(esp+0x5c);
		if((int)eax < 0) goto ___4d08ch;
		ebx = D(___243d2ch);
		edx = edi;
		edx = edx*ebx;
		if((int)eax >= (int)edx) goto ___4d08ch;
		edx = D(___243d60h);
		L(eax) = B(edx+eax);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x2c) = eax;
		goto ___4d094h;
___4d08ch:
		D(esp+0x2c) = 0xf;
___4d094h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f88h));
		ST(0) = ST(0)+(double)F32(eax+___1e6f98h);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)+(double)F32(eax+___1e6f94h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		eax = D(esp+0x5c);
		eax += edx;
		if((int)eax < 0) goto ___4d104h;
		ebx = D(___243d2ch);
		edx = edi;
		edx = edx*ebx;
		if((int)eax >= (int)edx) goto ___4d104h;
		edx = D(___243d60h);
		L(eax) = B(edx+eax);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x50) = eax;
		goto ___4d10ch;
___4d104h:
		D(esp+0x50) = 0xf;
___4d10ch:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f88h));
		ST(0) = ST(0)+(double)F32(eax+___1e6fa0h);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)+(double)F32(eax+___1e6f9ch);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx += D(esp+0x5c);
		if((int)edx < 0) goto ___4d179h;
		ebx = D(___243d2ch);
		eax = edi;
		eax = eax*ebx;
		if((int)edx >= (int)eax) goto ___4d179h;
		eax = D(___243d60h);
		L(eax) = B(edx+eax);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x48) = eax;
		goto ___4d181h;
___4d179h:
		D(esp+0x48) = 0xf;
___4d181h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f88h));
		ST(0) = ST(0)+(double)F32(eax+___1e6fa8h);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)+(double)F32(eax+___1e6fa4h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx += D(esp+0x5c);
		if((int)edx < 0) goto ___4d1eeh;
		ebx = D(___243d2ch);
		eax = edi;
		eax = eax*ebx;
		if((int)edx >= (int)eax) goto ___4d1eeh;
		eax = D(___243d60h);
		L(eax) = B(edx+eax);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x4c) = eax;
		goto ___4d1f6h;
___4d1eeh:
		D(esp+0x4c) = 0xf;
___4d1f6h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f88h));
		ST(0) = ST(0)+(double)F32(eax+___1e6fb0h);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)+(double)F32(eax+___1e6fach);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		eax = D(esp+0x5c);
		eax += edx;
		if((int)eax < 0) goto ___4d266h;
		ebx = D(___243d2ch);
		edx = edi;
		edx = edx*ebx;
		if((int)eax >= (int)edx) goto ___4d266h;
		edx = D(___243d60h);
		L(eax) = B(edx+eax);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x54) = eax;
		goto ___4d26eh;
___4d266h:
		D(esp+0x54) = 0xf;
___4d26eh:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f88h));
		ST(0) = ST(0)+(double)F32(eax+___1e6fb8h);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)+(double)F32(eax+___1e6fb4h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx += D(esp+0x5c);
		if((int)edx < 0) goto ___4d2dbh;
		ebx = D(___243d2ch);
		eax = edi;
		eax = eax*ebx;
		if((int)edx >= (int)eax) goto ___4d2dbh;
		eax = D(___243d60h);
		L(eax) = B(edx+eax);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x40) = eax;
		goto ___4d2e3h;
___4d2dbh:
		D(esp+0x40) = 0xf;
___4d2e3h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f88h));
		ST(0) = ST(0)+(double)F32(eax+___1e6fc0h);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx = D(esp+0x5c);
		edx = edx*edi;
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)+(double)F32(eax+___1e6fbch);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edx += D(esp+0x5c);
		if((int)edx < 0) goto ___4d350h;
		ebx = D(___243d2ch);
		eax = edi;
		eax = eax*ebx;
		if((int)edx >= (int)eax) goto ___4d350h;
		eax = D(___243d60h);
		L(eax) = B(edx+eax);
		L(eax) &= 0xf;
		eax &= 0xff;
		D(esp+0x44) = eax;
		goto ___4d358h;
___4d350h:
		D(esp+0x44) = 0xf;
___4d358h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)/F64(___1840cdh);
		ebx = D(___243c60h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		eax = D(esp+0x5c);
		FPUSH(F32(edx+___1e6f84h));
		D(edx+___1e6edch) = eax;
		esi = 4*eax;
		FPUSH(F32(edx+___1e6f88h));
		esi -= eax;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		esi <<= 3;
		D(esp+0x5c) = (int)FPOP();
		esi += eax;
		eax = 4*ebx;
		ST(0) = ST(0)+(double)F32(___1840d5h);
		eax += ebx;
		edi = D(esp+0x5c);
		eax <<= 0xb;
		ST(0) = ST(0)+(double)F32(edx+___1e702eh);
		ebx = eax;
		eax <<= 4;
		esi <<= 6;
		eax -= ebx;
		ST(0) = (int)ST(0);
		eax += esi;
		D(esp+0x5c) = (int)FPOP();
		D(edx+___1e6ee0h) = eax;
		eax = D(___243d60h);
		ecx = D(esp+0x5c);
		eax += edi;
		edi = D(___243d28h);
		edi = edi*ecx;
		FPUSH(F32(edx+___1e702ah));
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		ebx = D(esp+0x5c);
		eax -= 0x14;
		esi = D(edx+___1e6ee0h);
		eax += ebx;
		ebx = D(___243d74h);
		ebx += esi;
		edi += eax;
		esi = 0xf;
		edx = edx^edx;
		eax = eax^eax;
___4d428h:
		ecx = ecx^ecx;
___4d42ah:
		if((signed char)B(ebx) <= 3) goto ___4d447h;
		L(eax) = B(edi);
		L(eax) &= 0xf;
		if((signed char)L(eax) >= 4) goto ___4d447h;
		esi = eax;
		D(___243cb0h) = ecx;
		D(___243cb4h) = edx;
		goto ___4d45eh;
___4d447h:
		edi++;
		ebx++;
		ecx++;
		if(ecx != 0x28) goto ___4d42ah;
		edi += D(___243d28h);
		edi -= 0x28;
		edx++;
		if(edx != 0x28) goto ___4d428h;
___4d45eh:
		eax = 0x35e*D(___243c60h);
		D(eax+___1e6ee4h) = esi;
		if((int)esi >= 4) goto ___4d7deh;
		edx = D(___243cb0h);
		edx -= 0x14;
		D(eax+___1e7042h) = edx;
		edx = D(___243cb4h);
		D(eax+___1e705eh) = esi;
		edx -= 0x14;
		ecx = D(eax+___1e7062h);
		D(eax+___1e7046h) = edx;
		if((int)ecx <= 3) goto ___4d693h;
		esi = esi^esi;
		edi = 1;
		D(eax+___1e6f80h) = esi;
		D(eax+___1e703ah) = edi;
		D(eax+___1e703eh) = esi;
___4d4c3h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6ee4h) >= 4) goto ___4d68bh;
		ebx = D(eax+___1e703ah);
		eax = rand_watcom106();
		ebx += ebx;
		edx = eax;
		ebx++;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)ebx;
		eax = 0x35e*D(___243c60h);
		ebx = D(eax+___1e703ah);
		edx -= ebx;
		D(esp+0x5c) = edx;
		ebx = D(eax+___1e703ah);
		FPUSH((int)D(esp+0x5c));
		F32(eax+___1e7032h) = (float)FPOP();
		eax = rand_watcom106();
		ebx += ebx;
		edx = eax;
		ebx++;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)ebx;
		ebx = 0x35e*D(___243c60h);
		edi = D(ebx+___1e703eh);
		esi = D(ebx+___1e703ah);
		edi++;
		edx -= esi;
		esi = 5;
		D(esp+0x5c) = edx;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)esi;
		D(ebx+___1e703eh) = edi;
		FPUSH((int)D(esp+0x5c));
		F32(ebx+___1e7036h) = (float)FPOP();
		if(edx) goto ___4d577h;
		eax = D(ebx+___1e703ah);
		if((int)eax >= 0x1e) goto ___4d577h;
		edx = eax+1;
		D(ebx+___1e703ah) = edx;
___4d577h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e7036h));
		ST(0) = ST(0)+(double)F32(eax+___1e6f88h);
		F32(eax+___1e6f88h) = (float)ST(0);
		ST(0) = ST(0)+(double)F32(___1840d5h);
		ST(0) = ST(0)+(double)F32(eax+___1e702eh);
		edi = D(___243d28h);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		edi = edi*D(esp+0x5c);
		edx = D(___243d60h);
		FPUSH(F32(eax+___1e702ah));
		FPUSH(F32(eax+___1e7032h));
		ST(0) = ST(0)+(double)F32(eax+___1e6f84h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6f84h) = (float)ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		ecx = D(esp+0x5c);
		D(esp+0x5c) = (int)FPOP();
		edx += ecx;
		esi = D(esp+0x5c);
		edx -= 0x14;
		ecx = D(eax+___1e6ee0h);
		edx += esi;
		ebx = D(___243d74h);
		edi += edx;
		ebx += ecx;
		esi = 0xf;
		edx = edx^edx;
		eax = eax^eax;
___4d60fh:
		ecx = ecx^ecx;
___4d611h:
		if((signed char)B(ebx) <= 3) goto ___4d62eh;
		L(eax) = B(edi);
		L(eax) &= 0xf;
		if((signed char)L(eax) >= 4) goto ___4d62eh;
		esi = eax;
		D(___243cb0h) = ecx;
		D(___243cb4h) = edx;
		goto ___4d645h;
___4d62eh:
		edi++;
		ebx++;
		ecx++;
		if(ecx != 0x28) goto ___4d611h;
		edi += D(___243d28h);
		edi -= 0x28;
		edx++;
		if(edx != 0x28) goto ___4d60fh;
___4d645h:
		eax = 0x35e*D(___243c60h);
		D(eax+___1e6ee4h) = esi;
		if((int)esi >= 4) goto ___4d4c3h;
		FPUSH(F32(eax+___1e7032h));
		FPUSH(F32(eax+___1e7036h));
		ST(0) = (double)F32(eax+___1e6f88h)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(eax+___1e6f84h)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6f88h) = (float)FPOP();
		F32(eax+___1e6f84h) = (float)FPOP();
		goto ___4d4c3h;
___4d68bh:
		esi = esi^esi;
		D(eax+___1e6ee4h) = esi;
___4d693h:
		eax = 0x35e*D(___243c60h);
		ecx = D(eax+___1e7062h);
		if(ecx == 0) goto ___4d6e3h;
		if((int)ecx > 3) goto ___4d6e3h;
		FPUSH(F64(___184075h));
		FPUSH(F32(eax+___1e702ah));
		ST(0) = ST(0)*ST(1);
		FPUSH(F32(eax+___1e702eh));
		ST(2) = ST(2)*ST(0); FPOP();
		edi = edi^edi;
		edx = 1;
		D(eax+___1e6f80h) = edi;
		D(eax+___1e6ee4h) = edx;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6fd0h) = (float)FPOP();
		F32(eax+___1e6fcch) = (float)FPOP();
___4d6e3h:
		eax = 0x35e*D(___243c60h);
		if(D(eax+___1e7062h) != 0) goto ___4d7e6h;
		if((int)D(esp+0x48) < 4) goto ___4d708h;
		if((int)D(esp+0x4c) >= 4) goto ___4d72fh;
___4d708h:
		if((int)D(esp+0x2c) < 4) goto ___4d72fh;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f7ch));
		FPUSH(ST(0));
		ST(0) = ST(0)+F64(___1840d9h);
		ST(1) = ST(0); FPOP();
		F32(eax+___1e6f7ch) = (float)FPOP();
___4d72fh:
		if((int)D(esp+0x50) < 4) goto ___4d73dh;
		if((int)D(esp+0x54) >= 4) goto ___4d760h;
___4d73dh:
		if((int)D(esp+0x2c) < 4) goto ___4d760h;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f7ch));
		ST(0) = ST(0)+F64(___1840e1h);
		F32(eax+___1e6f7ch) = (float)FPOP();
___4d760h:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f7ch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4d789h
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6f7ch)) goto ___4d789h;
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___184065h);
		F32(edx+___1e6f7ch) = (float)FPOP();
___4d789h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6f7ch) < 0x43b40000) goto ___4d7b1h;
		FPUSH(F32(eax+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___184071h);
		F32(eax+___1e6f7ch) = (float)FPOP();
___4d7b1h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		FPUSH(ST(0));
		ST(0) = ST(0)*F64(___1840e9h);
		esi = 1;
		ST(1) = ST(1)-ST(0); FPOP();
		D(eax+___1e6ee4h) = esi;
		F32(eax+___1e6f80h) = (float)FPOP();
		goto ___4d7e6h;
___4d7deh:
		ebx = ebx^ebx;
		D(eax+___1e6ee4h) = ebx;
___4d7e6h:
		if(D(esp+0x50) == 4) goto ___4d810h;
		if(D(esp+0x48) == 4) goto ___4d810h;
		if(D(esp+0x4c) == 4) goto ___4d810h;
		if(D(esp+0x54) == 4) goto ___4d810h;
		if(D(esp+0x40) == 4) goto ___4d810h;
		if(D(esp+0x44) != 4) goto ___4d832h;
___4d810h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)/(double)F32(___1840f1h);
		ST(0) = (double)F32(eax+___1e6f80h)-ST(0);
		F32(eax+___1e6f80h) = (float)FPOP();
___4d832h:
		if(D(esp+0x48) == 5) goto ___4d840h;
		if(D(esp+0x4c) != 5) goto ___4d87ch;
___4d840h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)/(double)F32(___184031h);
		FPUSH(F32(eax+___1e6fd4h));
		FPUSH(ST(0));
		ST(0) = ST(0)+F64(___1840f5h);
		ST(1) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(eax+___1e6f80h)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6fd4h) = (float)FPOP();
		F32(eax+___1e6f80h) = (float)FPOP();
___4d87ch:
		if(D(esp+0x50) == 5) goto ___4d88ah;
		if(D(esp+0x54) != 5) goto ___4d8c2h;
___4d88ah:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)/(double)F32(___184031h);
		FPUSH(F32(eax+___1e6fd4h));
		ST(0) = ST(0)+F64(___1840fdh);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(eax+___1e6f80h)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6fd4h) = (float)FPOP();
		F32(eax+___1e6f80h) = (float)FPOP();
___4d8c2h:
		if(D(esp+0x50) == 6) goto ___4d8ech;
		if(D(esp+0x48) == 6) goto ___4d8ech;
		if(D(esp+0x4c) == 6) goto ___4d8ech;
		if(D(esp+0x54) == 6) goto ___4d8ech;
		if(D(esp+0x40) == 6) goto ___4d8ech;
		if(D(esp+0x44) != 6) goto ___4d90eh;
___4d8ech:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)/(double)F32(___184105h);
		ST(0) = (double)F32(eax+___1e6f80h)-ST(0);
		F32(eax+___1e6f80h) = (float)FPOP();
___4d90eh:
		if(D(esp+0x50) == 7) goto ___4d938h;
		if(D(esp+0x48) == 7) goto ___4d938h;
		if(D(esp+0x4c) == 7) goto ___4d938h;
		if(D(esp+0x54) == 7) goto ___4d938h;
		if(D(esp+0x40) == 7) goto ___4d938h;
		if(D(esp+0x44) != 7) goto ___4d95ah;
___4d938h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)/(double)F32(___184041h);
		ST(0) = (double)F32(eax+___1e6f80h)-ST(0);
		F32(eax+___1e6f80h) = (float)FPOP();
___4d95ah:
		if(D(esp+0x50) == 0xa) goto ___4d968h;
		if(D(esp+0x4c) != 0xa) goto ___4d984h;
___4d968h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6fd4h));
		ST(0) = ST(0)+F64(___184109h);
		F32(eax+___1e6fd4h) = (float)FPOP();
___4d984h:
		if(D(esp+0x48) == 0xa) goto ___4d992h;
		if(D(esp+0x54) != 0xa) goto ___4d9b2h;
___4d992h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6fd4h));
		FPUSH(ST(0));
		ST(0) = ST(0)+F64(___184111h);
		ST(1) = ST(0); FPOP();
		F32(eax+___1e6fd4h) = (float)FPOP();
___4d9b2h:
		if(D(esp+0x50) == 0xb) goto ___4d9dch;
		if(D(esp+0x48) == 0xb) goto ___4d9dch;
		if(D(esp+0x4c) == 0xb) goto ___4d9dch;
		if(D(esp+0x54) == 0xb) goto ___4d9dch;
		if(D(esp+0x40) == 0xb) goto ___4d9dch;
		if(D(esp+0x44) != 0xb) goto ___4d9feh;
___4d9dch:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)/(double)F32(___184119h);
		ST(0) = ST(0)+(double)F32(eax+___1e6f80h);
		F32(eax+___1e6f80h) = (float)FPOP();
___4d9feh:
		if(D(esp+0x50) == 0xc) goto ___4da0ch;
		if(D(esp+0x4c) != 0xc) goto ___4da28h;
___4da0ch:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6fd4h));
		ST(0) = ST(0)+F64(___18411dh);
		F32(eax+___1e6fd4h) = (float)FPOP();
___4da28h:
		if(D(esp+0x48) == 0xc) goto ___4da36h;
		if(D(esp+0x54) != 0xc) goto ___4da56h;
___4da36h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6fd4h));
		FPUSH(ST(0));
		ST(0) = ST(0)+F64(___184125h);
		ST(1) = ST(0); FPOP();
		F32(eax+___1e6fd4h) = (float)FPOP();
___4da56h:
		if(D(esp+0x50) == 0xd) goto ___4da84h;
		if(D(esp+0x48) == 0xd) goto ___4da84h;
		if(D(esp+0x4c) == 0xd) goto ___4da84h;
		if(D(esp+0x54) == 0xd) goto ___4da84h;
		if(D(esp+0x40) == 0xd) goto ___4da84h;
		if(D(esp+0x44) != 0xd) goto ___4db80h;
___4da84h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6f80h));
		ST(0) = ST(0)*F64(___18412dh);
		F64(esp+0x10) = FPOP();
		eax = rand_watcom106();
		D(esp+0x5c) = eax;
		FPUSH((int)D(esp+0x5c));
		ST(0) = ST(0)*F64(esp+0x10);
		ST(0) = ST(0)*F64(___184135h);
		FPUSH(F32(edx+___1e6f7ch));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		eax = D(___243c60h);
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6f7ch) = (float)FPOP();
		edx = 0x35e*eax;
		FPUSH(F32(edx+___1e6f80h));
		ST(0) = ST(0)*F64(___18412dh);
		F64(esp+0x10) = FPOP();
		eax = rand_watcom106();
		D(esp+0x5c) = eax;
		FPUSH((int)D(esp+0x5c));
		ST(0) = ST(0)*F64(esp+0x10);
		ST(0) = ST(0)*F64(___184135h);
		FPUSH(F32(edx+___1e6f7ch));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(1)-ST(0);
		ebx = D(___243c60h);
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6f7ch) = (float)FPOP();
		edx = 0x35e*ebx;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f7ch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4db36h
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(edx+___1e6f7ch)) goto ___4db36h;
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___184065h);
		F32(edx+___1e6f7ch) = (float)FPOP();
___4db36h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6f7ch) < 0x43b40000) goto ___4db5eh;
		FPUSH(F32(eax+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___184071h);
		F32(eax+___1e6f7ch) = (float)FPOP();
___4db5eh:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)/(double)F32(___184031h);
		ST(0) = (double)F32(eax+___1e6f80h)-ST(0);
		F32(eax+___1e6f80h) = (float)FPOP();
___4db80h:
		if(D(esp+0x50) == 0xe) goto ___4dbaah;
		if(D(esp+0x48) == 0xe) goto ___4dbaah;
		if(D(esp+0x4c) == 0xe) goto ___4dbaah;
		if(D(esp+0x54) == 0xe) goto ___4dbaah;
		if(D(esp+0x40) == 0xe) goto ___4dbaah;
		if(D(esp+0x44) != 0xe) goto ___4dbcch;
___4dbaah:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)/(double)F32(___18413dh);
		ST(0) = (double)F32(eax+___1e6f80h)-ST(0);
		F32(eax+___1e6f80h) = (float)FPOP();
___4dbcch:
		edx = 0x35e*D(___243c60h);
		eax = D(___243d28h);
		eax -= 0x14;
		D(esp+0x20) = eax;
		FPUSH((int)D(esp+0x20));
		F32(esp+0x28) = (float)FPOP();
		FPUSH(F32(edx+___1e702eh));
		FPUSH(F32(edx+___1e702ah));
		ST(0) = ST(0)+(double)F32(edx+___1e6f84h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6f88h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6f84h) = (float)FPOP();
		F32(edx+___1e6f88h) = (float)FPOP();
		FPUSH(F32(edx+___1e6f84h));
		//fcomp   dword [esp+28h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4dc2bh
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(esp+0x28)) goto ___4dc2bh;
		eax = D(esp+0x28);
		D(edx+___1e6f84h) = eax;
___4dc2bh:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6f84h) >= 0x41a00000) goto ___4dc4bh;
		D(eax+___1e6f84h) = 0x41a00000;
___4dc4bh:
		edx = 0x35e*D(___243c60h);
		eax = D(___243d2ch);
		eax -= 0x14;
		D(esp+0x1c) = eax;
		FPUSH(F32(edx+___1e6f88h));
		FPUSH((int)D(esp+0x1c));
		F32(esp+0x24) = (float)FPOP();
		//fcomp   dword [esp+24h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4dc82h
		d_st0 = FPOP();
		if(d_st0 <= (double)F32(esp+0x24)) goto ___4dc82h;
		eax = D(esp+0x24);
		D(edx+___1e6f88h) = eax;
___4dc82h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e6f88h) >= 0x41a00000) goto ___4dca2h;
		D(eax+___1e6f88h) = 0x41a00000;
___4dca2h:
		return;
}
