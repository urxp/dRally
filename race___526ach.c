#include "drally.h"
#include "drmath.h"
#include "sfx.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___1f2488h[];
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __POINTER__ ___243d74h;
	extern __BYTE__ MY_CAR_IDX[];
	extern int TRX_WIDTH;
	extern __POINTER__ TRX_IMA;
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___1de7d0h[];
	extern __BYTE__ ___196dd0h[];

void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
int rand_watcom106(void);

// pickups
void race___526ach(void){

	double 	d_tmp;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi;
	__POINTER__ 	edxp;
	int 			i, n, rat_a, rat_b;
	struct_54_t * 	s_54;
	struct_35e_t * 	s_35e;

	
	s_35e = (struct_35e_t *)___1e6ed0h;
	s_54 = (struct_54_t *)___1de7d0h;

	n = -1;
	while(++n < 0x10){

		edx = (int)(double)s_35e[D(___243c60h)].XLocation-(int)D(___1f2488h+0x120*n);
		eax = (int)(double)s_35e[D(___243c60h)].YLocation-(int)D(___1f2488h+0x120*n+4);

		if((dRMath_abs_i(edx) < 0x11)&&(dRMath_abs_i(eax) < 0x11)){
					
			edxp = ___243d74h+s_35e[D(___243c60h)].ImgOffset+(int)edx;

			if(((B(edxp+0x28*((int)eax+0x12)+0x12) > 3)||(B(edxp+0x28*((int)eax+0x12)+0x16) > 3))||((B(edxp+0x28*((int)eax+0x16)+0x12) > 3)||(B(edxp+0x28*((int)eax+0x16)+0x16) > 3))){

				if((int)D(___1f2488h+0x120*n+8) > 0){
						
					if(D(___243c60h) != D(MY_CAR_IDX)){

						rat_a = (int)((double)s_35e[D(___243c60h)].XLocation-(double)s_35e[D(MY_CAR_IDX)].XLocation);
						rat_b = (int)((double)s_35e[D(___243c60h)].YLocation-(double)s_35e[D(MY_CAR_IDX)].YLocation);
						eax = 0x9000-0x4b*dRMath_magnitude2_i(rat_a, rat_b);

						if((int)eax > 0x1000) dRally_Sound_pushEffect(0xa, SFX_MINE, 0, eax, 0x21000, 0x8000);
					}
					else {

						dRally_Sound_pushEffect(4, SFX_MINE, 0, 0x9000, 0x21000, 0x8000);
					}

					i = -1;
					while(++i < 0x10){

						memcpy(TRX_IMA+D(___1f2488h+0x120*n)-8+TRX_WIDTH*(D(___1f2488h+0x120*n+4)+i-8), ___1f2488h+0x20+0x120*n+0x10*i, 0x10);
					}

					switch(D(___1f2488h+0x120*n+8)-1){
					case 0:
						D(___1de580h+0x94*D(___243c60h)+0x30) += 0x7800;
						if((int)D(___1de580h+0x94*D(___243c60h)+0x30) > 0x19000) D(___1de580h+0x94*D(___243c60h)+0x30) = 0x19000;
						break;
					case 1:
						D(___1de580h+0x94*D(___243c60h)+0x34) += 0x3c00;
						if((int)D(___1de580h+0x94*D(___243c60h)+0x34) > 0x19000) D(___1de580h+0x94*D(___243c60h)+0x34) = 0x19000;
						break;
					case 2:
						D(___1de580h+0x94*D(___243c60h)+0x50)++;
						break;
					case 3:
						s_35e[D(___243c60h)].Drug = 0x230;
						if(D(___243c60h) == D(MY_CAR_IDX)) dRally_Sound_pushEffect(2, SFX_SIENI, 0, 0x10000, 0x50000, 0x8000);
						break;
					case 4:
						D(___1f2488h+0x120*n+0x1c) = (rand_watcom106()%4)+2;
						D(___1de580h+0x94*D(___243c60h)+0x18) += 0x400*D(___1f2488h+0x120*n+0x1c);
						if((int)D(___1de580h+0x94*D(___243c60h)+0x18) > 0x19000) D(___1de580h+0x94*D(___243c60h)+0x18) = 0x19000;
						break;
					case 5:
						if(D(MY_CAR_IDX) == D(___243c60h)) s_54[0].__4c = 1;
						break;
					case 6:
						D(___1de580h+0x94*D(___243c60h)+0x50) += 0xa;
						break;
					case 7:
						D(___1f2488h+0x120*n+0x1c) = 0x14;
						D(___1de580h+0x94*D(___243c60h)+0x18) += 0x14*0x400;
						if((int)D(___1de580h+0x94*D(___243c60h)+0x18) > 0x19000) D(___1de580h+0x94*D(___243c60h)+0x18) = 0x19000;
						break;
					default:
						break;
					}

					D(___1f2488h+0x120*n+0x14) = 0x8c;
					D(___1f2488h+0x120*n+0x18) = D(___1f2488h+0x120*n+8);
					D(___196dd0h) = 0xf0;
					D(___1f2488h+0x120*n+8) = 0;
					D(___1f2488h+0x120*n+0xc) = (rand_watcom106()%0x96)+0xc8;
					D(___1f2488h+0x120*n+0x10) = 0;
				}
			}
		}
	}
}
