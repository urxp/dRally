#include "drally.h"

	extern byte ___243c88h[];
	extern byte ___243d0ch[];
	extern byte ___1f4754h[];
	extern byte ___243c98h[];
	extern byte ___1f474ch[];
	extern byte ___1f3b08h[];
	extern byte ___243d08h[];
	extern byte ___1f44ech[];
	extern byte ___1f3b10h[];
	extern byte ___1f44f4h[];
	extern byte ___1f44f0h[];
	extern byte ___1f3c3ch[];
	extern byte ___1f4620h[];
	extern byte ___1f3ea4h[];
	extern byte ___243c6ch[];
	extern byte ___1f4034h[];
	extern byte ___1f41c4h[];
	extern byte ___243c64h[];
	extern byte ___243c78h[];
	extern byte ___243c74h[];
	extern byte ___243c70h[];
	extern byte ___243c68h[];
	extern byte ___196d8ch[];
	extern byte ___196d94h[];
	extern byte ___1f4354h[];
	extern byte ___196d98h[];
	extern byte ___1df9a0h[];
	extern byte ___243188h[];
	extern byte ___242f78h[];
	extern byte ___242e78h[];
	extern byte ___196db0h[];
	extern byte ___1e8848h[];
	extern byte ___243c9ch[];
	extern byte ___196dc8h[];
	extern byte ___240b54h[];
	extern byte ___196dcch[];
	extern byte ___240b60h[];
	extern byte ___240b58h[];
	extern byte ___240b64h[];
	extern byte ___240b5ch[];
	extern byte ___240b48h[];
	extern byte ___240b4ch[];
	extern byte ___196d88h[];
	extern byte ___196d90h[];
	extern byte ___243d80h[];
	extern byte ___243d5ch[];
	extern byte ___1f3b0ch[];


void race___5326ch(void);
void ___5e137h(dword A1, int A2, int A3, int A4, int A5, int A6, int A7);
void ___5e3e8h(int A1, int A2, int A3, int A4, int A5, int A6, int A7, int A8, int A9);
void ___5e769h(byte * A1, int A2, int A3, int A4, int A5, int A6, int A7);

// absolute value ?
static dword unk_op(dword A1){

	dword 	edx;

	edx = (int)A1>>0x1f;     

	return (A1^edx)-edx;
}

void race___53464h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	dword 	A1, A2, A3, A4, A5, A6, A7, A8, A9;
	int 	skip;
	

	D(___243d0ch) = D(___243c88h)-1;

	if((int)D(___243d0ch) >= 0){

		ebp = 0;
		while(1){

			eax = 0xc50*D(___243d0ch);
			eax = D(eax+___1f4754h);
			D(___243c98h) = eax;
			edx = 0xc50*eax;

			if(D(edx+___1f474ch) != 1){

				eax = edx;
				ebx = edx;
				ecx = D(edx+___1f3b08h);
				D(___243d08h) = ebp;

				if((int)ebp < (int)ecx){

					while(1){

						edx = D(eax+___1f44ech);
						esi = D(ebx+___1f3b10h);
						edx <<= 8;
						edx += esi;
						D(ebx+___1f44f4h) = edx;
						edx = D(eax+___1f44f0h);
						edi = D(ebx+___1f3c3ch);
						edx <<= 8;
						edx += edi;
						D(ebx+___1f4620h) = edx;
						edx = D(___243d08h);
						ebx += 4;
						edx++;
						ecx = D(eax+___1f3b08h);
						D(___243d08h) = edx;
					
						if((int)edx >= (int)ecx) break;
					}
				}

				race___5326ch();
				D(___243d08h) = ebp;
				ebx = 0xc50*D(___243c98h);
				eax = D(___243d08h);

				if((int)eax < (int)D(ebx+___1f3b0ch)){

					while(1){

						ecx = D(ebx+4*eax+___1f3ea4h);
						ecx <<= 2;
						ecx += ebx;
						edx = D(ecx+___1f44f4h);
						D(___243c6ch) = edx;
						edx = D(ebx+4*eax+___1f4034h);
						eax = D(ebx+4*eax+___1f41c4h);
						edx <<= 2;
						eax <<= 2;
						edx += ebx;
						ebx += eax;
						eax = D(ebx+___1f44f4h);
						D(___243c64h) = eax;
						eax = D(ecx+___1f4620h);
						D(___243c78h) = eax;
						eax = D(edx+___1f4620h);
						edi = D(edx+___1f44f4h);
						D(___243c74h) = eax;
						eax = D(ebx+___1f4620h);
						edx = D(___243c6ch);
						D(___243c70h) = eax;
						eax = edi;
						eax -= edx;
						ebx = D(___243c78h);
						edx = eax;
						eax = D(___243c70h);
						eax -= ebx;
						ebx = edx;
						ebx = ebx*eax;
						ecx = D(___243c6ch);
						esi = D(___243c78h);
						edx = D(___243c64h);
						eax = D(___243c74h);
						edx -= ecx;
						eax -= esi;
						eax = eax*edx;
						ebx -= eax;
						D(___243c68h) = edi;

						if((int)ebx <= 0){

							edi = D(___196d8ch);
							eax = unk_op(ecx-edi);
							edx = D(___196d8ch);

							skip = 0;
							if((int)eax >= (int)edx){
								
								eax = unk_op(D(___243c68h)-edx);
								ecx = D(___196d8ch);

								if((int)eax >= (int)ecx){
									
									eax = unk_op(D(___243c64h)-ecx);

									if((int)eax >= (int)D(___196d8ch)) skip = 1;
								}
							}

							if(!skip){
								
								eax = unk_op(D(___243c78h)-D(___196d94h));
								ebx = D(___196d94h);

								skip = 0;
								if((int)eax >= (int)ebx){
									
									eax = unk_op(D(___243c74h)-ebx);
									esi = D(___196d94h);

									if((int)eax >= (int)esi){
										
										eax = unk_op(D(___243c70h)-esi);

										if((int)eax >= (int)D(___196d94h)) skip = 1;
									}
								}

								if(!skip){
									
									edx = 0xc50*D(___243c98h);
									eax = D(___243d08h);
									eax <<= 2;
									eax += edx;
									ebx = D(eax+___1f4354h);
									ebx -= 0x80;

									switch(ebx){
									case 0:
										eax = D(eax+___1f3ea4h);
										eax <<= 2;
										eax += edx;
										ecx = D(eax+___1f3c3ch);
										ebx = D(eax+___1f3b10h);
										eax = 0x4b*ecx;
										edx = 0x64;
										edx -= ebx;
										edx = (int)edx>>8;
										edx = 0x36*edx;
										ecx = edx+8;
										eax = (int)eax>>L(ecx);
										if((int)eax < 0) eax = 0-eax;
										esi = D(___243c98h);
										ebx = eax;
										eax = 0xc50*esi;
										edx = D(___243d08h);
										edx = D(eax+4*edx+___1f4034h);
										esi = D(eax+4*edx+___1f3c3ch);
										edi = D(eax+4*edx+___1f3b10h);
										eax = 0x4b*esi;
										ecx = 0x64;
										ecx -= edi;
										ecx = (int)ecx>>8;
										ecx = 0x36*ecx;
										ecx += 8;
										eax = (int)eax>>L(ecx);
										ebx = ebx&7;
										if((int)eax < 0) eax = 0-eax;
										edx = D(___243c98h);
										edi = eax;
										eax = 0xc50*edx;
										edx = D(___243d08h);
										edx = D(eax+4*edx+___1f41c4h);
										ecx = 0x64;
										ecx -= D(eax+4*edx+___1f3b10h);
										ecx = (int)ecx>>8;
										ecx = 0x36*ecx;
										eax = 0x4b*D(eax+4*edx+___1f3c3ch);
										ecx += 8;
										eax = (int)eax>>L(ecx);
										edi = edi&7;
										if((int)eax < 0) eax = 0-eax;
										ecx = D(___196d98h);
										edx = eax;
										eax = D(___243c6ch);
										eax += ecx;
										A9 = eax;
										esi = D(___243c78h);
										A8 = esi;
										eax = ebx+0x6d;
										A7 = eax;
										eax = D(___243c68h);
										eax += ecx;
										A6 = eax;
										esi = ecx;
										ecx = D(___243c74h);
										A5 = ecx;
										eax = edi+0x6d;
										A4 = eax;
										eax = D(___243c64h);
										eax += esi;
										A3 = eax;
										edi = D(___243c70h);
										edx &= 7;
										A2 = edi;
										edx += 0x6d;
										A1 = edx;
										___5e3e8h(A1,A2,A3,A4,A5,A6,A7,A8,A9);
										break;
									case 1:
										eax = D(___243c6ch);
										edx = D(___196d98h);
										eax += edx;
										A7 = eax;
										ebx = D(___243c78h);
										eax = D(___243c68h);
										A6 = ebx;
										eax += edx;
										A5 = eax;
										esi = D(___243c74h);
										eax = D(___243c64h);
										A4 = esi;
										eax += edx;
										A3 = eax;
										eax = D(___243c70h);
										A2 = eax;
										A1 = ___243188h;
										___5e769h(A1,A2,A3,A4,A5,A6,A7);
										break;
									case 2:
										eax = D(___243c6ch);
										edx = D(___196d98h);
										eax += edx;
										A7 = eax;
										ebx = D(___243c78h);
										eax = D(___243c68h);
										A6 = ebx;
										eax += edx;
										A5 = eax;
										esi = D(___243c74h);
										eax = D(___243c64h);
										A4 = esi;
										eax += edx;
										A3 = eax;
										eax = D(___243c70h);
										A2 = eax;
										A1 = ___242f78h;
										___5e769h(A1,A2,A3,A4,A5,A6,A7);
										break;
									case 3:
										eax = D(___243c6ch);
										edx = D(___196d98h);
										eax += edx;
										A7 = eax;
										ebx = D(___243c78h);
										eax = D(___243c68h);
										A6 = ebx;
										eax += edx;
										A5 = eax;
										esi = D(___243c74h);
										eax = D(___243c64h);
										A4 = esi;
										eax += edx;
										A3 = eax;
										eax = D(___243c70h);
										A2 = eax;
										A1 = ___242e78h;
										___5e769h(A1,A2,A3,A4,A5,A6,A7);
										break;
									case 10:
										edx = 0x12c*D(___243c98h);
										ebx = D(eax+___1f3ea4h);
										ecx = D(edx+4*ebx+___1df9a0h);
										ebx = D(eax+___1f4034h);
										eax = D(eax+___1f41c4h);
										edi = D(___196d98h);
										ebx = D(edx+4*ebx+___1df9a0h);
										edx = D(edx+4*eax+___1df9a0h);
										eax = D(___243c6ch);
										eax += edi;
										A9 = eax;
										eax = D(___243c78h);
										A8 = eax;
										ecx += 0x6c;
										eax = D(___243c68h);
										A7 = ecx;
										eax += edi;
										A6 = eax;
										esi = D(___243c74h);
										A5 = esi;
										ebx += 0x6c;
										eax = D(___243c64h);
										A4 = ebx;
										eax += edi;
										A3 = eax;
										eax = D(___243c70h);
										A2 = eax;
										edx += 0x6c;
										A1 = edx;
										___5e3e8h(A1,A2,A3,A4,A5,A6,A7,A8,A9);
										break;
									default:
										eax = D(___243c6ch);
										ecx = D(___196d98h);
										eax += ecx;
										A7 = eax;
										esi = D(___243c78h);
										eax = D(___243c68h);
										A6 = esi;
										eax += ecx;
										A5 = eax;
										eax = D(___243c74h);
										A4 = eax;
										eax = D(___243c64h);
										eax += ecx;
										edx = 0xc50*D(___243c98h);
										A3 = eax;
										ebx = D(___243c70h);
										eax = D(___243d08h);
										A2 = ebx;
										L(eax) = B(edx+4*eax+___1f4354h);
										eax &= 0xff;
										A1 = eax;
										___5e137h(A1,A2,A3,A4,A5,A6,A7);
										break;
									}
								}
							}
						}

						if(ebp != D(___196db0h)){
						
							edx = 0x190*D(___243c98h);
							eax = D(___243d08h);
							eax = D(edx+4*eax+___1e8848h);
							D(___243c9ch) = eax;

							if(eax != 0xffffffff){

								ebx = 0x2c*eax;
								eax = D(___196dc8h);
								edx = D(ebx+___240b54h);
								eax <<= 8;
								edx -= eax;
								eax = D(___196d8ch);
								eax <<= 8;
								edx -= eax;
								eax = D(___196dcch);
								D(ebx+___240b60h) = edx;
								eax <<= 8;
								edx = D(ebx+___240b58h);
								edx -= eax;
								eax = D(___196d94h);
								eax <<= 8;
								edx -= eax;
								D(ebx+___240b64h) = edx;
								edx = D(ebx+___240b60h);
								edx <<= 8;
								edi = D(ebx+___240b5ch);
								eax = edx;
								edx = (int)edx>>0x1f;
								//idiv    edi
								eax = (long long)(int)eax/(int)edi;
								eax += 0x80;
								edx = D(___196d8ch);
								eax = (int)eax>>8;
								eax += edx;
								edx = D(ebx+___240b64h);
								ecx = D(ebx+___240b5ch);
								edx <<= 8;
								D(ebx+___240b60h) = eax;
								eax = edx;
								edx = (int)edx>>0x1f;
								//idiv    ecx
								eax = (long long)(int)eax/(int)ecx;
								eax += 0x80;
								esi = D(___196d94h);
								eax = (int)eax>>8;
								eax += esi;
								D(ebx+___240b64h) = eax;
								eax = D(ebx+___240b48h);
								edi = D(ebx+___240b60h);
								eax = 0-eax;

								if((int)eax < (int)edi){

									eax = D(ebx+___240b4ch);
									edx = D(ebx+___240b64h);
									eax = 0-eax;

									if(((int)eax < (int)edx)&&((int)edi < (int)D(___196d88h))&&((int)edx < (int)D(___196d90h))){

										edi = ___240b48h;
										eax = D(ebx+___240b60h);
										edi += ebx;
										eax += D(___196d98h);
										ebx = edx;
										ebx <<= 9;
										ebx += eax;
										ebx += 0x60;
										ebx += D(___243d80h);
										esi = D(___243d5ch);
										esi += D(edi+8);
										edx = D(edi+4);

										while(1){

											eax = D(___243d80h);

											if((int)ebx > (int)eax){

												ecx = D(edi);

												while(1){

													L(eax) = B(esi);
													if(L(eax) != 0) B(ebx) = L(eax);
													ebx++;
													esi++;
													ecx--;
												
													if(ecx == 0) break;
												}

												ebx -= D(edi);
											}
											else {

												esi += D(edi);
											}

											ebx += 0x200;
											eax = D(___243d80h);
											eax += 0x19000;
											if((int)ebx >= (int)eax) break;
											edx--;
											if(edx == 0) break;
										}
									}
								}
							}
						}

						D(___243d08h)++;
						ebx = 0xc50*D(___243c98h);
						eax = D(___243d08h);

						if((int)eax >= (int)D(ebx+___1f3b0ch)) break;
					}
				}
			}

			ebx = D(___243d0ch);
			ebx--;
			D(___243d0ch) = ebx;
		
			if((int)ebp > (int)ebx) break;
		}
	}
}
