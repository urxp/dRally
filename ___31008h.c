#include "drally.h"
#include "drally_keyboard.h"
#include "drally_structs_fixed.h"
#include "sfx.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a0f90h;
	extern __POINTER__ ___1a0f88h;
	extern __POINTER__ ___1a0f84h;
	extern __BYTE__ ___1a1028h[];
	extern __BYTE__ ___1a103ch[];
	extern __BYTE__ ___196af0h[];
	extern __BYTE__ ___196aech[];
	extern __BYTE__ ___196ae8h[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185a48h[];
	extern __BYTE__ ___185a44h[];
	extern __BYTE__ ___185a40h[];
	extern __BYTE__ ___185a3ch[];
	extern __BYTE__ ___185b58h[];
	extern __BYTE__ ___1866b8h[];
	extern __DWORD__ ___243d44h;
	extern __BYTE__ ___185a5ch[];
	extern __BYTE__ ___185a2ch[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___185a4ch[];
	extern __BYTE__ ___1a1ef4h[];
	extern __BYTE__ ___185a28h[];
	extern __BYTE__ ___1a1f64h[];
	extern __BYTE__ ___1de7d0h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___1a0a50h[];
	extern __BYTE__ ___185a20h[];

void ___3892ch_cdecl(__DWORD__);
int rand_watcom106(void);
void ___3079ch_cdecl(__DWORD__);
__BYTE__ dRally_Sound_setPosition(__DWORD__ pos_n);
void dRally_Sound_freeEffectChannel(__BYTE__ ch_num);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___12940h(void);
void ___58c60h(void);
void ___2b318h(void);
void ___2415ch(void);
void ___3a6a4h_v2(int);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2ab50h(void);
__BYTE__ ___5994ch(void);
void ___33010h_cdecl(int NumCars);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);
void ___25330h(void);
void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);

static __BYTE__ helper_color(__DWORD__ eax, __DWORD__ edx){

	___imul32((__POINTER__)&eax, (__POINTER__)&edx, edx);
	eax += 0x8000;
	edx += !!(eax < 0x8000);
	eax = (eax >> 0x10)|(edx << 0x10);
	eax += 0x8000;
	eax= (int)eax>>0x10;

	return eax&0xff;
}

// FINAL CHALLENGE SIGNUP
void ___31008h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn, p5;
	__BYTE__ 	esp[0x30];
	__BYTE__ 	px;
	int 		i, j, n;
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;
	D(esp+0x28) = 0;

	while(1){

		nn = D(esp+0x28)+0xb0;
		rr = helper_color(___19eb50h[D(esp+0x28)+0xb0].r, 0x640000);
		gg = helper_color(___19eb50h[D(esp+0x28)+0xb0].g, 0x640000);
		bb = helper_color(___19eb50h[D(esp+0x28)+0xb0].b, 0x640000);
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		D(esp+0x28)++;
		if((int)D(esp+0x28) >= 7) break;
	}

	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xe100, ___1a1138h__VESA101_BACKGROUND+0xe100, 0x2aa80);
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x39580, ___1a1138h__VESA101_BACKGROUND+0x39580, 0x2800);
	___135fch(0, 0x173, 0x27f, 0x6d);
	___23230h();
	___25330h();

	j = -1;
	while(++j < 0x10){

		i = -1;
		while(++i < 0x1b8){

			if((px = B(___1a0f90h+0x1b8*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xe628+0x280*j+i) = px;
		}
	}

	j = -1;
	while(++j < 0xe4){

		i = -1;
		while(++i < 0x100){

			if((px = B(___1a0f88h+0x100*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x140b0+0x280*j+i) = px;
		}
	}

	j = -1;
	while(++j < 0x68){

		i = -1;
		while(++i < 0x73){

			if((px = B(___1a0f84h+0x73*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x25d1c+0x280*j+i) = px;
		}
	}

	ecx = 0xf4;
	ebx = 0x10c;
	edx = 0x78;
	___27f80h_cdecl(0xaa, edx, ebx, ecx);
	___3a6a4h_v2(1);

	L(eax) = 0;
	n = -1;
	while(++n < 0x1e0){

		if((L(eax) == DR_SCAN_ENTER)||(L(eax) == DR_SCAN_KP_ENTER)||(L(eax) == DR_SCAN_ESCAPE)) break;
		___2ab50h();
		L(eax) = ___5994ch();
	}

	if(L(eax) == DR_SCAN_ESCAPE){ // CHICKEN OUT

		dRally_Sound_pushEffect(0x1, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500-0x1000, 0x8000);
		___2b318h();
		ebp = 0x640000;
		D(esp+0x2c) = 0xffdc;

		while(1){

			if((D(___185a14h_UseWeapons) != 0)&&(D(___185a4ch) != 0)) dRally_Sound_setMasterVolume(D(esp+0x2c));

			___58c60h();
			esi = ebp;
			D(esp+0x28) = 0;

			while(1){

				nn = B(esp+0x28);
				rr = helper_color(___19eb50h[D(esp+0x28)].r, esi);
				gg = helper_color(___19eb50h[D(esp+0x28)].g, esi);
				bb = helper_color(___19eb50h[D(esp+0x28)].b, esi);
				__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
				D(esp+0x28)++;
				if((int)D(esp+0x28) >= 0x100) break;
			}

			edx = D(esp+0x2c);
			edx -= 0x51e;
			ebp -= 0x20000;
			D(esp+0x2c) = edx;
			if(ebp == 0xfffe0000) break;
		}

		if((D(___185a14h_UseWeapons) != 0)&&(D(___185a4ch) != 0)){

			dRally_Sound_setPosition(D(___1a1ef4h));
			D(___185a28h) = 1;
			dRally_Sound_freeEffectChannel(1);
		}

		___12940h();

		D(esp+0x28) = 0;
		while(1){

			__DISPLAY_SET_PALETTE_COLOR(0, 0, 0, B(esp+0x28));
			D(esp+0x28)++;
			if((int)D(esp+0x28) >= 0x100) break;
		}

		while(1){

			___3079ch_cdecl(1);
			if((B(___1a1f64h+3) >= 4)&&(B(___1a1f64h+4) >= 4)&&(B(___1a1f64h+5) >= 4)) break;
		}

		memset(esp, 0, 4);

		n = -1;
		while(++n < 4){

			while(1){

				eax = 1+rand_watcom106()%4;
				D(___1de7d0h+0x54*n+0x40) = eax;
				if(B(esp+eax-1) == 0) break;
			}
			
			B(esp+eax-1) = 1;
		}

		___3892ch_cdecl(1);
		edx  = 0;

		n = -1;
		while(++n < 0x14){

			ecx = s_6c[n].points;
			if(((int)edx < (int)ecx)&&(n != D(___1a1ef8h))) edx = ecx;
		}

#if defined(DR_MULTIPLAYER)
		if(___19bd60h != 0){

			D(___1a0a50h+0xc) = 1;
		}
		else {
#endif // DR_MULTIPLAYER
			D(___1a0a50h+0xc) = !((int)edx < (int)s_6c[D(___1a1ef8h)].points);
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER

		D(___185a20h) = 1;
	}
	else {

		D(___1a1028h) = 3;
		D(___1a103ch) = 1;
		D(___196af0h) = 0;
		D(___196aech) = 0;
		___33010h_cdecl(2);

		if(D(___196ae8h) == 1){
			
			D(___185a48h) = 0;
			D(___185a44h) = 0;
			D(___185a40h) = 0;
			D(___185a3ch) = 0;
			B(___185b58h+0x1) = 1;
			strcpy(___1866b8h+0x1c2, "Start A New Game");
			B(___185b58h+0xa) = 0;
			B(___185b58h+0xd) = 0;
			B(___185b58h+0xb) = 0;
			strcpy(___1866b8h, "Start Racing");
			___2415ch();
			___243d44h = 1;
			D(___185a5ch+0x34) = 0;
			D(___185a2ch) = 1;
			D(___196ae8h) = 0;
		}
	}
}
