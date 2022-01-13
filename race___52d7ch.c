#include "drally.h"
#include "drally_structs_free.h"

#pragma pack(1)
typedef struct spectator_s {
	int			x;
	int			y;
	__DWORD__		type;
	__DWORD__		z_mov;
	__DWORD__		rot;
	__DWORD__		frame;
	__DWORD__		dead;
	__DWORD__		timestamp;
} spectator_t;

#define SPECTATORS ___1df720h
	extern spectator_t ___1df720h[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___196dach[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___196dc8h[];
	extern __BYTE__ ___196dcch[];
	extern __BYTE__ ___196d98h[];
	extern __POINTER__ ___243d40h;
	extern __POINTER__ ___243d80h;
	extern __POINTER__ ___243288h[2];

__DWORD__ __GET_FRAME_COUNTER(void);

void race___52d7ch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[4];
	__DWORD__ 	n, i, j;
	__POINTER__ 	ebxp;
	__POINTER__ 	edip;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *) ___1e6ed0h;

	n = -1;
	while(++n < 0x14){
		if(SPECTATORS[n].dead != 0){
			if((SPECTATORS[n].timestamp+5) <= __GET_FRAME_COUNTER()){
				if(SPECTATORS[n].frame < 7){
					SPECTATORS[n].frame++;
					SPECTATORS[n].timestamp = __GET_FRAME_COUNTER();
				}
			}
		}
		else {
			if((SPECTATORS[n].timestamp+5) <= __GET_FRAME_COUNTER()){
				if(SPECTATORS[n].z_mov == 0){
					if(SPECTATORS[n].frame < 2)	SPECTATORS[n].frame++;
					else 						SPECTATORS[n].z_mov = 1;
				}
				else if(SPECTATORS[n].z_mov == 1){
					if(SPECTATORS[n].frame > 0)	SPECTATORS[n].frame--;
					else						SPECTATORS[n].z_mov = 0;
				}
				SPECTATORS[n].timestamp = __GET_FRAME_COUNTER();
			}

			if(SPECTATORS[n].x > (int)s_35e[D(MY_CAR_IDX)].XLocation){
				if(SPECTATORS[n].y > (int)s_35e[D(MY_CAR_IDX)].YLocation) SPECTATORS[n].rot = 2*!D(___196dach);
				else if(SPECTATORS[n].y < (int)s_35e[D(MY_CAR_IDX)].YLocation) SPECTATORS[n].rot = 1+2*!!D(___196dach);
			}
			else if(SPECTATORS[n].x < (int)s_35e[D(MY_CAR_IDX)].XLocation){
				if(SPECTATORS[n].y > (int)s_35e[D(MY_CAR_IDX)].YLocation) SPECTATORS[n].rot = 1+2*!D(___196dach);
				else if(SPECTATORS[n].y < (int)s_35e[D(MY_CAR_IDX)].YLocation) SPECTATORS[n].rot = 2*!!D(___196dach);
			}
		}
	}
	n = -1;
	while(++n < 0x14){
		if((SPECTATORS[n].x > (int)(D(___196dc8h)-0x10))&&(SPECTATORS[n].x < (int)(D(___196dc8h)+0x140))){
			if((SPECTATORS[n].y > (int)(D(___196dcch)-0x10))&&(SPECTATORS[n].y < (int)(D(___196dcch)+0xc8))){
				if((SPECTATORS[n].x != 0)&&(SPECTATORS[n].y != 0)){

					eax = SPECTATORS[n].y-D(___196dcch);
					edx = 0;
					if((int)eax < 0){
						edx -= eax;
						eax -= eax;
					}

					if(SPECTATORS[n].dead != 0){
						ebxp = ___243288h[SPECTATORS[n].x%2]+0x100*SPECTATORS[n].frame;
					}
					else {
						ebxp = ___243d40h+0xc00*SPECTATORS[n].type+0x300*SPECTATORS[n].rot+0x100*SPECTATORS[n].frame;
					}

					if((int)eax <= 0xb7){
						ecx = 0x10-edx;
						ebxp = ebxp+0x10*edx;
					}
					else {
						ecx = 0xc8-eax;
					}

					edip = ___243d80h+0x60+0x200*eax+SPECTATORS[n].x-D(___196dc8h)+D(___196d98h);

					j = -1;
					while(++j < L(ecx)){
						i = -1;
						while(++i < 0x10){

							if(B(ebxp) != 0) B(edip) = B(ebxp);
							ebxp++;
							edip++;
						}
						edip += 0x1f0;
					}
				}
			}
		}
	}
}
