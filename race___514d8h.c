#include "drally.h"

	extern byte ___243c60h[];
	extern byte ___1e7076h[];
	extern byte ___1de598h[];
	extern byte ___1e6fdah[];
	extern byte ___243ca8h[];
	extern byte ___1e6ef0h[];
	extern byte ___1de5a8h[];
	extern byte ___243ca4h[];
	extern byte ___1e6f7ch[];
	extern byte ___184249h[];
	extern byte ___184251h[];
	extern byte ___184259h[];
	extern byte ___1de590h[];
	extern byte ___184261h[];
	extern byte ___1e6f84h[];
	extern byte ___18426dh[];
	extern byte ___184269h[];
	extern byte ___1e6f88h[];
	extern byte ___2438d0h[];
	extern byte ___1df520h[];
	extern byte ___1df524h[];
	extern byte ___243ce8h[];
	extern byte ___243d8ch[];
	extern byte ___243d58h[];
	extern byte ___243d28h[];
	extern byte ___243d74h[];
	extern byte ___1e6ee0h[];
	extern byte ___1df528h[];
	extern byte ___243d7ch[];
	extern byte ___1de59ch[];
	extern byte ___1e6fcch[];
	extern byte ___1e6fd0h[];
	extern byte ___1e6f80h[];
	extern byte ___184275h[];
	extern byte ___1e6fd4h[];

int rand_watcom106(void);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);

double dR_Math_sin(double);
double dR_Math_cos(double);
double dR_Math_sqrt(double);

void race___514d8h(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p6;
	byte 	esp[0xc8];


		eax = 0x35e*D(___243c60h);
		ebx = D(eax+___1e7076h);
		if((int)ebx <= 0) goto ___51510h;
		ecx = ebx-1;
		D(eax+___1e7076h) = ecx;
___51510h:
		edx = D(___243c60h);
		ebx = 8*edx;
		ebx += edx;
		ebx <<= 0x2;
		ebx += edx;
		ebx <<= 0x2;
		if((int)D(ebx+___1de598h) <= 0) goto ___5191dh;
		eax = 0x35e*edx;
		if(D(eax+___1e6fdah) != 0) goto ___5191dh;
		edx = D(___243ca8h);
		edx <<= 0x2;
		edx += eax;
		if((B(edx+___1e6ef0h)&0x40) == 0) goto ___5191dh;
		if((int)D(ebx+___1de5a8h) <= 0) goto ___5191dh;
		if((int)D(___243ca4h) <= 0x1ae) goto ___5191dh;
		if(D(eax+___1e7076h) != 0) goto ___5191dh;
		H(ecx) = B(edx+___1e6ef0h);
		if((H(ecx)&2) == 0) goto ___5159dh;
		if((H(ecx)&0x40) != 0) goto ___5191dh;
___5159dh:
		edx = D(___243c60h);
		eax = 0x35e*edx;
		ebx = 0x32;
		FPUSH(F32(eax+___1e6f7ch));
		D(eax+___1e7076h) = ebx;
		ST(0) = ST(0)*F64(___184249h);
		ST(0) = ST(0)/F64(___184251h);
		ST(0) = dR_Math_sin(ST(0));
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		ST(0) = ST(0)*F64(___184259h);
		FPUSH(F32(eax*4+___1de590h));
		F64(esp+0xa8) = FPOP();
		ST(0) = ST(0)*F64(esp+0xa8);
		F64(esp+0xb8) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0xc4) = (int)FPOP();
		FPUSH((int)D(esp+0xc4));
		ST(0) = F64(esp+0xb8)-ST(0);
		//fcomp   qword [___184261h]
		//fnstsw  ax
		//sahf    
		//jb      short ___51631h
		if(FPOP() < F64(___184261h)) goto ___51631h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0xb8);
		ST(0) = (int)ST(0);
		D(esp+0x60) = (int)FPOP();
		goto ___5163ch;
___51631h:
		eax = D(esp+0xc4);
		D(esp+0x60) = eax;
___5163ch:
		ecx = D(___243c60h);
		eax = 0x35e*ecx;
		FPUSH((int)D(esp+0x60));
		FPUSH(F32(eax+___1e6f84h));
		FPUSH(F32(eax+___1e6f7ch));
		ST(0) = ST(0)*F64(___184249h);
		ST(0) = ST(0)/F64(___184251h);
		ST(0) = dR_Math_cos(ST(0));
		eax = 8*ecx;
		ST(0) = ST(0)*F64(___18426dh);
		eax += ecx;
		ST(0) = ST(0)*F64(___184259h);
		eax <<= 0x2;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(___184269h);
		eax += ecx;
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(eax*4+___1de590h));
		F64(esp+0xa0) = FPOP();
		ST(0) = ST(0)*F64(esp+0xa0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F64(esp+0xb0) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0xc0) = (int)FPOP();
		FPUSH((int)D(esp+0xc0));
		ST(0) = F64(esp+0xb0)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x88) = (int)FPOP();
		//fcomp   qword [___184261h]
		//fnstsw  ax
		//sahf    
		//jb      short ___516f1h
		if(FPOP() < F64(___184261h)) goto ___516f1h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0xb0);
		ST(0) = (int)ST(0);
		D(esp+0x70) = (int)FPOP();
		goto ___516fch;
___516f1h:
		eax = D(esp+0xc0);
		D(esp+0x70) = eax;
___516fch:
		eax = 0x35e*D(___243c60h);
		FPUSH((int)D(esp+0x70));
		FPUSH(F32(eax+___1e6f88h));
		ST(0) = ST(0)+(double)F32(___184269h);
		edi = D(___2438d0h);
		ST(1) = ST(1)+ST(0); FPOP();
		ebx ^= ebx;
		ST(0) = (int)ST(0);
		D(esp+0x74) = (int)FPOP();
		if((int)edi <= 0) goto ___5177fh;
		eax = D(esp+0x88);
		esi = D(esp+0x74);
		ecx = edi;
		eax += 0x4;
		ecx <<= 0x4;
		D(esp+0x78) = eax;
		esi += 0x4;
		edi = D(esp+0x78);
		eax ^= eax;
___5174dh:
		edx = D(eax+___1df520h);
		edx -= edi;
		if((int)edx >= 0) goto ___5175bh;
		edx = 0-edx;
___5175bh:
		if((int)edx >= 8) goto ___51778h;
		edx = D(eax+___1df524h);
		edx -= esi;
		if((int)edx >= 0) goto ___5176eh;
		edx = 0-edx;
___5176eh:
		if((int)edx >= 8) goto ___51778h;
		ebx = 0x1;
___51778h:
		eax += 0x10;
		if((int)eax < (int)ecx) goto ___5174dh;
___5177fh:
		if(ebx) goto ___5191dh;
		edx = D(___243ce8h);
		eax = D(___243c60h);
		if(eax != edx) goto ___517a5h;
		p6 = 0x8000;
		ecx = 0x9000;
		goto ___51830h;
___517a5h:
		eax = 0x35e*eax;
		edx = 0x35e*edx;
		FPUSH(F32(eax+___1e6f88h));
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)-(double)F32(edx+___1e6f84h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e6f88h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0x64) = (int)FPOP();
		edx = D(esp+0x64);
		edx = edx*edx;
		ST(0) = (int)ST(0);
		D(esp+0x68) = (int)FPOP();
		eax = D(esp+0x68);
		eax = eax*eax;
		edx += eax;
		D(esp+0x6c) = edx;
		FPUSH((int)D(esp+0x6c));
		ST(0) = dR_Math_sqrt(ST(0));
		ST(0) = (int)ST(0);
		D(esp+0x9c) = (int)FPOP();
		edx = D(esp+0x9c);
		eax = 4*edx;
		eax += edx;
		edx = eax;
		eax <<= 0x4;
		ecx = 0x10000;
		eax -= edx;
		ecx -= eax;
		if((int)ecx <= 0x1000) goto ___51844h;
		p6 = 0x8000;
___51830h:
		edx = 0x12;
		eax = 0x4;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x21000, p6);	// DROPPING MINE
___51844h:
		edx = D(___2438d0h);
		eax = D(esp+0x88);
		edx <<= 0x4;
		eax += 0x4;
		D(edx+___1df520h) = eax;
		eax = D(esp+0x74);
		eax += 0x4;
		D(edx+___1df524h) = eax;
		eax = D(___2438d0h);
		edi = 0x8;
		eax++;
		edx ^= edx;
		D(___2438d0h) = eax;
		eax = D(esp+0x74);
		D(esp+0x84) = edx;
		D(esp+0x80) = eax;
___5188eh:
		edx = D(esp+0x80);
		esi = D(esp+0x84);
		eax ^= eax;
		D(esp+0x8c) = edx;
___518a5h:
		edx = D(___243d8ch);
		edx += eax;
		edx += esi;
		if(B(edx) == 0) goto ___518d8h;
		ebx = D(___243d58h);
		ecx = D(esp+0x88);
		ebx += eax;
		ecx += ebx;
		ebx = D(esp+0x8c);
		ebx = ebx*D(___243d28h);
		L(edx) = B(edx);
		B(ecx+ebx) = L(edx);
___518d8h:
		eax++;
		if((int)eax < 8) goto ___518a5h;
		edx = D(esp+0x80);
		eax = D(esp+0x84);
		edx++;
		eax += edi;
		D(esp+0x80) = edx;
		D(esp+0x84) = eax;
		if(eax != 0x40) goto ___5188eh;
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		D(eax*4+___1de5a8h)--;
___5191dh:
		esi ^= esi;
		edi = D(___2438d0h);
		D(esp+0x7c) = esi;
		if((int)edi <= 0) goto ___51cd5h;
		edi ^= edi;
___51933h:
		eax = 0x35e*D(___243c60h);
		ecx = D(edi+___1df520h);
		esi = D(edi+___1df524h);
		FPUSH(F32(eax+___1e6f88h));
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x6c) = (int)FPOP();
		D(esp+0x9c) = (int)FPOP();
		edx = D(esp+0x6c);
		eax = D(esp+0x9c);
		edx -= ecx;
		eax -= esi;
		if((int)edx >= 0) goto ___51987h;
		ebx = edx;
		ebx = 0-ebx;
		goto ___51989h;
___51987h:
		ebx = edx;
___51989h:
		if((int)ebx >= 0x14) goto ___51cbbh;
		if((int)eax >= 0) goto ___5199ch;
		ebx = eax;
		ebx = 0-ebx;
		goto ___5199eh;
___5199ch:
		ebx = eax;
___5199eh:
		if((int)ebx >= 0x14) goto ___51cbbh;
		ecx = 0x35e*D(___243c60h);
		eax += 0x14;
		eax = 0x28*eax;
		ebx = D(___243d74h);
		ebx += D(ecx+___1e6ee0h);
		edx += ebx;
		if(B(edx+eax+0x14) <= 3) goto ___51cbbh;
		if(D(edi+___1df528h) != 0xffffffff) goto ___51cbbh;
		ebx ^= ebx;
		ecx ^= ecx;
		D(esp+0x98) = ebx;
		D(esp+0x90) = ecx;
		ebx = edi;
___519f1h:
		edx = D(esp+0x90);
		eax ^= eax;
		D(esp+0x94) = edx;
___51a01h:
		edx = D(___243d7ch);
		esi = D(esp+0x94);
		edx += eax;
		edx += esi;
		if(B(edx+0x500) == 0) goto ___51a4eh;
		esi = D(esp+0x98);
		ecx = D(ebx+___1df524h);
		ecx += esi;
		esi = D(___243d28h);
		ecx -= 0x8;
		esi = esi*ecx;
		ecx = D(___243d58h);
		ecx += D(ebx+___1df520h);
		ecx += eax;
		L(edx) = B(edx+0x500);
		B(ecx+esi-8) = L(edx);
___51a4eh:
		eax++;
		if((int)eax < 0x10) goto ___51a01h;
		edx = D(esp+0x98);
		eax = D(esp+0x90);
		edx++;
		eax += 0x10;
		D(esp+0x98) = edx;
		D(esp+0x90) = eax;
		if((int)edx < 0x10) goto ___519f1h;
		edx = D(___243c60h);
		eax = 0x35e*edx;
		esi ^= esi;
		ebx = D(eax+___1e6fdah);
		D(edi+___1df528h) = esi;
		if(ebx) goto ___51ab5h;
		eax = 0x94*edx;
		edx = 0x400;
		edx -= D(eax+___1de59ch);
		edx = 0x14*edx;
		D(eax+___1de598h) -= edx;
___51ab5h:
		eax = 0x94*D(___243c60h);
		if((int)D(eax+___1de598h) >= 0) goto ___51ad0h;
		edx ^= edx;
		D(eax+___1de598h) = edx;
___51ad0h:
		ebx = 0x35e*D(___243c60h);
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		ecx = 0x3;
		___idiv32(&eax, &edx, ecx);
		edx--;
		D(esp+0x9c) = edx;
		FPUSH((int)D(esp+0x9c));
		ST(0) = ST(0)*F64(___184261h);
		FPUSH(F32(ebx+___1e6fcch));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		esi = D(___243c60h);
		ST(1) = ST(0); FPOP();
		F32(ebx+___1e6fcch) = (float)FPOP();
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		ebx = 0x35e*esi;
		edx--;
		D(esp+0x9c) = edx;
		FPUSH((int)D(esp+0x9c));
		ST(0) = ST(0)*F64(___184261h);
		FPUSH(F32(ebx+___1e6fd0h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		eax = D(___243c60h);
		ST(1) = ST(0); FPOP();
		F32(ebx+___1e6fd0h) = (float)FPOP();
		ebx = 0x35e*eax;
		eax = rand_watcom106();
		edx = eax;
		ecx = 0xb;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		edx -= 0x5;
		D(esp+0x9c) = edx;
		FPUSH((int)D(esp+0x9c));
		ST(0) = ST(0)+(double)F32(ebx+___1e6f84h);
		edx = D(___243c60h);
		F32(ebx+___1e6f84h) = (float)FPOP();
		ebx = 0x35e*edx;
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		edx -= 0x5;
		D(esp+0x9c) = edx;
		FPUSH((int)D(esp+0x9c));
		ST(0) = ST(0)+(double)F32(ebx+___1e6f88h);
		F32(ebx+___1e6f88h) = (float)FPOP();
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x16;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		ebx = D(___243c60h);
		eax = 0x35e*ebx;
		edx -= 0xa;
		FPUSH(F32(eax+___1e6f80h));
		ST(0) = ST(0)*F64(___184275h);
		D(esp+0x9c) = edx;
		ecx = D(___243ce8h);
		FPUSH((int)D(esp+0x9c));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(eax+___1e6f80h)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6fd4h) = (float)FPOP();
		F32(eax+___1e6f80h) = (float)FPOP();
		if(ebx != ecx) goto ___51c28h;
		p6 = 0x8000;
		ecx = 0x9000;
		goto ___51ca5h;
___51c28h:
		edx = 0x35e*ecx;
		FPUSH(F32(eax+___1e6f88h));
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)-(double)F32(edx+___1e6f84h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e6f88h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0x64) = (int)FPOP();
		edx = D(esp+0x64);
		edx = edx*edx;
		ST(0) = (int)ST(0);
		D(esp+0x68) = (int)FPOP();
		eax = D(esp+0x68);
		eax = eax*eax;
		edx += eax;
		D(esp+0x9c) = edx;
		FPUSH((int)D(esp+0x9c));
		ST(0) = dR_Math_sqrt(ST(0));
		ST(0) = (int)ST(0);
		D(esp+0x9c) = (int)FPOP();
		ecx = 0x4b*D(esp+0x9c);
		eax = 0x10000;
		eax -= ecx;
		ecx = eax;
		if((int)eax <= 0x1000) goto ___51cbbh;
		p6 = 0x8000;
___51ca5h:
		edx = 0x17;
		eax = 0x4;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x21000, p6);	// MINE EXPLOSION
___51cbbh:
		eax = D(esp+0x7c);
		edx = D(___2438d0h);
		eax++;
		edi += 0x10;
		D(esp+0x7c) = eax;
		if((int)eax < (int)edx) goto ___51933h;
___51cd5h:
		return;
}
