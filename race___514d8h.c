#include "drally.h"
#include "drally_structs_free.h"
#include "drmath.h"
#include "sfx.h"

	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___1df520h[];
	extern int MY_CAR_IDX;
	extern __POINTER__ RACE_MINES1A_BPK;
	extern __POINTER__ TRX_IMA;
	extern int TRX_WIDTH;
	extern __POINTER__ ___243d74h;
	extern __POINTER__ RACE_BLOWI_BPK;

int rand_watcom106(void);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);

#define LOC_83 0.833333
#define LOC_PI 3.14159265359

static int helper00(double dval){

	return ((dval-(double)(int)dval) < 0.5)?(int)dval:(int)(1.0+dval);
}

// MINES
void race___514d8h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi;
	__BYTE__ 	esp[0xc8];
	__POINTER__ 	edxp;
	int 			i, j, n;
	__BYTE__ 		px;
	struct_94_t * 	s_94;
	struct_35e_t * 	s_35e;


	s_94 = (struct_94_t *)___1de580h;
	s_35e = (struct_35e_t *)___1e6ed0h;
	n = D(___243c60h);

	if((int)s_35e[n].__1a6 > 0) s_35e[n].__1a6--;

	if((int)s_94[n].__18 > 0){

		if(s_35e[n].Finished == 0){

			if((s_35e[n].Ctrls[getCounter(4)]&0x40) != 0){

				if((int)s_94[n].__28 > 0){

					if((int)getCounter(1) > 0x1ae){

						if(s_35e[n].__1a6 == 0){

							if(((s_35e[n].Ctrls[getCounter(4)]&2) == 0)||(( s_35e[n].Ctrls[getCounter(4)]&0x40) == 0)){

								s_35e[n].__1a6 = 0x32;
								D(esp+0x60) = helper00(2.3*dRMath_sin((double)s_35e[n].Direction*LOC_PI/180.0)*(double)s_94[n].__10);
								D(esp+0x88) = (int)((double)(int)D(esp+0x60)+(double)s_35e[n].XLocation-4.0);
								D(esp+0x70) = helper00(2.3*dRMath_cos((double)s_35e[n].Direction*LOC_PI/180.0)*LOC_83*(double)s_94[n].__10);
								D(esp+0x74) = (int)((double)(int)D(esp+0x70)+(double)s_35e[n].YLocation-4.0);
								edi = getCounter(6);
								ebx = 0;

								if((int)edi > 0){

									ecx = 0x10*edi;

									eax = 0;
									while(1){

										if(dRMath_abs_i(D(___1df520h+eax)-D(esp+0x88)-4) < 8){

											if(dRMath_abs_i(D(___1df520h+eax+4)-D(esp+0x74)-4) < 8) ebx = 1;
										}

										eax += 0x10;
										if((int)eax >= (int)ecx) break;
									}
								}

								if(ebx == 0){

									if(n != MY_CAR_IDX){

										eax = (int)(s_35e[n].XLocation-s_35e[MY_CAR_IDX].XLocation);
										edx = (int)(s_35e[n].YLocation-s_35e[MY_CAR_IDX].YLocation);
										ecx = 0x10000-75*dRMath_magnitude2_i(eax, edx);
			
										if((int)ecx > 0x1000){

											dRally_Sound_pushEffect(4, SFX_MINE, 0, ecx, 0x21000, 0x8000);	// DROPPING MINE
										}
									}
									else {

										dRally_Sound_pushEffect(4, SFX_MINE, 0, 0x9000, 0x21000, 0x8000);	// DROPPING MINE
									}

									edx = getCounter(6);
									D(___1df520h+0x10*edx) = D(esp+0x88)+0x4;
									D(___1df520h+0x10*edx+4) = D(esp+0x74)+0x4;
									eax = getCounter(6);
									eax++;
									setCounter(6, eax);

									j = -1;
									while(++j < 8){

										i = -1;
										while(++i < 8){

											if((px = B(RACE_MINES1A_BPK+8*j+i)) != 0) B(TRX_IMA+TRX_WIDTH*(j+D(esp+0x74))+D(esp+0x88)+i) = px;
										}
									}

									s_94[n].__28--;
								}
							}
						}
					}
				}
			}
		}
	}

	D(esp+0x7c) = 0;

	if((int)getCounter(6) > 0){

		edi = 0;
		while(1){

			edx = (int)(double)s_35e[n].XLocation-D(___1df520h+edi);
			eax = (int)(double)s_35e[n].YLocation-D(___1df520h+edi+4);

			if((dRMath_abs_i(edx) < 0x14)&&(dRMath_abs_i(eax) < 0x14)){

				eax = 0x28*(eax+0x14);
				edxp = ___243d74h+(int)s_35e[n].ImgOffset+(int)edx;

				if(B(edxp+(int)eax+0x14) > 3){

					if(D(___1df520h+edi+8) == -1){

						j = -1;
						while(++j < 0x10){

							i = -1;
							while(++i < 0x10){

								if((px = B(RACE_BLOWI_BPK+0x10*j+i+0x500)) != 0){

									B(TRX_IMA+D(___1df520h+edi)+i+TRX_WIDTH*(D(___1df520h+edi+4)+j-8)-8) = px;
								}
							}
						}

						D(___1df520h+edi+8) = 0;

						if(s_35e[n].Finished == 0) s_94[n].__18 -= 0x14*(0x400-s_94[n].__1c);

						if((int)s_94[n].__18 < 0) s_94[n].__18 = 0;

						s_35e[n].__fc += (float)(0.5*(double)(int)(rand_watcom106()%3-1));
						s_35e[n].__100 += (float)(0.5*(double)(int)(rand_watcom106()%3-1));
						s_35e[n].XLocation += (float)(int)(rand_watcom106()%11-5);
						s_35e[n].YLocation += (float)(int)(rand_watcom106()%11-5);
						s_35e[n].__104 = (float)(int)(rand_watcom106()%22-10);
						s_35e[n].__b0 *= -0.7f;

						if(n != MY_CAR_IDX){

							eax = (int)(s_35e[n].XLocation-s_35e[MY_CAR_IDX].XLocation);
							edx = (int)(s_35e[n].YLocation-s_35e[MY_CAR_IDX].YLocation);
							ecx = 0x10000-75*dRMath_magnitude2_i(eax, edx);
			
							if((int)ecx > 0x1000){

								dRally_Sound_pushEffect(4, SFX_MINE_EXPLOSION, 0, ecx, 0x21000, 0x8000);	// MINE EXPLOSION
							}
						}
						else {

							dRally_Sound_pushEffect(4, SFX_MINE_EXPLOSION, 0, 0x9000, 0x21000, 0x8000);	// MINE EXPLOSION
						}
					}
				}
			}

			edx = getCounter(6);
			edi += 0x10;
			D(esp+0x7c)++;
			if((int)D(esp+0x7c) >= (int)edx) break;
		}
	}

	return;
}
