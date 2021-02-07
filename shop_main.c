#include "drally.h"
#include "drally_keyboard.h"

	extern byte ___196a84h[];
	extern byte ___1a1124h__VESA101h_ScreenBufferA[];
	extern byte ___199f54h[];
	extern byte kmap[];
	extern byte ___1a01e0h[];
	extern __DWORD__ ___186658h[];
	extern byte ___1a1ed8h[];
	extern byte ___1a1e8ch[];
	extern byte ___1a1ee0h[];
	extern void * ___1a01d0h[4];
	extern __DWORD__ ___1864fch[][0x10];
	extern byte ___1a1eech[];
	extern byte ___1a1ef8h[];
	extern byte ___1a1ef8h[];
	extern byte ___185a2ch[];
	extern byte ___185a3ch[];
	extern byte ___19bd60h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10e4h__VESA101h_DefaultScreenBufferA[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a0fb8h[];
	extern byte ___185a20h[];
	extern byte ___1a1ec4h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___196ab0h[];
	extern byte ___196a98h[];
	extern byte ___196a9ch[];
	extern byte ___196aa0h[];
	extern byte ___196aa4h[];
	extern byte ___196aa8h[];
	extern byte ___185c0bh[];
	extern byte ___1a10fch[];
	extern byte ___1a1108h[];
	extern byte ___185a28h[];
	extern byte ___1a1ef4h[];
	extern byte ___1a1ea0h[];
	extern byte ___1a1ee8h[];
	extern __DWORD__ ___1865fch[];
	extern byte ___1a1ee4h[];
	extern byte ___185a18h[];
	extern byte ___185a54h[];
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern byte ___19eb50h[];
	extern byte ___185a38h[];
	extern byte ___1a1ed0h[];
	extern void * ___1a01b8h[6];
	extern byte ___1a1ec8h[];
	extern __DWORD__ ___1862bch[][0x18];
	extern void * ___1a01a8h[4];
	extern byte ___18e298h[];
	extern byte ___1a1ec0h[];
	extern __DWORD__ ___18643ch[][0xc];
	extern void * ___1a0198h[4];

void shop___2b6a4h(void);
void ___11378h_cdecl(dword, dword, dword);
void restoreDefaultScreenBuffer(void);
void ___3a6a4h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2b318h(void);
void ___3266ch(void);
void ___164d0h(void);
void ___14cach(void);
void ___14dc4h(void);
void ___15130h(void);
void ___1549ch(void);
dword ___15808h(void);
dword ___15e3ch(void);
dword ___168b4h(void);
dword ___2b81ch(void);
void ___165ach(void);
void ___135fch(dword, dword, dword, dword);
void ___12e78h_cdecl(dword, dword, dword, dword);
byte dRally_Sound_setPosition(dword pos_n);
void dRally_Sound_setMasterVolume(dword);
void ___23230h(void);
void ___58c60h(void);
void ___259e0h_cdecl(dword, dword, dword, dword, dword);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
void ___13bd4h_cdecl(dword, dword);
byte ___5994ch(void);
void __DISPLAY_SET_PALETTE_COLOR(dword, dword, dword, dword);
void ___17324h(void);
void ___25330h(void);
void ___1678ch(void);
void ___27f80h_cdecl(dword, dword, dword, dword);
void ___2a608h_cdecl(dword);
void ___2ab50h(void);
void ___25a74h(void);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___25e40h(void);
void ___262b4h(void);
void ___26650h(void);
void ___269e4h(void);
void ___26e54h(void);
void ___30a84h_cdecl(dword, dword);
void ___30c60h_cdecl(dword);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void shop___2836ch(void);
void shop___283ech(void);
void shop___285f8h(void);
void shop___28880h(void);
void shop___28e40h(void);
dword ___2a6a8h(void);
void ___281d0h_cdecl(dword, dword, dword, dword);
void ___2b7a0h(void);


enum CHEATS { CHEAT_NONE, CHEAT_DRAW, CHEAT_DROOL, CHEAT_DRIVE, CHEAT_DROP };

static const dword DRAW_CHEAT	= 0x111e1320;
static const dword DROOL_CHEAT	= 0x26181813;
static const dword DRIVE_CHEAT	= 0x122f1713;
static const dword DROP_CHEAT	= 0x19181320;

static dword checkCheat(byte * p){

	if(DRAW_CHEAT == D(p+6)) return CHEAT_DRAW;
	if(DROP_CHEAT == D(p+6)) return CHEAT_DROP;

	if(W(p+5) == 0x1320){

		if(DROOL_CHEAT == D(p+6)) return CHEAT_DROOL;
		if(DRIVE_CHEAT == D(p+6)) return CHEAT_DRIVE;
	}

	return CHEAT_NONE;
}

// ___2b8ach
void shop_main(void){

	long long 	ll_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x20+0x40];
	byte * 	esp = __esp+0x20;
	dword 	r, g, b;

		edx = 0;
		D(esp+0x30) = edx;
		D(esp+0x10) = edx;
		D(esp+0x18) = edx;
		edx = D(___1a1ef8h);
		eax = edx*8;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		FPUSH((int)D(eax*4+___1a01e0h+0x3c));
		ST(0) = ST(0) * 0.25;
		ST(0) = ceil(ST(0));
		eax = D(___1a1ef8h);
		ebx = eax*8;
		ebx -= eax;
		ST(0) = (int)ST(0);
		ebx <<= 2;
		esi = D(___185a14h_UseWeapons);
		ebx -= eax;
		D(esp+0xc) = (int)FPOP();
		ebx <<= 2;

		if(esi == 0){

			eax = D(ebx+___1a01e0h+0x1c);
			edx = eax*8;
			edx -= eax;
			edx <<= 3;
			edx -= eax;
			edx <<= 5;
			eax = D(edx+___18e298h+0x6dc);
			edx = eax;
			ecx = 0xa;
			edx = (int)edx>>0x1f;
			ll_tmp = edx;
			ll_tmp <<= 0x20;
			ll_tmp += eax;
			eax = ll_tmp/(int)ecx;
			edx = D(ebx+___1a01e0h+0xc);
			edx = (int)edx*(int)eax;
		}
		else {

			eax = D(ebx+___1a01e0h+0x1c);
			edx = eax*8;
			edx -= eax;
			edx <<= 3;
			edx -= eax;
			edx <<= 5;
			eax = D(edx+___18e298h+0x6dc);
			edx = eax;
			ecx = 0xa;
			edx = (int)edx>>0x1f;
			ll_tmp = edx;
			ll_tmp <<= 0x20;
			ll_tmp += eax;
			eax = ll_tmp/(int)ecx;
			edx = D(ebx+___1a01e0h+0xc);
			edx = (int)edx*(int)eax;
			eax = edx;
			edx = (int)edx>>0x1f;
			eax -= edx;
			eax = (int)eax>>1;
			edx = eax;
		}

		edi = D(esp+0xc);
		edi -= edx;
		D(esp+0xc) = edi;
		if((int)edi < 0) D(esp+0xc) = 0;

		if((D(___185a2ch) == 0)&&((D(___185a3ch) == 0)||(D(___19bd60h) != 0))){

			memcpy(D(___1a10e4h__VESA101h_DefaultScreenBufferA), D(___1a112ch__VESA101_ACTIVESCREEN_PTR), 0x4b000);
			D(___1a112ch__VESA101_ACTIVESCREEN_PTR) = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
			memcpy(D(___1a10e4h__VESA101h_DefaultScreenBufferA)+0xf000, D(___1a1138h__VESA101h_DefaultScreenBufferB)+0xf000, 0x29b80);
			shop___2b6a4h();
			eax = 3*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c);
			edx = D(___1a0fb8h)+eax;
			___11378h_cdecl(B(edx), B(edx+1), B(edx+2));
			restoreDefaultScreenBuffer();
			___3a6a4h();
			___12cb8h__VESA101_PRESENTSCREEN();
		}

		edi = 0;
		esi = 5;
		D(esp+0x1c) = edi;
		D(___185a20h) = edi;
		D(___1a1ec4h) = esi;
___2bab5h:
		if((D(___185a2ch) != 0)||(D(esp+0x30) != 0)) goto ___2cfbch;
		
		if((D(___185a3ch) != 0)&&(D(___19bd60h) == 0)){
 		
		 	___2b318h();
			___3266ch();
		}

		if(D(___185a20h) != 1) goto ___2c687h;
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		D(esp+0x28) = 0;
		D(___185a20h) = 0;
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		memcpy(edi, esi, 0x4b000);
		shop___2b6a4h();
		D(esp+0x24) = 0;

		if(D(___185a3ch) == 0){

			if(D(___196ab0h) != 1){

				if(D(___196a98h) != 3){

					if(D(___196a9ch) != 1){

						if(D(___196aa0h) != 1){

							if(D(___196aa4h) == 0){

								if(D(___196aa8h) == 0){

									if(D(___1a01e0h+0x38+0x6c*D(___1a1ef8h)) != 4){

										eax = D(___1a01e0h+0x30+0x6c*D(___1a1ef8h))+D(esp+0xc);
										
										if((int)eax < 0x3e8){

											eax = ___2b81ch();
											if((int)eax > (int)D(___1a01e0h+0x30+0x6c*D(___1a1ef8h))){

												if((int)D(___1a01e0h+0xc+0x6c*D(___1a1ef8h)) > 0x5f){
													
													___165ach();
													D(esp+0x24) = 8;
													D(esp+0x28) = 1;
												}
											}
										}
									}
									else {

										eax = ___168b4h();
										if(eax != 0) D(esp+0x10) = 1;
										D(esp+0x24) = 7;
									}
								}
								else {

									eax = ___15e3ch();
									if(eax != 0) D(esp+0x10) = 1;
									D(esp+0x24) = 6;
								}
							}
							else {

								eax = ___15808h();
								if(eax != 0) D(esp+0x10) = 1;
								D(esp+0x24) = 5;
							}
						}
						else {

							___1549ch();
							D(esp+0x24) = 4;
						}
					}
					else {

						___15130h();
						D(esp+0x24) = 3;
					}
				}
				else {

					___14dc4h();
					D(esp+0x24) = 2;
				}
			}
			else {

				___14cach();
				D(esp+0x28) = 1;
				D(esp+0x24) = 9;
			}
		}
		else {

			___164d0h();
			D(esp+0x24) = 1;
		}

		ecx = 0x6d;
		edx = 0x173;
		eax = 0;
		D(___1a1ec4h) = 5;
		ebx = 0x27f;
		___135fch(eax, edx, ebx, ecx);
#if defined(DR_MULTIPLAYER)		
		if(D(___19bd60h) != 0){
		
			___12e78h_cdecl(D(___1a10fch), ___185c0bh, "press   to enter chat mode", 0x390a3);
			___12e78h_cdecl(D(___1a1108h), ___185c0bh, "F1", 0x390d9);
		}
#endif // DR_MULTIPLAYER
		___23230h();
		___12cb8h__VESA101_PRESENTSCREEN();

		if(D(___185a28h) != 0){

			eax = D(___1a1ef4h);
			dRally_Sound_setPosition(eax);
		}

		ebp = 0;
		___2b318h();
		D(esp+0x34) = ebp;
		D(esp+0x2c) = ebp;
___2bd09h:
		___58c60h();

		if(D(___185a28h) != 0){
		
			eax = D(esp+0x34);
			dRally_Sound_setMasterVolume(eax);
		}

		ebx = 2;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp += eax;
		edx = ll_tmp%(int)ebx;
		if(edx == 0) goto ___2be33h;
		if(D(___185a3ch) != 0) goto ___2be33h;
		if(D(___196a98h) == 3) goto ___2be33h;
		if(D(___196a9ch) == 1) goto ___2be33h;
		if(D(___196aa0h) == 1) goto ___2be33h;
		if(D(___196aa4h) != 0) goto ___2be33h;
		if(D(___196aa8h) != 0) goto ___2be33h;
		if(D(___196ab0h) == 1) goto ___2be33h;
		if(D(___1a01e0h+0x38+0x6c*D(___1a1ef8h)) == 4) goto ___2be33h;
		eax = D(___1a01e0h+0x30+0x6c*D(___1a1ef8h))+D(esp+0xc);
		if((int)eax < 0x3e8) goto ___2be33h;
		eax = ___2b81ch();
		if((int)eax > (int)D(___1a01e0h+0x30+0x6c*D(___1a1ef8h))) goto ___2be33h;
		if((int)D(___1a01e0h+0xc+0x6c*D(___1a1ef8h)) > 0x5f) goto ___2be33h;
		___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), D(___1a1ea0h), ___1865fch);
		___1398ch__VESA101_PRESENTRECTANGLE(0x2a230, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2a230, 0x60, 0x40);
		D(___1a1ee8h)++;
		if((int)D(___1a1ee8h) > 0x16) D(___1a1ee8h) = 0;
___2be33h:
		ebx = 2;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp += eax;
		edx = ll_tmp%(int)ebx;
		if(edx == 0) goto ___2bee3h;
		if(D(___185a3ch) != 0) goto ___2bed4h;
		if(D(___196a98h) == 3) goto ___2bed4h;
		if(D(___196a9ch) == 1) goto ___2bed4h;
		if(D(___196aa0h) == 1) goto ___2bed4h;
		if(D(___196aa4h) != 0) goto ___2bed4h;
		if(D(___196aa8h) != 0) goto ___2bed4h;
		if(D(___196ab0h) == 1) goto ___2bed4h;
		if(D(___1a01e0h+0x38+0x6c*D(___1a1ef8h)) == 4) goto ___2bed4h;
		eax = D(___1a01e0h+0x30+0x6c*D(___1a1ef8h))+D(esp+0xc);
		if((int)eax >= 0x3e8) goto ___2bee3h;
		eax = ___2b81ch();
		if((int)eax <= (int)D(___1a01e0h+0x30+0x6c*D(___1a1ef8h))) goto ___2bee3h;
		if((int)D(___1a01e0h+0xc+0x6c*D(___1a1ef8h)) <= 0x5f) goto ___2bee3h;
___2bed4h:
		edx = 0x141;
		eax = 0xa4;
		___13bd4h_cdecl(eax, edx);
___2bee3h:
		edi = 0;
		esi = D(esp+0x2c);
		D(esp+0x20) = edi;
___2beedh:
		ll_tmp = (long long)(int)D(edi+___19eb50h)*(long long)(int)esi;
		r = ((ll_tmp+0x8000)>>0x10)&0xff;
		ll_tmp = (long long)(int)D(edi+___19eb50h+4)*(long long)(int)esi;
		g = ((ll_tmp+0x8000)>>0x10)&0xff;
		ll_tmp = (long long)(int)D(edi+___19eb50h+8)*(long long)(int)esi;
		b = ((ll_tmp+0x8000)>>0x10)&0xff;
		__DISPLAY_SET_PALETTE_COLOR(b, g, r, B(esp+0x20));
		edi += 0xc;
		D(esp+0x20)++;
		if((int)D(esp+0x20) < 0x60) goto ___2beedh;
		ebx = 0x80;
		esi = D(esp+0x2c);
		edi = 0x600;
		D(esp+0x20) = ebx;
___2bf8ch:
		ll_tmp = (long long)(int)D(edi+___19eb50h)*(long long)(int)esi;
		r = ((ll_tmp+0x8000)>>0x10)&0xff;
		ll_tmp = (long long)(int)D(edi+___19eb50h+4)*(long long)(int)esi;
		g = ((ll_tmp+0x8000)>>0x10)&0xff;
		ll_tmp = (long long)(int)D(edi+___19eb50h+8)*(long long)(int)esi;
		b = ((ll_tmp+0x8000)>>0x10)&0xff;
		__DISPLAY_SET_PALETTE_COLOR(b, g, r, B(esp+0x20));
		edi += 0xc;
		D(esp+0x20)++;
		if((int)D(esp+0x20) < 0x100) goto ___2bf8ch;
		D(esp+0x34) += 0x51e;
		edx = D(esp+0x2c);
		edx += 2;
		W(esp+0x2c) = X(edx);
		ebp++;
		if((int)ebp < 0x32) goto ___2bd09h;
		if(D(___185a3ch) != 0) goto ___2c103h;
		if(D(___196a98h) == 3) goto ___2c103h;
		if(D(___196a9ch) == 1) goto ___2c103h;
		if(D(___196aa0h) == 1) goto ___2c103h;
		if(D(___196aa4h) != 0) goto ___2c103h;
		if(D(___196aa8h) != 0) goto ___2c103h;
		if(D(___196ab0h) == 1) goto ___2c103h;
		if(D(___19bd60h) != 0) goto ___2c0aeh;
		if((int)D(___1a01e0h+0x48+0x6c*D(___1a1ef8h)) <= 7) goto ___2c103h;
___2c0aeh:
		if(D(___185a18h) == 4) goto ___2c103h;
		if(D(___1a01e0h+0x38+0x6c*D(___1a1ef8h)) == 4) goto ___2c103h;
		eax = D(___1a01e0h+0x30+0x6c*D(___1a1ef8h))+D(esp+0xc);
		if((int)eax >= 0x3e8) goto ___2c67fh;
		eax = ___2b81ch();
		if((int)eax <= (int)D(___1a01e0h+0x30+0x6c*D(___1a1ef8h))) goto ___2c67fh;
		if((int)D(___1a01e0h+0xc+0x6c*D(___1a1ef8h)) <= 0x5f) goto ___2c67fh;
___2c103h:
		if(D(esp+0x24) != 0){
				
			___17324h();
			___25330h();
			___12cb8h__VESA101_PRESENTSCREEN();
		}

		if(D(esp+0x10) == 1){

			___165ach();
			___12cb8h__VESA101_PRESENTSCREEN();
			___17324h();
			D(esp+0x28) = 1;
#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
				D(esp+0x30) = 1;
#if defined(DR_MULTIPLAYER)
			}
			else {

				edx = (int)D(___1a1ef8h)*0x6c;
				FPUSH((int)D(___185a54h));
				ST(0) = ST(0) * 0.2;
				edi = 0x1ef;
				ST(0) = (int)ST(0);
				D(esp+0x14) = (int)FPOP();
				eax = D(esp+0x14);
				D(edx+___1a01e0h+0x30) = edi;
				ebp = edi+eax;
				D(edx+___1a01e0h+0x30) = ebp;
				___25330h();
			}
#endif // DR_MULTIPLAYER
		}

		if(D(esp+0x24) == 1) D(___185a3ch) = 0;
		if(D(esp+0x24) == 2) D(___196a98h) = 0;
		if(D(esp+0x24) == 3) D(___196a9ch) = 0;
		if(D(esp+0x24) == 4) D(___196aa0h) = 0;
		if(D(esp+0x24) == 5) D(___196aa4h) = 0;
		if(D(esp+0x24) == 6) D(___196aa8h) = 0;
		if(D(esp+0x24) == 7){
		
			D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) = 0xffffffff;
			D(___1a01e0h+0x38+0x6c*D(___1a1ef8h)) = 0xffffffff;
		}
		if(D(esp+0x24) == 9) D(___196ab0h) = 0;
		if(D(esp+0x24) == 8){

#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
				D(esp+0x30) = 1;
#if defined(DR_MULTIPLAYER)
			}
			else {

				edx = (int)D(___1a1ef8h)*0x6c;
				FPUSH((int)D(___185a54h));
				ST(0) = ST(0) * 0.2;
				ebx = 0x1ef;
				ST(0) = (int)ST(0);
				D(esp+0x14) = (int)FPOP();
				eax = D(esp+0x14);
				D(edx+___1a01e0h+0x30) = ebx;
				ecx = ebx+eax;
				D(edx+___1a01e0h+0x30) = ecx;
				___25330h();
			}
#endif // DR_MULTIPLAYER
		}

		ecx = 0x1ef;
		ebp = 0xffffffff;
		ebx = 1;
		edx = 0;
___2c26ch:
		if(edx != D(esp+0x30)) goto ___2c5a8h;
		edi = D(___196ab0h);
		esi = ebx;
		if(ebx != edi) goto ___2c2ach;
		___14cach();
		___12cb8h__VESA101_PRESENTSCREEN();
		___17324h();
		D(___196ab0h) = edx;
		esi = edx;
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		D(esp+0x28) = edi;
		goto ___2c5a0h;
___2c2ach:
		if(D(___196a98h) != 3) goto ___2c2d1h;
		___14dc4h();
		___12cb8h__VESA101_PRESENTSCREEN();
		___17324h();
		D(___196a98h) = edx;
		esi = edx;
		goto ___2c596h;
___2c2d1h:
		if(ebx != D(___196a9ch)) goto ___2c2f5h;
		___15130h();
		___12cb8h__VESA101_PRESENTSCREEN();
		___17324h();
		D(___196a9ch) = edx;
		esi = edx;
		goto ___2c596h;
___2c2f5h:
		if(ebx != D(___196aa0h)) goto ___2c319h;
		___1549ch();
		___12cb8h__VESA101_PRESENTSCREEN();
		___17324h();
		D(___196aa0h) = edx;
		esi = edx;
		goto ___2c596h;
___2c319h:
		edi = D(___196aa4h);
		if(edx == edi) goto ___2c3b8h;
		eax = ___15808h();
		if(eax != 0) D(esp+0x10) = ebx;
		___12cb8h__VESA101_PRESENTSCREEN();
		___17324h();
		eax = D(esp+0x10);
		D(___196aa4h) = edx;

		if(ebx == eax){

			___165ach();
			___12cb8h__VESA101_PRESENTSCREEN();
			___17324h();
			esi = D(___19bd60h);
			D(esp+0x28) = ebx;
			D(esp+0x10) = edx;

			if(edx == esi){

				D(esp+0x30) = ebx;
			}
			else {

				esi = (int)D(___1a1ef8h)*0x6c;
				FPUSH((int)D(___185a54h));
				ST(0) = ST(0) * 0.2;
				ST(0) = (int)ST(0);
				D(esp+0x14) = (int)FPOP();
				eax = D(esp+0x14);
				D(esi+___1a01e0h+0x30) = ecx;
				edi = ecx+eax;
				D(esi+___1a01e0h+0x30) = edi;
				___25330h();
			}
		}

		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		esi = edx;
		goto ___2c5a0h;
___2c3b8h:
		if(edi == D(___196aa8h)) goto ___2c455h;
		eax = ___15e3ch();
		if(eax != 0) D(esp+0x10) = ebx;
		___12cb8h__VESA101_PRESENTSCREEN();
		___17324h();
		eax = D(esp+0x10);
		D(___196aa8h) = edx;

		if(ebx == eax){

			___165ach();
			___12cb8h__VESA101_PRESENTSCREEN();
			___17324h();
			esi = D(___19bd60h);
			D(esp+0x28) = ebx;
			D(esp+0x10) = edx;

			if(edx == esi){

				D(esp+0x30) = ebx;
			}
			else {

				esi = (int)D(___1a1ef8h)*0x6c;
				FPUSH((int)D(___185a54h));
				ST(0) = ST(0) * 0.2;
				ST(0) = (int)ST(0);
				D(esp+0x14) = (int)FPOP();
				eax = D(esp+0x14);
				D(esi+___1a01e0h+0x30) = ecx;
				edi = ecx+eax;
				D(esi+___1a01e0h+0x30) = edi;
				___25330h();
			}
		}

		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		esi = edx;
		goto ___2c5a0h;
___2c455h:
		edi = (int)D(___1a1ef8h)*0x6c;
		if(D(edi+___1a01e0h+0x38) != 4) goto ___2c506h;
		eax = ___168b4h();
		if(eax != 0) D(esp+0x10) = ebx;
		___12cb8h__VESA101_PRESENTSCREEN();
		___17324h();
		eax = (int)D(___1a1ef8h)*0x6c;
		D(eax+___1a01e0h+0x38) = ebp;
		edi = D(esp+0x10);
		D(eax+___1a01e0h+0x34) = ebp;

		if(ebx == edi){

			___165ach();
			___12cb8h__VESA101_PRESENTSCREEN();
			___17324h();
			eax = D(___19bd60h);
			D(esp+0x28) = edi;
			D(esp+0x10) = edx;

			if(edx == eax){

				D(esp+0x30) = edi;
			}
			else {

				esi = (int)D(___1a1ef8h)*0x6c;
				FPUSH((int)D(___185a54h));
				ST(0) = ST(0) * 0.2;
				ST(0) = (int)ST(0);
				D(esp+0x14) = (int)FPOP();
				eax = D(esp+0x14);
				D(esi+___1a01e0h+0x30) = ecx;
				edi = ecx+eax;
				D(esi+___1a01e0h+0x30) = edi;
				___25330h();
			}
		}

		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		esi = edx;
		goto ___2c5a0h;
___2c506h:
		eax = D(edi+___1a01e0h+0x30);
		eax += D(esp+0xc);
		if((int)eax >= 0x3e8) goto ___2c5a0h;
		eax = ___2b81ch();
		if((int)eax <= (int)D(edi+___1a01e0h+0x30)) goto ___2c5a0h;
		eax = (int)D(___1a1ef8h)*0x6c;
		if((int)D(eax+___1a01e0h+0xc) <= 0x5f) goto ___2c5a0h;
		if(edx != D(esp+0x30)) goto ___2c5a0h;
		___165ach();
		___12cb8h__VESA101_PRESENTSCREEN();
		___17324h();
		edi = D(___19bd60h);
		D(esp+0x28) = ebx;

		if(edx == edi){

			D(esp+0x30) = ebx;
		}
		else {

			edi = (int)D(___1a1ef8h)*0x6c;
			FPUSH((int)D(___185a54h));
			ST(0) = ST(0) * 0.2;
			ST(0) = (int)ST(0);
			D(esp+0x14) = (int)FPOP();
			eax = D(esp+0x14);
			D(edi+___1a01e0h+0x30) = ecx;
			D(edi+___1a01e0h+0x30) += eax;
			___25330h();
		}

___2c596h:
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___2c5a0h;

___2c5a0h:
		if(esi == 0) goto ___2c26ch;
___2c5a8h:
		if(D(___185a18h) == 4){

			if((D(___19bd60h) == 0)&&(D(esp+0x28) == 0)) ___1678ch();
			D(___185a18h) = 0;
		}

		if(D(esp+0x18) == 0){

			esi = D(___1a1138h__VESA101h_DefaultScreenBufferB)+0xf000;
			edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0xf000;
			memcpy(edi, esi, 0x29b80);
			shop___2b6a4h();
			___135fch(0, 0x173, 0x27f, 0x6d);
#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) != 0){

				___12e78h_cdecl(D(___1a10fch), ___185c0bh, "press   to enter chat mode", 0x390a3);
				___12e78h_cdecl(D(___1a1108h), ___185c0bh, "F1", 0x390d9);
			}
#endif // DR_MULTIPLAYER
			___23230h();
			ecx = 0x72;
			ebx = 0x6c;
			edx = 0xf3;
			eax = 0x1aa;
			___27f80h_cdecl(eax, edx, ebx, ecx);
			___12cb8h__VESA101_PRESENTSCREEN();
		}

___2c67fh:
		edi = 0;
		D(___185a28h) = edi;
___2c687h:
		if(D(esp+0x18) == 1) goto ___2cfbch;
		___2ab50h();
		___2ab50h();
		
		if((int)D(___185a38h) > 0) D(___185a38h)--;

		switch(D(___1a1ec4h)){
		case 0:
			___259e0h_cdecl(0x10, 0x8d, D(___1a1ed0h), ___1a01b8h[D(___1a1ee4h)], CARENCS[D(___1a1ee4h)]);
			___1398ch__VESA101_PRESENTRECTANGLE(0x16090, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x16090, 0x60, 0x40);
			D(___1a1ed0h)++;
			if((int)D(___1a1ed0h) > 0x3f) D(___1a1ed0h) = 0;
			if(D(___185a38h) == 1){
			
				___25a74h();
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case 1:
			edx = 0x6e0*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c);
			eax = D(0x6c*D(___1a1ef8h)+___1a01e0h+0x10);
			if((int)eax < (int)D(edx+___18e298h+0x6a0)){

				___259e0h_cdecl(0x10, 0x10d, D(___1a1ec8h), ___1a01a8h[eax], ___1862bch[eax]);
				___1398ch__VESA101_PRESENTRECTANGLE(0x2a090, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2a090, 0x60, 0x40);
				D(___1a1ec8h)++;
				if((int)D(___1a1ec8h) > 0x17) D(___1a1ec8h) = 0;
			}
			if(D(___185a38h) == 1){
			
				___25e40h();
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case 2:
			edx = 0x6e0*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c);
			eax = D(0x6c*D(___1a1ef8h)+___1a01e0h+0x14);
			if((int)eax < (int)D(edx+___18e298h+0x6a4)){

				___259e0h_cdecl(0x78, 0x10d, D(___1a1ec0h), ___1a0198h[eax], ___18643ch[eax]);
				___1398ch__VESA101_PRESENTRECTANGLE(0x2a0f8, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2a0f8, 0x60, 0x40);
				D(___1a1ec0h)++;
				if((int)D(___1a1ec0h) > 0xb) D(___1a1ec0h) = 0;
			}
			if(D(___185a38h) == 1){
			
				___262b4h();
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case 3:
			edx = 0x6e0*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c);
			eax = D(0x6c*D(___1a1ef8h)+___1a01e0h+0x18);
			if((int)eax < (int)D(edx+___18e298h+0x6a8)){

				___259e0h_cdecl(0xe0, 0x10d, D(___1a1eech), ___1a01d0h[eax], ___1864fch[eax]);
				___1398ch__VESA101_PRESENTRECTANGLE(0x2a160, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2a160, 0x60, 0x40);
				if(D(___1a1ee0h) != 0){

					D(___1a1eech)--;
					if((int)D(___1a1eech) < 1) D(___1a1ee0h) = 0;
				}
				else {

					D(___1a1eech)++;
					if((int)D(___1a1eech) > 0xe) D(___1a1ee0h) = 1;
				}
			}
			if(D(___185a38h) == 1){
			
				___26650h();
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case 4:
			___259e0h_cdecl(0x148, 0x10d, D(___1a1ed8h), D(___1a1e8ch), ___186658h);
			___1398ch__VESA101_PRESENTRECTANGLE(0x2a1c8, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2a1c8, 0x60, 0x40);
			D(___1a1ed8h)++;
			if((int)D(___1a1ed8h) > 0x17) D(___1a1ed8h) = 0;
			break;
		case 5:
			___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), D(___1a1ea0h), ___1865fch);
			___1398ch__VESA101_PRESENTRECTANGLE(0x2a230, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2a230, 0x60, 0x40);
			D(___1a1ee8h)++;
			if((int)D(___1a1ee8h) > 0x16) D(___1a1ee8h) = 0;
			break;
		default:
			break;
		}

	B(esp+0x3c) = ___5994ch();
	if(B(esp+0x3c) != 0){

		D(esp+0x20) = 0;
		while(1){

			B(esp+D(esp+0x20)) = B(esp+D(esp+0x20)+1);
			D(esp+0x20)++;

			if((int)D(esp+0x20) >= 9) break;
		}
	
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
			B(esp+9) = B(esp+0x3c);

			switch(checkCheat(esp)){
			case CHEAT_DRAW:
				D((int)D(___1a1ef8h)*0x6c+___1a01e0h+0x30) += 0x3e8;
				___25330h();
				___12cb8h__VESA101_PRESENTSCREEN();
				break;
			case CHEAT_DROOL:
				dRally_Sound_pushEffect(2, 0x17, 0, 0xf500, 0x25500-0x7000, 0x8000);
				D((int)D(___1a1ef8h)*0x6c+___1a01e0h+0x30) = 0x7a120;
				___25330h();
				___12cb8h__VESA101_PRESENTSCREEN();
				break;
			case CHEAT_DRIVE:
				D((int)D(___1a1ef8h)*0x6c+___1a01e0h+0x44) += 0xa;
				___30a84h_cdecl(0, 0x13);
				___30c60h_cdecl(0x14);
				___25330h();
				___12cb8h__VESA101_PRESENTSCREEN();
				break;
			case CHEAT_DROP:
				D((int)D(___1a1ef8h)*0x6c+___1a01e0h+0x44) -= 0xa;
				___30a84h_cdecl(0, 0x13);
				___30c60h_cdecl(0x14);
				___25330h();
				___12cb8h__VESA101_PRESENTSCREEN();
				break;
			default:
				break;
			}
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
	}

	switch(B(esp+0x3c)){
	case DR_SCAN_ESCAPE:
		D(esp+0x1c) = 0xffffffff;
		break;
	case DR_SCAN_ENTER:
	case DR_SCAN_KP_ENTER:
		shop___28e40h();
		break;

#if defined(DR_MULTIPLAYER)
	case DR_SCAN_F1:
		if(D(___19bd60h) != 0) ___23758h();
		break;
#endif // DR_MULTIPLAYER

	case DR_SCAN_UP:
	case DR_SCAN_KP_8:
		shop___2836ch();
		break;
	case DR_SCAN_LEFT:
	case DR_SCAN_KP_4:
		shop___285f8h();
		break;
	case DR_SCAN_RIGHT:
	case DR_SCAN_KP_6:
		shop___28880h();
		break;
	case DR_SCAN_DOWN:
	case DR_SCAN_KP_2:
		shop___283ech();
		break;
	default:
		break;
	}

	if(D(___199f54h) != 0) kmap[DR_SCAN_F2] = 1;
	eax = ___2a6a8h();
	ebp = eax;

	if((int)eax > 0){

		memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0xf000, D(___1a1138h__VESA101h_DefaultScreenBufferB)+0xf000, 0x29b80);
		shop___2b6a4h();
		___2b318h();

		D(esp+0x20) = 0x20;
		esi = 0x180;
		while(1){

			ll_tmp = (long long)(int)D(esi+___19eb50h)*0x64;
			r = ((ll_tmp+0x8000)>>0x10)&0xff;
			ll_tmp = (long long)(int)D(esi+___19eb50h+4)*0x64;
			g = ((ll_tmp+0x8000)>>0x10)&0xff;
			ll_tmp = (long long)(int)D(esi+___19eb50h+8)*0x64;
			b = ((ll_tmp+0x8000)>>0x10)&0xff;
			__DISPLAY_SET_PALETTE_COLOR(b, g, r, B(esp+0x20));
			esi += 0xc;
			D(esp+0x20)++;
			if((int)D(esp+0x20) >= 0x100) break;
		}

		___281d0h_cdecl(0x1aa, 0xf3, 0x6c, 0x72);
		___281d0h_cdecl(0, 0x73, 0x80, 0x72);
		___281d0h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___281d0h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___281d0h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___281d0h_cdecl(0x142, 0xf3, 0x6c, 0x72);
	
		if(D(___1a1ec4h) == 0){

			___27f80h_cdecl(0, 0x73, 0x80, 0x72);
			___25a74h();
		}

		if(D(___1a1ec4h) == 1){
		
			___27f80h_cdecl(0xa, 0xf3, 0x6c, 0x72);
			___25e40h();
		}

		if(D(___1a1ec4h) == 2){
		
			___27f80h_cdecl(0x72, 0xf3, 0x6c, 0x72);
			___262b4h();
		}

		if(D(___1a1ec4h) == 3){
		
			___27f80h_cdecl(0xda, 0xf3, 0x6c, 0x72);
			___26650h();
		}

		if(D(___1a1ec4h) == 4){
		
			___27f80h_cdecl(0x142, 0xf3, 0x6c, 0x72);
			___269e4h();
		}

		if(D(___1a1ec4h) == 5){
		
			___27f80h_cdecl(0x1aa, 0xf3, 0x6c, 0x72);
			___26e54h();
		}

		___135fch(0, 0x173, 0x27f, 0x6d);

		if(D(___19bd60h) != 0){

			___12e78h_cdecl(D(___1a10fch), ___185c0bh, "press   to enter chat mode", 0x390a3);
			___12e78h_cdecl(D(___1a1108h), ___185c0bh, "F1", 0x390d9);
		}

		___23230h();
		___12cb8h__VESA101_PRESENTSCREEN();
		memcpy(D(___1a1124h__VESA101h_ScreenBufferA), D(___1a112ch__VESA101_ACTIVESCREEN_PTR), 0x4b000);

		if(ebp == 1) ___2a608h_cdecl("Game Saved.");
		if(ebp == 2) ___2a608h_cdecl("Game Loaded.");
		if(ebp == 3) ___2a608h_cdecl("Game not found.");

		memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR), D(___1a1124h__VESA101h_ScreenBufferA), 0x4b000);
		___12cb8h__VESA101_PRESENTSCREEN();
	}

	if((D(___19bd60h) != 0)&&(D(___196a84h) != 0)) D(esp+0x1c) = 0xffffffff;
	if(D(esp+0x1c) == 0) goto ___2bab5h;
___2cfbch:
	if(D(esp+0x30) == 1) ___2b7a0h();

	memcpy(D(___1a10e4h__VESA101h_DefaultScreenBufferA), D(___1a1138h__VESA101h_DefaultScreenBufferB), 0x4b000);
	D(___1a112ch__VESA101_ACTIVESCREEN_PTR) = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
	___135fch(0, 0x173, 0x27f, 0x6d);

	if(D(___19bd60h) != 0){

		___12e78h_cdecl(D(___1a10fch), ___185c0bh, "press   to enter chat mode", 0x390a3);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "F1", 0x390d9);
	}

	___23230h();
}
