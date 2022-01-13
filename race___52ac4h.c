#include "drally.h"
#include "drally_structs_free.h"

#pragma pack(1)
typedef struct spectator_s {
	__DWORD__		x;
	__DWORD__		y;
	__DWORD__		type;
	__DWORD__		z_mov;
	__DWORD__		rot;
	__DWORD__		frame;
	__DWORD__		dead;
	__DWORD__		timestamp;
} spectator_t;

#define SPECTATORS ___1df720h
	extern spectator_t ___1df720h[];
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __POINTER__ ___243d74h;
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ MY_CAR_IDX[];

int rand_watcom106(void);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);

// run over spectator
void race___52ac4h(void){

	__DWORD__ 		n, a, b, c, d;
	struct_35e_t *	s_35e;

	s_35e = (struct_35e_t *)___1e6ed0h;
	n = -1;
	while(++n < 0x14){

		if(SPECTATORS[n].dead == 0){

			c = (int)s_35e[D(___243c60h)].XLocation-(SPECTATORS[n].x+8);
			d = (int)s_35e[D(___243c60h)].YLocation-(SPECTATORS[n].y+8);

			if((abs(c) < 0x14)&&(abs(d) < 0x14)&&(B(c+0x14+0x28*(d+0x14)+___243d74h+s_35e[D(___243c60h)].ImgOffset) > 3)){

				SPECTATORS[n].frame = 0;
				SPECTATORS[n].dead = 1;

				if(s_35e[D(___243c60h)].__10a == 0){

					D(0x94*D(___243c60h)+___1de580h+0x18) -= 3*(0x400-D(0x94*D(___243c60h)+___1de580h+0x1c));
				}

				if((int)D(0x94*D(___243c60h)+___1de580h+0x18) < 0) D(0x94*D(___243c60h)+___1de580h+0x18) = 0;

				s_35e[D(___243c60h)].XLocation += (float)(rand_watcom106()%7-3);
				s_35e[D(___243c60h)].YLocation += (float)(rand_watcom106()%7-3);
				s_35e[D(___243c60h)].__b0 *= -0.1f;
				s_35e[D(___243c60h)].__104 = (float)(rand_watcom106()%0xa-5);
				s_35e[D(___243c60h)].__352 = 0x2d;

				if(D(___243c60h) != D(MY_CAR_IDX)){

					a = (int)((double)s_35e[D(___243c60h)].XLocation-(double)s_35e[D(MY_CAR_IDX)].XLocation);
					b = (int)((double)s_35e[D(___243c60h)].YLocation-(double)s_35e[D(MY_CAR_IDX)].YLocation);
					c = 0x10000-0x4b*sqrt(a*a+b*b);

					if((int)c > 0x1000) dRally_Sound_pushEffect(3, rand_watcom106()%3+7, 0, c,  0x50000, 0x8000);
				}
				else {

					dRally_Sound_pushEffect(3, rand_watcom106()%3+7, 0, 0x9000, 0x50000, 0x8000);
				}
			}
		}
	}
}
