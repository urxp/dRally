#include "drally.h"
#include "drally_fonts.h"
#include "sfx.h"

	extern __POINTER__ ___1a1114h;
	extern __BYTE__ ___1a54d0h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a1ed0h[];
	extern __POINTER__ ___1a0fb8h;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10f8h;
	extern __POINTER__ ___19de70h[20];
	extern __POINTER__ ___1a1e6ch;
	extern __POINTER__ ___1a1ea8h;
	extern __BYTE__ ___18e298h[];
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern __POINTER__ ___1a01b8h[6];
	extern __POINTER__ ___1a1e88h;
	extern __POINTER__ ___1a1eb4h;
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1858c8h[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __POINTER__ ___1a10cch;
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __DWORD__ ___196a94h_difficulty;
	extern __BYTE__ ___1a1efch[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___185c0bh[];
	extern __BYTE__ ___1a10fch[];
	extern __BYTE__ ___1a1108h[];

enum e_difficulty {
    SPEED_MAKES_ME_DIZZY,
    I_LIVE_TO_RIDE,
    PETROL_IN_MY_VEINS
};

void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode2(__POINTER__, __POINTER__);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);
char * itoa_watcom106(int value, char * buffer, int radix);
int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
__DWORD__ ___17510h_cdecl(__POINTER__, __DWORD__, __DWORD__, __POINTER__, __DWORD__, __DWORD__, __DWORD__, __DWORD__, __DWORD__);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
int ___148cch_cdecl(int x, int y, __DWORD__ A3, int * A4);
void ___13710h(__DWORD__, __DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___13bd4h_cdecl(__DWORD__, __DWORD__);
void ___2ab50h(void);
char * strlwr_watcom106(char * s);
void ___11378h_cdecl_float(float A1, float A2, float A3);

__DWORD__ ___3ab5ch_cdecl(__DWORD__ A1){

	long long 	ll_tmp;
	__DWORD__ 	eax1, eax2;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x5c];
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;
	int 	x, y;


	D(esp+0x2c) = A1;
	D(esp+0x44) = 0x70;
	old_bpa_read("MENU.BPA", ___1a1114h, "licence3.bpk");
	bpk_decode2(___1a54d0h, ___1a1114h);
	B(esp+0x54) = 1;
	D(___1a1ed0h) = 0;
	D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) = 0;
	___135fch(0, 0x173, 0x27f, 0x6d);
	___23230h();

	___11378h_cdecl_float(
		(float)B(___1a0fb8h+0x180),
		(float)B(___1a0fb8h+0x181),
		(float)B(___1a0fb8h+0x182));

	ebp = 0x3f;

	if(D(esp+0x2c) == 0){

		ecx = 0x0b2;
	}
	else {
	
		ecx = 0x0f9;
	}

	edx = 0x212;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	esip = ___1a54d0h;
	ebxp += 0x1183f;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esip);
			if(L(eax) != 0) B(ebxp) = L(eax);
			ebxp++;
			esip++;
			edi--;

			if(edi == 0) break;
		}

		ebxp += 0x280;
		ebxp -= edx;
		ecx--;

		if(ecx == 0) break;
	}

	edx = D(esp+0x44);
	edx += 0x3c;
	eax = 4*edx;
	edx += eax;
	edx <<= 7;
	ecx = 0x66;
	esip = ___1a10f8h;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+ebp+0x19;
	edx = 0x44;
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esip);
			D(ebxp) = eax;
			ebxp += 0x4;
			esip += 0x4;
			H(ecx)--;
			if(H(ecx) == 0) break;
		}

		ebxp += 0x280;
		L(edx) <<= 2;
		ebxp -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	edx = D(esp+0x44);
	edx += 0x4f;
	eax = 4*edx;
	edx += eax;
	ecx = 0x40;
	esip = ___19de70h[0];
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x80*edx+ebp+0x1b;
	edx = ecx;
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esip);
			D(ebxp) = eax;
			ebxp += 0x4;
			esip += 0x4;
			H(ecx)--;

			if(H(ecx) == 0) break;
		}

		ebxp += 0x280;
		L(edx) <<= 2;
		ebxp -= edx;
		L(edx) >>= 2;

		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	if(D(esp+0x2c) == 0) goto ___3ade2h;
	edx = D(esp+0x44);
	edx += 0x0cc;
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	esi = eax+ebp;

	x = esi+0x0a0;
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3(___1a10e0h___185ba9h, "yes", x, y);

	x = esi+0x14a;
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3(___1a10e0h___185ba9h, "no", x, y);

	edx = D(esp+0x44);
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	eax += 0x1bf80;
	edi ^= edi;
	D(esp+0x48) = eax;
	L(ebx) = 0xc4;
___3ad97h:
	ecx = 2;
	edx = edi;
	eax = edi;
	edx = (int)edx>>0x1f;
	edx = (long long)(int)eax%(int)ecx;
	if((int)edx >= 0x212) goto ___3adceh;
	esi = D(esp+0x48);
	eax = edx+ebp;

	while(1){

		eax += 0x2;
		edx += 0x2;
		B(___1a112ch__VESA101_ACTIVESCREEN_PTR+esi+eax-2) = L(ebx);
		if((int)edx >= 0x212) break;
	}

___3adceh:
	edx = D(esp+0x48);
	edx += 0x280;
	edi++;
	D(esp+0x48) = edx;
	if((int)edi < 0x45) goto ___3ad97h;
___3ade2h:
	edx = D(esp+0x44);
	edx += 0x40;
	edi = 4*edx;
	edi += edx;
	edi <<= 7;
	ecx = 0x60;
	esip = ___1a1e6ch;
	edx = ecx;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edi+ebp+0x1a0;
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esip);
			D(ebxp) = eax;
			ebxp += 0x4;
			esip += 0x4;
			H(ecx)--;
			if(H(ecx) == 0) break;
		}

		ebxp += 0x280;
		L(edx) <<= 2;
		ebxp -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	ecx = 0x10;
	edx = 0x60;
	esip = ___1a1ea8h;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edi+ebp+0x1a0;
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esip);
			D(ebxp) = eax;
			ebxp += 0x4;
			esip += 0x4;
			H(ecx)--;
			if(H(ecx) == 0) break;
		}

		ebxp += 0x280;
		L(edx) <<= 2;
		ebxp -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	ebx = 0x0a;
	eax = D(___18e298h+0xc);
	itoa_watcom106(eax, esp+0x18, ebx);
	edx = D(esp+0x44);
	strcpy(esp+0xc, "$");
	edx += 0x92;
	strcat(esp+0x0c, esp+0x18);
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	edx = eax+ebp;
	esi = D(esp+0x44);
	edx += 0x1a0;
	eax = ___25180h_cdecl(esp+0x0c);
	edx += eax;
	esi += 0x50;
	___12f60h_cdecl(esp+0x0c, edx);
	___259e0h_cdecl(ebp+0x1a0, esi, D(___1a1ed0h), ___1a01b8h[0], CARENCS[0]);
	eax = 4*esi;
	eax += esi;
	___1398ch__VESA101_PRESENTRECTANGLE(0x80*eax+ebp+0x1a0, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x80*eax+ebp+0x1a0, 0x60, 0x40);
	ebx = D(___1a1ed0h);
	ebx++;
	D(___1a1ed0h) = ebx;
	if((int)ebx <= 0x3f) goto ___3af66h;
	esi ^= esi;
	D(___1a1ed0h) = esi;
___3af66h:
	edx = D(esp+0x44);
	edx += 0x8f;
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	ecx = 0x10;
	esip = ___1a1e88h;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+eax+ebp+0x6b;
	edx = 0x126;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esip);
			if(L(eax) != 0) B(ebxp) = L(eax);
			ebxp++;
			esip++;
			edi--;
			if(edi == 0) break;
		}

		ebxp += 0x280;
		ebxp -= edx;
		ecx--;
		if(ecx == 0) break;
	}

	edx = D(esp+0x44);
	edx += 0x8b;
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	ecx = 0x18;
	esip = ___1a1eb4h;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+eax+ebp+0x0f9;
	edx = 0x0a;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esip);
			if(L(eax) != 0) B(ebxp) = L(eax);
			ebxp++;
			esip++;
			edi--;
			if(edi == 0) break;
		}

		ebxp += 0x280;
		ebxp -= edx;
		ecx--;
		if(ecx == 0) break;
	}

	___12cb8h__VESA101_PRESENTSCREEN();
	eax = ___5994ch();
	eax = ___59b3ch();
	edx = D(___1a1ef8h);
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	eax <<= 2;
	ebx = D(esp+0x44);
	strcpy(esp, ___1a01e0h+eax);
	edx = D(___1a1ef8h);
	eax = 8*edx;
	ebx += 0x60;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	eax <<= 2;
	strcpy(___1a01e0h+eax, "");
	edx = ebp+0x6e;
	eax = ___17510h_cdecl(___1a01e0h+eax, edx, ebx, ___1858c8h, 0xa, 0x12c, 0, 1, 1);
	if(eax == 0) goto ___3ba76h;
	ecx = ___24cc54h_sfx_volume;
	ebx = 0;
	dRally_Sound_pushEffect(1, SFX_CLICK_4, ebx, ecx, 0x28000, 0x8000);
	edx = D(___1a1ef8h);
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;

	if(D(4*eax+___1a01e0h+0x40) == 2){

		eax = 5;
		ecx = ___24cc54h_sfx_volume;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, SFX_LETS_ROCK, ebx, ecx, 0x24000, 0x8000);
	}

	if(D(esp+0x2c) == 0) goto ___3b97bh;
	edx = D(esp+0x44);
	eax = 4*edx;
	ecx = 0x0f9;
	edx += eax;
	edx <<= 7;
	esip = ___1a54d0h;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+ebp;
	edx = 0x212;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esip);
			if(L(eax) != 0) B(ebxp) = L(eax);
			ebxp++;
			esip++;
			edi--;
			if(edi == 0) break;
		}

		ebxp += 0x280;
		ebxp -= edx;
		ecx--;
		if(ecx == 0) break;
	}

	edx = D(esp+0x44);
	edx += 0x60;
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	edx = D(___1a1ef8h);
	ecx = eax+ebp;
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	ecx += 0x6e;
	eax <<= 2;
	___12e78h_v3(___1a10cch___185ba9h, ___1a01e0h+eax, ecx%0x280, ecx/0x280);
	edx = D(esp+0x44);
	edx += 0x3c;
	eax = 4*edx;
	edx += eax;
	edx <<= 7;
	ecx = 0x66;
	esip = ___1a10f8h;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+ebp+0x19;
	edx = 0x44;
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esip);
			D(ebxp) = eax;
			ebxp += 0x4;
			esip += 0x4;
			H(ecx)--;
			if(H(ecx) == 0) break;
		}

		ebxp += 0x280;
		L(edx) <<= 2;
		ebxp -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x4f)+ebp+0x1b;
	ecx = 0x40;
	edx = 0x40;
	esip = ___19de70h[D(___1a01e0h+0x40+0x6c*D(___1a1ef8h))];
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esip);
			D(ebxp) = eax;
			ebxp += 0x4;
			esip += 0x4;

			H(ecx)--;
			if(H(ecx) == 0) break;
		}

		ebxp += 0x280;
		L(edx) <<= 2;
		ebxp -= edx;
		L(edx) >>= 2;

		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	edx = D(esp+0x44);
	edx += 0x40;
	edi = 4*edx;
	edi += edx;
	edi <<= 7;
	ecx = 0x60;
	esip = ___1a1e6ch;
	edx = ecx;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edi+ebp+0x1a0;
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esip);
			D(ebxp) = eax;
			ebxp += 0x4;
			esip += 0x4;
			H(ecx)--;
			if(H(ecx) == 0) break;
		}

		ebxp += 0x280;
		L(edx) <<= 2;
		ebxp -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	ecx = 0x10;
	edx = 0x60;
	esip = ___1a1ea8h;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edi+ebp+0x1a0;
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esip);
			D(ebxp) = eax;
			ebxp += 0x4;
			esip += 0x4;
			H(ecx)--;
			if(H(ecx) == 0) break;
		}

		ebxp += 0x280;
		L(edx) <<= 2;
		ebxp -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	ebx = 0x0a;
	eax = D(___18e298h+0xc);
	itoa_watcom106(eax, esp+0x18, ebx);
	edx = D(esp+0x44);
	strcpy(esp+0xc, "$");
	edx += 0x92;
	strcat(esp+0x0c, esp+0x18);
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	edx = eax+ebp;
	esi = D(esp+0x44);
	edx += 0x1a0;
	eax = ___25180h_cdecl(esp+0x0c);
	edx += eax;
	esi += 0x50;
	___12f60h_cdecl(esp+0x0c, edx);
	___259e0h_cdecl(ebp+0x1a0, esi, D(___1a1ed0h), ___1a01b8h[0], CARENCS[0]);
	eax = 4*esi;
	eax += esi;
	eax <<= 7;
	ecx = 0x40;
	ebx = 0x60;
	___1398ch__VESA101_PRESENTRECTANGLE(eax+ebp+0x1a0, ___1a112ch__VESA101_ACTIVESCREEN_PTR+eax+ebp+0x1a0, ebx, ecx);
	ecx = D(___1a1ed0h);
	ecx++;
	D(___1a1ed0h) = ecx;
	if((int)ecx <= 0x3f) goto ___3b3dbh;
	edi ^= edi;
	D(___1a1ed0h) = edi;
___3b3dbh:
	edx = D(esp+0x44);
	edx += 0x8f;
	eax = 4*edx;
	edx += eax;
	edx <<= 7;
	ecx = 0x10;
	esip = ___1a1e88h;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+ebp+0x6b;
	edx = 0x126;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esip);
			if(L(eax) != 0) B(ebxp) = L(eax);
			ebxp++;
			esip++;
			edi--;
			if(edi == 0) break;
		}

		ebxp += 0x280;
		ebxp -= edx;
		ecx--;
		if(ecx == 0) break;
	}

	edx = D(___1a1ef8h);
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	ecx = 0x18;
	esip = ___1a1eb4h;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x8b)+ebp+0x79+D(___1a01e0h+eax*4+0x2c);
	edx = 0x0a;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esip);
			if(L(eax) != 0) B(ebxp) = L(eax);
			ebxp++;
			esip++;
			edi--;
			if(edi == 0) break;
		}

		ebxp += 0x280;
		ebxp -= edx;
		ecx--;
		if(ecx == 0) break;
	}

	edx = D(esp+0x44);
	eax = 4*edx;
	eax += edx;
	L(ebx) = 0xc4;
	eax <<= 7;
	edi ^= edi;
	D(esp+0x4c) = eax;
___3b4aah:
	ecx = 2;
	edx = edi;
	eax = edi;
	edx = (int)edx>>0x1f;
	edx = (long long)(int)eax%(int)ecx;
	eax = edx;
	if((int)edx >= 0x212) goto ___3b4e1h;
	esi = D(esp+0x4c);
	edx += ebp;

	while(1){

		edx += 0x2;
		eax += 0x2;
		B(___1a112ch__VESA101_ACTIVESCREEN_PTR+esi+edx-2) = L(ebx);
		if((int)eax >= 0x212) break;
	}

___3b4e1h:
	ecx = D(esp+0x4c);
	ecx += 0x280;
	edi++;
	D(esp+0x4c) = ecx;
	if((int)edi < 0xb2) goto ___3b4aah;
	esi = 1;
	edx = D(esp+0x44);
	eax = ebp+0x82;
	edx += 0x0d3;
	ebx = esi;
	D(___185a14h_UseWeapons) = esi;
	eax = ___148cch_cdecl(eax, edx, ebx, (int *)___185a14h_UseWeapons);
	if(L(eax) != 0) goto ___3b54eh;
	ecx = ___24cc54h_sfx_volume;
	eax = esi;
	ebx ^= ebx;
	dRally_Sound_pushEffect(eax, SFX_CLICK_2, ebx, ecx, 0x28000, 0x8000);
	H(edx) = 0;
	B(esp+0x54) = H(edx);
	goto ___3b97bh;
___3b54eh:
	ebp = ebp+0x1e;
	D(esp+0x44) += 0x1e;
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x0d200, ___1a1138h__VESA101h_DefaultScreenBufferB+0x0d200, 0x2c380);
	___13710h(0, 0);
	___13248h_cdecl(ebp, D(esp+0x44), 0x1b8, 0x0ba, 1);

	x = 0x280*(D(esp+0x44)+0x12)+ebp+0x50;
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3(___1a10cch___185ba9h, "Select difficulty:", x, y);
	___13bd4h_cdecl(ebp+0x16, D(esp+0x44)+0x4f+0x1c*___196a94h_difficulty);

	edi = ___196a94h_difficulty;

	x = 0x280*(D(esp+0x44)+0x4a)+ebp+0x2e;
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3((edi != 0)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "speed makes me dizzy", x, y);

	x = 0x280*(D(esp+0x44)+0x66)+ebp+0x2e;
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3((edi != 1)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "i live to ride", x, y);

	x = 0x280*(D(esp+0x44)+0x82)+ebp+0x2e;
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3((edi != 2)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "petrol in my veins", x, y);

	___12cb8h__VESA101_PRESENTSCREEN();
	D(esp+0x28) = D(esp+0x44)+0x4a;
	D(esp+0x24) = 0x280*(D(esp+0x44)+0x4a);
	D(esp+0x34) = 0x280*(D(esp+0x44)+0x4a)+ebp+0x16;
	D(esp+0x30) = D(esp+0x44)+0x82;
	D(esp+0x38) = D(esp+0x44)+0x66;
	D(esp+0x3c) = D(esp+0x44)+0x4f;
	D(esp+0x40) = ebp+0x16;
___3b717h:
	B(esp+0x58) = ___5994ch();
	___2ab50h();
	___2ab50h();
	___13bd4h_cdecl(D(esp+0x40), 0x1c*edi+D(esp+0x3c));
	L(eax) = 0;

	if((B(esp+0x58) == 0xc8)&&((int)edi > 0)){
	
		L(eax) = 1;
		edi--;
	}

	if((B(esp+0x58) == 0x48)&&((int)edi > 0)){
	
		L(eax) = 1;
		edi--;
	}

	if((B(esp+0x58) == 0xd0)&&((int)edi < 2)){
	
		L(eax) = 1;
		edi++;
	}

	if((B(esp+0x58) == 0x50)&&((int)edi < 2)){
	
		L(eax) = 1;
		edi++;
	}

	if(L(eax) == 0) goto ___3b89fh;
	edx = D(esp+0x28);
	esi = 0x280*edx;
	ecx = esi;
	esi = esi+0x0d200;

	while(1){

		memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+ecx+ebp+0x16, 0xc4, 0x163);

		ecx += 0x280;
		if(ecx == esi) break;
	}

	x = 0x280*D(esp+0x28)+ebp+0x2e;
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3((edi != 0)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "speed makes me dizzy", x, y);

	x = 0x280*D(esp+0x38)+ebp+0x2e;
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3((edi != 1)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "i live to ride", x, y);

	x = 0x280*D(esp+0x30)+ebp+0x2e;
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3((edi != 2)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "petrol in my veins", x, y);

	___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x34), ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x24)+ebp+0x16, 0x190, 0x54);
	eax = 1;
	ecx = ___24cc54h_sfx_volume;
	ebx = 0;
	dRally_Sound_pushEffect(eax, SFX_CLICK_2, ebx, ecx, 0x28000, 0x8000);
___3b89fh:
	H(ecx) = B(esp+0x58);

	if((H(ecx) == 0x1c)||(H(ecx) == 0x9c)||(H(ecx) == 0x39)){

		___196a94h_difficulty = edi;

		switch(___196a94h_difficulty&3){
		case SPEED_MAKES_ME_DIZZY:
			dRally_Sound_pushEffect(5, SFX_SPEED_MAKES_ME_DIZZY, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);
			break;
		case I_LIVE_TO_RIDE:
			dRally_Sound_pushEffect(5, SFX_I_LIVE_TO_RIDE, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);
			break;
		case PETROL_IN_MY_VEINS:
			dRally_Sound_pushEffect(5, SFX_PETROL_IN_MY_VEINS, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);
			break;
		default:
			break;
		}
	}

	if(B(esp+0x58) == 1){

		B(esp+0x54) = 0;
		dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
	}

	L(ebx) = B(esp+0x58);
	if((L(ebx) == 0x1c)||(L(ebx) == 0x9c)) goto ___3b97bh;
	if(L(ebx) != 1) goto ___3b717h;
___3b97bh:
	edx = D(___1a1ef8h);
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	eax <<= 2;
	strlwr_watcom106(___1a01e0h+eax);
	edx = D(___1a1ef8h);
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	eax <<= 2;

	if((B(eax+___1a01e0h) > 0x60)&&(B(eax+___1a01e0h) < 0x7b)) B(eax+___1a01e0h) -= 0x20;

	D(___1a1efch) = 0;
	eax1 = strlen(0x6c*D(___1a1ef8h)+___1a01e0h);

	edx = -1;
	while(++edx < eax1) D(___1a1efch) += B(___185c0bh+B(edx+0x6c*D(___1a1ef8h)+___1a01e0h)-0x1e);

	___11378h_cdecl_float(
		(float)B(3*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)+___1a0fb8h+0),
		(float)B(3*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)+___1a0fb8h+1),
		(float)B(3*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)+___1a0fb8h+2));

	goto ___3bad9h;

___3ba76h:
	dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
	strcpy(0x6c*D(___1a1ef8h)+___1a01e0h, esp);
	B(esp+0x54) = 0;
	goto ___3bad9h;

___3bad9h:

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
		___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
	}
#endif // DR_MULTIPLAYER

	___23230h();
	___12cb8h__VESA101_PRESENTSCREEN();
	D(___1a1ed0h) = 0;

	return B(esp+0x54);
}
