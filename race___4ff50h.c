#include "drally.h"
#include "drmath.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___2432b8h[];
	extern __BYTE__ ___2432b0h[];
	extern __BYTE__ ___2432bch[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___2432b4h[];
	extern __BYTE__ NUM_OF_CARS[];
	extern __POINTER__ ___243d74h;
	extern __BYTE__ ___24389ch[];
	extern __BYTE__ ___2432c0h[];
	extern __BYTE__ ___2432c4h[];
	extern __BYTE__ ___243d2ch[];
	extern __BYTE__ ___243d28h[];
	extern __POINTER__ ___243d60h;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___1df720h[];

int rand_watcom106(void);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);

// MACHINE GUNS
void race___4ff50h(void){

	double 	d_tmp;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, p5, p6;
	__BYTE__ 	esp[0x144];
	__POINTER__ 	ebxp;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		eax <<= 0x2;
		if((int)D(eax+___1de580h+0x18) <= 0) goto ___50a3fh;
		edx = 0x35e*D(___243c60h);
		if(s_35e[edx/0x35e].__10a != 0) goto ___50a3fh;
		if((int)getCounter(1) <= 0x1ae) goto ___50a3fh;
		ebx = getCounter(4);
		if((s_35e[edx/0x35e].Ctrls[ebx]&0x20) == 0) goto ___50a3fh;
		if(D(eax+___1de580h+0x2c) == 0) goto  ___50a3fh;
		if((int)D(eax+___1de580h+0x30) <= 0) goto ___50a3fh;
		ebx = D(eax+___1de580h+0x60);
		ebx <<= 0x2;
		ebx += eax;
		FPUSH((int)D(ebx+___1de580h+0x64));
		ST(0) = ST(0)+(double)s_35e[edx/0x35e].Direction;
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_sin(ST(0));
		FPUSH((int)D(ebx+___1de580h+0x74));
		F64(esp+0x12c) = FPOP();
		ST(0) = ST(0)*F64(esp+0x12c);
		ecx = 0x1;
		F64(esp+0x104) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x138) = (int)FPOP();
		FPUSH((int)D(esp+0x138));
		ST(0) = F64(esp+0x104)-ST(0);
		s_35e[edx/0x35e].__1b6 = ecx;
		if(FPOP() < 0.5) goto ___50071h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0x104);
		ST(0) = (int)ST(0);
		D(esp+0xc4) = (int)FPOP();
		goto ___5007fh;
___50071h:
		eax = D(esp+0x138);
		D(esp+0xc4) = eax;
___5007fh:
		eax = D(esp+0xc4);
		edx = D(___243c60h);
		D(esp+0xe8) = eax;
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		eax <<= 0x2;
		edx = D(eax+___1de580h+0x60);
		edx <<= 0x2;
		esi = D(___243c60h);
		edx += eax;
		eax = 0x35e*esi;
		FPUSH((int)D(edx+___1de580h+0x64));
		ST(0) = ST(0)+(double)s_35e[eax/0x35e].Direction;
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_cos(ST(0));
		ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
		FPUSH((int)D(edx+___1de580h+0x74));
		F64(esp+0x114) = FPOP();
		ST(0) = ST(0)*F64(esp+0x114);
		F64(esp+0x10c) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x134) = (int)FPOP();
		FPUSH((int)D(esp+0x134));
		ST(0) = F64(esp+0x10c)-ST(0);
		if(FPOP() < 0.5) goto ___50138h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0x10c);
		ST(0) = (int)ST(0);
		D(esp+0xcc) = (int)FPOP();
		goto ___50146h;
___50138h:
		eax = D(esp+0x134);
		D(esp+0xcc) = eax;
___50146h:
		eax = D(esp+0xcc);
		edi = D(___243c60h);
		D(esp+0xe4) = eax;
		eax = 0x35e*edi;
		ebx = D(esp+0xe8);
		FPUSH(s_35e[eax/0x35e].XLocation);
		edx = s_35e[eax/0x35e].__4;
		FPUSH(s_35e[eax/0x35e].YLocation);
		edx -= 0x4;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(-4.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		FPUSH((int)D(esp+0xe8));
		ebx += edx;
		FPUSH((int)D(esp+0xcc));
		D(___2432b8h) = ebx;
		edx = s_35e[eax/0x35e].__8;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(3) = ST(3)+ST(0); FPOP();
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		ebx = D(esp+0xcc);
		edx -= 0x4;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		ebx += edx;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(___2432b0h) = (int)FPOP();
		D(___2432bch) = ebx;
		ebx = D(MY_CAR_IDX);
		D(___2432b4h) = (int)FPOP();
		if(edi != ebx) goto ___50213h;
		p6 = 0x8000;
		p5 = 0x21000;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x2;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		edx += 0x13;
		ecx = 0x9000;
		eax = 0x9;
		goto ___502c8h;
___50213h:
		edx = 0x35e*ebx;
		FPUSH(s_35e[eax/0x35e].YLocation);
		FPUSH(s_35e[eax/0x35e].XLocation);
		ST(0) = ST(0)-(double)s_35e[edx/0x35e].XLocation;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)s_35e[edx/0x35e].YLocation;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0xac) = (int)FPOP();
		edx = D(esp+0xac);
		edx = edx*edx;
		ST(0) = (int)ST(0);
		D(esp+0x90) = (int)FPOP();
		eax = D(esp+0x90);
		eax = eax*eax;
		edx += eax;
		D(esp+0xb8) = edx;
		FPUSH((int)D(esp+0xb8));
		ST(0) = dRMath_sqrt(ST(0));
		ST(0) = (int)ST(0);
		D(esp+0xb8) = (int)FPOP();
		edx = D(esp+0xb8);
		eax = 4*edx;
		eax += edx;
		edx = eax;
		eax <<= 0x4;
		ecx = 0x9000;
		eax -= edx;
		ecx -= eax;
		if((int)ecx <= 0x1000) goto ___502d5h;
		p6 = 0x8000;
		p5 = 0x21000;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x2;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		edx += 0x13;
		eax = 0xa;
___502c8h:
		edx &= 0xff;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, p5, p6);
___502d5h:
		eax = 0x35e*D(___243c60h);
		FPUSH(s_35e[eax/0x35e].Direction);
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_sin(ST(0));
		ST(0) = ST(0)*256.0;
		F64(esp+0x124) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x13c) = (int)FPOP();
		FPUSH((int)D(esp+0x13c));
		ST(0) = F64(esp+0x124)-ST(0);
		if(FPOP() < 0.5) goto ___50342h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0x124);
		ST(0) = (int)ST(0);
		D(esp+0xc0) = (int)FPOP();
		goto ___50350h;
___50342h:
		eax = D(esp+0x13c);
		D(esp+0xc0) = eax;
___50350h:
		eax = D(esp+0xc0);
		ebx = D(___243c60h);
		D(esp+0xd4) = eax;
		eax = 0x35e*ebx;
		FPUSH(s_35e[eax/0x35e].Direction);
		ST(0) = ST(0)+180.0;
		ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
		ST(0) = ST(0)/180.0;
		ST(0) = dRMath_cos(ST(0));
		ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
		ST(0) = ST(0)*256.0;
		F64(esp+0x11c) = ST(0);
		ST(0) = (int)ST(0);
		D(esp+0x140) = (int)FPOP();
		FPUSH((int)D(esp+0x140));
		ST(0) = F64(esp+0x11c)-ST(0);
		if(FPOP() < 0.5) goto ___503d3h;
		FPUSH(1.0);
		ST(0) = ST(0)+F64(esp+0x11c);
		ST(0) = (int)ST(0);
		D(esp+0xc8) = (int)FPOP();
		goto ___503e1h;
___503d3h:
		eax = D(esp+0x140);
		D(esp+0xc8) = eax;
___503e1h:
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x6;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		ecx = D(esp+0xd4);
		edx -= 0x3;
		eax = rand_watcom106();
		ecx += edx;
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		esi ^= esi;
		eax = D(esp+0xc8);
		edx -= 0x3;
		D(esp+0xe0) = esi;
		eax += edx;
		D(esp+0xd4) = ecx;
		D(esp+0xd0) = eax;
___5042dh:
		eax = D(esp+0xe0);
		eax = eax*D(esp+0xd4);
		eax += 0x80;
		eax = (int)eax>>0x8;
		edx = D(esp+0xd0);
		D(esp+0xf0) = eax;
		eax = D(esp+0xe0);
		eax = eax*edx;
		eax += 0x80;
		eax = (int)eax>>0x8;
		ebx = D(esp+0xf0);
		D(esp+0xf4) = eax;
		eax = D(___2432b0h);
		eax += ebx;
		esi = D(esp+0xf4);
		D(esp+0xdc) = eax;
		eax = D(___2432b4h);
		eax += esi;
		edi = D(___243c60h);
		D(esp+0xd8) = eax;
		eax = 0x94*edi;
		D(esp+0x100) = eax;
		edx = edi;
		eax = 0x35e*edi;
		ecx ^= ecx;
		ebx = D(NUM_OF_CARS);
		D(esp+0xbc) = eax;
		edx ^= edi;
		eax ^= eax;
		if((int)ebx <= 0) goto ___506bbh;
___504cbh:
		if(ecx != D(___243c60h)){
				
			ebx = D(esp+0xbc);
			FPUSH(s_35e[eax/0x35e].XLocation);
			esi = D(esp+0xe8);
			FPUSH(s_35e[ebx/0x35e].XLocation);
			ST(0) = (int)ST(0);
			ebx = D(esp+0xf0);
			D(esp+0xb8) = (int)FPOP();
			edi = D(esp+0xb8);
			ST(0) = (int)ST(0);
			ebx += edi;
			D(esp+0xb8) = (int)FPOP();
			ebx += esi;
			esi = D(esp+0xb8);
			esi -= ebx;
			ebx = esi;
			esi = D(esp+0xbc);
			FPUSH(s_35e[eax/0x35e].YLocation);
			FPUSH(s_35e[esi/0x35e].YLocation);
			ST(0) = (int)ST(0);
			esi = D(esp+0xf4);
			D(esp+0xb8) = (int)FPOP();
			edi = D(esp+0xb8);
			ST(0) = (int)ST(0);
			esi += edi;
			edi = D(esp+0xe4);
			D(esp+0xb8) = (int)FPOP();
			esi += edi;
			edi = D(esp+0xb8);
			edi -= esi;
			esi = edi;

			if((int)ebx >= 0){

				D(esp+0xfc) = ebx;
			}
			else {

				edi = ebx;
				D(esp+0xfc) = ebx;
				edi = 0-edi;
				D(esp+0xfc) = edi;
			}

			if((int)D(esp+0xfc) < 0x14){

				if((int)esi >= 0){

					D(esp+0xf8) = esi;
				}
				else {

					edi = esi;
					D(esp+0xf8) = esi;
					edi = 0-edi;
					D(esp+0xf8) = edi;
				}

				if((int)D(esp+0xf8) < 0x14){

					esi += 0x14;
					esi = 0x28*esi;
					ebxp = ___243d74h+s_35e[eax/0x35e].ImgOffset+(int)ebx;

					if(B(ebxp+esi+0x14) > 3){

						ebx = 0x82;
						esi = s_35e[eax/0x35e].__10a;
						D(esp+0xe0) = ebx;
						if(esi == 0){

							ebx = 0x400;
							edi = D(edx+___1de580h+0x1c);
							ebx -= edi;
							D(esp+0xb8) = ebx;
							ebx = D(esp+0x100);
							ebx = D(ebx+___1de580h);
							FPUSH((int)D(esp+0xb8));
							ST(0) = ST(0)*(double)F32(ebx*4+___24389ch);
							FPUSH((int)D(edx+___1de580h+0x18));
							ST(1) = ST(0)-ST(1); FPOP();
							ST(0) = (int)ST(0);
							D(edx+___1de580h+0x18) = (int)FPOP();
						}

						if((int)D(___1de580h+edx+0x18) < 0) D(___1de580h+edx+0x18) = 0;

						ebx = D(esp+0xdc);
						D(___2432c0h) = ebx;
						ebx = D(esp+0xd8);
						D(___2432c4h) = ebx;
						ebx = D(esp+0x100);
						ebx = D(ebx+___1de580h+0x60);
						edi = D(esp+0x100);
						ebx <<= 0x2;
						ebx += edi;
						ebx = D(ebx+___1de580h+0x84);
						ebx = ebx+ebx*2;
						esi = D(esp+0xbc);
						ebx++;
						s_35e[esi/0x35e].__1aa = ebx;
					}
				}
			}
		}

		esi = D(NUM_OF_CARS);
		eax += 0x35e;
		ecx++;
		edx += 0x94;
		if((int)ecx < (int)esi) goto ___504cbh;
___506bbh:
		eax = D(esp+0xbc);
		edx = D(esp+0xf0);
		edi = D(esp+0xe8);
		FPUSH(s_35e[eax/0x35e].XLocation);
		ST(0) = (int)ST(0);
		edx += edi;
		D(esp+0xb8) = (int)FPOP();
		edx += D(esp+0xb8);
		eax = D(esp+0xbc);
		ebx = D(esp+0xe4);
		FPUSH(s_35e[eax/0x35e].YLocation);
		ST(0) = (int)ST(0);
		eax = D(esp+0xf4);
		D(esp+0xb8) = (int)FPOP();
		ecx = D(esp+0xb8);
		eax += ebx;
		eax += ecx;
		if((int)eax < 0) goto ___507b3h;
		if((int)eax >= (int)D(___243d2ch)) goto ___507b3h;
		if((int)edx < 0) goto ___507b3h;
		edi = D(___243d28h);
		if((int)edx >= (int)edi) goto ___507b3h;
		eax = eax*edi;
		L(eax) = B(___243d60h+edx+eax);
		L(eax) &= 0xf;

		if(L(eax) < 4){

			esi = D(esp+0xf0);
			eax = D(___2432b0h);
			eax += esi;
			edi = D(esp+0xf4);
			D(___2432c0h) = eax;
			eax = D(___2432b4h);
			eax += edi;
			edx = D(___243c60h);
			D(___2432c4h) = eax;
			eax = 0x94*edx;
			edx = D(eax+___1de580h+0x60);
			eax = D(eax+edx*4+___1de580h+0x84);
			ecx = 0x82;
			eax = eax+eax*2;
			edx = D(esp+0xbc);
			eax++;
			D(esp+0xe0) = ecx;
			s_35e[edx/0x35e].__1aa = eax;
		}
___507b3h:
#if defined(DR_MULTIPLAYER)
		if(___19bd60h != 0) goto ___509b4h;
#endif // DR_MULTIPLAYER
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x5;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		D(esp+0xec) = edx;
		if((int)edx >= 0x14) goto ___509b4h;
		esi = edx;
		esi <<= 0x5;
___507e6h:
		if(D(esi+___1df720h+0x18) != 0) goto ___50991h;
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0xf0);
		FPUSH(s_35e[edx/0x35e].XLocation);
		FPUSH(s_35e[edx/0x35e].YLocation);
		ebx = D(esp+0xe8);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0xb8) = (int)FPOP();
		ecx = D(esp+0xb8);
		ST(0) = (int)ST(0);
		eax += ecx;
		edx = D(esp+0xf4);
		ebx += eax;
		eax = D(esi+___1df720h);
		D(esp+0xb8) = (int)FPOP();
		eax += 0x8;
		edi = D(esp+0xb8);
		ebx -= eax;
		edx += edi;
		eax = ebx;
		ebx = D(esp+0xe4);
		ebx += edx;
		edx = D(esi+___1df720h+4);
		edx += 0x8;
		ebx -= edx;
		edx = ebx;
		if((int)eax >= 0) goto ___50875h;
		eax = 0-eax;
___50875h:
		if((int)eax >= 3) goto ___50991h;
		if((int)edx >= 0) goto ___50884h;
		edx = 0-edx;
___50884h:
		if((int)edx >= 3) goto ___50991h;
		eax = 0x1;
		ebx = D(MY_CAR_IDX);
		edx ^= edx;
		D(esi+___1df720h+0x18) = eax;
		eax = D(___243c60h);
		D(esi+___1df720h+0x14) = edx;
		if(eax != ebx) goto ___508d7h;
		p6 = 0x8000;
		p5 = 0x50000;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x3;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		edx += 0x7;
		ecx = 0x9000;
		goto ___5097fh;
___508d7h:
		edx = 0x35e*eax;
		eax = 0x35e*ebx;
		FPUSH(s_35e[edx/0x35e].YLocation);
		FPUSH(s_35e[edx/0x35e].XLocation);
		ST(0) = ST(0)-(double)s_35e[eax/0x35e].XLocation;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)s_35e[eax/0x35e].YLocation;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0xac) = (int)FPOP();
		eax = D(esp+0xac);
		eax = eax*eax;
		ST(0) = (int)ST(0);
		D(esp+0x90) = (int)FPOP();
		edx = D(esp+0x90);
		edx = edx*edx;
		eax += edx;
		D(esp+0xb8) = eax;
		FPUSH((int)D(esp+0xb8));
		ST(0) = dRMath_sqrt(ST(0));
		ST(0) = (int)ST(0);
		D(esp+0xb8) = (int)FPOP();
		ecx = 0x4b*D(esp+0xb8);
		eax = 0x10000;
		eax -= ecx;
		ecx = eax;
		if((int)eax <= 0x1000) goto ___50991h;
		p6 = 0x8000;
		p5 = 0x50000;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x3;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		edx += 0x7;
___5097fh:
		eax = 0x3;
		edx &= 0xff;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, p5, p6);
___50991h:
		eax = D(esp+0xec);
		eax += 0x5;
		esi += 0xa0;
		D(esp+0xec) = eax;
		if((int)esi < 0x280) goto ___507e6h;
___509b4h:
		eax = D(esp+0xe0);
		eax += 0x5;
		D(esp+0xe0) = eax;
		if((int)eax < 0x82) goto ___5042dh;
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		eax <<= 0x2;
		ebx = D(eax+___1de580h+0x30);
		ebx -= 0x104;
		D(eax+___1de580h+0x30) = ebx;
		if((int)ebx >= 0) goto ___50a05h;
		esi ^= esi;
		D(eax+___1de580h+0x30) = esi;
___50a05h:
		eax = 0x35e*D(___243c60h);
		edx = D(___2432c0h);
		s_35e[eax/0x35e].__1ba = edx;
		edx = D(___2432c4h);
		s_35e[eax/0x35e].__1be = edx;
		edx = D(___2432b0h);
		s_35e[eax/0x35e].__1d2 = edx;
		edx = D(___2432b4h);
		s_35e[eax/0x35e].__1d6 = edx;
___50a3fh:
		return;
}
