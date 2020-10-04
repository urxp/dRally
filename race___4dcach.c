#include "drally.h"

	extern byte ___243cf4h[];
	extern byte ___243c60h[];
	extern byte ___184149h[];
	extern byte ___1e6fcch[];
	extern byte ___1e6fd0h[];
	extern byte ___1e6fd4h[];
	extern byte ___184151h[];
	extern byte ___1e6c6eh[];
	extern byte ___1e6c72h[];
	extern byte ___1e6c76h[];
	extern byte ___1e6f88h[];
	extern byte ___1e6f84h[];
	extern byte ___243d74h[];
	extern byte ___1e6ee0h[];
	extern byte ___1e7042h[];
	extern byte ___1e7046h[];
	extern byte ___1e7022h[];
	extern byte ___1e701eh[];
	extern byte ___184141h[];
	extern byte ___1e702ah[];
	extern byte ___1e6ee8h[];
	extern byte ___1e702eh[];
	extern byte ___1e6eech[];
	extern byte ___1e6f7ch[];
	extern byte ___18415dh[];
	extern byte ___184159h[];
	extern byte ___184169h[];
	extern byte ___184161h[];
	extern byte ___1de5a4h[];
	extern byte ___1e6fdah[];
	extern byte ___1e6f9ch[];
	extern byte ___1e6fa0h[];
	extern byte ___1e6f94h[];
	extern byte ___1e6f98h[];
	extern byte ___1de59ch[];
	extern byte ___2438cch[];
	extern byte ___1de598h[];

void _settextposition_(dword, dword);

// RACE DRIVING
void race___4dcach(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, cf;
	byte 	esp[0xd4];


		edx ^= edx;
		esi = D(___243cf4h);
		D(___243c60h) = edx;
		if((int)esi <= 0) goto ___4dd43h;
		FPUSH(F64(___184149h));
		eax ^= eax;
		edx = 0x35e*esi;
___4dce7h:
		FPUSH(F32(eax+___1e6fcch));
		FPUSH(ST(0));
		ST(0) = ST(0)/ST(2);
		FPUSH(F32(eax+___1e6fd0h));
		FPUSH(ST(0));
		ST(0) = ST(0)/ST(4);
		FPUSH(F32(eax+___1e6fd4h));
		FPUSH(ST(0));
		ST(0) = ST(0)/F64(___184151h);
		edi = D(___243c60h);
		edi++;
		eax += 0x35e;
		D(___243c60h) = edi;
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(5) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(2) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(2) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		F32(eax+___1e6c6eh) = (float)FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(eax+___1e6c72h) = (float)FPOP();
		F32(eax+___1e6c76h) = (float)FPOP();
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
		FPUSH(F32(edx+___1e6f88h));
		FPUSH(F32(edx+___1e6f84h));
		ST(0) = ST(0)-(double)F32(eax+___1e6f84h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(eax+___1e6f88h);
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
		edx = D(___243d74h);
		edi = D(esp+0x8c);
		D(esp+0xbc) = edx;
		edx += D(edi+___1e6ee0h);
		edi = D(esp+0xb4);
		edx += ebx;
		edi += edx;
		if(B(edi) <= 3) goto ___4dfa1h;
		edi = D(esp+0x90);
		edx = D(esp+0xbc);
		edx += D(edi+___1e6ee0h);
		edi = D(esp+0xac);
		edx += ecx;
		edi += edx;
		if(B(edi) <= 3) goto ___4dfa1h;
		D(esp+0x94) = 0x1;
		edx = D(esp+0xb0);
		D(esp+0x98) = eax;
		D(esp+0xa4) = edx;
		edx = D(esp+0xa8);
		D(esp+0xa0) = esi;
		D(esp+0x9c) = edx;
___4dfa1h:
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
		D(edx+___1e7042h) = eax;
		eax = D(esp+0xa4);
		esi = D(esp+0x18);
		D(edx+___1e7046h) = eax;
		eax = D(esp+0xa0);
		D(esi+___1e7042h) = eax;
		eax = D(esp+0x9c);
		D(esi+___1e7046h) = eax;
		eax = esi;
		FPUSH(F32(eax+___1e6f84h));
		FPUSH(F32(eax+___1e6f88h));
		eax = D(esp+0x98);
		D(esp+0x20) = eax;
		eax = 0-eax;
		D(esp+0x20) = eax;
		ST(0) = ST(0)-(double)F32(esi+___1e7022h);
		FPUSH((int)D(esp+0x20));
		ST(0) = ST(0)*ST(1);
		FPUSH(F32(edx+___1e6f88h));
		FPUSH(F32(edx+___1e6f84h));
		ST(0) = ST(0)-(double)F32(edx+___1e701eh);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e7022h);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)-(double)F32(esi+___1e701eh);
		FPUSH(ST(0));
		ST(0) = ST(0)-ST(2);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)-ST(5);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		FPUSH(F64(___184141h));
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
		FPUSH(F32(edx+___1e6fcch));
		F64(esp+0x8) = FPOP();
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+F64(esp+0x8);
		edi = D(esp+0x98);
		F64(esp+0x8) = FPOP();
		FPUSH(F32(edx+___1e6fd0h));
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+ST(4);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(3) = ST(3)+ST(0); FPOP();
		ST(3) = ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0x28) = (int)FPOP();
		FPUSH(F64(esp+0x8));
		F32(edx+___1e6fcch) = (float)FPOP();
		ST(2) = ST(2)+ST(0); FPOP();
		F32(edx+___1e6fd0h) = (float)FPOP();
		ST(0) = (int)ST(0);
		D(esp+0x2c) = (int)FPOP();
		if((int)edi <= 0) goto ___4e158h;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e702ah]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e179h
		if(FPOP() < (double)F32(edx+___1e702ah)) goto ___4e179h;
___4e158h:
		if((int)D(esp+0x98) >= 0) goto ___4e18fh;
		eax = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e702ah]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e18fh
		if(FPOP() <= (double)F32(eax+___1e702ah)) goto ___4e18fh;
___4e179h:
		eax = 0x35e*D(___243c60h);
		D(eax+___1e6ee8h) = 0x1;
		goto ___4e1a3h;
___4e18fh:
		eax = 0x35e*D(___243c60h);
		D(eax+___1e6ee8h) = 0x2;
___4e1a3h:
		if((int)D(esp+0xa4) <= 0) goto ___4e1c4h;
		eax = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e702eh]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e1e5h
		if(FPOP() < (double)F32(eax+___1e702eh)) goto ___4e1e5h;
___4e1c4h:
		if((int)D(esp+0xa4) >= 0) goto ___4e1fbh;
		eax = 0x35e*D(___243c60h);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e702eh]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e1fbh
		if(FPOP() <= (double)F32(eax+___1e702eh)) goto ___4e1fbh;
___4e1e5h:
		eax = 0x35e*D(___243c60h);
		D(eax+___1e6eech) = 0x1;
		goto ___4e20fh;
___4e1fbh:
		eax = 0x35e*D(___243c60h);
		D(eax+___1e6eech) = 0x2;
___4e20fh:
		eax = 0x35e*D(___243c60h);
		edx = D(esp+0x18);
		FPUSH(F32(edx+___1e6f84h));
		FPUSH(F32(eax+___1e6f88h));
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)-(double)F32(eax+___1e701eh);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(eax+___1e7022h);
		eax = edx;
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e701eh);
		FPUSH(F32(eax+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(2)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)-(double)F32(edx+___1e7022h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(2) = ST(0); FPOP();
		ST(0) = ST(2)-ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(F64(___184141h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(3) = ST(0); FPOP();
		ST(2) = ST(2)*ST(0); FPOP();
		FPUSH(F32(edx+___1e6fcch));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+ST(1);
		edi = D(esp+0xa0);
		ST(1) = ST(0); FPOP();
		FPUSH(F32(edx+___1e6fd0h));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)+ST(2);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		F32(edx+___1e6fcch) = (float)FPOP();
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6fd0h) = (float)FPOP();
		if((int)edi <= 0) goto ___4e2afh;
		FPUSH(0.0);
		//fcomp   dword [edx+___1e702ah]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e2cah
		if(FPOP() < (double)F32(edx+___1e702ah)) goto ___4e2cah;
___4e2afh:
		if((int)D(esp+0xa0) >= 0) goto ___4e2dah;
		eax = D(esp+0x18);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e702ah]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e2dah
		if(FPOP() <= (double)F32(eax+___1e702ah)) goto ___4e2dah;
___4e2cah:
		eax = D(esp+0x18);
		D(eax+___1e6ee8h) = 0x1;
		goto ___4e2e8h;
___4e2dah:
		eax = D(esp+0x18);
		D(eax+___1e6ee8h) = 0x2;
___4e2e8h:
		if((int)D(esp+0x9c) <= 0) goto ___4e303h;
		eax = D(esp+0x18);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e702eh]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e31eh
		if(FPOP() < (double)F32(eax+___1e702eh)) goto ___4e31eh;
___4e303h:
		if((int)D(esp+0x9c) >= 0) goto ___4e32eh;
		eax = D(esp+0x18);
		FPUSH(0.0);
		//fcomp   dword [eax+___1e702eh]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e32eh
		if(FPOP() <= (double)F32(eax+___1e702eh)) goto ___4e32eh;
___4e31eh:
		eax = D(esp+0x18);
		D(eax+___1e6eech) = 0x1;
		goto ___4e33ch;
___4e32eh:
		eax = D(esp+0x18);
		D(eax+___1e6eech) = 0x2;
___4e33ch:
		eax = 0x35e*D(___243c60h);
		edx = D(eax+___1e6ee8h);
		if(edx != 1) goto ___4e35dh;
		eax = D(esp+0x18);
		if(edx == D(eax+___1e6ee8h)) goto ___4e386h;
___4e35dh:
		eax = 0x35e*D(___243c60h);
		edx = D(eax+___1e6eech);
		if(edx != 1) goto ___4e52ah;
		eax = D(esp+0x18);
		if(edx != D(eax+___1e6eech)) goto ___4e52ah;
___4e386h:
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0x18);
		FPUSH(F32(edx+___1e6f7ch));
		//fcomp   dword [eax+___1e6f7ch]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4e412h
		if(FPOP() <= (double)F32(eax+___1e6f7ch)) goto ___4e412h;
		eax = D(esp+0x18);
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)-(double)F32(eax+___1e6f7ch);
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
		FPUSH(F32(eax+___1e6fd4h));
		ST(0) = ST(0)+(double)F32(___18415dh);
		F32(eax+___1e6fd4h) = (float)FPOP();
		eax = D(esp+0x18);
		FPUSH(F32(eax+___1e6fd4h));
		ST(0) = ST(0)+(double)F32(___184159h);
		goto ___4e43eh;
___4e412h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6fd4h));
		ST(0) = ST(0)+(double)F32(___184159h);
		F32(eax+___1e6fd4h) = (float)FPOP();
		eax = D(esp+0x18);
		FPUSH(F32(eax+___1e6fd4h));
		ST(0) = ST(0)+(double)F32(___18415dh);
___4e43eh:
		F32(eax+___1e6fd4h) = (float)FPOP();
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0x18);
		FPUSH(F32(edx+___1e6f84h));
		//fcomp   dword [eax+___1e6f84h]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e48bh
		if(FPOP() < (double)F32(eax+___1e6f84h)) goto ___4e48bh;
		FPUSH(F32(edx+___1e6f84h));
		FPUSH(ST(0));
		ST(0) = ST(0)+F64(___184169h);
		eax = D(esp+0x18);
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6f84h) = (float)FPOP();
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = ST(0)+F64(___184161h);
		goto ___4e4b1h;
___4e48bh:
		FPUSH(F32(edx+___1e6f84h));
		ST(0) = ST(0)+F64(___184161h);
		eax = D(esp+0x18);
		F32(edx+___1e6f84h) = (float)FPOP();
		FPUSH(F32(eax+___1e6f84h));
		FPUSH(ST(0));
		ST(0) = ST(0)+F64(___184169h);
		ST(1) = ST(0); FPOP();
___4e4b1h:
		F32(eax+___1e6f84h) = (float)FPOP();
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0x18);
		FPUSH(F32(edx+___1e6f88h));
		//fcomp   dword [eax+___1e6f88h]
		//fnstsw  ax
		//sahf    
		//jb      short ___4e4feh
		if(FPOP() < (double)F32(eax+___1e6f88h)) goto ___4e4feh;
		FPUSH(F32(edx+___1e6f88h));
		FPUSH(ST(0));
		ST(0) = ST(0)+F64(___184169h);
		eax = D(esp+0x18);
		ST(1) = ST(0); FPOP();
		F32(edx+___1e6f88h) = (float)FPOP();
		FPUSH(F32(eax+___1e6f88h));
		ST(0) = ST(0)+F64(___184161h);
		goto ___4e524h;
___4e4feh:
		FPUSH(F32(edx+___1e6f88h));
		ST(0) = ST(0)+F64(___184161h);
		eax = D(esp+0x18);
		F32(edx+___1e6f88h) = (float)FPOP();
		FPUSH(F32(eax+___1e6f88h));
		FPUSH(ST(0));
		ST(0) = ST(0)+F64(___184169h);
		ST(1) = ST(0); FPOP();
___4e524h:
		F32(eax+___1e6f88h) = (float)FPOP();
___4e52ah:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6f7ch));
		eax = D(esp+0x18);
		ST(0) = ST(0)-(double)F32(eax+___1e6f7ch);
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
		FPUSH(F32(eax+___1e6f7ch));
		eax = D(esp+0x18);
		ST(0) = ST(0)-(double)F32(eax+___1e6f7ch);
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
		FPUSH(F32(eax+___1e6f7ch));
		eax = D(esp+0x18);
		ST(0) = ST(0)-(double)F32(eax+___1e6f7ch);
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
		FPUSH(F32(eax+___1e6f7ch));
		eax = D(esp+0x18);
		ST(0) = ST(0)-(double)F32(eax+___1e6f7ch);
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
		FPUSH(F32(eax+___1e6fd4h));
		ST(0) = ST(0)+(double)F32(esp+0x58);
		F32(eax+___1e6fd4h) = (float)FPOP();
		eax = D(esp+0x18);
		FPUSH(F32(eax+___1e6fd4h));
		ST(0) = ST(0)+(double)F32(esp+0x50);
		F32(eax+___1e6fd4h) = (float)FPOP();
___4e6fbh:
		eax ^= eax;
		edx = D(___243c60h);
		D(esp+0x4c) = eax;
		eax = 0x94*edx;
		if(D(eax+___1de5a4h) == 0) goto ___4e939h;
		eax = D(esp+0x18);
		if(D(eax+___1e6fdah) != 0) goto ___4e939h;
		edx = 0x35e*edx;
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = (int)ST(0);
		D(esp+0x20) = (int)FPOP();
		eax = D(esp+0x20);
		FPUSH(F32(edx+___1e6f88h));
		FPUSH(F32(edx+___1e6f84h));
		ST(0) = ST(0)+(double)F32(edx+___1e6f9ch);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6fa0h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		edx = D(esp+0x18);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x24) = (int)FPOP();
		D(esp+0x20) = (int)FPOP();
		FPUSH(F32(edx+___1e6f88h));
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
		if((int)esi >= 0x14) goto ___4e7e2h;
		esi = D(___243d74h);
		edi = D(esp+0x18);
		esi += D(edi+___1e6ee0h);
		edx += 0x14;
		esi += eax;
		eax = 0x28*edx;
		if(B(esi+eax+0x14) <= 3) goto ___4e7e2h;
		D(esp+0x4c) = 0x1;
___4e7e2h:
		edx = 0x35e*D(___243c60h);
		eax = D(esp+0x18);
		FPUSH(F32(eax+___1e6f84h));
		ST(0) = (int)ST(0);
		D(esp+0x20) = (int)FPOP();
		eax = D(esp+0x20);
		FPUSH(F32(edx+___1e6f88h));
		FPUSH(F32(edx+___1e6f84h));
		ST(0) = ST(0)+(double)F32(edx+___1e6f94h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)+(double)F32(edx+___1e6f98h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		edx = D(esp+0x18);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x24) = (int)FPOP();
		D(esp+0x20) = (int)FPOP();
		FPUSH(F32(edx+___1e6f88h));
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
		if((int)esi >= 0x14) goto ___4e8a1h;
		esi = D(___243d74h);
		edi = D(esp+0x18);
		esi += D(edi+___1e6ee0h);
		esi += eax;
		eax = edx+0x14;
		eax = 0x28*eax;
		if(B(esi+eax+0x14) <= 3) goto ___4e8a1h;
		D(esp+0x4c) = 0x1;
___4e8a1h:
		if(D(esp+0x4c) != 1) goto ___4e939h;
		eax = D(esp+0x18);
		FPUSH(F32(eax+___1e6fcch));
		ST(0) = ST(0)*ST(0);
		edx = D(esp+0x60);
		FPUSH(F32(eax+___1e6fd0h));
		ST(0) = ST(0)*ST(0);
		esi = D(edx+___1de59ch);
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
		esi = D(edx+___1de598h);
		esi -= eax;
		D(edx+___1de598h) = esi;
		if((int)esi >= 0) goto ___4e92ah;
		eax = edx;
		edx ^= edx;
		D(eax+___1de598h) = edx;
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
