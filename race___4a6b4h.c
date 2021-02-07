#include "drally.h"

typedef struct xc50_s {
	__DWORD__ 	___0;			// +000
	__DWORD__ 	___4;			// +004
	__DWORD__ 	___8[75];		// +008
	__DWORD__ 	_134[75];		// +134
	__DWORD__	_260[75];		// +260
	__DWORD__ 	_38C;			// +38c
	__DWORD__	_390;			// +390
	__DWORD__	_394;			// +394
	__DWORD__ 	_398;			// +398
	__DWORD__	_39C[100];		// +39c
	__DWORD__	_52C[100];		// +52c
	__DWORD__	_6BC[100];		// +6bc
	__DWORD__	_84C[100];		// +84c
	__DWORD__	_9DC;			// +9dc
	__DWORD__ 	_9E0;			// +9e0
	__DWORD__	_9E4;			// +9e4
	__DWORD__	_9E8;			// +9e8
	__DWORD__	_9EC[75];		// +9ec
	__DWORD__	_B18[75];		// +b18
	__DWORD__	_C44;			// +c44
	__DWORD__	_C48;			// +c48
	__DWORD__	_C4C;			// +c4c
} xc50_t;

	extern xc50_t ___1f3b08h[];		// <0x1f3b08 - 0x1f4758)

	extern byte ___243c88h[];
	extern byte ___243c98h[];
	extern byte ___1df9a0h[];
	extern byte ___243b30h[];
	extern byte ___2438d8h[];
	extern byte ___243a04h[];

double dR_Math_sqrt(double);


// TREES TEXTURES
void race___4a6b4h(void){

	double 	d_tmp, d_st0, d_st1;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x110];


		edx ^= edx;
		ebx = D(___243c88h);
		D(___243c98h) = edx;
		if((int)ebx <= 0) goto ___4ada1h;
		FPUSH(425.0);
		ST(0) = dR_Math_sqrt(ST(0));
		FPUSH(350.0);
		ST(0) = dR_Math_sqrt(ST(0));
		D(esp+0x40) = edx;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0x58) = FPOP();
		F64(esp+0x60) = FPOP();
___4a703h:
		edx = 0x12c*D(___243c98h);
		ebx = D(esp+0x40);
		esi = D(ebx+(void *)&___1f3b08h->___0);
		eax ^= eax;
		if((int)esi <= 0) goto ___4a733h;
___4a71dh:
		eax++;
		edi ^= edi;
		ecx = D(ebx+(void *)&___1f3b08h->___0);
		D(edx+___1df9a0h) = edi;
		edx += 4;
		if((int)eax < (int)ecx) goto ___4a71dh;
___4a733h:
		edx = 0x12c*D(___243c98h);
		esi = D(esp+0x40);
		ebx ^= ebx;
		edi = D(esi+(void *)&___1f3b08h->___4);
		eax = esi;
		if((int)edi <= 0) goto ___4a78ch;
___4a74fh:
		ecx = D(eax+(void *)&___1f3b08h->_39C);
		D(edx+4*ecx+___1df9a0h)++;
		ecx = D(eax+(void *)&___1f3b08h->_52C);
		D(edx+4*ecx+___1df9a0h)++;
		ecx = D(eax+(void *)&___1f3b08h->_6BC);
		edi = D(edx+4*ecx+___1df9a0h);
		edi++;
		ebx++;
		D(edx+4*ecx+___1df9a0h) = edi;
		ecx = D(esi+(void *)&___1f3b08h->___4);
		eax += 4;
		if((int)ebx < (int)ecx) goto ___4a74fh;
___4a78ch:
		ebx = D(esp+0x40);
		eax ^= eax;
		esi = D(ebx+(void *)&___1f3b08h->___0);
		edx ^= edx;
		if((int)esi <= 0) goto ___4a7c0h;
___4a79eh:
		edi ^= edi;
		edx++;
		D(eax+___243b30h) = edi;
		D(eax+___2438d8h) = edi;
		D(eax+___243a04h) = edi;
		edi = D(ebx+(void *)&___1f3b08h->___0);
		eax += 4;
		if((int)edx < (int)edi) goto ___4a79eh;
___4a7c0h:
		esi = D(esp+0x40);
		eax ^= eax;
		edx = esi;
		ebx = D(esi+(void *)&___1f3b08h->___4);
		D(esp+0x50) = eax;
		if((int)ebx <= 0) goto ___4ab4fh;
___4a7dah:
		ecx = D(edx+(void *)&___1f3b08h->_39C);
		ebx = D(edx+(void *)&___1f3b08h->_52C);
		FPUSH((int)D(esi+ecx*4+(void *)&___1f3b08h->___8));
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
		FPUSH((int)D(esi+ebx*4+(void *)&___1f3b08h->___8));
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
		FPUSH((int)D(esi+ecx*4+(void *)&___1f3b08h->_134));
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
		eax = D(edx+(void *)&___1f3b08h->_6BC);
		FPUSH((int)D(esi+ebx*4+(void *)&___1f3b08h->_134));
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
		FPUSH((int)D(esi+eax*4+(void *)&___1f3b08h->_134));
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
		FPUSH((int)D(esi+eax*4+(void *)&___1f3b08h->___8));
		ecx = D(esi+ecx*4+(void *)&___1f3b08h->_260);
		ebx = D(esi+ebx*4+(void *)&___1f3b08h->_260);
		eax = D(esi+eax*4+(void *)&___1f3b08h->_260);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F64(esp+0xc8) = FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0xd0) = FPOP();
		ecx -= 0x100;
		ebx -= 0x100;
		eax -= 0x100;
		FPUSH(F64(esp+0xd0));
		D(esp+0x20) = ecx;
		D(esp+0x3c) = eax;
		FPUSH((int)D(esp+0x3c));
		FPUSH((int)D(esp+0x20));
		F64(esp+0x78) = FPOP();
		F64(esp+0xb0) = FPOP();
		ST(0) = ST(0)-F64(esp+0xc8);
		FPUSH(F64(esp+0xb0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0xf0) = FPOP();
		ST(0) = ST(0)-F64(esp+0x78);
		FPUSH(F64(esp+0xf0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0xf8) = FPOP();
		ST(0) = ST(0)*F64(esp+0xf8);
		D(esp+0x3c) = ebx;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0x68) = FPOP();
		FPUSH((int)D(esp+0x3c));
		FPUSH(F64(esp+0x68));
		ST(0) = ST(0)-F64(esp+0xc8);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0xa8) = FPOP();
		F64(esp+0x108) = FPOP();
		FPUSH(F64(esp+0xa8));
		ST(0) = ST(0)-F64(esp+0x78);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F64(esp+0x70) = FPOP();
		FPUSH(F64(esp+0x108));
		ST(0) = ST(0)*F64(esp+0x70);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		F64(esp+0x98) = FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-F64(esp+0x98);
		FPUSH(F64(esp+0x70));
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F64(esp+0x90) = FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(1) = ST(1)-ST(0); FPOP();
		FPUSH(F64(esp+0x90));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0xd8) = FPOP();
		ST(0) = ST(0)-F64(esp+0x98);
		FPUSH(F64(esp+0xd8));
		ST(0) = ST(0)*ST(0);
		FPUSH(F64(esp+0xf8));
		ST(0) = ST(0)*ST(2);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)*F64(esp+0x108);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(3) = ST(3)-ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*F64(esp+0xf0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F64(esp+0xe0) = ST(0);
		ST(0) = ST(0)*F64(esp+0xe0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)-ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(2) = ST(2)+ST(0); FPOP();
		F64(esp+0xe8) = ST(0);
		ST(0) = ST(0)*F64(esp+0xe8);
		ST(1) = ST(1)+ST(0); FPOP();
		FPUSH(1.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0x88) = FPOP();
		//fcomp   qword [esp+88h]
		//fnstsw  ax
		//sahf    
		//jae     short ___4a9f3h
		if(FPOP() >= F64(esp+0x88)) goto ___4a9f3h;
		FPUSH(10000.0);
		ST(0) = ST(0)/F64(esp+0x88);
		ST(0) = dR_Math_sqrt(ST(0));
		FPUSH(F64(esp+0xd8));
		ST(0) = ST(0)*ST(1);
		FPUSH(F64(esp+0xe0));
		ST(0) = ST(0)*ST(2);
		FPUSH(F64(esp+0xe8));
		ST(3) = ST(3)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0xd8) = FPOP();
		F64(esp+0xe0) = FPOP();
		F64(esp+0xe8) = FPOP();
		goto ___4aa24h;
___4a9f3h:
		ebx ^= ebx;
		ecx = 0x40590000;
		D(esp+0xe0) = ebx;
		D(esp+0xe4) = ecx;
		D(esp+0xe8) = ebx;
		D(esp+0xec) = ecx;
		D(esp+0xd8) = ebx;
		D(esp+0xdc) = ecx;
___4aa24h:
		eax = D(edx+(void *)&___1f3b08h->_39C);
		ebx = D(edx+(void *)&___1f3b08h->_52C);
		ecx = D(edx+(void *)&___1f3b08h->_6BC);
		FPUSH(F32(eax*4+___243a04h));
		FPUSH(F32(eax*4+___243b30h));
		FPUSH(F32(eax*4+___2438d8h));
		FPUSH(ST(2));
		FPUSH(ST(2));
		FPUSH(ST(2));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		FPUSH(F64(esp+0xd8));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+F64(esp+0xe0);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)+F64(esp+0xe8);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(6) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(4) = ST(0); FPOP();
		ST(2) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(eax*4+___243a04h) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax*4+___243b30h) = (float)FPOP();
		F32(eax*4+___2438d8h) = (float)FPOP();
		FPUSH(F32(ebx*4+___243a04h));
		FPUSH(F32(ebx*4+___243b30h));
		FPUSH(F32(ebx*4+___2438d8h));
		FPUSH(ST(2));
		FPUSH(ST(2));
		FPUSH(ST(2));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+ST(6);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+F64(esp+0xe0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+F64(esp+0xe8);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(5) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(3) = ST(0); FPOP();
		ST(1) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(ebx*4+___243a04h) = (float)FPOP();
		F32(ebx*4+___243b30h) = (float)FPOP();
		F32(ebx*4+___2438d8h) = (float)FPOP();
		FPUSH(F32(ecx*4+___243a04h));
		FPUSH(F32(ecx*4+___243b30h));
		FPUSH(F32(ecx*4+___2438d8h));
		FPUSH(ST(2));
		FPUSH(ST(2));
		FPUSH(ST(2));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(6) = ST(6)+ST(0); FPOP();
		ST(0) = ST(0)+F64(esp+0xe0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+F64(esp+0xe8);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		ST(4) = ST(0); FPOP();
		ST(2) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(3) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(ecx*4+___243a04h) = (float)FPOP();
		F32(ecx*4+___243b30h) = (float)FPOP();
		F32(ecx*4+___2438d8h) = (float)FPOP();
		ecx = D(esp+0x50);
		edx += 4;
		ecx++;
		edi = D(esi+(void *)&___1f3b08h->___4);
		D(esp+0x50) = ecx;
		if((int)ecx < (int)edi) goto ___4a7dah;
___4ab4fh:
		ebx = 0x12c*D(___243c98h);
		esi = D(esp+0x40);
		edx = D(esi+(void *)&___1f3b08h->___0);
		ecx ^= ecx;
		if((int)edx <= 0) goto ___4ad78h;
		edx ^= edx;
___4ab6fh:
		if((int)D(ebx+___1df9a0h) < 1) goto ___4abaah;
		FPUSH((int)D(ebx+___1df9a0h));
		FPUSH(F32(edx+___243a04h));
		ST(0) = ST(0)/ST(1);
		FPUSH(F32(edx+___243b30h));
		ST(0) = ST(0)/ST(2);
		FPUSH(F32(edx+___2438d8h));
		ST(3) = ST(0)/ST(3); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___243a04h) = (float)FPOP();
		F32(edx+___243b30h) = (float)FPOP();
		F32(edx+___2438d8h) = (float)FPOP();
___4abaah:
		FPUSH(F32(edx+___243a04h));
		ST(0) = ST(0)*ST(0);
		FPUSH(F32(edx+___243b30h));
		ST(0) = ST(0)*ST(0);
		ST(1) = ST(1)+ST(0); FPOP();
		FPUSH(F32(edx+___2438d8h));
		ST(0) = ST(0)*ST(0);
		ST(1) = ST(1)+ST(0); FPOP();
		FPUSH(1.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0xb8) = FPOP();
		//fcomp   qword [esp+0b8h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4abf2h
		if(FPOP() <= F64(esp+0xb8)) goto ___4abf2h;
		edi ^= edi;
		eax = 0x3ff00000;
		D(esp+0xb8) = edi;
		D(esp+0xbc) = eax;
___4abf2h:
		FPUSH(10000.0);
		ST(0) = ST(0)/F64(esp+0xb8);
		ST(0) = dR_Math_sqrt(ST(0));
		FPUSH(F32(edx+___243a04h));
		FPUSH(ST(0));
		ST(0) = ST(0)*ST(2);
		FPUSH(F32(edx+___243b30h));
		FPUSH(ST(0));
		ST(0) = ST(0)*ST(4);
		FPUSH(F32(edx+___2438d8h));
		ST(5) = ST(5)*ST(0);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(4) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F32(edx+___243a04h) = (float)ST(0);
		ST(0) = ST(0)*(double)F32(edx+___243a04h);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(1) = ST(0); FPOP();
		F32(edx+___243b30h) = (float)ST(0);
		ST(0) = ST(0)*(double)F32(edx+___243b30h);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(1) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___2438d8h) = (float)ST(0);
		ST(0) = ST(0)*(double)F32(edx+___2438d8h);
		ST(1) = ST(1)+ST(0); FPOP();
		FPUSH(1.0);
		//fcompp  
		//fnstsw  ax
		//sahf    
		//jbe     short ___4ac6eh
		d_st0 = FPOP();
		d_st1 = FPOP();
		if(d_st0 <= d_st1) goto ___4ac6eh;
		FPUSH(1.0);
		ST(0) = ST(0)+(double)F32(edx+___243a04h);
		F32(edx+___243a04h) = (float)FPOP();
___4ac6eh:
		FPUSH(F32(edx+___243a04h));
		ST(0) = ST(0)*ST(0);
		FPUSH(F32(edx+___243b30h));
		ST(0) = ST(0)*ST(0);
		FPUSH(F32(edx+___2438d8h));
		ST(0) = ST(0)*ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(esp+0x4c) = (float)FPOP();
		F32(esp+0x54) = (float)FPOP();
		F32(esp+0x48) = (float)FPOP();
		FPUSH(F32(esp+0x4c));
		ST(0) = ST(0)+(double)F32(esp+0x54);
		ST(0) = ST(0)+(double)F32(esp+0x48);
		ST(0) = dR_Math_sqrt(ST(0));
		FPUSH(-10.0);
		FPUSH(F32(edx+___243a04h));
		ST(0) = ST(0)*ST(1);
		FPUSH(F32(edx+___243b30h));
		ST(2) = ST(2)*ST(0); FPOP();
		FPUSH(F32(edx+___2438d8h));
		ST(0) = ST(0)*-15.0;
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		F64(esp+0x100) = ST(0);
		ST(0) = ST(0)*F64(esp+0x60);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x38) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x44) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x24) = (float)FPOP();
		FPUSH(F32(esp+0x38));
		ST(0) = ST(0)+(double)F32(esp+0x44);
		ST(0) = ST(0)+(double)F32(esp+0x24);
		F64(esp+0xc0) = ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0xa0) = FPOP();
		ST(0) = ST(0)/F64(esp+0xa0);
		FPUSH(0.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0x80) = FPOP();
		//fcomp   qword [esp+80h]
		//fnstsw  ax
		//sahf    
		//jae     short ___4ad32h
		if(FPOP() >= F64(esp+0x80)) goto ___4ad32h;
		FPUSH(F64(esp+0x80));
		ST(0) = ST(0)*5.0;
		ST(0) = ST(0)+3.0;
		goto ___4ad50h;
___4ad32h:
		FPUSH(F64(esp+0x100));
		ST(0) = ST(0)*F64(esp+0x58);
		ST(0) = F64(esp+0xc0)/ST(0);
		FPUSH(3.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		ST(1) = ST(1)+ST(0); FPOP();
___4ad50h:
		ST(0) = (int)ST(0);
		D(esp+0x3c) = (int)FPOP();
		eax = D(esp+0x3c);
		D(ebx+___1df9a0h) = eax;
		ebx += 4;
		ecx++;
		edi = D(esi+(void *)&___1f3b08h->___0);
		edx += 4;
		if((int)ecx < (int)edi) goto ___4ab6fh;
___4ad78h:
		ecx = D(esp+0x40);
		esi = D(___243c98h);
		edi = D(___243c88h);
		ecx += 0xc50;
		esi++;
		D(esp+0x40) = ecx;
		D(___243c98h) = esi;
		if((int)esi < (int)edi) goto ___4a703h;
___4ada1h:
		return;
}
