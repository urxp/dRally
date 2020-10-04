#include "drally.h"

	extern byte ___243cf4h[];
	extern byte ___243c60h[];
	extern byte ___1843cah[];
	extern byte ___1e6f7ch[];
	extern byte ___184392h[];
	extern byte ___1843ceh[];
	extern byte ___18438eh[];
	extern byte ___1843d6h[];
	extern byte ___18439ah[];
	extern byte ___1843a2h[];
	extern byte ___1e6f84h[];
	extern byte ___1e6ffeh[];
	extern byte ___1e6fdeh[];
	extern byte ___1e6f88h[];
	extern byte ___1e6feeh[];
	extern byte ___1e6fe2h[];
	extern byte ___1e6ff2h[];
	extern byte ___1de598h[];
	extern byte ___1e700eh[];
	extern byte ___1e7012h[];
	extern byte ___1e7002h[];
	extern byte ___1e6f80h[];
	extern byte ___1de584h[];
	extern byte ___1843aah[];
	extern byte ___243ca8h[];
	extern byte ___1e6ef0h[];
	extern byte ___1843b2h[];
	extern byte ___1e6fd4h[];
	extern byte ___1e7222h[];
	extern byte ___243ce8h[];
	extern byte ___1de5ach[];
	extern byte ___1e6fe6h[];
	extern byte ___1e6feah[];
	extern byte ___1e6ff6h[];
	extern byte ___1e6ffah[];
	extern byte ___1e7006h[];
	extern byte ___1e700ah[];
	extern byte ___1e7016h[];
	extern byte ___1e701ah[];
	extern byte ___243d08h[];
	extern byte ___1843c6h[];
	extern byte ___243d28h[];
	extern byte ___243d60h[];
	extern byte ___243d58h[];
	extern byte ___242d78h[];
	extern byte ___1e6f8ch[];
	extern byte ___1de580h[];
	extern byte ___1843bah[];
	extern byte ___2438d4h[];
	extern byte ___1843beh[];
	extern byte ___1e721ah[];
	extern byte ___1e70b2h[];
	extern byte ___1e712ah[];
	extern byte ___1e71a2h[];
	extern byte ___1e70eeh[];
	extern byte ___1e7166h[];
	extern byte ___1e71deh[];
	extern byte ___243078h[];

int rand_watcom106(void);
double dR_Math_sin(double);
double dR_Math_cos(double);

// POSITION, LAP COUNTER
void race___54668h(void){

	double 	d_tmp, d_st0, d_st1;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x124];


		edx ^= edx;
		ebx = D(___243cf4h);
		D(___243c60h) = edx;
		if((int)ebx <= 0) goto ___55ad5h;
___54699h:
		ecx = D(___243c60h);
		edx = 0x35e*ecx;
		FPUSH(F32(___1843cah));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(1);
		FPUSH(F64(___184392h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		FPUSH(F64(___1843ceh));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___18438eh);
		ST(0) = ST(0)+ST(4);
		ST(0) = ST(0)*ST(3);
		ST(0) = ST(0)/ST(2);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___18438eh);
		ST(5) = ST(5)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*ST(3);
		ST(0) = ST(0)/ST(2);
		ST(0) = dR_Math_cos(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___18438eh);
		ST(0) = ST(0)+(double)F32(___1843d6h);
		ST(0) = ST(0)*ST(4);
		ST(0) = ST(0)/ST(3);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___18438eh);
		ST(0) = ST(0)+(double)F32(___1843d6h);
		ST(5) = ST(5)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(3) = ST(0)/ST(3); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(F64(___18439ah));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		FPUSH(F64(___1843a2h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)*ST(2);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		FPUSH(F32(edx+___1e6f84h));
		ST(5) = ST(5)+ST(0);
		ST(3) = ST(3)+ST(0); FPOP();
		FPUSH(F32(edx+___1e6f84h));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(edx+___1e6ffeh) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6fdeh) = (float)FPOP();
		FPUSH(F32(edx+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6feeh) = (float)FPOP();
		FPUSH(F32(edx+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(2) = ST(2)+ST(0); FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		F32(edx+___1e6fe2h) = (float)FPOP();
		F32(edx+___1e6ff2h) = (float)FPOP();
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___1843cah);
		FPUSH(F64(___184392h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		FPUSH(F64(___1843ceh));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		ST(0) = dR_Math_cos(ST(0));
		FPUSH(F32(___1843d6h));
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+ST(1);
		ST(0) = ST(0)*ST(4);
		ST(0) = ST(0)/ST(3);
		ST(0) = dR_Math_sin(ST(0));
		FPUSH(F32(edx+___1e6f7ch));
		ST(2) = ST(2)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(4) = ST(4)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(2) = ST(0)/ST(2); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		ebx = 0x94*ecx;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(F64(___1843a2h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		FPUSH(F64(___18439ah));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(2) = ST(2)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(3);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(3) = ST(3)*ST(0); FPOP();
		edi = D(ebx+___1de598h);
		FPUSH(F32(edx+___1e6f88h));
		FPUSH(F32(edx+___1e6f84h));
		ST(3) = ST(3)+ST(0); FPOP();
		FPUSH(F32(edx+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(edx+___1e700eh) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(3) = ST(3)+ST(0); FPOP();
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e7012h) = (float)FPOP();
		F32(edx+___1e7002h) = (float)FPOP();
		if((int)edi <= 0) goto ___548e3h;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f80h]
		//fnstsw  ax
		//sahf    
		//jae     near ___548e3h
		if(FPOP() >= (double)F32(edx+___1e6f80h)) goto ___548e3h;
		FPUSH(F32(ebx+___1de584h));
		ST(0) = ST(0)*F64(___1843aah);
		FPUSH(F32(edx+___1e6f80h));
		//fcompp  
		//fnstsw  ax
		//sahf    
		//jae     short ___548e3h
		d_st0 = FPOP();
		d_st1 = FPOP();
		if(d_st0 >= d_st1) goto ___548e3h;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ef0h)&1) == 0) goto ___548e3h;
		eax = rand_watcom106();
		D(esp+0x11c) = eax;
		FPUSH((int)D(esp+0x11c));
		ST(0) = ST(0)*F64(___1843b2h);
		FPUSH(F32(edx+___1e6fd4h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		eax = D(___243c60h);
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6fd4h) = (float)FPOP();
		edx = 0x35e*eax;
		eax = rand_watcom106();
		D(esp+0x11c) = eax;
		FPUSH((int)D(esp+0x11c));
		ST(0) = ST(0)*F64(___1843b2h);
		ST(0) = (double)F32(edx+___1e6fd4h)-ST(0);
		F32(edx+___1e6fd4h) = (float)FPOP();
___548e3h:
		edx = 0x35e*D(___243c60h);
		ecx = D(edx+___1e7222h);
		if((int)ecx <= 0) goto ___54f11h;
		eax = 0x94*D(___243ce8h);
		if(D(eax+___1de5ach) == 0) goto ___54f11h;
		FPUSH(F32(edx+___1e6fdeh));
		FPUSH(F32(edx+___1e6f80h));
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e6fe6h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0xf8) = (int)FPOP();
		FPUSH((int)D(esp+0xf8));
		F32(esp+0x11c) = (float)FPOP();
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(edx+___1e6fe2h));
		ST(0) = ST(0)-(double)F32(edx+___1e6feah);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(edx+___1e6feeh));
		ST(0) = ST(0)-(double)F32(edx+___1e6ff6h);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(edx+___1e6ff2h));
		ST(0) = ST(0)-(double)F32(edx+___1e6ffah);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(edx+___1e6ffeh));
		ST(0) = ST(0)-(double)F32(edx+___1e7006h);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(edx+___1e7002h));
		ST(0) = ST(0)-(double)F32(edx+___1e700ah);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		ebx = ecx-1;
		D(edx+___1e7222h) = ebx;
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(esp+0x118) = (float)FPOP();
		FPUSH(F32(edx+___1e700eh));
		ST(0) = ST(0)-(double)F32(edx+___1e7016h);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(edx+___1e7012h));
		ST(0) = ST(0)-(double)F32(edx+___1e701ah);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		ecx ^= ecx;
		esi = D(esp+0xf8);
		D(___243d08h) = ecx;
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(esp+0x114) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(esp+0x110) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x10c) = (float)FPOP();
		F32(esp+0x108) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(esp+0x104) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x100) = (float)FPOP();
		F32(esp+0xfc) = (float)FPOP();
		if((int)esi <= 0) goto ___55a49h;
		L(ecx) = 0xf;
___54a34h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6feah));
		ST(0) = (int)ST(0);
		D(esp+0x14) = (int)FPOP();
		FPUSH((int)D(esp+0x14));
		ST(0) = (double)F32(edx+___1e6feah)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___54a75h
		if(FPOP() < (double)F32(___1843c6h)) goto ___54a75h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6feah);
		ST(0) = (int)ST(0);
		D(esp+0x18) = (int)FPOP();
		goto ___54a7dh;
___54a75h:
		eax = D(esp+0x14);
		D(esp+0x18) = eax;
___54a7dh:
		ebx = D(esp+0x18);
		ebx = ebx*D(___243d28h);
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6fe6h));
		ST(0) = (int)ST(0);
		D(esp+0xa4) = (int)FPOP();
		FPUSH((int)D(esp+0xa4));
		ST(0) = (double)F32(edx+___1e6fe6h)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___54ad2h
		if(FPOP() < (double)F32(___1843c6h)) goto ___54ad2h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6fe6h);
		ST(0) = (int)ST(0);
		D(esp+0x120) = (int)FPOP();
		goto ___54ae0h;
___54ad2h:
		eax = D(esp+0xa4);
		D(esp+0x120) = eax;
___54ae0h:
		eax = D(esp+0x120);
		edx = D(___243d60h);
		eax += ebx;
		L(edx) = B(edx+eax);
		L(edx) &= L(ecx);
		if(L(edx) != 0xf) goto ___54b3dh;
		edx = D(___243d58h);
		eax += edx;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___242d78h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___242d78h);
		edi = D(___243d28h);
		B(eax+1) = L(edx);
		eax += edi;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___242d78h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___242d78h);
		B(eax+1) = L(edx);
___54b3dh:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6ffah));
		ST(0) = (int)ST(0);
		D(esp+0x28) = (int)FPOP();
		FPUSH((int)D(esp+0x28));
		ST(0) = (double)F32(edx+___1e6ffah)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___54b7eh
		if(FPOP() < (double)F32(___1843c6h)) goto ___54b7eh;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ffah);
		ST(0) = (int)ST(0);
		D(esp+0x2c) = (int)FPOP();
		goto ___54b86h;
___54b7eh:
		eax = D(esp+0x28);
		D(esp+0x2c) = eax;
___54b86h:
		ebx = D(esp+0x2c);
		ebx = ebx*D(___243d28h);
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6ff6h));
		ST(0) = (int)ST(0);
		D(esp+0x58) = (int)FPOP();
		FPUSH((int)D(esp+0x58));
		ST(0) = (double)F32(edx+___1e6ff6h)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___54bd5h
		if(FPOP() < (double)F32(___1843c6h)) goto ___54bd5h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ff6h);
		ST(0) = (int)ST(0);
		D(esp+0xb8) = (int)FPOP();
		goto ___54be0h;
___54bd5h:
		eax = D(esp+0x58);
		D(esp+0xb8) = eax;
___54be0h:
		eax = D(esp+0xb8);
		edx = D(___243d60h);
		eax += ebx;
		L(edx) = B(edx+eax);
		L(edx) &= L(ecx);
		if(L(edx) != 0xf) goto ___54c3dh;
		edx = D(___243d58h);
		eax += edx;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___242d78h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___242d78h);
		edi = D(___243d28h);
		B(eax+1) = L(edx);
		eax += edi;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___242d78h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___242d78h);
		B(eax+1) = L(edx);
___54c3dh:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e700ah));
		ST(0) = (int)ST(0);
		D(esp+0x3c) = (int)FPOP();
		FPUSH((int)D(esp+0x3c));
		ST(0) = (double)F32(edx+___1e700ah)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___54c7eh
		if(FPOP() < (double)F32(___1843c6h)) goto ___54c7eh;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e700ah);
		ST(0) = (int)ST(0);
		D(esp+0x44) = (int)FPOP();
		goto ___54c86h;
___54c7eh:
		eax = D(esp+0x3c);
		D(esp+0x44) = eax;
___54c86h:
		ebx = D(esp+0x44);
		ebx = ebx*D(___243d28h);
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e7006h));
		ST(0) = (int)ST(0);
		D(esp+0x48) = (int)FPOP();
		FPUSH((int)D(esp+0x48));
		ST(0) = (double)F32(edx+___1e7006h)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___54cd2h
		if(FPOP() < (double)F32(___1843c6h)) goto ___54cd2h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e7006h);
		ST(0) = (int)ST(0);
		D(esp+0x4c) = (int)FPOP();
		goto ___54cdah;
___54cd2h:
		eax = D(esp+0x48);
		D(esp+0x4c) = eax;
___54cdah:
		eax = D(esp+0x4c);
		edx = D(___243d60h);
		eax += ebx;
		L(edx) = B(edx+eax);
		L(edx) &= L(ecx);
		if(L(edx) != 0xf) goto ___54d34h;
		edx = D(___243d58h);
		eax += edx;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___242d78h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___242d78h);
		edi = D(___243d28h);
		B(eax+1) = L(edx);
		eax += edi;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___242d78h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___242d78h);
		B(eax+1) = L(edx);
___54d34h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e701ah));
		ST(0) = (int)ST(0);
		D(esp+0x50) = (int)FPOP();
		FPUSH((int)D(esp+0x50));
		ST(0) = (double)F32(edx+___1e701ah)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___54d78h
		if(FPOP() < (double)F32(___1843c6h)) goto ___54d78h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e701ah);
		ST(0) = (int)ST(0);
		D(esp+0x90) = (int)FPOP();
		goto ___54d83h;
___54d78h:
		eax = D(esp+0x50);
		D(esp+0x90) = eax;
___54d83h:
		ebx = D(esp+0x90);
		ebx = ebx*D(___243d28h);
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e7016h));
		ST(0) = (int)ST(0);
		D(esp+0x5c) = (int)FPOP();
		FPUSH((int)D(esp+0x5c));
		ST(0) = (double)F32(edx+___1e7016h)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___54dd2h
		if(FPOP() < (double)F32(___1843c6h)) goto ___54dd2h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e7016h);
		ST(0) = (int)ST(0);
		D(esp+0x60) = (int)FPOP();
		goto ___54ddah;
___54dd2h:
		eax = D(esp+0x5c);
		D(esp+0x60) = eax;
___54ddah:
		eax = D(esp+0x60);
		edx = D(___243d60h);
		eax += ebx;
		L(edx) = B(edx+eax);
		L(edx) &= L(ecx);
		if(L(edx) != 0xf) goto ___54e34h;
		edx = D(___243d58h);
		eax += edx;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___242d78h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___242d78h);
		edi = D(___243d28h);
		B(eax+1) = L(edx);
		eax += edi;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___242d78h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___242d78h);
		B(eax+1) = L(edx);
___54e34h:
		eax = 0x35e*D(___243c60h);
		ebx = D(___243d08h);
		ebx++;
		esi = D(esp+0xf8);
		D(___243d08h) = ebx;
		FPUSH(F32(eax+___1e6fe6h));
		FPUSH(F32(eax+___1e6feah));
		FPUSH(F32(eax+___1e6ff6h));
		FPUSH(F32(eax+___1e6ffah));
		FPUSH(F32(eax+___1e7006h));
		FPUSH(F32(eax+___1e700ah));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x118);
		FPUSH(F32(eax+___1e7016h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6fe6h) = (float)FPOP();
		FPUSH(F32(eax+___1e701ah));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x114);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x110);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x10c);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x108);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x104);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x100);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0xfc);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F32(eax+___1e6feah) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(eax+___1e6ff6h) = (float)FPOP();
		F32(eax+___1e6ffah) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(eax+___1e7006h) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(eax+___1e700ah) = (float)FPOP();
		F32(eax+___1e7016h) = (float)FPOP();
		F32(eax+___1e701ah) = (float)FPOP();
		if((int)ebx >= (int)esi) goto ___55a49h;
		goto ___54a34h;
___54f11h:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f8ch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___54f36h
		if(FPOP() <= (double)F32(edx+___1e6f8ch)) goto ___54f36h;
		FPUSH(F32(edx+___1e6f8ch));
		ST(0) = -1.0*ST(0);
		F32(esp+0x64) = (float)FPOP();
		goto ___54f40h;
___54f36h:
		eax = D(edx+___1e6f8ch);
		D(esp+0x64) = eax;
___54f40h:
		edx = D(___243c60h);
		eax = 0x94*edx;
		eax = D(eax+___1de580h);
		eax += 0xd;
		D(esp+0x11c) = eax;
		FPUSH((int)D(esp+0x11c));
		//fcomp   dword [esp+64h]
		//fnstsw  ax
		//sahf    
		//jb      short ___54fe1h
		if(FPOP() < (double)F32(esp+0x64)) goto ___54fe1h;
		edx = 0x35e*edx;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f80h]
		//fnstsw  ax
		//sahf    
		//jae     short ___54f8eh
		if(FPOP() >= (double)F32(edx+___1e6f80h)) goto ___54f8eh;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ef0h)&2) != 0) goto ___54fe1h;
___54f8eh:
		ecx = D(___243c60h);
		edx = 0x35e*ecx;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f80h]
		//fnstsw  ax
		//sahf    
		//jae     near ___55a49h
		if(FPOP() >= (double)F32(edx+___1e6f80h)) goto ___55a49h;
		eax = 0x94*ecx;
		FPUSH(F32(eax+___1de584h));
		ST(0) = ST(0)*F64(___1843aah);
		FPUSH(F32(edx+___1e6f80h));
		//fcompp  
		//fnstsw  ax
		//sahf    
		//jae     near ___55a49h
		d_st0 = FPOP();
		d_st1 = FPOP();
		if(d_st0 >= d_st1) goto ___55a49h;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ef0h)&1) == 0) goto ___55a49h;
___54fe1h:
		eax = 0x35e*D(___243c60h);
		edx = D(___243ca8h);
		edx <<= 0x2;
		eax += edx;
		H(ecx) = B(eax+___1e6ef0h);
		if((H(ecx)&2) == 0) goto ___5500ah;
		if((H(ecx)&0x40) != 0) goto ___55a49h;
___5500ah:
		edx = D(___243ce8h);
		if(edx != D(___243c60h)) goto ___55144h;
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f8ch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___55041h
		if(FPOP() <= (double)F32(edx+___1e6f8ch)) goto ___55041h;
		FPUSH(F32(edx+___1e6f8ch));
		ST(0) = -1.0*ST(0);
		F32(esp+0x68) = (float)FPOP();
		goto ___5504bh;
___55041h:
		eax = D(edx+___1e6f8ch);
		D(esp+0x68) = eax;
___5504bh:
		ecx = D(___243c60h);
		eax = 0x94*ecx;
		eax = D(eax+___1de580h);
		eax += 0xd;
		D(esp+0x11c) = eax;
		FPUSH((int)D(esp+0x11c));
		//fcomp   dword [esp+68h]
		//fnstsw  ax
		//sahf    
		//jae     short ___550b7h
		if(FPOP() >= (double)F32(esp+0x68)) goto ___550b7h;
		edx = 0x35e*ecx;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f8ch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___55098h
		if(FPOP() <= (double)F32(edx+___1e6f8ch)) goto ___55098h;
		FPUSH(F32(edx+___1e6f8ch));
		ST(0) = -1.0*ST(0);
		F32(esp+0x6c) = (float)FPOP();
		goto ___550a2h;
___55098h:
		eax = D(edx+___1e6f8ch);
		D(esp+0x6c) = eax;
___550a2h:
		FPUSH(F32(esp+0x6c));
		ST(0) = ST(0)*(double)F32(___1843bah);
		ST(0) = (int)ST(0);
		D(___2438d4h) = (int)FPOP();
___550b7h:
		if((int)D(___2438d4h) <= 0x10000) goto ___550cdh;
		D(___2438d4h) = 0x10000;
___550cdh:
		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f80h]
		//fnstsw  ax
		//sahf    
		//jae     short ___550f3h
		if(FPOP() >= (double)F32(edx+___1e6f80h)) goto ___550f3h;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ef0h)&2) != 0) goto ___5513ah;
___550f3h:
		ecx = D(___243c60h);
		edx = 0x35e*ecx;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f80h]
		//fnstsw  ax
		//sahf    
		//jae     short ___55144h
		if(FPOP() >= (double)F32(edx+___1e6f80h)) goto ___55144h;
		eax = 0x94*ecx;
		FPUSH(F32(eax+___1de584h));
		ST(0) = ST(0)*F64(___1843beh);
		FPUSH(F32(edx+___1e6f80h));
		//fcompp  
		//fnstsw  ax
		//sahf    
		//jae     short ___55144h
		d_st0 = FPOP();
		d_st1 = FPOP();
		if(d_st0 >= d_st1) goto ___55144h;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ef0h)&1) == 0) goto ___55144h;
___5513ah:
		D(___2438d4h) = 0x10000;
___55144h:
		esi = 0x35e*D(___243c60h);
		FPUSH(F32(esi+___1e6fdeh));
		FPUSH(F32(esi+___1e6f80h));
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(esi+___1e6fe6h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x10) = (int)FPOP();
		FPUSH((int)D(esp+0x10));
		F32(esp+0x11c) = (float)FPOP();
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e6fe2h));
		ST(0) = ST(0)-(double)F32(esi+___1e6feah);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e6feeh));
		ST(0) = ST(0)-(double)F32(esi+___1e6ff6h);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e6ff2h));
		ST(0) = ST(0)-(double)F32(esi+___1e6ffah);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e6ffeh));
		ST(0) = ST(0)-(double)F32(esi+___1e7006h);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e7002h));
		ST(0) = ST(0)-(double)F32(esi+___1e700ah);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(esp+0x24) = (float)FPOP();
		FPUSH(F32(esi+___1e700eh));
		ST(0) = ST(0)-(double)F32(esi+___1e7016h);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		FPUSH(F32(esi+___1e7012h));
		ST(0) = ST(0)-(double)F32(esi+___1e701ah);
		ST(0) = ST(0)/(double)F32(esp+0x11c);
		edx = D(esi+___1e721ah);
		edx++;
		D(esi+___1e721ah) = edx;
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(esp+0x34) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(esp+0x20) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x54) = (float)FPOP();
		F32(esp+0x30) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(esp+0x40) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x1c) = (float)FPOP();
		F32(esp+0x8) = (float)FPOP();
		if(edx != 6) goto ___554c7h;
		D(esp+0xdc) = esi;
		D(esp+0xe0) = esi;
		D(esp+0xe4) = esi;
		D(esp+0xe8) = esi;
		edx = esi;
		D(esp+0xec) = esi;
		D(esp+0xf0) = esi;
		ebx = esi;
		ecx ^= ecx;
		D(esp+0xf4) = esi;
		D(esp+0x38) = ecx;
		D(esp+0xc) = ecx;
___55285h:
		if(D(esp+0x38) != 0) goto ___554b5h;
		if(D(esp+0xc) != 0) goto ___554b5h;
		if(D(edx+___1e70b2h) != 0) goto ___55376h;
		D(edx+___1e70b2h) = 1;
		eax = D(esp+0xe8);
		FPUSH(F32(eax+___1e6ffeh));
		ST(0) = (int)ST(0);
		D(esp+0x70) = (int)FPOP();
		FPUSH((int)D(esp+0x70));
		ST(0) = (double)F32(eax+___1e6ffeh)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___552f7h
		if(FPOP() < (double)F32(___1843c6h)) goto ___552f7h;
		eax = D(esp+0xe8);
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(eax+___1e6ffeh);
		ST(0) = (int)ST(0);
		D(esp+0x74) = (int)FPOP();
		goto ___552ffh;
___552f7h:
		eax = D(esp+0x70);
		D(esp+0x74) = eax;
___552ffh:
		edi = D(esp+0xec);
		eax = D(esp+0x74);
		D(edi+___1e712ah) = eax;
		eax = D(esp+0xe4);
		FPUSH(F32(eax+___1e7002h));
		ST(0) = (int)ST(0);
		D(esp+0x78) = (int)FPOP();
		FPUSH((int)D(esp+0x78));
		ST(0) = (double)F32(eax+___1e7002h)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___55355h
		if(FPOP() < (double)F32(___1843c6h)) goto ___55355h;
		eax = D(esp+0xe4);
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(eax+___1e7002h);
		ST(0) = (int)ST(0);
		D(esp+0x7c) = (int)FPOP();
		goto ___5535dh;
___55355h:
		eax = D(esp+0x78);
		D(esp+0x7c) = eax;
___5535dh:
		edi = D(esp+0xf0);
		eax = D(esp+0x7c);
		D(edi+___1e71a2h) = eax;
		D(esp+0x38) = 1;
___55376h:
		if(D(ebx+___1e70eeh) != 0) goto ___5546fh;
		edi = 1;
		eax = D(esp+0xe0);
		D(ebx+___1e70eeh) = edi;
		FPUSH(F32(eax+___1e700eh));
		ST(0) = (int)ST(0);
		D(esp+0x80) = (int)FPOP();
		FPUSH((int)D(esp+0x80));
		ST(0) = (double)F32(eax+___1e700eh)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___553dch
		if(FPOP() < (double)F32(___1843c6h)) goto ___553dch;
		eax = D(esp+0xe0);
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(eax+___1e700eh);
		ST(0) = (int)ST(0);
		D(esp+0x84) = (int)FPOP();
		goto ___553eah;
___553dch:
		eax = D(esp+0x80);
		D(esp+0x84) = eax;
___553eah:
		edi = D(esp+0xf4);
		eax = D(esp+0x84);
		D(edi+___1e7166h) = eax;
		eax = D(esp+0xdc);
		FPUSH(F32(eax+___1e7012h));
		ST(0) = (int)ST(0);
		D(esp+0x88) = (int)FPOP();
		FPUSH((int)D(esp+0x88));
		ST(0) = (double)F32(eax+___1e7012h)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___5544ch
		if(FPOP() < (double)F32(___1843c6h)) goto ___5544ch;
		eax = D(esp+0xdc);
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(eax+___1e7012h);
		ST(0) = (int)ST(0);
		D(esp+0x8c) = (int)FPOP();
		goto ___5545ah;
___5544ch:
		eax = D(esp+0x88);
		D(esp+0x8c) = eax;
___5545ah:
		eax = D(esp+0x8c);
		D(esi+___1e71deh) = eax;
		D(esp+0xc) = 1;
___5546fh:
		edi = D(esp+0xec);
		eax = D(esp+0xf0);
		ebx += 0x4;
		esi += 0x4;
		ecx++;
		edi += 0x4;
		edx += 0x4;
		D(esp+0xec) = edi;
		edi = D(esp+0xf4);
		eax += 0x4;
		edi += 0x4;
		D(esp+0xf0) = eax;
		D(esp+0xf4) = edi;
		if((int)ecx < 0xf) goto ___55285h;
___554b5h:
		eax = 0x35e*D(___243c60h);
		ebx ^= ebx;
		D(eax+___1e721ah) = ebx;
___554c7h:
		ecx ^= ecx;
		esi = D(esp+0x10);
		D(___243d08h) = ecx;
		if((int)esi <= 0) goto ___55a49h;
		L(ecx) = 0xf;
___554ddh:
		edi = D(___243c60h);
		edx = 0x35e*edi;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6f80h]
		//fnstsw  ax
		//sahf    
		//ja      short ___55528h
		if(FPOP() > (double)F32(edx+___1e6f80h)) goto ___55528h;
		eax = 0x94*edi;
		FPUSH(F32(eax+___1de584h));
		ST(0) = ST(0)*F64(___1843beh);
		FPUSH(F32(edx+___1e6f80h));
		//fcompp  
		//fnstsw  ax
		//sahf    
		//ja      short ___55528h
		d_st0 = FPOP();
		d_st1 = FPOP();
		if(d_st0 > d_st1) goto ___55528h;
		eax = D(___243ca8h);
		if((B(edx+eax*4+___1e6ef0h)&1) != 0) goto ___5575ah;
___55528h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6feah));
		ST(0) = (int)ST(0);
		D(esp+0x94) = (int)FPOP();
		FPUSH((int)D(esp+0x94));
		ST(0) = (double)F32(edx+___1e6feah)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___55572h
		if(FPOP() < (double)F32(___1843c6h)) goto ___55572h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6feah);
		ST(0) = (int)ST(0);
		D(esp+0x98) = (int)FPOP();
		goto ___55580h;
___55572h:
		eax = D(esp+0x94);
		D(esp+0x98) = eax;
___55580h:
		edx = 0x35e*D(___243c60h);
		ebx = D(esp+0x98);
		ebx = ebx*D(___243d28h);
		FPUSH(F32(edx+___1e6fe6h));
		ST(0) = (int)ST(0);
		D(esp+0x9c) = (int)FPOP();
		FPUSH((int)D(esp+0x9c));
		ST(0) = (double)F32(edx+___1e6fe6h)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___555d8h
		if(FPOP() < (double)F32(___1843c6h)) goto ___555d8h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6fe6h);
		ST(0) = (int)ST(0);
		D(esp+0xa0) = (int)FPOP();
		goto ___555e6h;
___555d8h:
		eax = D(esp+0x9c);
		D(esp+0xa0) = eax;
___555e6h:
		eax = D(esp+0xa0);
		edx = D(___243d60h);
		eax += ebx;
		L(edx) = B(edx+eax);
		L(edx) &= L(ecx);
		if(L(edx) != 0xf) goto ___55641h;
		edx = D(___243d58h);
		eax += edx;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___243078h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___243078h);
		B(eax+1) = L(edx);
		eax += D(___243d28h);
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___243078h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___243078h);
		B(eax+1) = L(edx);
___55641h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6ffah));
		ST(0) = (int)ST(0);
		D(esp+0xa8) = (int)FPOP();
		FPUSH((int)D(esp+0xa8));
		ST(0) = (double)F32(edx+___1e6ffah)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___5568bh
		if(FPOP() < (double)F32(___1843c6h)) goto ___5568bh;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ffah);
		ST(0) = (int)ST(0);
		D(esp+0xac) = (int)FPOP();
		goto ___55699h;
___5568bh:
		eax = D(esp+0xa8);
		D(esp+0xac) = eax;
___55699h:
		edx = 0x35e*D(___243c60h);
		ebx = D(esp+0xac);
		ebx = ebx*D(___243d28h);
		FPUSH(F32(edx+___1e6ff6h));
		ST(0) = (int)ST(0);
		D(esp+0xb0) = (int)FPOP();
		FPUSH((int)D(esp+0xb0));
		ST(0) = (double)F32(edx+___1e6ff6h)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___556f1h
		if(FPOP() < (double)F32(___1843c6h)) goto ___556f1h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e6ff6h);
		ST(0) = (int)ST(0);
		D(esp+0xb4) = (int)FPOP();
		goto ___556ffh;
___556f1h:
		eax = D(esp+0xb0);
		D(esp+0xb4) = eax;
___556ffh:
		eax = D(esp+0xb4);
		edx = D(___243d60h);
		eax += ebx;
		L(edx) = B(edx+eax);
		L(edx) &= L(ecx);
		if(L(edx) != 0xf) goto ___5575ah;
		edx = D(___243d58h);
		eax += edx;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___243078h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___243078h);
		B(eax+1) = L(edx);
		eax += D(___243d28h);
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___243078h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___243078h);
		B(eax+1) = L(edx);
___5575ah:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e700ah));
		ST(0) = (int)ST(0);
		D(esp+0xbc) = (int)FPOP();
		FPUSH((int)D(esp+0xbc));
		ST(0) = (double)F32(edx+___1e700ah)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___557a4h
		if(FPOP() < (double)F32(___1843c6h)) goto ___557a4h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e700ah);
		ST(0) = (int)ST(0);
		D(esp+0xc0) = (int)FPOP();
		goto ___557b2h;
___557a4h:
		eax = D(esp+0xbc);
		D(esp+0xc0) = eax;
___557b2h:
		edx = 0x35e*D(___243c60h);
		ebx = D(esp+0xc0);
		ebx = ebx*D(___243d28h);
		FPUSH(F32(edx+___1e7006h));
		ST(0) = (int)ST(0);
		D(esp+0xc4) = (int)FPOP();
		FPUSH((int)D(esp+0xc4));
		ST(0) = (double)F32(edx+___1e7006h)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___5580ah
		if(FPOP() < (double)F32(___1843c6h)) goto ___5580ah;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e7006h);
		ST(0) = (int)ST(0);
		D(esp+0xc8) = (int)FPOP();
		goto ___55818h;
___5580ah:
		eax = D(esp+0xc4);
		D(esp+0xc8) = eax;
___55818h:
		eax = D(esp+0xc8);
		edx = D(___243d60h);
		eax += ebx;
		L(edx) = B(edx+eax);
		L(edx) &= L(ecx);
		if(L(edx) != 0xf) goto ___55873h;
		edx = D(___243d58h);
		eax += edx;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___243078h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___243078h);
		B(eax+1) = L(edx);
		eax += D(___243d28h);
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___243078h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___243078h);
		B(eax+1) = L(edx);
___55873h:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e701ah));
		ST(0) = (int)ST(0);
		D(esp+0xcc) = (int)FPOP();
		FPUSH((int)D(esp+0xcc));
		ST(0) = (double)F32(edx+___1e701ah)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___558bdh
		if(FPOP() < (double)F32(___1843c6h)) goto ___558bdh;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e701ah);
		ST(0) = (int)ST(0);
		D(esp+0xd0) = (int)FPOP();
		goto ___558cbh;
___558bdh:
		eax = D(esp+0xcc);
		D(esp+0xd0) = eax;
___558cbh:
		edx = 0x35e*D(___243c60h);
		ebx = D(esp+0xd0);
		ebx = ebx*D(___243d28h);
		FPUSH(F32(edx+___1e7016h));
		ST(0) = (int)ST(0);
		D(esp+0xd4) = (int)FPOP();
		FPUSH((int)D(esp+0xd4));
		ST(0) = (double)F32(edx+___1e7016h)-ST(0);
		//fcomp   dword [___1843c6h]
		//fnstsw  ax
		//sahf    
		//jb      short ___55923h
		if(FPOP() < (double)F32(___1843c6h)) goto ___55923h;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___1e7016h);
		ST(0) = (int)ST(0);
		D(esp+0xd8) = (int)FPOP();
		goto ___55931h;
___55923h:
		eax = D(esp+0xd4);
		D(esp+0xd8) = eax;
___55931h:
		eax = D(esp+0xd8);
		edx = D(___243d60h);
		eax += ebx;
		L(edx) = B(edx+eax);
		L(edx) &= L(ecx);
		if(L(edx) != 0xf) goto ___5598ch;
		edx = D(___243d58h);
		eax += edx;
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___243078h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___243078h);
		B(eax+1) = L(edx);
		eax += D(___243d28h);
		edx ^= edx;
		L(edx) = B(eax);
		L(edx) = B(edx+___243078h);
		B(eax) = L(edx);
		edx ^= edx;
		L(edx) = B(eax+1);
		L(edx) = B(edx+___243078h);
		B(eax+1) = L(edx);
___5598ch:
		eax = 0x35e*D(___243c60h);
		esi = D(___243d08h);
		esi++;
		edi = D(esp+0x10);
		D(___243d08h) = esi;
		FPUSH(F32(eax+___1e6fe6h));
		FPUSH(F32(eax+___1e6feah));
		FPUSH(F32(eax+___1e6ff6h));
		FPUSH(F32(eax+___1e6ffah));
		FPUSH(F32(eax+___1e7006h));
		FPUSH(F32(eax+___1e700ah));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x24);
		FPUSH(F32(eax+___1e7016h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6fe6h) = (float)FPOP();
		FPUSH(F32(eax+___1e701ah));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x34);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x20);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x54);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x30);
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x40);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x1c);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(0) = ST(0)+(double)F32(esp+0x8);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F32(eax+___1e6feah) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(eax+___1e6ff6h) = (float)FPOP();
		F32(eax+___1e6ffah) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(eax+___1e7006h) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(eax+___1e700ah) = (float)FPOP();
		F32(eax+___1e7016h) = (float)FPOP();
		F32(eax+___1e701ah) = (float)FPOP();
		if((int)esi < (int)edi) goto ___554ddh;
___55a49h:
		edi = D(___243c60h);
		eax = 0x35e*edi;
		FPUSH(F32(eax+___1e6fdeh));
		FPUSH(F32(eax+___1e6fe2h));
		FPUSH(F32(eax+___1e6feeh));
		FPUSH(F32(eax+___1e6ff2h));
		FPUSH(F32(eax+___1e6ffeh));
		FPUSH(F32(eax+___1e7002h));
		FPUSH(F32(eax+___1e700eh));
		d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
		F32(eax+___1e6fe6h) = (float)FPOP();
		FPUSH(F32(eax+___1e7012h));
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(eax+___1e6feah) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(eax+___1e6ff6h) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ffah) = (float)FPOP();
		F32(eax+___1e7006h) = (float)FPOP();
		F32(eax+___1e700ah) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e7016h) = (float)FPOP();
		F32(eax+___1e701ah) = (float)FPOP();
		eax = edi+1;
		edx = D(___243cf4h);
		D(___243c60h) = eax;
		if((int)eax < (int)edx) goto ___54699h;
___55ad5h:
		return;
}
