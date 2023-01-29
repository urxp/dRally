#include "drally.h"
#include "drmath.h"
#include "drally_structs_free.h"

#pragma pack(1)
typedef struct spectator_s {
	__DWORD__		x;				// +00
	__DWORD__		y;				// +04
	__DWORD__		type;			// +08
	__DWORD__		z_mov;			// +0C
	__DWORD__		rot;			// +10
	__DWORD__		frame;			// +14
	__DWORD__		dead;			// +18
	__DWORD__		timestamp;		// +1C
} spectator_t;

	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___2432b8h[];
	extern __BYTE__ ___2432b0h[];
	extern __BYTE__ ___2432bch[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___2432b4h[];
	extern __BYTE__ NUM_OF_CARS[];
	extern __POINTER__ ___243d74h;
	extern __BYTE__ ___24389ch[];
	extern __BYTE__ ___2432c0h[];
	extern __BYTE__ ___2432c4h[];
	extern int TRX_HEIGHT;
	extern int TRX_WIDTH;
	extern __POINTER__ TRX_MAS;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern spectator_t ___1df720h[];

#define LOC_83 0.833333
#define LOC_PI 3.14159265359

int rand_watcom106(void);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);

static int helper00(double dval){

	return ((dval-(double)(int)dval) < 0.5)?(int)dval:(int)(1.0+dval);
}

// MACHINE GUNS
void race___4ff50h(void){

	__DWORD__ 		eax, ebx, ecx, edx, esi;
	__BYTE__ 		esp[0x144];
	int 			i, j, n;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	if((int)D(___1de580h+0x94*D(___243c60h)+0x18) <= 0) return;
	if(s_35e[D(___243c60h)].Finished != 0) return;
	if((int)getCounter(1) <= 0x1ae) return;
	if((s_35e[D(___243c60h)].Ctrls[getCounter(4)]&0x20) == 0) return;
	if(D(___1de580h+0x94*D(___243c60h)+0x2c) == 0) return;
	if((int)D(___1de580h+0x94*D(___243c60h)+0x30) <= 0) return;

	s_35e[D(___243c60h)].__1b6 = 1;
	ebx = 4*D(___1de580h+0x94*D(___243c60h)+0x60)+0x94*D(___243c60h);
	D(esp+0xe8) = helper00((double)(int)D(___1de580h+ebx+0x74)*dRMath_sin(((((double)(int)D(___1de580h+ebx+0x64)+(double)s_35e[D(___243c60h)].Direction)+180.0)*LOC_PI)/180.0));
	edx = 4*D(___1de580h+0x94*D(___243c60h)+0x60)+0x94*D(___243c60h);
	D(esp+0xe4) = helper00((double)(int)D(___1de580h+edx+0x74)*(LOC_83*dRMath_cos(((double)(int)D(___1de580h+edx+0x64)+(double)s_35e[D(___243c60h)].Direction+180.0)*LOC_PI/180.0)));
	D(___2432b0h) = (int)((double)s_35e[D(___243c60h)].XLocation-4.0+(double)(int)D(esp+0xe8));
	D(___2432b4h) = (int)((double)s_35e[D(___243c60h)].YLocation-4.0+(double)(int)D(esp+0xe4));
	D(___2432b8h) = D(esp+0xe8)+s_35e[D(___243c60h)].__4-0x4;
	D(___2432bch) = D(esp+0xe4)+s_35e[D(___243c60h)].__8-0x4;

	if(D(___243c60h) != D(MY_CAR_IDX)){

		eax = (int)(s_35e[D(___243c60h)].XLocation-s_35e[D(MY_CAR_IDX)].XLocation);
		edx = (int)(s_35e[D(___243c60h)].YLocation-s_35e[D(MY_CAR_IDX)].YLocation);
		ecx = 0x9000-75*dRMath_magnitude2_i(eax, edx);

		if((int)ecx > 0x1000){
			
			dRally_Sound_pushEffect(10, 19+rand_watcom106()%2, 0, ecx, 0x21000, 0x8000);
		}
	}
	else {

		dRally_Sound_pushEffect(9, 19+rand_watcom106()%2, 0, 0x9000, 0x21000, 0x8000);
	}

	D(esp+0xd4) = helper00(256.0*dRMath_sin(((double)s_35e[D(___243c60h)].Direction+180.0)*LOC_PI/180.0))-3+rand_watcom106()%6;
	D(esp+0xd0) = helper00(256.0*dRMath_cos(((double)s_35e[D(___243c60h)].Direction+180.0)*LOC_PI/180.0)*LOC_83)-3+rand_watcom106()%6;

	n = -1;
	while(++n < 26){

		D(esp+0xf0) = (int)(5*n*D(esp+0xd4)+0x80)>>8;
		D(esp+0xf4) = (int)(5*n*D(esp+0xd0)+0x80)>>8;

		i = -1;
		while(++i < (int)D(NUM_OF_CARS)){

			if(i != D(___243c60h)){

				ebx = (int)s_35e[i].XLocation-D(esp+0xf0)-(int)s_35e[D(___243c60h)].XLocation-D(esp+0xe8);
				esi = (int)s_35e[i].YLocation-D(esp+0xf4)-(int)s_35e[D(___243c60h)].YLocation-D(esp+0xe4);

				if((dRMath_abs_i(ebx) < 20)&&(dRMath_abs_i(esi) < 20)){

					if(B(___243d74h+s_35e[i].ImgOffset+(int)ebx+40*(esi+20)+20) > 3){

						n = 26;

						if(s_35e[i].Finished == 0){

							D(___1de580h+0x94*i+0x18) = (int)((double)(int)D(___1de580h+0x94*i+0x18)-(double)(int)(0x400-D(___1de580h+0x94*i+0x1c))*(double)F32(___24389ch+4*D(___1de580h+0x94*D(___243c60h))));
						}

						if((int)D(___1de580h+0x94*i+0x18) < 0) D(___1de580h+0x94*i+0x18) = 0;

						D(___2432c0h) = D(___2432b0h)+D(esp+0xf0);
						D(___2432c4h) = D(___2432b4h)+D(esp+0xf4);
						s_35e[D(___243c60h)].__1aa = 3*D(___1de580h+4*D(___1de580h+0x94*D(___243c60h)+0x60)+0x94*D(___243c60h)+0x84)+1;
					}
				}
			}
		}

		edx = D(esp+0xf0)+D(esp+0xe8)+(int)s_35e[D(___243c60h)].XLocation;
		eax = D(esp+0xf4)+D(esp+0xe4)+(int)s_35e[D(___243c60h)].YLocation;

		if(((int)eax >= 0)&&((int)eax < TRX_HEIGHT)){

			if(((int)edx >= 0)&&((int)edx < TRX_WIDTH)){

				if((B(TRX_MAS+edx+eax*TRX_WIDTH)&0xf) < 4){

					D(___2432c0h) = D(___2432b0h)+D(esp+0xf0);
					D(___2432c4h) = D(___2432b4h)+D(esp+0xf4);
					n = 26;
					s_35e[D(___243c60h)].__1aa = 3*D(___1de580h+0x94*D(___243c60h)+4*D(___1de580h+0x94*D(___243c60h)+0x60)+0x84)+1;
				}
			}
		}

#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

			j = rand_watcom106()%5;
			i = -1;
			while(++i < 4){

				if(___1df720h[5*i+j].dead == 0){

					eax = D(esp+0xe8)+D(esp+0xf0)+(int)s_35e[D(___243c60h)].XLocation-___1df720h[5*i+j].x-8;
					edx = D(esp+0xe4)+D(esp+0xf4)+(int)s_35e[D(___243c60h)].YLocation-___1df720h[5*i+j].y-8;

					if((dRMath_abs_i(eax) < 3)&&(dRMath_abs_i(edx) < 3)){
		
						___1df720h[5*i+j].dead = 1;
						___1df720h[5*i+j].frame = 0;

						if(D(___243c60h) != D(MY_CAR_IDX)){

							eax = (int)(s_35e[D(___243c60h)].XLocation-s_35e[D(MY_CAR_IDX)].XLocation);
							edx = (int)(s_35e[D(___243c60h)].YLocation-s_35e[D(MY_CAR_IDX)].YLocation);
							ecx = 0x10000-75*dRMath_magnitude2_i(eax, edx);

							if((int)ecx > 0x1000){

								dRally_Sound_pushEffect(3, 7+rand_watcom106()%3, 0, ecx, 0x50000, 0x8000);
							}
						}
						else {

							dRally_Sound_pushEffect(3, 7+rand_watcom106()%3, 0, 0x9000, 0x50000, 0x8000);
						}
					}
				}
			}
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
	}

	D(___1de580h+0x94*D(___243c60h)+0x30) -= 0x104;
	
	if((int)D(___1de580h+0x94*D(___243c60h)+0x30) < 0) D(___1de580h+0x94*D(___243c60h)+0x30) = 0;

	s_35e[D(___243c60h)].__1ba = D(___2432c0h);
	s_35e[D(___243c60h)].__1be = D(___2432c4h);
	s_35e[D(___243c60h)].__1d2 = D(___2432b0h);
	s_35e[D(___243c60h)].__1d6 = D(___2432b4h);
}
