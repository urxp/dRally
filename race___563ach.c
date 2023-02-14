#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ NUM_OF_CARS[];
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ MY_CAR_IDX[];


void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void dRally_Sound_freeEffectChannel(__BYTE__ ch_num);
double dRMath_sqrt(double);

// HORNS
void race___563ach(void){

	double 			d_tmp;
	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[0x10];
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	if((int)getCounter(1) > 0xbe){

		ebx = 0;
		ecx = D(NUM_OF_CARS);
		D(___243c60h) = ebx;

		if((int)ecx > 0){

			while(1){

				edx = 0;
				ebx = 0;

				if((int)getCounter(5) > 0){

					eax = 0;

					while(1){

						L(ecx) = s_35e[D(___243c60h)].Ctrls[eax]&0xff;

						if(((L(ecx)&2) != 0)&&((L(ecx)&0x40) != 0)){

							ecx = s_35e[D(___243c60h)].Ctrls[eax];
							ecx &= 0xbd;
							ebx = 1;
							s_35e[D(___243c60h)].Ctrls[eax] = ecx;
						}

						eax++;
						edx++;
						if((int)edx >= (int)getCounter(5)) break;
					}
				}

				esi = D(___243c60h);
				eax = 0x94*esi;
				L(eax) = !!((int)D(eax+___1de580h) > 1);
				eax &= 0xff;
				eax += 0x21;
				D(esp+0xc) = eax;

				if((ebx != 1)||(s_35e[esi].Finished != 0)){

					eax = 0x35e*D(___243c60h);

					if(s_35e[eax/0x35e].__356 == 1){

						esi = 0;
						s_35e[eax/0x35e].__356 = esi;
						L(eax) = D(___243c60h);
						L(eax) += 0xb;
						eax &= 0xff;
						dRally_Sound_freeEffectChannel(eax);
					}
				}
				else {

					eax = 0x35e*esi;

					if(s_35e[eax/0x35e].__356 == 0){
							
						edx = D(___243c60h);
						ecx = D(MY_CAR_IDX);
						esi <<= 0xc;
						s_35e[eax/0x35e].__356 = ebx;
						L(ebx) = D(___243c60h);
						esi += 0x21000;
						L(ebx) += 0xb;

						if(edx != ecx){

							edx = 0x35e*ecx;
							D(esp+4) = (int)((double)s_35e[eax/0x35e].XLocation-(double)s_35e[edx/0x35e].XLocation);
							D(esp) = (int)((double)s_35e[eax/0x35e].YLocation-(double)s_35e[edx/0x35e].YLocation);
							edx = D(esp+4);
							edx = edx*edx;
							eax = D(esp);
							eax = eax*eax;
							edx += eax;
							D(esp+8) = edx;
							D(esp+8) = (int)dRMath_sqrt((double)(int)D(esp+8));
							ecx = 0x58*D(esp+8);
							eax = 0x9500;
							eax -= ecx;
							ecx = eax;

							if((int)eax > 0){

								edx = 0;
								eax = 0;
								L(edx) = D(esp+0xc);
								L(eax) = L(ebx);
								ebx = 0;
								dRally_Sound_pushEffect(eax, edx, ebx, ecx, esi, 0x8000);
							}
						}
						else {

							edx ^= ecx;
							eax = 0;
							L(edx) = D(esp+0xc);
							ecx = 0x10000;
							L(eax) = L(ebx);
							ebx = 0;
							dRally_Sound_pushEffect(eax, edx, ebx, ecx, esi, 0x8000);
						}
					}
				}

				esi = D(___243c60h);
				esi++;
				edi = D(NUM_OF_CARS);
				D(___243c60h) = esi;
				if((int)esi >= (int)edi) break;
			}
		}
	}
}
