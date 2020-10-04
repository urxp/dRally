#include "drally.h"

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

	extern byte ___243c88h[];
	extern byte ___243d0ch[];
	extern byte ___243c98h[];
	extern xc50_t ___1f3b08h[];		// <0x1f3b08 - 0x1f4758)
	extern x2c_t ___240b48h[];		// <0x240b48 - 0x240b74)
	extern byte ___243d08h[];
	extern byte ___243c6ch[];
	extern byte ___243c64h[];
	extern byte ___243c78h[];
	extern byte ___243c74h[];
	extern byte ___243c70h[];
	extern byte ___243c68h[];
	extern byte ___196d8ch[];
	extern byte ___196d94h[];
	extern byte ___196d98h[];
	extern byte ___1df9a0h[];
	extern byte ___243188h[];
	extern byte ___242f78h[];
	extern byte ___242e78h[];
	extern byte ___196db0h[];
	extern byte ___1e8848h[];
	extern byte ___243c9ch[];
	extern byte ___196dc8h[];
	extern byte ___196dcch[];
	extern byte ___196d88h[];
	extern byte ___196d90h[];
	extern byte ___243d80h[];
	extern byte ___243d5ch[];


void race___5326ch(void);
void ___5e137h(dword A1, int A2, int A3, int A4, int A5, int A6, int A7);
void ___5e3e8h(int A1, int A2, int A3, int A4, int A5, int A6, int A7, int A8, int A9);
void ___5e769h(byte * A1, int A2, int A3, int A4, int A5, int A6, int A7);

void race___53464h(void){

	dword 		eax, ebx, ecx, edx, edi, esi;
	dword 		A1, A2, A3, A4, A5, A6, A7, A8, A9;
	int 		skip;
	xc50_t *	p;
	x2c_t * 	q;

	D(___243d0ch) = D(___243c88h)-1;

	if((int)D(___243d0ch) >= 0){

		while(1){

			D(___243c98h) = ___1f3b08h[D(___243d0ch)]._C4C;
			p = &___1f3b08h[D(___243c98h)]; 

			if(p->_C44 != 1){

				D(___243d08h) = 0;

				if((int)D(___243d08h) < (int)p->___0){

					while(1){

						p->_9EC[D(___243d08h)] = 0x100*p->_9E4+p->___8[D(___243d08h)];
						p->_B18[D(___243d08h)] = 0x100*p->_9E8+p->_134[D(___243d08h)];
						D(___243d08h)++;
					
						if((int)D(___243d08h) >= (int)p->___0) break;
					}
				}

				race___5326ch();
				D(___243d08h) = 0;

				if((int)D(___243d08h) < (int)p->___4){

					while(1){

						D(___243c64h) = p->_9EC[p->_6BC[D(___243d08h)]];
						D(___243c68h) = p->_9EC[p->_52C[D(___243d08h)]];
						D(___243c6ch) = p->_9EC[p->_39C[D(___243d08h)]];
						D(___243c70h) = p->_B18[p->_6BC[D(___243d08h)]];
						D(___243c74h) = p->_B18[p->_52C[D(___243d08h)]];
						D(___243c78h) = p->_B18[p->_39C[D(___243d08h)]];

						ebx = (D(___243c68h)-D(___243c6ch))*(D(___243c70h)-D(___243c78h))-((D(___243c74h)-D(___243c78h))*(D(___243c64h)-D(___243c6ch)));

						if((int)ebx <= 0){

							skip = 0;
							if((int)abs(D(___243c6ch)-D(___196d8ch)) >= (int)D(___196d8ch)){
								
								if((int)abs(D(___243c68h)-D(___196d8ch)) >= (int)D(___196d8ch)){
									
									if((int)abs(D(___243c64h)-D(___196d8ch)) >= (int)D(___196d8ch)) skip = 1;
								}
							}

							if(!skip){
								
								skip = 0;
								if((int)abs(D(___243c78h)-D(___196d94h)) >= (int)D(___196d94h)){
									
									if((int)abs(D(___243c74h)-D(___196d94h)) >= (int)D(___196d94h)){
										
										if((int)abs(D(___243c70h)-D(___196d94h)) >= (int)D(___196d94h)) skip = 1;
									}
								}

								if(!skip){
									
									ebx = p->_84C[D(___243d08h)]-0x80;

									switch(ebx){
									case 0:
										eax = 0x4b*p->_134[p->_39C[D(___243d08h)]];
										ecx = 0x64-p->___8[p->_39C[D(___243d08h)]];
										ecx = 0x36*((int)ecx>>8)+8;
										A7 = (abs((int)eax>>L(ecx))&7)+0x6d;
										eax = 0x4b*p->_134[p->_52C[D(___243d08h)]];
										ecx = 0x64-p->___8[p->_52C[D(___243d08h)]];
										ecx = 0x36*((int)ecx>>8)+8;
										A4 = (abs((int)eax>>L(ecx))&7)+0x6d;
										eax = 0x4b*p->_134[p->_6BC[D(___243d08h)]];
										ecx = 0x64-p->___8[p->_6BC[D(___243d08h)]];
										ecx = 0x36*((int)ecx>>8)+8;
										A1 = (abs((int)eax>>L(ecx))&7)+0x6d;
										A9 = D(___243c6ch)+D(___196d98h);
										A8 = D(___243c78h);
										A6 = D(___243c68h)+D(___196d98h);
										A5 = D(___243c74h);
										A3 = D(___243c64h)+D(___196d98h);
										A2 = D(___243c70h);
										___5e3e8h(A1,A2,A3,A4,A5,A6,A7,A8,A9);
										break;
									case 1:
										A7 = D(___243c6ch)+D(___196d98h);
										A6 = D(___243c78h);
										A5 = D(___243c68h)+D(___196d98h);
										A4 = D(___243c74h);
										A3 = D(___243c64h)+D(___196d98h);
										A2 = D(___243c70h);
										A1 = ___243188h;
										___5e769h(A1,A2,A3,A4,A5,A6,A7);
										break;
									case 2:
										A7 = D(___243c6ch)+D(___196d98h);
										A6 = D(___243c78h);
										A5 = D(___243c68h)+D(___196d98h);
										A4 = D(___243c74h);
										A3 = D(___243c64h)+D(___196d98h);
										A2 = D(___243c70h);
										A1 = ___242f78h;
										___5e769h(A1,A2,A3,A4,A5,A6,A7);
										break;
									case 3:
										A7 = D(___243c6ch)+D(___196d98h);
										A6 = D(___243c78h);
										A5 = D(___243c68h)+D(___196d98h);
										A4 = D(___243c74h);
										A3 = D(___243c64h)+D(___196d98h);
										A2 = D(___243c70h);
										A1 = ___242e78h;
										___5e769h(A1,A2,A3,A4,A5,A6,A7);
										break;
									case 10:
										A9 = D(___243c6ch)+D(___196d98h);
										A8 = D(___243c78h);
										A7 = D(0x12c*D(___243c98h)+4*p->_39C[D(___243d08h)]+___1df9a0h)+0x6c;
										A6 = D(___243c68h)+D(___196d98h);
										A5 = D(___243c74h);
										A4 = D(0x12c*D(___243c98h)+4*p->_52C[D(___243d08h)]+___1df9a0h)+0x6c;
										A3 = D(___243c64h)+D(___196d98h);
										A2 = D(___243c70h);
										A1 = D(0x12c*D(___243c98h)+4*p->_6BC[D(___243d08h)]+___1df9a0h)+0x6c;
										___5e3e8h(A1,A2,A3,A4,A5,A6,A7,A8,A9);
										break;
									default:
										A7 = D(___243c6ch)+D(___196d98h);
										A6 = D(___243c78h);
										A5 = D(___243c68h)+D(___196d98h);
										A4 = D(___243c74h);
										A3 = D(___243c64h)+D(___196d98h);
										A2 = D(___243c70h);
										A1 = p->_84C[D(___243d08h)]&0xff;
										___5e137h(A1,A2,A3,A4,A5,A6,A7);
										break;
									}
								}
							}
						}

						if(D(___196db0h) != 0){
						
							D(___243c9ch) = D(0x190*D(___243c98h)+4*D(___243d08h)+___1e8848h);

							if(D(___243c9ch) != 0xffffffff){

								q = &___240b48h[D(___243c9ch)];

								q->_18 = q->__C-0x100*D(___196dc8h)-0x100*D(___196d8ch);
								q->_1C = q->_10-0x100*D(___196dcch)-0x100*D(___196d94h);
								edx = 0x100*q->_18;
								eax = (long long)(int)edx/(int)q->_14;
								eax = eax+0x80;
								eax = (int)eax>>8;
								edx = 0x100*q->_1C;
								q->_18 = eax+D(___196d8ch);
								eax = (long long)(int)edx/(int)q->_14;
								eax = eax+0x80;
								eax = (int)eax>>8;
								q->_1C = eax+D(___196d94h);
								eax = 0-q->__0;

								if((int)eax < (int)q->_18){

									eax = 0-q->__4;

									if(((int)eax < (int)q->_1C)&&((int)q->_18 < (int)D(___196d88h))&&((int)q->_1C < (int)D(___196d90h))){

										ebx = 0x200*q->_1C+q->_18+D(___196d98h)+0x60+D(___243d80h);
										esi = D(___243d5ch)+q->__8;
										edx = q->__4;

										while(1){

											if((int)ebx > (int)D(___243d80h)){

												ecx = q->__0;

												while(1){

													if(B(esi) != 0) B(ebx) = B(esi);
													ebx++;
													esi++;
													ecx--;
												
													if(ecx == 0) break;
												}

												ebx -= q->__0;
											}
											else {

												esi += q->__0;
											}

											ebx += 0x200;
											eax = D(___243d80h)+0x19000;
											if((int)ebx >= (int)eax) break;
											edx--;
											if(edx == 0) break;
										}
									}
								}
							}
						}

						D(___243d08h)++;
						if((int)D(___243d08h) >= (int)p->___4) break;
					}
				}
			}

			D(___243d0ch)--;
			if((int)D(___243d0ch) < 0) break;
		}
	}
}
