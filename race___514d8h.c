#include "drally.h"
#include "drmath.h"
#include "sfx.h"

	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern byte ___1de580h[];
	extern byte ___243ca8h[];
	extern byte ___243ca4h[];
	extern byte ___2438d0h[];
	extern byte ___1df520h[];
	extern byte ___243ce8h[];
	extern void * ___243d8ch;
	extern void * ___243d58h;
	extern byte ___243d28h[];
	extern void * ___243d74h;
	extern void * ___243d7ch;

int rand_watcom106(void);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);

void race___514d8h(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p6;
	byte 	esp[0xc8];
	void * 	edxp;


		eax = 0x35e*D(___243c60h);
		ebx = D(eax+___1e6ed0h+0x1a6);
		if((int)ebx <= 0) goto ___51510h;
		ecx = ebx-1;
		D(eax+___1e6ed0h+0x1a6) = ecx;
___51510h:
		edx = D(___243c60h);
		ebx = 8*edx;
		ebx += edx;
		ebx <<= 0x2;
		ebx += edx;
		ebx <<= 0x2;
		if((int)D(ebx+___1de580h+0x18) <= 0) goto ___5191dh;
		eax = 0x35e*edx;
		if(D(eax+___1e6ed0h+0x10a) != 0) goto ___5191dh;
		edx = D(___243ca8h);
		edx <<= 0x2;
		edx += eax;
		if((B(edx+___1e6ed0h+0x20)&0x40) == 0) goto ___5191dh;
		if((int)D(ebx+___1de580h+0x28) <= 0) goto ___5191dh;
		if((int)D(___243ca4h) <= 0x1ae) goto ___5191dh;
		if(D(eax+___1e6ed0h+0x1a6) != 0) goto ___5191dh;
		H(ecx) = B(edx+___1e6ed0h+0x20);
		if((H(ecx)&2) == 0) goto ___5159dh;
		if((H(ecx)&0x40) != 0) goto ___5191dh;
___5159dh:
		edx = D(___243c60h);
		eax = 0x35e*edx;
		ebx = 0x32;
		FPUSH(F32(eax+___1e6ed0h+0xac));
		D(eax+___1e6ed0h+0x1a6) = ebx;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_sin(ST(0));
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		ST(0) = ST(0)*2.3;
		FPUSH(F32(eax*4+___1de580h+0x10));
		F64(esp+0xa8) = FPOP();
		ST(0) = ST(0)*F64(esp+0xa8);
		F64(esp+0xb8) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0xc4) = (int)FPOP();
		FPUSH((int)D(esp+0xc4));
		ST(0) = F64(esp+0xb8)-ST(0);
		if(FPOP() < 0.5) goto ___51631h;
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
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		FPUSH(F32(eax+___1e6ed0h+0xac));
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_cos(ST(0));
		eax = 8*ecx;
		ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
		eax += ecx;
		ST(0) = ST(0)*2.3;
		eax <<= 0x2;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-4.0;
		eax += ecx;
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(eax*4+___1de580h+0x10));
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
		if(FPOP() < 0.5) goto ___516f1h;
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
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ST(0) = ST(0)-4.0;
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
		edx = D(eax+___1df520h+4);
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
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)-(double)F32(edx+___1e6ed0h+0xb4);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e6ed0h+0xb8);
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
		ST(0) = dRMath_sqrt(ST(0));
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
		dRally_Sound_pushEffect(eax, SFX_MINE, ebx, ecx, 0x21000, p6);	// DROPPING MINE
___51844h:
		edx = D(___2438d0h);
		eax = D(esp+0x88);
		edx <<= 0x4;
		eax += 0x4;
		D(edx+___1df520h) = eax;
		eax = D(esp+0x74);
		eax += 0x4;
		D(edx+___1df520h+4) = eax;
		eax = D(___2438d0h);
		edi = 0x8;
		eax++;
		edx ^= edx;
		D(___2438d0h) = eax;
		eax = D(esp+0x74);
		D(esp+0x84) = edx;
		D(esp+0x80) = eax;

		while(1){

			edx = D(esp+0x80);
			esi = D(esp+0x84);
			eax = 0;
			D(esp+0x8c) = edx;

			while(1){

				if(B(___243d8ch+eax+esi) != 0){

					ebx = D(esp+0x8c)*D(___243d28h);
					B(___243d58h+D(esp+0x88)+eax+ebx) = B(___243d8ch+eax+esi);
				}

				eax++;
				if((int)eax >= 8) break;
			}

			edx = D(esp+0x80);
			eax = D(esp+0x84);
			edx++;
			eax += edi;
			D(esp+0x80) = edx;
			D(esp+0x84) = eax;
			if(eax == 0x40) break;
		}

		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		D(eax*4+___1de580h+0x28)--;
___5191dh:
		esi ^= esi;
		edi = D(___2438d0h);
		D(esp+0x7c) = esi;
		if((int)edi <= 0) goto ___51cd5h;
		edi ^= edi;
___51933h:
		eax = 0x35e*D(___243c60h);
		ecx = D(edi+___1df520h);
		esi = D(edi+___1df520h+4);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		FPUSH(F32(eax+___1e6ed0h+0xb4));
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
		edxp = ___243d74h+(int)D(ecx+___1e6ed0h+0x10)+(int)edx;
		edx = ___243d74h+D(ecx+___1e6ed0h+0x10)+edx;
		if(B(edxp+(int)eax+0x14) <= 3) goto ___51cbbh;
		if(D(edi+___1df520h+8) != 0xffffffff) goto ___51cbbh;
		ebx = 0;
		ecx = 0;
		D(esp+0x98) = 0;
		D(esp+0x90) = 0;
		ebx = edi;

		while(1){

			D(esp+0x94) = D(esp+0x90);

			eax = 0;
			while(1){

				edxp = ___243d7ch+eax+D(esp+0x94);

				if(B(edxp+0x500) != 0){

					ecx = D(ebx+___1df520h+4)+D(esp+0x98)-0x8;
					esi = D(___243d28h)*ecx;
					B(___243d58h+D(___1df520h+ebx)+eax+esi-8) = B(edxp+0x500);
				}

				eax++;
				if((int)eax >= 0x10) break;
			}

			D(esp+0x98) += 1;
			D(esp+0x90) += 0x10;
			if((int)D(esp+0x98) >= 0x10) break;
		}

		edx = D(___243c60h);
		eax = 0x35e*edx;
		esi = 0;
		ebx = D(eax+___1e6ed0h+0x10a);
		D(edi+___1df520h+8) = esi;
		if(ebx) goto ___51ab5h;
		eax = 0x94*edx;
		edx = 0x400;
		edx -= D(eax+___1de580h+0x1c);
		edx = 0x14*edx;
		D(eax+___1de580h+0x18) -= edx;
___51ab5h:
		eax = 0x94*D(___243c60h);
		if((int)D(eax+___1de580h+0x18) >= 0) goto ___51ad0h;
		edx ^= edx;
		D(eax+___1de580h+0x18) = edx;
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
		ST(0) = ST(0)*0.5;
		FPUSH(F32(ebx+___1e6ed0h+0xfc));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		esi = D(___243c60h);
		ST(1) = ST(0); FPOP();
		F32(ebx+___1e6ed0h+0xfc) = (float)FPOP();
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		ebx = 0x35e*esi;
		edx--;
		D(esp+0x9c) = edx;
		FPUSH((int)D(esp+0x9c));
		ST(0) = ST(0)*0.5;
		FPUSH(F32(ebx+___1e6ed0h+0x100));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		eax = D(___243c60h);
		ST(1) = ST(0); FPOP();
		F32(ebx+___1e6ed0h+0x100) = (float)FPOP();
		ebx = 0x35e*eax;
		eax = rand_watcom106();
		edx = eax;
		ecx = 0xb;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		edx -= 0x5;
		D(esp+0x9c) = edx;
		FPUSH((int)D(esp+0x9c));
		ST(0) = ST(0)+(double)F32(ebx+___1e6ed0h+0xb4);
		edx = D(___243c60h);
		F32(ebx+___1e6ed0h+0xb4) = (float)FPOP();
		ebx = 0x35e*edx;
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		edx -= 0x5;
		D(esp+0x9c) = edx;
		FPUSH((int)D(esp+0x9c));
		ST(0) = ST(0)+(double)F32(ebx+___1e6ed0h+0xb8);
		F32(ebx+___1e6ed0h+0xb8) = (float)FPOP();
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x16;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		ebx = D(___243c60h);
		eax = 0x35e*ebx;
		edx -= 0xa;
		FPUSH(F32(eax+___1e6ed0h+0xb0));
		ST(0) = ST(0)*1.7;
		D(esp+0x9c) = edx;
		ecx = D(___243ce8h);
		FPUSH((int)D(esp+0x9c));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(eax+___1e6ed0h+0xb0)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
		F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
		if(ebx != ecx) goto ___51c28h;
		p6 = 0x8000;
		ecx = 0x9000;
		goto ___51ca5h;
___51c28h:
		edx = 0x35e*ecx;
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)-(double)F32(edx+___1e6ed0h+0xb4);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e6ed0h+0xb8);
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
		ST(0) = dRMath_sqrt(ST(0));
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
		dRally_Sound_pushEffect(eax, SFX_MINE_EXPLOSION, ebx, ecx, 0x21000, p6);	// MINE EXPLOSION
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
