#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243880h[];
	extern int NUM_OF_CARS;
	extern __BYTE__ ___243c60h[];
	extern __DWORD__ CONNECTION_TYPE;
	extern __BYTE__ ___24331ch[];
	extern int MY_CAR_IDX;
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___243d08h[];
	extern __BYTE__ ___196e60h[];
	extern __BYTE__ ___243d0ch[];
	extern __BYTE__ ___196e64h[];
	extern __BYTE__ ___243cd8h[];
	extern __BYTE__ ___243318h[];
	extern __POINTER__ ___24cee0h[4];
	extern __BYTE__ ___1a51c0h[];

__DWORD__ __GET_FRAME_COUNTER(void);
void ___446ach(void);
void ___44a4ch(int A1);
void ___44730h(void);
void ___61518h(void);

void race___44a78h(void){

	int 			n;
	__DWORD__		eax, ebx, ecx, edx, esi, ebp;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	D(___243880h) = 0;

	if(NUM_OF_CARS <= 0){

		n = -1;
		while(++n < NUM_OF_CARS){

			if(n != MY_CAR_IDX){
			
				edx = D(___1a51c0h+4*n)+700;
				if((int)edx < (int)getCounter(3)) D(___243318h) = 1;
			}
		}

		D(___243880h) = 1;
		return;
	}

	D(___243c60h) = 0;
	while(1){

		eax = D(___243c60h);
		ebx = CONNECTION_TYPE;
		D(___24331ch) = eax;

		if((ebx == 1)||(ebx == 3)||(ebx == 4)){

			ebp = 0;
			D(___24331ch) = ebp;
		}

		edx = MY_CAR_IDX;
		eax = D(___243c60h);

		if(eax == edx){

			esi = D(___243c60h);
			esi++;
			ebp = NUM_OF_CARS;
			D(___243c60h) = esi;

			if((int)esi >= (int)ebp){
				
				D(___243c60h) = 0;

				while((int) D(___243c60h) < NUM_OF_CARS){

					if(MY_CAR_IDX != D(___243c60h)){
					
						edx = D(___1a51c0h+4*D(___243c60h))+0x2bc;
						if((int)edx < (int)getCounter(3)) D(___243318h) = 1;
					}

					D(___243c60h)++;
				}

				D(___243880h) = 1;
				return;
			}
		}
		else {

			eax = 0;
			edx = 0x35e*D(___243c60h)+0x40;

			while(1){

				ebx = 0;
				s_35e[D(___243c60h)].Ctrls[eax] = 0;
				eax++;
				if(eax == 0x10) break;
			}

			ebp = 0x10;
			D(___243d08h) = 0;
			D(___196e60h) = 0;
			eax = 0;
			D(___243d0ch) = 0x10;
			D(___196e64h) = 0;

			if((int)getCounter(5) > 0){

				while(1){

					if(((int)D(___243d08h) >= 0x10)||(D(___243cd8h) != 0)) break;
					ebp = D(___243d0ch);
					if(((int)ebp <= 0)||(D(___243318h) != 0)) break;
					edx = ebp-1;
					D(___243d0ch) = edx;
					___61518h();
					ebx = 4*D(___24331ch);
					X(edx) = W(___24cee0h[ebx/4]+2);

					if(X(edx) == W(___24cee0h[ebx/4])){

						___44a4ch(4);
					}
					else {

						ecx = D(___243c60h);
						edx = getCounter(3);
						D(___1a51c0h+4*ecx) = edx;
						X(edx) = W(___24cee0h[ebx/4]+2);
						edx &= 0xfff;
						edx &= 0xffff;
						L(ecx) = B(___24cee0h[ebx/4]+4+edx);

						if(L(ecx) <= 0x7f){

							ebp = D(___243c60h);
							esi = L(ecx);
							edx = D(___243d08h);
							s_35e[ebp].Ctrls[edx] = esi;
							X(edx) = W(___24cee0h[ebx/4]+2);
							ecx = edx;
							ecx &= 0xfff;
							edx++;
							W(___24cee0h[ebx/4]+2) = X(edx);
							ecx &= 0xffff;
							B(___24cee0h[ebx/4]+ecx+4) = 0;
							eax = D(___243d08h);
							D(___196e64h) = eax;
							eax++;
							D(___243d08h) = eax;
						}
						else {

							if(L(ecx) == 0xfe){

								eax = __GET_FRAME_COUNTER();
								ebp = eax+2;
								ecx = 0;

								while(1){

									eax = D(___24331ch);
									edx = W(___24cee0h[eax]+2);
									edx += 0x12;
									edx &= 0xfff;

									if((B(___24cee0h[eax]+4+edx) == 0xff)||(ecx != 0)){

										if(ecx != 1) ___446ach();
										break;
									}
									___61518h();
									eax = __GET_FRAME_COUNTER();

									if(eax > ebp){

										edx = D(___24331ch);
										X(ebx) = W(___24cee0h[edx]+2);
										esi = ebx;
										ecx = 1;
										esi &= 0xfff;
										ebx++;
										W(___24cee0h[edx]+2) = X(ebx);
										esi &= 0xffff;
										B(___24cee0h[edx]+esi+4) = 0;
									}
								}
							}

							eax = D(___24331ch);
							X(edx) = W(___24cee0h[eax]+2);
							edx &= 0xfff;
							edx &= 0xffff;
							H(ebx) = B(___24cee0h[eax]+edx+4);

							if((H(ebx) == 0xd3)||(H(ebx) == 0xc5)){

								eax = __GET_FRAME_COUNTER();
								ebp = eax+2;
								ecx = 0;

								while(1){

									eax = D(___24331ch);
									edx = W(___24cee0h[eax]+2);
									edx += 7;
									edx &= 0xfff;

									if((B(___24cee0h[eax]+4+edx) == 0xff)||(ecx != 0)){

										if(ecx != 1){

											eax = D(___24331ch);
											W(___24cee0h[eax]+2) = 8;
										}
										break;
									}
									___61518h();
									eax = __GET_FRAME_COUNTER();

									if(eax > ebp){
										
										edx = D(___24331ch);
										X(ebx) = W(___24cee0h[edx]+2);
										esi = ebx;
										ecx = 1;
										esi &= 0xfff;
										ebx++;
										W(___24cee0h[edx]+2) = X(ebx);
										esi &= 0xffff;
										B(___24cee0h[edx]+esi+4) = 0;
									}
								}
							}

							edx = 4*D(___24331ch);
							X(ebx) = W(___24cee0h[edx/4]+2);
							ebx &= 0xfff;
							ebx &= 0xffff;

							if(B(___24cee0h[edx/4]+4+ebx) == 0xfd){

								D(___243cd8h) = 1;
								X(ebx) = W(___24cee0h[edx/4]+2);
								ecx = ebx;
								ecx &= 0xfff;
								ebx++;
								W(___24cee0h[edx/4]+2) = X(ebx);
								ecx &= 0xffff;
								B(___24cee0h[edx/4]+ecx+4) = 0;
							}

							edx = 4*D(___24331ch);
							X(ebx) = W(___24cee0h[edx/4]+2);
							ebx &= 0xfff;
							ebx &= 0xffff;

							if(B(___24cee0h[edx/4]+4+ebx) == 0xfc){

								ecx = 1;
								X(ebx) = W(___24cee0h[edx/4]+2);
								D(___243318h) = ecx;
								ecx = ebx;
								ecx &= 0xfff;
								ebx++;
								W(___24cee0h[edx/4]+2) = X(ebx);
								ecx &= 0xffff;
								B(___24cee0h[edx/4]+ecx+4) = 0;
							}
						}
					}

					eax = D(___243d08h);
					if((int)eax >= (int)getCounter(5)) break;
				}
			}

			while(1){

				ebx = 4*D(___24331ch);
				X(edx) = W(___24cee0h[D(___24331ch)]+2);

				if(X(edx) == W(___24cee0h[D(___24331ch)])){

					___44730h();
					W(___24cee0h[D(___24331ch)]+2) = W(___24cee0h[D(___24331ch)]);
					ebp = NUM_OF_CARS;
					D(___243c60h)++;

					if((int)D(___243c60h) >= (int)ebp){

						D(___243c60h) = 0;

						while((int) D(___243c60h) < NUM_OF_CARS){

							if(MY_CAR_IDX != D(___243c60h)){
							
								edx = D(___1a51c0h+4*D(___243c60h))+0x2bc;
								if((int)edx < (int)getCounter(3)) D(___243318h) = 1;
							}

							D(___243c60h)++;
						}

						D(___243880h) = 1;
						return;
					}

					break;
				}

				edx &= 0xfff;
				L(ecx) = B(___24cee0h[D(___24331ch)]+4+edx);
				
				if(L(ecx) <= 0x7f){

					if((L(ecx)&0x10) != 0){
					
						s_35e[D(___243c60h)].Ctrls[D(___196e64h)] |= 0x10;
					}

					X(edx) = W(___24cee0h[D(___24331ch)]+2);
					edx &= 0xfff;
					edx &= 0xffff;

					if((B(___24cee0h[D(___24331ch)]+edx+4)&0x20) != 0){

						s_35e[D(___243c60h)].Ctrls[D(___196e64h)] |= 0x20;
					}

					X(edx) = W(___24cee0h[D(___24331ch)]+2);
					edx &= 0xfff;
					edx &= 0xffff;

					if((B(___24cee0h[D(___24331ch)]+edx+4)&0x40) != 0){
					
						s_35e[D(___243c60h)].Ctrls[D(___196e64h)] |= 0x40;
					}

					X(ebx) = W(___24cee0h[D(___24331ch)]+2);
					ecx = ebx&0xfff;
					ebx++;
					W(___24cee0h[D(___24331ch)]+2) = X(ebx);
					ecx &= 0xffff;
					B(___24cee0h[D(___24331ch)]+ecx+4) = 0;
				}
				else {

					if(L(ecx) != 0xfe){

						if((L(ecx) != 0xd3)&&(L(ecx) != 0xc5)){

							if(L(ecx) != 0xfd){

								if(L(ecx) == 0xfc) D(___243318h) = 1;
							}
							else {

								D(___243cd8h) = 1;
							}

							X(edx) = W(___24cee0h[D(___24331ch)]+2);
							ecx = edx;
							ecx &= 0xfff;
							edx++;
							W(___24cee0h[D(___24331ch)]+2) = X(edx);
							ecx &= 0xffff;
							B(___24cee0h[ebx/4]+ecx+4) = 0;
						}
						else {

							eax = __GET_FRAME_COUNTER();
							ebp = eax+2;
							ecx = 0;

							while(1){

								eax = D(___24331ch);
								edx = W(___24cee0h[eax]+2);
								edx += 7;
								edx &= 0xfff;
								if((B(___24cee0h[eax]+edx+4) == 0xff)||(ecx != 0)) break;
								___61518h();
								eax = __GET_FRAME_COUNTER();

								if(eax > ebp){

									edx = D(___24331ch);
									X(ebx) = W(___24cee0h[edx]+2);
									esi = ebx;
									ecx = 1;
									esi &= 0xfff;
									ebx++;
									W(___24cee0h[edx]+2) = X(ebx);
									esi &= 0xffff;
									B(___24cee0h[edx]+esi+4) = 0;
								}
							}

							if(ecx != 1){
								
								eax = D(___24331ch);
								W(___24cee0h[eax]+2) += 8;
							}
						}
					}
					else {

						eax = __GET_FRAME_COUNTER();
						ebp = eax+2;
						ecx = 0;

						while(1){

							eax = D(___24331ch);
							edx = W(___24cee0h[eax]+2);
							edx += 0x12;
							edx &= 0xfff;
							if((B(edx+___24cee0h[eax]+4) == 0xff)||(ecx != 0)) break;
							___61518h();
							eax = __GET_FRAME_COUNTER();

							if(eax > ebp){

								edx = D(___24331ch);
								X(ebx) = W(___24cee0h[edx]+2);
								ecx = 1;
								esi = ebx&0xfff;
								ebx++;
								W(___24cee0h[edx]+2) = X(ebx);
								esi &= 0xffff;
								B(___24cee0h[edx]+esi+4) = 0;
							}
						}

						if(ecx != 1) ___446ach();
					}
				}
			}
		}
	}
}
