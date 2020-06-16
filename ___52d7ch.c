#include "drally.h"

#pragma pack(1)
typedef struct spectator_s {
	int			x;
	int			y;
	dword		type;
	dword		z_mov;
	dword		rot;
	dword		frame;
	dword		dead;
	dword		timestamp;
} spectator_t;

#define SPECTATORS ___1df720h
	extern spectator_t ___1df720h[];
	extern byte ___243ce8h[];
	extern byte ___196dach[];
	extern byte ___1e6f84h[];
	extern byte ___1e6f88h[];
	extern byte ___196dc8h[];
	extern byte ___196dcch[];
	extern byte ___196d98h[];
	extern byte ___243d40h[];
	extern byte ___243d80h[];
	extern byte ___243288h[];

dword __GET_FRAME_COUNTER(void);

void ___52d7ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[4];
	dword 	n, i, j;

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

			if(SPECTATORS[n].x > (int)F32(0x35e*D(___243ce8h)+___1e6f84h)){
				if(SPECTATORS[n].y > (int)F32(0x35e*D(___243ce8h)+___1e6f88h)) SPECTATORS[n].rot = 2*!D(___196dach);
				else if(SPECTATORS[n].y < (int)F32(0x35e*D(___243ce8h)+___1e6f88h)) SPECTATORS[n].rot = 1+2*!!D(___196dach);
			}
			else if(SPECTATORS[n].x < (int)F32(0x35e*D(___243ce8h)+___1e6f84h)){
				if(SPECTATORS[n].y > (int)F32(0x35e*D(___243ce8h)+___1e6f88h)) SPECTATORS[n].rot = 1+2*!D(___196dach);
				else if(SPECTATORS[n].y < (int)F32(0x35e*D(___243ce8h)+___1e6f88h)) SPECTATORS[n].rot = 2*!!D(___196dach);
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
						ebx = D(4*(SPECTATORS[n].x%2)+___243288h)+0x100*SPECTATORS[n].frame;
					}
					else {
						ebx = D(___243d40h)+0xc00*SPECTATORS[n].type+0x300*SPECTATORS[n].rot+0x100*SPECTATORS[n].frame;
					}

					if((int)eax <= 0xb7){
						ecx = 0x10-edx;
						ebx += 0x10*edx;
					}
					else {
						ecx = 0xc8-eax;
					}

					edi = D(___243d80h)+0x60+0x200*eax+SPECTATORS[n].x-D(___196dc8h)+D(___196d98h);

					j = -1;
					while(++j < L(ecx)){
						i = -1;
						while(++i < 0x10){
							if(B(ebx) != 0) B(edi) = B(ebx);
							ebx++;
							edi++;
						}
						edi += 0x1f0;
					}
				}
			}
		}
	}
}
