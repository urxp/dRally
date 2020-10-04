#include "drally.h"

	extern byte ___243c60h[];
	extern byte ___1e6f7ch[];
	extern byte ___183fb9h[];
	extern byte ___183fbdh[];
	extern byte ___183fc5h[];
	extern byte ___183fcdh[];
	extern byte ___243cf4h[];
	extern byte ___243cfch[];
	extern byte ___1e6f84h[];
	extern byte ___1e6f88h[];
	extern byte ___243d74h[];
	extern byte ___1e6ee0h[];
	extern byte ___1e7056h[];
	extern byte ___1e6fdah[];
	extern byte ___183fd5h[];
	extern byte ___2438d0h[];
	extern byte ___1df520h[];
	extern byte ___1df524h[];
	extern byte ___1e7062h[];
	extern byte ___1e7052h[];
	extern byte ___1e7066h[];
	extern byte ___183fddh[];
	extern byte ___183fe9h[];
	extern byte ___183fe1h[];
	extern byte ___243d28h[];
	extern byte ___243d2ch[];
	extern byte ___243cf8h[];
	extern byte ___243d54h[];
	extern byte ___243ca8h[];
	extern byte ___1e6ef0h[];
	extern byte ___1e721eh[];
	extern byte ___1de598h[];
	extern byte ___1e704eh[];
	extern byte ___243d78h[];
	extern byte ___243d30h[];
	extern byte ___1de584h[];
	extern byte ___1e6f80h[];
	extern byte ___242178h[];
	extern byte ___242578h[];
	extern byte ___1de594h[];
	extern byte ___241d78h[];
	extern byte ___1e6f78h[];
	extern byte ___183fedh[];
	extern byte ___1e7072h[];
	extern byte ___183ff5h[];
	extern byte ___183ffdh[];
	extern byte ___184005h[];
	extern byte ___1e722ah[];

int rand_watcom106(void);
double dR_Math_sin(double);
double dR_Math_cos(double);

// RACE CARS AI
void race___4b62ch(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte	esp[0x60];


		esi = 0x35e*D(___243c60h);
		FPUSH(F32(esi+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___183fb9h);
		ST(0) = ST(0)*F64(___183fbdh);
		ST(0) = ST(0)/F64(___183fc5h);
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(F64(___183fcdh));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		edi = D(___243cf4h);
		edx ^= edx;
		ecx ^= ecx;
		D(___243cfch) = edx;
		FPUSH(F32(esi+___1e6f84h));
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(esi+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x50) = (int)FPOP();
		ST(0) = (int)ST(0);
		D(esp+0x54) = (int)FPOP();
		if((int)edi <= 0) goto ___4b76ch;
		eax ^= eax;
___4b6bbh:
		if(ecx == D(___243c60h)) goto ___4b758h;
		FPUSH(F32(eax+___1e6f84h));
		FPUSH(F32(eax+___1e6f88h));
		ebx = D(esp+0x50);
		edx = D(esp+0x54);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x14) = (int)FPOP();
		D(esp+0x10) = (int)FPOP();
		edi = D(esp+0x14);
		ebp = D(esp+0x10);
		ebx -= edi;
		edx -= ebp;
		if((int)ebx >= 0) goto ___4b709h;
		edi = ebx;
		edi = 0-edi;
		goto ___4b70bh;
___4b709h:
		edi = ebx;
___4b70bh:
		if((int)edi >= 0x14) goto ___4b758h;
		if((int)edx >= 0) goto ___4b71ah;
		edi = edx;
		edi = 0-edi;
		goto ___4b71ch;
___4b71ah:
		edi = edx;
___4b71ch:
		if((int)edi >= 0x14) goto ___4b758h;
		edx += 0x14;
		edx = 0x28*edx;
		edi = D(___243d74h);
		edi += D(eax+___1e6ee0h);
		ebx += edi;
		if(B(edx+ebx+0x14) <= 3) goto ___4b758h;
		if(D(esi+___1e7056h) != 0) goto ___4b758h;
		if(D(esi+___1e6fdah) != 0) goto ___4b758h;
		D(esi+___1e7056h) = 0x64;
___4b758h:
		ebp = D(___243cf4h);
		ecx++;
		eax += 0x35e;
		if((int)ecx < (int)ebp) goto ___4b6bbh;
___4b76ch:
		edi = 0x35e*D(___243c60h);
		FPUSH(F32(edi+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___183fb9h);
		ST(0) = ST(0)*F64(___183fbdh);
		ST(0) = ST(0)/F64(___183fc5h);
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(F64(___183fd5h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		edx = D(___2438d0h);
		FPUSH(F32(edi+___1e6f84h));
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(edi+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x3c) = (int)FPOP();
		ST(0) = (int)ST(0);
		D(esp+0x28) = (int)FPOP();
		if((int)edx <= 0) goto ___4b832h;
		esi = edx;
		ecx = edi;
		eax ^= eax;
		esi <<= 0x4;
___4b7e1h:
		edx = D(esp+0x3c);
		ebx = D(eax+___1df520h);
		edi = D(eax+___1df524h);
		edx -= ebx;
		ebx = D(esp+0x28);
		ebx -= edi;
		if((int)edx >= 0) goto ___4b7ffh;
		edx = 0-edx;
___4b7ffh:
		if((int)edx >= 0x14) goto ___4b82bh;
		if((int)ebx >= 0) goto ___4b80ah;
		ebx = 0-ebx;
___4b80ah:
		if((int)ebx >= 0x14) goto ___4b82bh;
		if(D(ecx+___1e7056h) != 0) goto ___4b82bh;
		if(D(ecx+___1e6fdah) != 0) goto ___4b82bh;
		D(ecx+___1e7056h) = 0x3c;
___4b82bh:
		eax += 0x10;
		if((int)eax < (int)esi) goto ___4b7e1h;
___4b832h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e7062h) <= 5) goto ___4b858h;
		if(D(eax+___1e7052h) != 0) goto ___4b858h;
		D(eax+___1e7052h) = 0x64;
___4b858h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e7066h) <= 3) goto ___4b87eh;
		if(D(eax+___1e7056h) != 0) goto ___4b87eh;
		D(eax+___1e7056h) = 0x64;
___4b87eh:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___183fb9h);
		FPUSH(ST(0));
		ST(0) = ST(0)+(double)F32(___183fddh);
		FPUSH(F64(___183fbdh));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		FPUSH(F64(___183fc5h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)/ST(1);
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+(double)F32(___183fe9h);
		ST(3) = ST(3)*ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(0)/ST(1); FPOP();
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		FPUSH(F64(___183fe1h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = ST(0)*ST(1);
		eax = D(___243d28h);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		eax--;
		FPUSH(F32(edx+___1e6f84h));
		FPUSH(F32(edx+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+ST(1);
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
		ST(0) = ST(0)+ST(3);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(3) = ST(3)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
		D(esp+0x24) = (int)FPOP();
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		D(esp+0x18) = (int)FPOP();
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x1c) = (int)FPOP();
		ecx = D(esp+0x24);
		D(esp+0x20) = (int)FPOP();
		if((int)eax >= (int)ecx) goto ___4b942h;
		D(esp+0x24) = eax;
___4b942h:
		if((int)D(esp+0x24) >= 0) goto ___4b94fh;
		edi ^= edi;
		D(esp+0x24) = edi;
___4b94fh:
		eax = D(___243d28h);
		ebp = D(esp+0x18);
		eax--;
		if((int)eax >= (int)ebp) goto ___4b961h;
		D(esp+0x18) = eax;
___4b961h:
		if((int)D(esp+0x18) >= 0) goto ___4b96eh;
		edx ^= edx;
		D(esp+0x18) = edx;
___4b96eh:
		eax = D(___243d2ch);
		ebx = D(esp+0x1c);
		eax--;
		if((int)eax >= (int)ebx) goto ___4b980h;
		D(esp+0x1c) = eax;
___4b980h:
		if((int)D(esp+0x1c) >= 0) goto ___4b98dh;
		esi ^= esi;
		D(esp+0x1c) = esi;
___4b98dh:
		eax = D(___243d2ch);
		edi = D(esp+0x20);
		eax--;
		if((int)eax >= (int)edi) goto ___4b99fh;
		D(esp+0x20) = eax;
___4b99fh:
		if((int)D(esp+0x20) >= 0) goto ___4b9ach;
		eax ^= eax;
		D(esp+0x20) = eax;
___4b9ach:
		ebx = D(esp+0x1c);
		ecx = D(___243cf8h);
		ebx = (int)ebx>>0x2;
		ebx = ebx*ecx;
		edx = D(esp+0x24);
		eax = D(___243d54h);
		edx = (int)edx>>0x2;
		edx += eax;
		L(edx) = B(edx+ebx);
		B(esp+0x5c) = L(edx);
		edx = D(esp+0x18);
		edx = (int)edx>>0x2;
		edx += eax;
		eax = D(esp+0x20);
		eax = (int)eax>>0x2;
		eax = eax*ecx;
		ebx = 0x35e*D(___243c60h);
		L(eax) = B(edx+eax);
		ebp ^= ebp;
		B(esp+0x58) = L(eax);
		eax = D(___243ca8h);
		ecx ^= ecx;
		edx = 0x212;
		D(ebx+4*eax+___1e6ef0h) = ebp;
		eax = 0x230;
___4ba0fh:
		ebp = D(ebx+___1e721eh);
		if((int)edx >= (int)ebp) goto ___4ba22h;
		if((int)eax <= (int)ebp) goto ___4ba22h;
		ecx = 0x1;
___4ba22h:
		eax -= 0x3c;
		edx -= 0x3c;
		if((int)eax >= 0x3c) goto ___4ba0fh;
		if(ecx == 0) goto ___4ba65h;
		if(D(ebx+___1e6fdah) != 0) goto ___4ba65h;
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		if((int)D(4*eax+___1de598h) <= 0) goto ___4ba65h;
		eax = D(___243ca8h);
		B(ebx+4*eax+___1e6ef0h) |= 4;
___4ba65h:
		edx = 0x212;
		eax = 0x1f4;
		edi = D(___243c60h);
		ecx ^= ecx;
		ebx = 0x35e*edi;
___4ba7dh:
		esi = D(ebx+___1e721eh);
		if((int)eax >= (int)esi) goto ___4ba90h;
		if((int)edx <= (int)esi) goto ___4ba90h;
		ecx = 0x1;
___4ba90h:
		edx -= 0x3c;
		eax -= 0x3c;
		if((int)edx >= 0x1e) goto ___4ba7dh;
		if(ecx == 0) goto ___4bad3h;
		if(D(ebx+___1e6fdah) != 0) goto ___4bad3h;
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		if((int)D(eax*4+___1de598h) <= 0) goto ___4bad3h;
		eax = D(___243ca8h);
		B(ebx+4*eax+___1e6ef0h) |= 8;
___4bad3h:
		edx = 0x35e*D(___243c60h);
		ebx = D(edx+___1e704eh);
		if((int)ebx >= 0x64) goto ___4bccch;
		FPUSH(F32(edx+___1e6f84h));
		FPUSH(F32(edx+___1e6f88h));
		ebx = D(___243d78h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0x10) = (int)FPOP();
		eax = D(esp+0x10);
		ST(0) = (int)ST(0);
		eax = (int)eax>>0x2;
		D(esp+0x10) = (int)FPOP();
		ebx += eax;
		eax = D(esp+0x10);
		esi = D(___243d30h);
		eax = (int)eax>>0x2;
		eax = eax*esi;
		L(ebx) = B(ebx+eax);
		L(eax) = 0x10;
		L(eax) -= B(esp+0x5c);
		H(ecx) = B(esp+0x58);
		B(esp+0x5c) = L(eax);
		L(eax) = 0x10;
		L(eax) -= H(ecx);
		ecx = D(___243c60h);
		B(esp+0x58) = L(eax);
		eax = 8*ecx;
		eax += ecx;
		eax <<= 0x2;
		eax += ecx;
		FPUSH(0.0);
		ebx &= 0xff;
		//fcomp   dword [eax*4+___1de584h]
		//fnstsw  ax
		//sahf    
		//jb      short ___4bb7ch
		if(FPOP() < (double)F32(4*eax+___1de584h)) goto ___4bb7ch;
		if((int)D(edx+___1e6f80h) <= 0x3f000000) goto ___4bbf3h;
___4bb7ch:
		edx = 0x35e*D(___243c60h);
		eax = D(___243ca8h);
		eax <<= 0x2;
		ecx = D(edx+___1e7056h);
		eax += edx;
		if(ecx != 0) goto ___4bbb1h;
		if(B(esp+0x5c) <= 9) goto ___4bba8h;
		B(eax+___1e6ef0h) |= 8;
___4bba8h:
		if(B(esp+0x58) >= 7) goto ___4bbf3h;
		goto ___4bbdch;
___4bbb1h:
		ecx ^= ecx;
		edx = D(ebx*4+___242178h);
		L(ecx) = B(esp+0x5c);
		edx++;
		if((int)ecx <= (int)edx) goto ___4bbcah;
		B(eax+___1e6ef0h) |= 8;
___4bbcah:
		edx ^= edx;
		eax = D(ebx*4+___242178h);
		L(edx) = B(esp+0x58);
		eax--;
		if((int)edx >= (int)eax) goto ___4bbf3h;
___4bbdch:
		edx = 0x35e*D(___243c60h);
		eax = D(___243ca8h);
		B(edx+4*eax+___1e6ef0h) |= 4;
___4bbf3h:
		eax = rand_watcom106();
		edx = eax;
		ecx = 0x2;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		if(edx != 0) goto ___4bc4bh;
		ebp = D(___243c60h);
		ecx = 0x35e*ebp;
		if((int)D(ecx+___1e7066h) <= 3) goto ___4bc4bh;
		if(D(ecx+___1e6fdah) != 0) goto ___4bc4bh;
		eax = 8*ebp;
		eax += ebp;
		eax <<= 0x2;
		eax += ebp;
		if((int)D(eax*4+___1de598h) <= 0) goto ___4bc4bh;
		eax = D(___243ca8h);
		B(ecx+4*eax+___1e6ef0h) |= 8;
___4bc4bh:
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		edx += eax;
		edx <<= 0x2;
		edi = D(___243c60h);
		FPUSH(F32(edx+___1de584h));
		edx = 0x35e*edi;
		ST(0) = ST(0)*(double)F32(ebx*4+___242578h);
		//fcomp   dword [edx+___1e6f80h]
		//fnstsw  ax
		//sahf    
		//jbe     short ___4bc9ch
		if(FPOP() <= (double)F32(edx+___1e6f80h)) goto ___4bc9ch;
		if(D(edx+___1e7052h) != 0) goto ___4bc9ch;
		eax = D(___243ca8h);
		B(edx+4*eax+___1e6ef0h) |= 1;
___4bc9ch:
		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH(F32(eax*4+___1de594h));
		eax = 0x35e*edx;
		ST(0) = ST(0)*(double)F32(ebx*4+___241d78h);
		F32(eax+___1e6f78h) = (float)FPOP();
		goto ___4bd35h;
___4bccch:
		if((int)ebx <= 0x94) goto ___4bcedh;
		if((int)D(edx+___1e6f80h) <= 0x3f000000) goto ___4bcedh;
		eax = D(___243ca8h);
		B(edx+eax*4+___1e6ef0h) |= 0x2;
___4bcedh:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e704eh) >= 0x94) goto ___4bd11h;
		edx = D(___243ca8h);
		B(eax+edx*4+___1e6ef0h) |= 0x4;
___4bd11h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e7052h) <= 0) goto ___4bd35h;
		edx = D(___243ca8h);
		D(eax+4*edx+___1e6ef0h) = 2;
___4bd35h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e7056h) <= 0) goto ___4bd56h;
		edx = D(___243ca8h);
		B(eax+edx*4+___1e6ef0h) |= 0x10;
___4bd56h:
		eax = 0x35e*D(___243c60h);
		edi = D(eax+___1e704eh);
		if((int)edi <= 0) goto ___4bd73h;
		ebp = edi-1;
		D(eax+___1e704eh) = ebp;
___4bd73h:
		eax = 0x35e*D(___243c60h);
		ebx = D(eax+___1e7052h);
		if((int)ebx <= 0) goto ___4bd90h;
		ecx = ebx-1;
		D(eax+___1e7052h) = ecx;
___4bd90h:
		eax = 0x35e*D(___243c60h);
		edi = D(eax+___1e7056h);
		if((int)edi <= 0) goto ___4bdadh;
		ebp = edi-1;
		D(eax+___1e7056h) = ebp;
___4bdadh:
		esi = 0x35e*D(___243c60h);
		FPUSH(F32(esi+___1e6f7ch));
		ST(0) = ST(0)*F64(___183fbdh);
		ST(0) = ST(0)/F64(___183fc5h);
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(F64(___183fedh));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		ebx = D(___243cf4h);
		edx ^= edx;
		FPUSH(F32(esi+___1e6f84h));
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(esi+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x38) = (int)FPOP();
		ST(0) = (int)ST(0);
		D(esp+0x4c) = (int)FPOP();
		if((int)ebx <= 0) goto ___4beb7h;
		edi = D(___243ca8h);
		eax ^= eax;
		edi <<= 0x2;
___4be24h:
		if(edx == D(___243c60h)) goto ___4bea3h;
		FPUSH(F32(eax+___1e6f84h));
		FPUSH(F32(eax+___1e6f88h));
		ebx = D(esp+0x38);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x14) = (int)FPOP();
		D(esp+0x10) = (int)FPOP();
		ecx = D(esp+0x14);
		ebp = D(esp+0x10);
		ebx -= ecx;
		ecx = D(esp+0x4c);
		ecx -= ebp;
		if((int)ebx >= 0) goto ___4be6eh;
		ebx = 0-ebx;
___4be6eh:
		if((int)ebx >= 0x14) goto ___4bea3h;
		if((int)ecx >= 0) goto ___4be79h;
		ecx = 0-ecx;
___4be79h:
		if((int)ecx >= 0x14) goto ___4bea3h;
		if(D(esi+___1e7072h) != 0) goto ___4bea3h;
		L(ebx) = B(edi+esi+___1e6ef0h);
		L(ebx) |= 0x40;
		ecx = 0x15e;
		B(edi+esi+___1e6ef0h) = L(ebx);
		D(esi+___1e7072h) = ecx;
___4bea3h:
		ebp = D(___243cf4h);
		edx++;
		eax += 0x35e;
		if((int)edx < (int)ebp) goto ___4be24h;
___4beb7h:
		eax = 0x35e*D(___243c60h);
		ebx = D(eax+___1e7072h);
		if((int)ebx <= 0) goto ___4bed4h;
		ecx = ebx-1;
		D(eax+___1e7072h) = ecx;
___4bed4h:
		ebx = 0x35e*D(___243c60h);
		FPUSH(F32(ebx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___183fb9h);
		ST(0) = ST(0)*F64(___183fbdh);
		ST(0) = ST(0)/F64(___183fc5h);
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(F64(___183ff5h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		edi = D(___243cf4h);
		edx ^= edx;
		FPUSH(F32(ebx+___1e6f84h));
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(ebx+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x34) = (int)FPOP();
		ST(0) = (int)ST(0);
		D(esp+0x48) = (int)FPOP();
		if((int)edi <= 0) goto ___4bfc0h;
		esi = D(___243ca8h);
		esi <<= 0x2;
		eax ^= eax;
		esi += ebx;
___4bf53h:
		if(edx == D(___243c60h)) goto ___4bfb0h;
		FPUSH(F32(eax+___1e6f84h));
		FPUSH(F32(eax+___1e6f88h));
		ecx = D(esp+0x34);
		ebx = D(esp+0x48);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x14) = (int)FPOP();
		D(esp+0x10) = (int)FPOP();
		edi = D(esp+0x14);
		ebp = D(esp+0x10);
		ecx -= edi;
		ebx -= ebp;
		if((int)ecx >= 0) goto ___4bf99h;
		ecx = 0-ecx;
___4bf99h:
		if((int)ecx >= 0x14) goto ___4bfb0h;
		if((int)ebx >= 0) goto ___4bfa4h;
		ebx = 0-ebx;
___4bfa4h:
		if((int)ebx >= 0x14) goto ___4bfb0h;
		B(esi+___1e6ef0h) |= 0x20;
___4bfb0h:
		edi = D(___243cf4h);
		edx++;
		eax += 0x35e;
		if((int)edx < (int)edi) goto ___4bf53h;
___4bfc0h:
		ebx = 0x35e*D(___243c60h);
		FPUSH(F32(ebx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___183fb9h);
		ST(0) = ST(0)*F64(___183fbdh);
		ST(0) = ST(0)/F64(___183fc5h);
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(F64(___183ffdh));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		edx ^= edx;
		eax = D(___243cf4h);
		FPUSH(F32(ebx+___1e6f84h));
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(ebx+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x30) = (int)FPOP();
		ST(0) = (int)ST(0);
		D(esp+0x44) = (int)FPOP();
		if((int)eax <= 0) goto ___4c0abh;
		esi = D(___243ca8h);
		esi <<= 0x2;
		eax ^= eax;
		esi += ebx;
___4c03eh:
		if(edx == D(___243c60h)) goto ___4c09bh;
		FPUSH(F32(eax+___1e6f84h));
		FPUSH(F32(eax+___1e6f88h));
		ecx = D(esp+0x30);
		ebx = D(esp+0x44);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x14) = (int)FPOP();
		D(esp+0x10) = (int)FPOP();
		ebp = D(esp+0x14);
		edi = D(esp+0x10);
		ecx -= ebp;
		ebx -= edi;
		if((int)ecx >= 0) goto ___4c084h;
		ecx = 0-ecx;
___4c084h:
		if((int)ecx >= 0x14) goto ___4c09bh;
		if((int)ebx >= 0) goto ___4c08fh;
		ebx = 0-ebx;
___4c08fh:
		if((int)ebx >= 0x14) goto ___4c09bh;
		B(esi+___1e6ef0h) |= 0x20;
___4c09bh:
		ebx = D(___243cf4h);
		edx++;
		eax += 0x35e;
		if((int)edx < (int)ebx) goto ___4c03eh;
___4c0abh:
		edx = 0x35e*D(___243c60h);
		FPUSH(F32(edx+___1e6f7ch));
		ST(0) = ST(0)+(double)F32(___183fb9h);
		ST(0) = ST(0)*F64(___183fbdh);
		ST(0) = ST(0)/F64(___183fc5h);
		FPUSH(ST(0));
		ST(0) = dR_Math_sin(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = dR_Math_cos(ST(0));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		FPUSH(F64(___184005h));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)*ST(0); FPOP();
		esi = D(___243cf4h);
		eax ^= eax;
		FPUSH(F32(edx+___1e6f84h));
		ST(2) = ST(2)+ST(0); FPOP();
		FPUSH(F32(edx+___1e6f88h));
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
		ST(1) = ST(1)+ST(0); FPOP();
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x2c) = (int)FPOP();
		ST(0) = (int)ST(0);
		D(esp+0x40) = (int)FPOP();
		if((int)esi <= 0) goto ___4c198h;
		esi = D(___243ca8h);
		esi <<= 0x2;
		esi += edx;
		edx ^= edx;
___4c12ah:
		if(eax == D(___243c60h)) goto ___4c187h;
		FPUSH(F32(edx+___1e6f84h));
		FPUSH(F32(edx+___1e6f88h));
		ecx = D(esp+0x2c);
		ebx = D(esp+0x40);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x10) = (int)FPOP();
		D(esp+0x14) = (int)FPOP();
		ebp = D(esp+0x10);
		edi = D(esp+0x14);
		ecx -= ebp;
		ebx -= edi;
		if((int)ecx >= 0) goto ___4c170h;
		ecx = 0-ecx;
___4c170h:
		if((int)ecx >= 0x14) goto ___4c187h;
		if((int)ebx >= 0) goto ___4c17bh;
		ebx = 0-ebx;
___4c17bh:
		if((int)ebx >= 0x14) goto ___4c187h;
		B(esi+___1e6ef0h) |= 0x20;
___4c187h:
		ebp = D(___243cf4h);
		eax++;
		edx += 0x35e;
		if((int)eax < (int)ebp) goto ___4c12ah;
___4c198h:
		eax = 0x35e*D(___243c60h);
		if(D(eax+___1e7056h) != 0x46) goto ___4c1d4h;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0x5;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		if(edx != 0) goto ___4c1d4h;
		eax = 0x35e*D(___243c60h);
		D(eax+___1e722ah) = 0x1;
___4c1d4h:
		eax = 0x35e*D(___243c60h);
		ebp = D(eax+___1e7056h);
		if(ebp != 0) goto ___4c1eeh;
		D(eax+___1e722ah) = ebp;
___4c1eeh:
		eax = 0x35e*D(___243c60h);
		if(D(eax+___1e722ah) != 1) goto ___4c20fh;
		edx = D(___243ca8h);
		B(eax+edx*4+___1e6ef0h) |= 0x42;
___4c20fh:
		return;
}
