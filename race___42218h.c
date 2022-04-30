#include "drally.h"
#include "sfx.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___196de4h[];
	extern __BYTE__ ___243334h[];
	extern __BYTE__ ___243320h[];
	extern __POINTER__ BACKBUFFER;
	extern __POINTER__ GEN_LAM_BPK;
	extern __BYTE__ ___196de0h[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___24387ch[];
	extern __BYTE__ ___243878h[];
	extern __BYTE__ ___243330h[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___1e6ed0h[];
	extern __DWORD__ CONNECTION_TYPE;

void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);

#if defined(DR_MULTIPLAYER)
void ___44194h(void);
void ___44130h_cdecl(__DWORD__  A1);
void ___4495ch(void);
#endif // DR_MULTIPLAYER

void race___42218h(void){

	int 			i, j;
	struct_35e_t *	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	if(((int)getCounter(1) > 0xa)&&((int)getCounter(1) <= 0x82)){

		if(D(___196de4h) == 0){

			dRally_Sound_pushEffect(2, SFX_GET_READY, 0, 0x10000, 0x50000, 0x8000);
			D(___196de4h) = 1;
		}

		if((int)(D(___243320h)-D(___243334h)) <= 0){

			D(___243320h) = 0;
		}
		else {
		
			D(___243320h) -= D(___243334h);
		}

		j = -1;
		while(++j < 0x3c){

			i = -1;
			while(++i < 0x50) B( BACKBUFFER+0x150+D(___243320h)+0x200*j+i) = B(GEN_LAM_BPK+0x50*j+i);
		}
	}

	if((int)getCounter(1) > 0xbe){
	
		if(D(___196de0h) == 1){

#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0){
			
				___44130h_cdecl(1);
				___4495ch();
				D(___24387ch) = 1;
			}
#endif // DR_MULTIPLAYER

			D(___243878h) = 0;
			D(___243330h) = 0;
			resetCounter(3);
			resetCounter(5);
			resetCounter(2);
			s_35e[D(MY_CAR_IDX)].__a4 = 0;
			s_35e[D(MY_CAR_IDX)].ActionFlags_i = 0;
			dRally_Sound_pushEffect(0x5, SFX_BEEP, 0, 0x10000, 0x28000, 0x8000);
		}

		if((int)(D(___243320h)+D(___243334h)) > 0x50){

			D(___243320h) = 0x50;
		}
		else {

			D(___243320h) += 2*D(___243334h);
		}

		j = -1;
		while(++j < 0x3c){

			i = -1;
			while(++i < 0x50) B(BACKBUFFER+0x150+D(___243320h)+0x200*j+i) = B(GEN_LAM_BPK+0x2580+0x50*j+i);
		}

		D(___196de0h) = 2;
	}

	if(((int)getCounter(1) > 0x82)&&((int)getCounter(1) <= 0xbe)){

		if(D(___196de0h) == 0){

#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0){

				if(CONNECTION_TYPE != 2){

					___44130h_cdecl(2);
				}
				else {
				
					___44194h();
				}
			}
#endif // DR_MULTIPLAYER

			dRally_Sound_pushEffect(0x5, SFX_BEEP, 0, 0x10000, 0x20000, 0x8000);
		}

		D(___196de0h) = 1;

		j = -1;
		while(++j < 0x3c){
		
			i = -1;
			while(++i < 0x50) B(BACKBUFFER+0x150+0x200*j+i) = B(GEN_LAM_BPK+0x12c0+0x50*j+i);
		}
	}
}
