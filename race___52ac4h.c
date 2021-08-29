#include "drally.h"

#pragma pack(1)
typedef struct spectator_s {
	dword		x;
	dword		y;
	dword		type;
	dword		z_mov;
	dword		rot;
	dword		frame;
	dword		dead;
	dword		timestamp;
} spectator_t;

#define SPECTATORS ___1df720h
	extern spectator_t ___1df720h[];
	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern void * ___243d74h;
	extern byte ___1de580h[];
	extern byte ___243ce8h[];

int rand_watcom106(void);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);

// run over spectator
void race___52ac4h(void){

	dword 	n, a, b, c, d;

	n = -1;
	while(++n < 0x14){

		if(SPECTATORS[n].dead == 0){

			c = (int)F32(0x35e*D(___243c60h)+___1e6ed0h+0xb4)-(SPECTATORS[n].x+8);
			d = (int)F32(0x35e*D(___243c60h)+___1e6ed0h+0xb8)-(SPECTATORS[n].y+8);

			if((abs(c) < 0x14)&&(abs(d) < 0x14)&&(B(c+0x14+0x28*(d+0x14)+___243d74h+D(0x35e*D(___243c60h)+___1e6ed0h+0x10)) > 3)){

				SPECTATORS[n].frame = 0;
				SPECTATORS[n].dead = 1;

				if(D(0x35e*D(___243c60h)+___1e6ed0h+0x10a) == 0){

					D(0x94*D(___243c60h)+___1de580h+0x18) = D(0x94*D(___243c60h)+___1de580h+0x18)-3*(0x400-D(0x94*D(___243c60h)+___1de580h+0x1c));
				}

				if((int)D(0x94*D(___243c60h)+___1de580h+0x18) < 0) D(0x94*D(___243c60h)+___1de580h+0x18) = 0;

				F32(0x35e*D(___243c60h)+___1e6ed0h+0xb4) = (float)((double)(rand_watcom106()%7-3)+(double)F32(0x35e*D(___243c60h)+___1e6ed0h+0xb4));
				F32(0x35e*D(___243c60h)+___1e6ed0h+0xb8) = (float)((double)(rand_watcom106()%7-3)+(double)F32(0x35e*D(___243c60h)+___1e6ed0h+0xb8));
				F32(0x35e*D(___243c60h)+___1e6ed0h+0xb0) = (float)(-0.1*(double)F32(0x35e*D(___243c60h)+___1e6ed0h+0xb0));
				F32(0x35e*D(___243c60h)+___1e6ed0h+0x104) = (float)(rand_watcom106()%0xa-5);
				D(0x35e*D(___243c60h)+___1e6ed0h+0x352) = 0x2d;

				if(D(___243c60h) != D(___243ce8h)){

					a = (int)((double)F32(0x35e*D(___243c60h)+___1e6ed0h+0xb4)-(double)F32(0x35e*D(___243ce8h)+___1e6ed0h+0xb4));
					b = (int)((double)F32(0x35e*D(___243c60h)+___1e6ed0h+0xb8)-(double)F32(0x35e*D(___243ce8h)+___1e6ed0h+0xb8));
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
