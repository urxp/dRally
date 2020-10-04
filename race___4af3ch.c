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

typedef struct x2c_s {
    __DWORD__   __0;        // +00
    __DWORD__   __4;        // +04
    __DWORD__   __8;        // +08
    __DWORD__   __C;        // +0c
    __DWORD__   _10;        // +10
    __DWORD__   _14;        // +14
    __DWORD__   _18;        // +18
    __DWORD__   _1C;        // +1c
    __DWORD__   _20;        // +20
    __DWORD__   _24;        // +24
    __DWORD__   _28;        // +28
} x2c_t;

	extern xc50_t ___1f3b08h[];		// <0x1f3b08 - 0x1f4758)
	extern x2c_t ___240b48h[];		// <0x240b48 - 0x240b74)

	extern byte ___243d58h[];
	extern byte ___243d2ch[];
	extern byte ___243d28h[];
	extern byte ___243d60h[];
	extern byte ___243d78h[];
	extern byte ___243d04h[];
	extern byte ___243d30h[];
	extern byte ___243d54h[];
	extern byte ___243d10h[];
	extern byte ___243cf8h[];
	extern byte ___243d74h[];
	extern byte ___243d40h[];
	extern byte ___1e6f88h[];
	extern byte ___1e6f84h[];
	extern byte ___1e6edch[];
	extern byte ___183fb1h[];
	extern byte ___1e6cc8h[];
	extern byte ___1e6c1eh[];
	extern byte ___1e6b82h[];
	extern byte ___1f2488h[];
	extern byte ___1f248ch[];
	extern byte ___1df720h[];
	extern byte ___1df724h[];
	extern byte ___243c5ch[];
	extern byte ___1de920h[];
	extern byte ___1ded20h[];
	extern byte ___1ded1ch[];
	extern byte ___243c88h[];
	extern byte ___243c94h[];
	extern byte ___243d5ch[];

// REVERSE TRACK
void race___4af3ch(void){

	double 		d_tmp;
	dword 		eax, ebx, ecx, edx, edi, esi, ebp;
	byte 		esp[0x3c];
	int 		i, j, dim;
	x2c_t * 	p;
	byte 		b_tmp;
	double 		d1, d2, d3;


		ecx ^= ecx;
		goto ___4af74h;
___4af53h:
		edx = D(___243d58h);
		esi = edx+ecx;
		edx += ebx;
		eax ^= eax;
		edx--;
		L(eax) = B(esi);
		edx -= ecx;
		D(esp+0x38) = eax;
		L(eax) = B(edx);
		B(esi) = L(eax);
		L(eax) = B(esp+0x38);
		ecx++;
		B(edx) = L(eax);
___4af74h:
		edx = D(___243d2ch);
		ebx = D(___243d28h);
		ebx = ebx*edx;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		if((int)ecx < (int)eax) goto ___4af53h;
		ecx ^= ecx;
		goto ___4afb7h;
___4af96h:
		edx = D(___243d60h);
		esi = edx+ecx;
		edx += ebx;
		eax ^= eax;
		edx--;
		L(eax) = B(esi);
		edx -= ecx;
		D(esp+0x38) = eax;
		L(eax) = B(edx);
		B(esi) = L(eax);
		L(eax) = B(esp+0x38);
		ecx++;
		B(edx) = L(eax);
___4afb7h:
		esi = D(___243d2ch);
		ebx = D(___243d28h);
		ebx = ebx*esi;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		if((int)ecx < (int)eax) goto ___4af96h;
		ecx ^= ecx;
		goto ___4aff9h;
___4afd9h:
		esi = D(___243d78h);
		ebx += esi;
		eax ^= eax;
		ebx--;
		L(eax) = B(ecx+esi);
		ebx -= ecx;
		D(esp+0x38) = eax;
		L(eax) = B(ebx);
		B(ecx+esi) = L(eax);
		L(eax) = B(esp+0x38);
		ecx++;
		B(ebx) = L(eax);
___4aff9h:
		edi = D(___243d04h);
		ebx = D(___243d30h);
		ebx = ebx*edi;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		if((int)ecx < (int)eax) goto ___4afd9h;
		ecx ^= ecx;
		goto ___4b03ch;
___4b01bh:
		edx = D(___243d54h);
		esi = edx+ecx;
		edx += ebx;
		eax ^= eax;
		edx--;
		L(eax) = B(esi);
		edx -= ecx;
		D(esp+0x38) = eax;
		L(eax) = B(edx);
		B(esi) = L(eax);
		L(eax) = B(esp+0x38);
		ecx++;
		B(edx) = L(eax);
___4b03ch:
		ebp = D(___243d10h);
		ebx = D(___243cf8h);
		ebx = ebx*ebp;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		if((int)ecx < (int)eax) goto ___4b01bh;
		eax ^= eax;
		D(esp+0x1c) = eax;
___4b060h:
		esi = D(esp+0x1c);
		edx ^= edx;
___4b066h:
		ecx = D(___243d74h);
		ecx += esi;
		ebx = ecx+edx;
		eax ^= eax;
		ecx += 0x257ff;
		L(eax) = B(ebx);
		ecx -= edx;
		D(esp+0x38) = eax;
		L(eax) = B(ecx);
		B(ebx) = L(eax);
		L(eax) = B(esp+0x38);
		edx++;
		B(ecx) = L(eax);
		if((int)edx < 0x12c00) goto ___4b066h;
		edx = 0x125c0;
		ebp = D(esp+0x1c);
		ebx ^= ebx;
		D(esp+0x20) = edx;
		D(esp+0x28) = ebx;
___4b0a7h:
		esi = D(esp+0x28);
		edi = D(esp+0x20);
		edx ^= edx;
___4b0b1h:
		ecx = D(___243d74h);
		ecx += ebp;
		edx++;
		ebx = ecx+esi;
		eax ^= eax;
		L(eax) = B(edx+ebx-1);
		ecx += edi;
		D(esp+0x38) = eax;
		L(eax) = B(ecx+edx-1);
		B(edx+ebx-1) = L(eax);
		L(eax) = B(esp+0x38);
		B(ecx+edx-1) = L(eax);
		if((int)edx < 0x640) goto ___4b0b1h;
		esi = D(esp+0x28);
		ecx = D(esp+0x20);
		esi += 0x640;
		ecx -= 0x640;
		D(esp+0x28) = esi;
		D(esp+0x20) = ecx;
		if(esi != 0x9600) goto ___4b0a7h;
		eax = D(esp+0x1c);
		ebp = 0x251c0;
		D(esp+0x30) = eax;
		eax = 0x12c00;
		D(esp+0x24) = ebp;
		D(esp+0x2c) = eax;
___4b11fh:
		eax = D(esp+0x2c);
		ebp = D(esp+0x24);
		edx ^= edx;
		D(esp+0x34) = eax;
		esi = eax;
		ecx = ebp;
___4b131h:
		edi = D(esp+0x30);
		ebx = D(___243d74h);
		ebx += edi;
		edi = D(esp+0x34);
		edi += ebx;
		eax ^= eax;
		L(eax) = B(edx+edi);
		esi++;
		D(esp+0x38) = eax;
		L(eax) = B(ecx+ebx);
		edx++;
		B(esi+ebx-1) = L(eax);
		ebx += ebp;
		L(eax) = B(esp+0x38);
		ecx++;
		B(edx+ebx-1) = L(eax);
		if((int)edx < 0x640) goto ___4b131h;
		eax = D(esp+0x2c);
		ebp = D(esp+0x24);
		eax += 0x640;
		ebp -= 0x640;
		D(esp+0x2c) = eax;
		D(esp+0x24) = ebp;
		if(eax != 0x1c200) goto ___4b11fh;
		ebx = D(esp+0x1c);
		ebx += 0x25800;
		D(esp+0x1c) = ebx;
		if(ebx != 0x96000) goto ___4b060h;
		edi ^= edi;
___4b1a6h:
		esi = edi;
		edx ^= edx;
___4b1aah:
		ebx = D(___243d40h);
		ebx += esi;
		ecx = ebx+edx;
		eax ^= eax;
		ebx += 0xff;
		L(eax) = B(ecx);
		ebx -= edx;
		D(esp+0x38) = eax;
		L(eax) = B(ebx);
		B(ecx) = L(eax);
		L(eax) = B(esp+0x38);
		edx++;
		B(ebx) = L(eax);
		if((int)edx < 0x80) goto ___4b1aah;
		edi += 0x100;
		if(edi != 0x2400) goto ___4b1a6h;
		esi = D(___243d2ch);
		ecx = D(___243d28h);
		ebx ^= ebx;
		edx ^= edx;
		esi--;
		ecx--;
		edi ^= edi;
___4b1fah:
		FPUSH(F32(edx+___1e6f88h));
		FPUSH(F32(edx+___1e6f84h));
		ST(0) = (int)ST(0);
		eax = ecx;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x38) = (int)FPOP();
		ebp = D(esp+0x38);
		D(esp+0x38) = (int)FPOP();
		eax -= ebp;
		ebp = D(esp+0x38);
		D(esp+0x4) = eax;
		eax = esi;
		FPUSH((int)D(esp+0x4));
		eax -= ebp;
		F32(edx+___1e6f84h) = (float)FPOP();
		D(esp+0x4) = eax;
		eax = D(edx+___1e6edch);
		FPUSH((int)D(esp+0x4));
		eax -= 0x30;
		F32(edx+___1e6f88h) = (float)FPOP();
		D(esp+0x38) = eax;
		D(edx+___1e6edch) = eax;
		if((int)edi <= (int)eax) goto ___4b270h;
		if((int)edi <= (int)eax) goto ___4b263h;
		eax = 0-eax;
___4b263h:
		ebp = 0x5f;
		ebp -= eax;
		D(edx+___1e6edch) = ebp;
___4b270h:
		eax = 0x640*D(edx+___1e6edch);
		FPUSH(F64(___183fb1h));
		FPUSH((int)D(edx+___1e6edch));
		ST(0) = ST(0)*ST(1);
		FPUSH((int)D(edx+___1e6edch));
		edx += 0x35e;
		ST(2) = ST(2)*ST(0); FPOP();
		F32(edx+___1e6cc8h) = (float)FPOP();
		F32(edx+___1e6c1eh) = (float)FPOP();
		eax += ebx;
		ebx += 0x25800;
		D(edx+___1e6b82h) = eax;
		if(edx != 0xd78) goto ___4b1fah;
		ebx = D(___243d28h);
		ecx = D(___243d2ch);
		edx ^= edx;
		ebx--;
		ecx--;
		esi ^= esi;
___4b2ceh:
		eax = D(edx+___1f2488h);
		D(esp+0x38) = eax;
		if((int)esi >= (int)eax) goto ___4b2eah;
		edi = D(esp+0x38);
		eax = ebx;
		eax -= edi;
		D(edx+___1f2488h) = eax;
___4b2eah:
		eax = D(edx+___1f248ch);
		D(esp+0x38) = eax;
		if((int)esi >= (int)eax) goto ___4b306h;
		edi = D(esp+0x38);
		eax = ecx;
		eax -= edi;
		D(edx+___1f248ch) = eax;
___4b306h:
		edx += 0x120;
		if(edx != 0x1200) goto ___4b2ceh;
		ebx = D(___243d28h);
		ecx = D(___243d2ch);
		edx ^= edx;
		ebx--;
		ecx--;
		edi = 0xfffffff0;
		esi ^= esi;
___4b32bh:
		eax = D(edx+___1df720h);
		D(esp+0x38) = eax;
		if((int)esi >= (int)eax) goto ___4b349h;
		ebp = D(esp+0x38);
		eax = ebx;
		eax -= ebp;
		eax += edi;
		D(edx+___1df720h) = eax;
___4b349h:
		eax = D(edx+___1df724h);
		D(esp+0x38) = eax;
		if((int)esi >= (int)eax) goto ___4b367h;
		ebp = D(esp+0x38);
		eax = ecx;
		eax -= ebp;
		eax += edi;
		D(edx+___1df724h) = eax;
___4b367h:
		edx += 0x20;
		if(edx != 0x280) goto ___4b32bh;
		if((int)D(___243c5ch) <= 0) goto ___4b3b9h;
		ecx = D(___243d2ch);
		ebx = D(___243c5ch);
		esi = D(___243d28h);
		eax ^= eax;
		ecx--;
		ebx <<= 0x2;
		esi--;
___4b394h:
		edx = esi;
		edx -= D(eax+___1de920h);
		ebp = D(eax+___1ded20h);
		D(eax+___1de920h) = edx;
		edx = ecx;
		eax += 0x4;
		edx -= ebp;
		D(eax+___1ded1ch) = edx;
		if((int)eax < (int)ebx) goto ___4b394h;
___4b3b9h:

		if((int)D(___243c88h) > 0){

			eax = D(___243d2ch);
			ebp = D(___243d28h);
			eax--;
			esi ^= esi;
			D(esp+0xc) = eax;
			eax = D(___243c88h);
			ebp--;
			edi = 0xc50*eax;

			while(1){

				ecx = esi;
				eax = esi;
				ebx = D(esi+(void *)&___1f3b08h->___0);
				edx ^= edx;

				if((int)ebx > 0){
			
					while(1){

						ebx = D(eax+(void *)&___1f3b08h->___8);
						ebx = 0-ebx;
						D(eax+(void *)&___1f3b08h->___8) = ebx;
						edx++;
						ebx = D(ecx+(void *)&___1f3b08h->___0);
						eax += 0x4;
					
						if((int)edx >= (int)ebx) break;
					}
				}

				ecx = esi;
				eax = esi;
				ebx = D(esi+(void *)&___1f3b08h->___0);
				edx ^= edx;

				if((int)ebx > 0){

					while(1){

						ebx = D(eax+(void *)&___1f3b08h->_134);
						ebx = 0-ebx;
						D(eax+(void *)&___1f3b08h->_134) = ebx;
						edx++;
						ebx = D(ecx+(void *)&___1f3b08h->___0);
						eax += 0x4;
					
						if((int)edx >= (int)ebx) break;
					}
				}

				eax = D(ecx+(void *)&___1f3b08h->_390);
				FPUSH((int)D(ecx+(void *)&___1f3b08h->_38C));
				eax = 0-eax;
				FPUSH(ST(0));
				D(ecx+(void *)&___1f3b08h->_38C) = eax;
				ST(0) = -1.0*ST(0);
				ST(0) = (int)ST(0);
				D(esp+0x4) = (int)FPOP();
				eax = D(esp+0x4);
				D(ecx+(void *)&___1f3b08h->_390) = eax;
				eax = D(ecx+(void *)&___1f3b08h->_398);
				FPUSH((int)D(ecx+(void *)&___1f3b08h->_394));
				eax = 0-eax;
				ST(1) = ST(0); FPOP();
				D(ecx+(void *)&___1f3b08h->_394) = eax;
				ST(0) = -1.0*ST(0);
				ST(0) = (int)ST(0);
				D(esp+0x4) = (int)FPOP();
				eax = D(esp+0x4);
				edx = D(ecx+(void *)&___1f3b08h->_9DC);
				D(ecx+(void *)&___1f3b08h->_398) = eax;
				eax = ebp;
				eax -= edx;
				ebx = D(ecx+(void *)&___1f3b08h->_9E0);
				D(ecx+(void *)&___1f3b08h->_9DC) = eax;
				eax = D(esp+0xc);
				eax -= ebx;
				esi += 0xc50;
				D(ecx+(void *)&___1f3b08h->_9E0) = eax;
			
				if((int)esi >= (int)edi) break;
			}
		}

	i = -1;
	while(++i < (int)D(___243c94h)){

		p = &___240b48h[i];

		p->__C = 0x100*(D(___243d28h)-1)-p->__C-p->__0*p->_14;
		p->_10 = 0x100*(D(___243d2ch)-1)-p->_10-p->__4*p->_14;

		dim = p->__0*p->__4;
		eax = dim/2;
		j = -1;
		while(++j < (int)eax){

			b_tmp = B(D(___243d5ch)+p->__8+j);
			B(D(___243d5ch)+p->__8+j) = B(D(___243d5ch)+dim+p->__8-j-1);
			B(D(___243d5ch)+dim+p->__8-j-1) = b_tmp;
		}
	}

	return;
}
