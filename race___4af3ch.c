#include "drally.h"
#include "drally_structs_free.h"

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

	extern __POINTER__ ___243d58h;
	extern __BYTE__ ___243d2ch[];
	extern __BYTE__ ___243d28h[];
	extern __POINTER__ ___243d60h;
	extern __POINTER__ ___243d78h;
	extern __BYTE__ ___243d04h[];
	extern __BYTE__ ___243d30h[];
	extern __POINTER__ ___243d54h;
	extern __BYTE__ ___243d10h[];
	extern __BYTE__ ___243cf8h[];
	extern __POINTER__ ___243d74h;
	extern __POINTER__ ___243d40h;
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___1f2488h[];
	extern __BYTE__ ___1df720h[];
	extern __BYTE__ ___243c5ch[];
	extern __BYTE__ ___1de920h[];
	extern __BYTE__ ___1ded20h[];
	extern __BYTE__ ___243c88h[];
	extern __BYTE__ ___243c94h[];
	extern __POINTER__ ___243d5ch;

static void helper00(__POINTER__ ptr, __DWORD__ dim){

	int		n;

	n = -1;
	while(++n < dim/2) switch_b(ptr+n, ptr+dim-n-1);
}


// REVERSE TRACK
void race___4af3ch(void){

	double 		d_tmp;
	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[0x3c];
	int 		i, j, dim, m, n;
	x2c_t * 	p;
	__BYTE__ 		b_tmp;
	double 		d1, d2, d3;
	__POINTER__ 		esip;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	helper00(___243d58h, D(___243d28h)*D(___243d2ch));
	helper00(___243d60h, D(___243d28h)*D(___243d2ch));
	helper00(___243d78h, D(___243d30h)*D(___243d04h));
	helper00(___243d54h, D(___243cf8h)*D(___243d10h));

	D(esp+0x1c) = 0;
	while(1){

		edx = 0;

		while(1){

			b_tmp =  B(___243d74h+D(esp+0x1c)+edx);
			B(___243d74h+D(esp+0x1c)+edx) = B(___243d74h+D(esp+0x1c)+0x257ff-edx);
			B(___243d74h+D(esp+0x1c)+0x257ff-edx) = b_tmp;
			edx++;
			if((int)edx >= 0x12c00) break;
		}

		D(esp+0x20) = 0x125c0;
		D(esp+0x28) = 0;

		while(1){

			edx = 0;
			while(1){

				b_tmp = B(___243d74h+edx+D(esp+0x1c)+D(esp+0x28));
				B(___243d74h+edx+D(esp+0x1c)+D(esp+0x28)) = B(___243d74h+D(esp+0x1c)+D(esp+0x20)+edx);
				B(___243d74h+D(esp+0x1c)+D(esp+0x20)+edx) = b_tmp;
				edx++;
				if((int)edx >= 0x640) break;
			}

			D(esp+0x28) += 0x640;
			D(esp+0x20) -= 0x640;
			if(D(esp+0x28) == 0x9600) break;
		}

		D(esp+0x24) = 0x251c0;
		D(esp+0x2c) = 0x12c00;

		while(1){

			esi = D(esp+0x2c);
			ecx = D(esp+0x24);

			edx = 0;
			while(1){

				b_tmp = B(___243d74h+edx+D(esp+0x2c)+D(esp+0x1c));
				B(___243d74h+esi+D(esp+0x1c)) = B(___243d74h+ecx+D(esp+0x1c));
				B(___243d74h+edx+D(esp+0x1c)+D(esp+0x24)) = b_tmp;
				edx++;
				ecx++;
				esi++;
				if((int)edx >= 0x640) break;
			}

			D(esp+0x2c) += 0x640;
			D(esp+0x24) -= 0x640;
			if(D(esp+0x2c) == 0x1c200) break;
		}

		D(esp+0x1c) += 0x25800;
		if(D(esp+0x1c) == 0x96000) break;
	}

	j = -1;
	while(++j < 0x24){

		i = -1;
		while(++i < 0x80){

			b_tmp = B(___243d40h+0x100*j+i);
			B(___243d40h+0x100*j+i) = B(___243d40h+0x100*j+0xff-i);
			B(___243d40h+0x100*j+0xff-i) = b_tmp;
		}
	}

	n = -1;
	while(++n < 4){

		s_35e[n].XLocation = (float)(int)(D(___243d28h)-1-(int)(double)s_35e[n].XLocation);
		s_35e[n].YLocation = (float)(int)(D(___243d2ch)-1-(int)(double)s_35e[n].YLocation);
		s_35e[n].ImgIndex = (s_35e[n].ImgIndex+48)%96;
		s_35e[n].__156 = (float)(3.75*(double)(int)s_35e[n].ImgIndex);
		s_35e[n].Direction = (float)(3.75*(double)(int)s_35e[n].ImgIndex);
		s_35e[n].ImgOffset = s_35e[n].ImgIndex*sizeof(img40x40)+n*sizeof(car_spins_t);
	}

	n = -1;
	while(++n < 0x10){

		if((int)D(___1f2488h+0x120*n) > 0){
		
			D(___1f2488h+0x120*n) = D(___243d28h)-1-D(___1f2488h+0x120*n);
		}
				
		if((int)D(___1f2488h+0x120*n+4) > 0){
		
			D(___1f2488h+0x120*n+4) = D(___243d2ch)-1-D(___1f2488h+0x120*n+4);
		}
	}

	n = -1;
	while(++n < 0x14){

		if((int)D(___1df720h+0x20*n) > 0){
		
			D(___1df720h+0x20*n) = D(___243d28h)-1-D(___1df720h+0x20*n)-0x10;
		}

		if((int)D(___1df720h+0x20*n+4) > 0){
		
			D(___1df720h+0x20*n+4) = D(___243d2ch)-1-D(___1df720h+0x20*n+4)-0x10;
		}
	}

	n = -1;
	while(++n < (int)D(___243c5ch)){

		D(___1de920h+4*n) = D(___243d28h)-1-D(___1de920h+4*n);
		D(___1ded20h+4*n) = D(___243d2ch)-1-D(___1ded20h+4*n);
	}

	m = -1;
	while(++m < (int)D(___243c88h)){

		n = -1;
		while(++n < (int)D(0xc50*m+(__POINTER__)&___1f3b08h->___0)){

			D(0xc50*m+4*n+(__POINTER__)&___1f3b08h->___8) = 0-D(0xc50*m+4*n+(__POINTER__)&___1f3b08h->___8);
		}

		n = -1;
		while(++n < (int)D(0xc50*m+(__POINTER__)&___1f3b08h->___0)){

			D(0xc50*m+4*n+(__POINTER__)&___1f3b08h->_134) = 0-D(0xc50*m+4*n+(__POINTER__)&___1f3b08h->_134);
		}

		eax = 0-D(0xc50*m+(__POINTER__)&___1f3b08h->_390);
		D(0xc50*m+(__POINTER__)&___1f3b08h->_390) = (int)(-1.0*(double)(int)D(0xc50*m+(__POINTER__)&___1f3b08h->_38C));
		D(0xc50*m+(__POINTER__)&___1f3b08h->_38C) = eax;

		eax = 0-D(0xc50*m+(__POINTER__)&___1f3b08h->_398);
		D(0xc50*m+(__POINTER__)&___1f3b08h->_398) = (int)(-1.0*(double)(int)D(0xc50*m+(__POINTER__)&___1f3b08h->_394));
		D(0xc50*m+(__POINTER__)&___1f3b08h->_394) = eax;

		D(0xc50*m+(__POINTER__)&___1f3b08h->_9DC) = D(___243d28h)-1-D(0xc50*m+(__POINTER__)&___1f3b08h->_9DC);
		D(0xc50*m+(__POINTER__)&___1f3b08h->_9E0) = D(___243d2ch)-1-D(0xc50*m+(__POINTER__)&___1f3b08h->_9E0);
	} // w

	i = -1;
	while(++i < (int)D(___243c94h)){

		p = &___240b48h[i];

		p->__C = 0x100*(D(___243d28h)-1)-p->__C-p->__0*p->_14;
		p->_10 = 0x100*(D(___243d2ch)-1)-p->_10-p->__4*p->_14;

		dim = p->__0*p->__4;
		eax = dim/2;
		j = -1;
		while(++j < (int)eax){

			b_tmp = B(___243d5ch+p->__8+j);
			B(___243d5ch+p->__8+j) = B(___243d5ch+dim+p->__8-j-1);
			B(___243d5ch+dim+p->__8-j-1) = b_tmp;
		}
	}

	return;
}
