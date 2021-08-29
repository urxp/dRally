#include "drally.h"

	extern byte ___243cf4h[];
	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern void * ___243d74h;
	extern byte ___1de580h[];
	extern byte ___2438cch[];

void _settextposition_(dword, dword);

// RACE DRIVING
void race___4dcach(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, cf;
	byte 	esp[0xd4];
	void * 	edip;
	void * 	esip;


		edx ^= edx;
		esi = D(___243cf4h);
		D(___243c60h) = edx;
		if((int)esi <= 0) goto ___4dd43h;
		FPUSH(1.15);
		eax ^= eax;
		edx = 0x35e*esi;
___4dce7h:
		FPUSH(F32(eax+___1e6ed0h+0xfc));
		FPUSH(ST(0));
		ST(0) = ST(0)/ST(2);
		FPUSH(F32(eax+___1e6ed0h+0x100));
		FPUSH(ST(0));
		ST(0) = ST(0)/ST(4);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		FPUSH(ST(0));
		ST(0) = ST(0)/1.2;
		edi = D(___243c60h);
		edi++;
		D(___243c60h) = edi;
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(5) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(2) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(2) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(eax+___1e6ed0h+0xfc) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6ed0h+0x100) = (float)FPOP();
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
		eax += 0x35e;
		if((int)eax < (int)edx) goto ___4dce7h;
		ST(0) = ST(0); FPOP();
___4dd43h:
		eax ^= eax;
		D(___243c60h) = eax;
		goto ___4e972h;
___4dd4fh:
		eax = edi+1;
		edx = D(___243cf4h);
		D(esp+0x40) = eax;
		if((int)eax >= (int)edx) goto ___4e96ch;
		edx = eax;
		eax = 0x94*eax;
		D(esp+0x60) = eax;
		eax = 0x35e*edx;
		D(esp+0x18) = eax;
___4dd7ah:
		eax = 0x35e*D(___243c60h);
		edx = D(esp+0x18);
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xb4);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xb8);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x68) = (int)FPOP();
		edi = D(esp+0x68);
		D(esp+0x64) = (int)FPOP();
		if((int)edi >= 0x27) goto ___4e939h;
		eax = D(esp+0x64);
		if((int)eax >= 0x27) goto ___4e939h;
		if((int)edi <= (int)0xffffffd9) goto ___4e939h;
		if((int)eax <= (int)0xffffffd9) goto ___4e939h;
		if((int)edi < 0) goto ___4ddfah;
		eax = 0x28;
		ebx = edi;
		ecx ^= ecx;
		D(esp+0xb8) = eax;
___4ddfah:
		edx = D(esp+0x68);
		if((int)edx >= 0) goto ___4de12h;
		eax = edx+0x28;
		ebx ^= ebx;
		ecx = edx;
		D(esp+0xb8) = eax;
		ecx = 0-ecx;
___4de12h:
		esi = D(esp+0x64);
		if((int)esi < 0) goto ___4de32h;
		edi = 0x28;
		eax = esi;
		D(esp+0x78) = esi;
		eax ^= esi;
		D(esp+0xc8) = edi;
		D(esp+0x74) = eax;
___4de32h:
		edx = D(esp+0x64);
		if((int)edx >= 0) goto ___4de56h;
		eax = edx+0x28;
		esi ^= esi;
		D(esp+0xc8) = eax;
		edi = edx;
		D(esp+0x74) = edx;
		edi = 0-edi;
		D(esp+0x78) = esi;
		D(esp+0x74) = edi;
___4de56h:
		edx = D(esp+0xc8);
		eax ^= eax;
		D(esp+0x70) = ecx;
		D(esp+0x94) = eax;
		eax = D(esp+0x78);
		D(esp+0x88) = ebx;
		if((int)eax >= (int)edx) goto ___4e00ah;
		eax = D(esp+0x18);
		ebx = D(___243c60h);
		D(esp+0x90) = eax;
		eax = 0x35e*ebx;
		ecx = D(esp+0x78);
		D(esp+0x8c) = eax;
		eax = 0x28*ecx;
		esi = D(esp+0x74);
		D(esp+0x7c) = eax;
		eax = 0x28*esi;
		D(esp+0x80) = eax;
		eax = esi-0x14;
		D(esp+0x84) = eax;
		eax = ecx-0x14;
		D(esp+0x1c) = eax;
		eax = edx-0x14;
		D(esp+0x6c) = eax;
___4decch:
		edi = D(esp+0xb8);
		ebx = D(esp+0x88);
		ecx = D(esp+0x70);
		if((int)ebx >= (int)edi) goto ___4dfb4h;
		eax = D(esp+0x1c);
		D(esp+0xb0) = eax;
		eax = D(esp+0x84);
		D(esp+0xa8) = eax;
		eax = D(esp+0x80);
		D(esp+0xac) = eax;
		eax = D(esp+0x7c);
		esi = ecx-0x14;
		D(esp+0xb4) = eax;
		eax = ebx-0x14;
___4df1eh:
		edx = ___243d74h;
		D(esp+0xbc) = edx;
		edip = ___243d74h+D(esp+0xb4)+D(D(esp+0x8c)+___1e6ed0h+0x10)+ebx;;

		if(B(edip) > 3){

			edx = D(esp+0xbc);
			edip = ___243d74h+D(D(esp+0x90)+___1e6ed0h+0x10)+ecx+D(esp+0xac);

			if(B(edip) > 3){

				D(esp+0x94) = 0x1;
				edx = D(esp+0xb0);
				D(esp+0x98) = eax;
				D(esp+0xa4) = edx;
				edx = D(esp+0xa8);
				D(esp+0xa0) = esi;
				D(esp+0x9c) = edx;
			}
		}

		edx = D(esp+0xb8);
		eax++;
		ebx++;
		esi++;
		ecx++;
		if((int)ebx < (int)edx) goto ___4df1eh;
___4dfb4h:
		esi = D(esp+0x7c);
		edi = D(esp+0x1c);
		eax = D(esp+0x78);
		edx = D(esp+0x80);
		esi += 0x28;
		edi++;
		eax++;
		edx += 0x28;
		D(esp+0x7c) = esi;
		D(esp+0x1c) = edi;
		D(esp+0x78) = eax;
		D(esp+0x80) = edx;
		esi = D(esp+0x84);
		edi = D(esp+0x74);
		eax = D(esp+0x1c);
		edx = D(esp+0x6c);
		esi++;
		edi++;
		D(esp+0x84) = esi;
		D(esp+0x74) = edi;
		if((int)eax < (int)edx) goto ___4decch;
___4e00ah:
		if(D(esp+0x94) != 1) goto ___4e939h;
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0x98);
		D(edx+___1e6ed0h+0x172) = eax;
		eax = D(esp+0xa4);
		esi = D(esp+0x18);
		D(edx+___1e6ed0h+0x176) = eax;
		eax = D(esp+0xa0);
		D(esi+___1e6ed0h+0x172) = eax;
		eax = D(esp+0x9c);
		D(esi+___1e6ed0h+0x176) = eax;
		eax = esi;
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		eax = D(esp+0x98);
		D(esp+0x20) = eax;
		eax = 0-eax;
		D(esp+0x20) = eax;
		ST(0) = ST(0)-(double)F32(esi+___1e6ed0h+0x152);
		FPUSH((int)D(esp+0x20));
		ST(0) = ST(0)*ST(1);
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		ST(0) = ST(0)-(double)F32(edx+___1e6ed0h+0x14e);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e6ed0h+0x152);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)-(double)F32(esi+___1e6ed0h+0x14e);
		FPUSH(ST(0));
		ST(0) = ST(0)-ST(2);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)-ST(5);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		FPUSH(0.7);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
		F32(esp+0xd0) = (float)FPOP();
		eax = D(esp+0xa0);
		ST(0) = ST(0)*(double)F32(esp+0xd0);
		esi = eax;
		D(esp+0x20) = eax;
		esi = 0-esi;
		D(esp+0x20) = esi;
		FPUSH((int)D(esp+0x20));
		ST(6) = ST(6)*ST(0); FPOP();
		FPUSH((int)D(esp+0xa4));
		ST(2) = ST(2)*ST(0); FPOP();
		FPUSH((int)D(esp+0x9c));
		ST(3) = ST(3)*ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xfc));
		F64(esp+0x8) = FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+F64(esp+0x8);
		edi = D(esp+0x98);
		F64(esp+0x8) = FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x100));
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+ST(4);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(3) = ST(3)+ST(0); FPOP();
		ST(3) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0x28) = (int)FPOP();
		FPUSH(F64(esp+0x8));
		F32(edx+___1e6ed0h+0xfc) = (float)FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		F32(edx+___1e6ed0h+0x100) = (float)FPOP();
		ST(0) = (int)ST(0);
		D(esp+0x2c) = (int)FPOP();
		if((int)edi <= 0) goto ___4e158h;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6ed0h+0x15a]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e179h
		if(FPOP() < (double)F32(edx+___1e6ed0h+0x15a)) goto ___4e179h;
___4e158h:
		if((int)D(esp+0x98) >= 0) goto ___4e18fh;
		eax = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e6ed0h+0x15a]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e18fh
		if(FPOP() <= (double)F32(eax+___1e6ed0h+0x15a)) goto ___4e18fh;
___4e179h:
		eax = 0x35e*D(___243c60h);
		D(eax+___1e6ed0h+0x18) = 0x1;
		goto ___4e1a3h;
___4e18fh:
		eax = 0x35e*D(___243c60h);
		D(eax+___1e6ed0h+0x18) = 0x2;
___4e1a3h:
		if((int)D(esp+0xa4) <= 0) goto ___4e1c4h;
		eax = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e6ed0h+0x15e]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e1e5h
		if(FPOP() < (double)F32(eax+___1e6ed0h+0x15e)) goto ___4e1e5h;
___4e1c4h:
		if((int)D(esp+0xa4) >= 0) goto ___4e1fbh;
		eax = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e6ed0h+0x15e]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e1fbh
		if(FPOP() <= (double)F32(eax+___1e6ed0h+0x15e)) goto ___4e1fbh;
___4e1e5h:
		eax = 0x35e*D(___243c60h);
		D(eax+___1e6ed0h+0x1c) = 0x1;
		goto ___4e20fh;
___4e1fbh:
		eax = 0x35e*D(___243c60h);
		D(eax+___1e6ed0h+0x1c) = 0x2;
___4e20fh:
		eax = 0x35e*D(___243c60h);
		edx = D(esp+0x18);
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0x14e);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0x152);
		eax = edx;
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e6ed0h+0x14e);
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(2)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e6ed0h+0x152);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(2) = ST(0); FPOP();
		ST(0) = ST(2)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(0.7);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(3) = ST(0); FPOP();
		ST(2) = ST(2)*ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xfc));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		edi = D(esp+0xa0);
		ST(1) = ST(0); FPOP();
		FPUSH(F32(edx+___1e6ed0h+0x100));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+ST(2);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6ed0h+0xfc) = (float)FPOP();
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6ed0h+0x100) = (float)FPOP();
		if((int)edi <= 0) goto ___4e2afh;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e6ed0h+0x15a]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e2cah
		if(FPOP() < (double)F32(edx+___1e6ed0h+0x15a)) goto ___4e2cah;
___4e2afh:
		if((int)D(esp+0xa0) >= 0) goto ___4e2dah;
		eax = D(esp+0x18);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e6ed0h+0x15a]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e2dah
		if(FPOP() <= (double)F32(eax+___1e6ed0h+0x15a)) goto ___4e2dah;
___4e2cah:
		eax = D(esp+0x18);
		D(eax+___1e6ed0h+0x18) = 0x1;
		goto ___4e2e8h;
___4e2dah:
		eax = D(esp+0x18);
		D(eax+___1e6ed0h+0x18) = 0x2;
___4e2e8h:
		if((int)D(esp+0x9c) <= 0) goto ___4e303h;
		eax = D(esp+0x18);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e6ed0h+0x15e]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e31eh
		if(FPOP() < (double)F32(eax+___1e6ed0h+0x15e)) goto ___4e31eh;
___4e303h:
		if((int)D(esp+0x9c) >= 0) goto ___4e32eh;
		eax = D(esp+0x18);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e6ed0h+0x15e]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e32eh
		if(FPOP() <= (double)F32(eax+___1e6ed0h+0x15e)) goto ___4e32eh;
___4e31eh:
		eax = D(esp+0x18);
		D(eax+___1e6ed0h+0x1c) = 0x1;
		goto ___4e33ch;
___4e32eh:
		eax = D(esp+0x18);
		D(eax+___1e6ed0h+0x1c) = 0x2;
___4e33ch:
		eax = 0x35e*D(___243c60h);
		edx = D(eax+___1e6ed0h+0x18);
		if(edx != 1) goto ___4e35dh;
		eax = D(esp+0x18);
		if(edx == D(eax+___1e6ed0h+0x18)) goto ___4e386h;
___4e35dh:
		eax = 0x35e*D(___243c60h);
		edx = D(eax+___1e6ed0h+0x1c);
		if(edx != 1) goto ___4e52ah;
		eax = D(esp+0x18);
		if(edx != D(eax+___1e6ed0h+0x1c)) goto ___4e52ah;
___4e386h:
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0x18);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		//fcomp   dword [eax+___1e6ed0h+0xac]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e412h
		if(FPOP() <= (double)F32(eax+___1e6ed0h+0xac)) goto ___4e412h;
		eax = D(esp+0x18);
		FPUSH(F32(edx+___1e6ed0h+0xac));
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xac);
		FPUSH(0.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x54) = (float)FPOP();
		//fcomp   dword [esp+54h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e3d2h
		if(FPOP() <= (double)F32(esp+0x54)) goto ___4e3d2h;
		FPUSH(F32(esp+0x54));
		ST(0) = -1.0*ST(0);
		F32(esp+0x3c) = (float)FPOP();
		goto ___4e3dah;
___4e3d2h:
		eax = D(esp+0x54);
		D(esp+0x3c) = eax;
___4e3dah:
		if((int)D(esp+0x3c) >= 0x42c80000) goto ___4e412h;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		ST(0) = ST(0)-2.0;
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
		eax = D(esp+0x18);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		ST(0) = ST(0)+2.0;
		goto ___4e43eh;
___4e412h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		ST(0) = ST(0)+2.0;
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
		eax = D(esp+0x18);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		ST(0) = ST(0)-2.0;
___4e43eh:
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0x18);
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		//fcomp   dword [eax+___1e6ed0h+0xb4]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e48bh
		if(FPOP() < (double)F32(eax+___1e6ed0h+0xb4)) goto ___4e48bh;
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		FPUSH(ST(0));
		ST(0) = ST(0)+0.6;
		eax = D(esp+0x18);
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6ed0h+0xb4) = (float)FPOP();
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = ST(0)-0.6;
		goto ___4e4b1h;
___4e48bh:
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		ST(0) = ST(0)-0.6;
		eax = D(esp+0x18);
		F32(edx+___1e6ed0h+0xb4) = (float)FPOP();
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		FPUSH(ST(0));
		ST(0) = ST(0)+0.6;
		ST(1) = ST(0); FPOP();
___4e4b1h:
		F32(eax+___1e6ed0h+0xb4) = (float)FPOP();
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0x18);
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		//fcomp   dword [eax+___1e6ed0h+0xb8]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e4feh
		if(FPOP() < (double)F32(eax+___1e6ed0h+0xb8)) goto ___4e4feh;
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		FPUSH(ST(0));
		ST(0) = ST(0)+0.6;
		eax = D(esp+0x18);
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6ed0h+0xb8) = (float)FPOP();
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ST(0) = ST(0)-0.6;
		goto ___4e524h;
___4e4feh:
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		ST(0) = ST(0)-0.6;
		eax = D(esp+0x18);
		F32(edx+___1e6ed0h+0xb8) = (float)FPOP();
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		FPUSH(ST(0));
		ST(0) = ST(0)+0.6;
		ST(1) = ST(0); FPOP();
___4e524h:
		F32(eax+___1e6ed0h+0xb8) = (float)FPOP();
___4e52ah:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xac));
		eax = D(esp+0x18);
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xac);
		FPUSH(0.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x48) = (float)FPOP();
		//fcomp   dword [esp+48h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e561h
		if(FPOP() <= (double)F32(esp+0x48)) goto ___4e561h;
		FPUSH(F32(esp+0x48));
		ST(0) = -1.0*ST(0);
		F32(esp+0x30) = (float)FPOP();
		goto ___4e569h;
___4e561h:
		eax = D(esp+0x48);
		D(esp+0x30) = eax;
___4e569h:
		if((int)D(esp+0x30) >= 0x439d8000) goto ___4e6fbh;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xac));
		eax = D(esp+0x18);
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xac);
		FPUSH(0.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x5c) = (float)FPOP();
		//fcomp   dword [esp+5ch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e5b1h
		if(FPOP() <= (double)F32(esp+0x5c)) goto ___4e5b1h;
		FPUSH(F32(esp+0x5c));
		ST(0) = -1.0*ST(0);
		F32(esp+0xc4) = (float)FPOP();
		goto ___4e5bch;
___4e5b1h:
		eax = D(esp+0x5c);
		D(esp+0xc4) = eax;
___4e5bch:
		if((int)D(esp+0xc4) <= 0x42340000) goto ___4e6fbh;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xac));
		eax = D(esp+0x18);
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xac);
		FPUSH(0.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0xcc) = (float)FPOP();
		//fcomp   dword [esp+0cch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e60dh
		if(FPOP() <= (double)F32(esp+0xcc)) goto ___4e60dh;
		FPUSH(F32(esp+0xcc));
		ST(0) = -1.0*ST(0);
		F32(esp+0x34) = (float)FPOP();
		goto ___4e618h;
___4e60dh:
		eax = D(esp+0xcc);
		D(esp+0x34) = eax;
___4e618h:
		if((int)D(esp+0x34) < 43070000) goto ___4e66fh;
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xac));
		eax = D(esp+0x18);
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xac);
		FPUSH(0.0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(esp+0x44) = (float)FPOP();
		//fcomp   dword [esp+44h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e659h
		if(FPOP() <= (double)F32(esp+0x44)) goto ___4e659h;
		FPUSH(F32(esp+0x44));
		ST(0) = -1.0*ST(0);
		F32(esp+0x38) = (float)FPOP();
		goto ___4e661h;
___4e659h:
		eax = D(esp+0x44);
		D(esp+0x38) = eax;
___4e661h:
		if((int)D(esp+0x38) <= 0x43610000) goto ___4e6fbh;
___4e66fh:
		eax = D(esp+0x28);
		edx = eax;
		edx = (int)edx>>0x1f;
		cf = !!(edx&0x40000000);
		edx <<= 0x2;
		eax -= edx+cf;
		eax = (int)eax>>0x2;
		D(esp+0x20) = eax;
		FPUSH((int)D(esp+0x20));
		F32(esp+0x58) = (float)FPOP();
		if((int)D(esp+0x58) <= 0x40400000) goto ___4e69eh;
		D(esp+0x58) = 0x40400000;
___4e69eh:
		eax = D(esp+0x2c);
		edx = eax;
		edx = (int)edx>>0x1f;
		cf = !!(edx&0x40000000);
		edx <<= 0x2;
		eax -= edx+cf;
		eax = (int)eax>>0x2;
		D(esp+0x20) = eax;
		FPUSH((int)D(esp+0x20));
		F32(esp+0x50) = (float)FPOP();
		if((int)D(esp+0x50) <= 0x40400000) goto ___4e6cdh;
		D(esp+0x50) = 0x40400000;
___4e6cdh:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		ST(0) = ST(0)+(double)F32(esp+0x58);
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
		eax = D(esp+0x18);
		FPUSH(F32(eax+___1e6ed0h+0x104));
		ST(0) = ST(0)+(double)F32(esp+0x50);
		F32(eax+___1e6ed0h+0x104) = (float)FPOP();
___4e6fbh:
		eax ^= eax;
		edx = D(___243c60h);
		D(esp+0x4c) = eax;
		eax = 0x94*edx;
		if(D(eax+___1de580h+0x24) == 0) goto ___4e939h;
		eax = D(esp+0x18);
		if(D(eax+___1e6ed0h+0x10a) != 0) goto ___4e939h;
		edx = 0x35e*edx;
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = (int)ST(0);
		D(esp+0x20) = (int)FPOP();
		eax = D(esp+0x20);
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xcc);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xd0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		edx = D(esp+0x18);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x24) = (int)FPOP();
		D(esp+0x20) = (int)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		esi = D(esp+0x24);
		edi = D(esp+0x20);
		ST(0) = (int)ST(0);
		D(esp+0x20) = (int)FPOP();
		edx = D(esp+0x20);
		eax -= esi;
		edx -= edi;
		if((int)eax >= 0) goto ___4e7a3h;
		esi = eax;
		esi = 0-esi;
		goto ___4e7a5h;
___4e7a3h:
		esi = eax;
___4e7a5h:
		if((int)esi >= 0x14) goto ___4e7e2h;
		if((int)edx >= 0) goto ___4e7b4h;
		esi = edx;
		esi = 0-esi;
		goto ___4e7b6h;
___4e7b4h:
		esi = edx;
___4e7b6h:
		if((int)esi < 0x14){

			edi = D(esp+0x18);
			edx += 0x14;
			esi = ___243d74h+D(edi+___1e6ed0h+0x10)+eax;
			esip = ___243d74h+D(edi+___1e6ed0h+0x10)+(int)eax;
			eax = 0x28*edx;
			if(B(esip+eax+0x14) > 3) D(esp+0x4c) = 0x1;
		}
___4e7e2h:
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0x18);
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		ST(0) = (int)ST(0);
		D(esp+0x20) = (int)FPOP();
		eax = D(esp+0x20);
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xc4);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xc8);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		edx = D(esp+0x18);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x24) = (int)FPOP();
		D(esp+0x20) = (int)FPOP();
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		edi = D(esp+0x24);
		esi = D(esp+0x20);
		ST(0) = (int)ST(0);
		D(esp+0x20) = (int)FPOP();
		edx = D(esp+0x20);
		eax -= edi;
		edx -= esi;
		if((int)eax >= 0) goto ___4e862h;
		esi = eax;
		esi = 0-esi;
		goto ___4e864h;
___4e862h:
		esi = eax;
___4e864h:
		if((int)esi >= 0x14) goto ___4e8a1h;
		if((int)edx >= 0) goto ___4e873h;
		esi = edx;
		esi = 0-esi;
		goto ___4e875h;
___4e873h:
		esi = edx;
___4e875h:
		if((int)esi < 0x14){

			edi = D(esp+0x18);
			esi = ___243d74h+D(edi+___1e6ed0h+0x10)+(int)eax;
			esip = ___243d74h+D(edi+___1e6ed0h+0x10)+(int)eax;
			eax = 0x28*(edx+0x14);
			if(B(esip+(int)eax+0x14) > 3) D(esp+0x4c) = 0x1;
		}
___4e8a1h:
		if(D(esp+0x4c) != 1) goto ___4e939h;
		eax = D(esp+0x18);
		FPUSH(F32(eax+___1e6ed0h+0xfc));
		ST(0) = ST(0)*ST(0);
		edx = D(esp+0x60);
		FPUSH(F32(eax+___1e6ed0h+0x100));
		ST(0) = ST(0)*ST(0);
		esi = D(edx+___1de580h+0x1c);
		eax = 0x400;
		eax -= esi;
		edx = eax;
		eax <<= 0x2;
		eax -= edx;
		ST(1) = ST(1)+ST(0); FPOP();
		D(esp+0x20) = eax;
		FPUSH((int)D(esp+0x20));
		ST(1) = ST(1)*ST(0); FPOP();
		ST(0) = (int)ST(0);
		D(___2438cch) = (int)FPOP();
		if((int)D(___2438cch) <= 0x2710) goto ___4e905h;
		D(___2438cch) = 0x2710;
___4e905h:
		edx = D(esp+0x60);
		eax = D(___2438cch);
		esi = D(edx+___1de580h+0x18);
		esi -= eax;
		D(edx+___1de580h+0x18) = esi;
		if((int)esi >= 0) goto ___4e92ah;
		eax = edx;
		edx ^= edx;
		D(eax+___1de580h+0x18) = edx;
___4e92ah:
		edx = 0x1e;
		eax = 0x15;
		_settextposition_(eax, edx);
___4e939h:
		esi = D(esp+0x60);
		edi = D(esp+0x18);
		eax = D(esp+0x40);
		edx = D(___243cf4h);
		esi += 0x94;
		edi += 0x35e;
		eax++;
		D(esp+0x60) = esi;
		D(esp+0x18) = edi;
		D(esp+0x40) = eax;
		if((int)eax < (int)edx) goto ___4dd7ah;
___4e96ch:
		D(___243c60h)++;
___4e972h:
		eax = D(___243cf4h);
		edi = D(___243c60h);
		eax--;
		if((int)eax > (int)edi) goto ___4dd4fh;
		return;
}
