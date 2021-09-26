#include "drally.h"
#include "drally_keyboard.h"
#include "sfx.h"

	extern byte ___19eb50h[];
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a0f90h;
	extern void * ___1a0f88h;
	extern void * ___1a0f84h;
	extern byte ___1a1028h[];
	extern byte ___1a103ch[];
	extern byte ___196af0h[];
	extern byte ___196aech[];
	extern byte ___196ae8h[];
	extern byte ___1866b8h[];
	extern byte ___185a48h[];
	extern byte ___185a44h[];
	extern byte ___185a40h[];
	extern byte ___185a3ch[];
	extern byte ___185b58h[];
	extern byte ___1866b8h[];
	extern byte ___243d44h[];
	extern byte ___185a5ch[];
	extern byte ___185a2ch[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern byte ___185a14h_UseWeapons[];
	extern byte ___185a4ch[];
	extern byte ___1a1ef4h[];
	extern byte ___185a28h[];
	extern byte ___1a1f64h[];
	extern byte ___1de7d0h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___19bd60h[];
	extern byte ___1a0a50h[];
	extern byte ___185a20h[];

void restoreDefaultScreenBuffer(void);
void ___3892ch_cdecl(dword);
int rand_watcom106(void);
void ___3079ch_cdecl(dword);
byte dRally_Sound_setPosition(dword pos_n);
void dRally_Sound_freeEffectChannel(byte ch_num);
void dRally_Sound_setMasterVolume(dword vol);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___12940h(void);
void ___58c60h(void);
void ___2b318h(void);
void ___2415ch(void);
void ___3a6a4h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2ab50h(void);
byte ___5994ch(void);
void ___33010h_cdecl(dword A1);
void ___135fch(dword, dword, dword, dword);
void ___23230h(void);
void ___25330h(void);
void ___27f80h_cdecl(dword, dword, dword, dword);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);

// FINAL CHALLENGE SIGNUP
void ___31008h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn, p5;
	byte 	esp[0x30];
	__BYTE__ 	px;
	int 		i, j, n;


	edx = 0xb0;
	esi = 0x840;
	D(esp+0x28) = edx;
	edi = 0x640000;
	
	while(1){

		eax ^= eax;
		L(eax) = B(esp+0x28);
		nn = eax;
		edx = edi;
		eax = D(esi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax= (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = edi;
		eax = D(esi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax= (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = edi;
		eax = D(esi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax= (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ebx = D(esp+0x28);
		ebx++;
		esi += 0xc;
		D(esp+0x28) = ebx;
		if((int)ebx >= 0xb7) break;
	}

	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xe100, ___1a1138h__VESA101h_DefaultScreenBufferB+0xe100, 0x2aa80);
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x39580, ___1a1138h__VESA101h_DefaultScreenBufferB+0x39580, 0x2800);
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
	restoreDefaultScreenBuffer();
	___3a6a4h();
	___12cb8h__VESA101_PRESENTSCREEN();

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
			edi = 0;
			D(esp+0x28) = 0;

			while(1){

				eax ^= eax;
				L(eax) = B(esp+0x28);
				nn = eax;
				edx = esi;
				eax = D(edi+___19eb50h);
				___imul32(&eax, &edx, edx);
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				eax += 0x8000;
				eax= (int)eax>>0x10;
				eax &= 0xff;
				rr = eax;
				edx = esi;
				eax = D(edi+___19eb50h+4);
				___imul32(&eax, &edx, edx);
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				eax += 0x8000;
				eax= (int)eax>>0x10;
				eax &= 0xff;
				gg = eax;
				edx = esi;
				eax = D(edi+___19eb50h+8);
				___imul32(&eax, &edx, edx);
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				eax += 0x8000;
				eax= (int)eax>>0x10;
				eax &= 0xff;
				bb = eax;
				__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
				ecx = D(esp+0x28);
				ecx++;
				edi += 0xc;
				D(esp+0x28) = ecx;
				if((int)ecx >= 0x100) break;
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

			ecx = D(___1a01e0h+0x6c*n+0x44);
			if(((int)edx < (int)ecx)&&(n != D(___1a1ef8h))) edx = ecx;
		}

#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) != 0){

			D(___1a0a50h+0xc) = 1;
		}
		else {
#endif // DR_MULTIPLAYER
			D(___1a0a50h+0xc) = !((int)edx < (int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x44));
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
			D(___243d44h) = 1;
			D(___185a5ch+0x34) = 0;
			D(___185a2ch) = 1;
			D(___196ae8h) = 0;
		}
	}
}
