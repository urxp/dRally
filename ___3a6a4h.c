#include "drally.h"

#define LOC43	43

#define COOXY(x,y) (0x280*(y)+(x))
#define COOUV(u,v) (0xf*(v)+(u))

	extern __BYTE__ * ___1a1124h__VESA101h_ScreenBufferA;
	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1100h__VESA101h_DefaultScreenBuffer;
	extern __BYTE__ * ___1a10c4h;
	extern __BYTE__ ___185a24h[];

void ___2aa08h(void);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void dRally_Sound_setMasterVolume(__DWORD__ vol);

static void helper_volume(int val, int n){

	if(val == -1) dRally_Sound_setMasterVolume((0x10000/LOC43)*(LOC43-n));
	if(val == 1) dRally_Sound_setMasterVolume((0x10000/LOC43)*n);
}

static void helper_loop(int m, int l0, int off){

	int 	i, j, k, l, coords;

	___2aa08h();

	l = -1;
	while(++l < l0){

		k = -1;
		while(++k < 10){
			
			j = -1;
			while(++j < 15){

				i = -1;
				while(++i < 15){

					if(___1a10c4h[COOUV(i, COOUV(j, k))] != 0){
						
						coords = COOXY(COOUV(i, m+k), COOUV(j, l+5)-2+off);
						___1a112ch__VESA101_ACTIVESCREEN_PTR[coords] = ___1a1124h__VESA101h_ScreenBufferA[coords];
					}
				}
			}
		}
	}

	coords = COOXY(15*m, 15*5-2+off);
	___1398ch__VESA101_PRESENTRECTANGLE(coords, ___1a112ch__VESA101_ACTIVESCREEN_PTR+coords, 15*10, 15*l0);
}

static void helper000(int A1, int A2, int A3, int cb){

	int		n;

	n = -1;
	while(++n < LOC43){

		helper_loop(n, A2, A3);
		if(cb) helper_volume(A1, n);
	}

	___5994ch();
	___59b3ch();
}

void ___3a6a4h_v2(int v){

	int 	n;

	if((v != 0)||(D(___185a24h) != 0)){

		___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a1100h__VESA101h_DefaultScreenBuffer;
		helper000(0, 22, 2, 0);

		if((v == 0)&&(D(___185a24h) != 0)) D(___185a24h) = 0;
	}

	___12cb8h__VESA101_PRESENTSCREEN();
}

// GOING TO PREPARE TO RACE 
void ___3a968h_cdecl(int A1){ helper000(A1, 27, 0, 1); }
void ___3a7e0h_cdecl(int A1){ helper000(A1, 22, 2, 1); }
