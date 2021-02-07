#include "drally.h"

	extern byte ___1a1114h[];
	extern byte ___1a54d0h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a1ed0h[];
	extern byte ___1a0fb8h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10f8h[];
	extern byte ___19de70h[];
	extern byte ___185ba9h[];
	extern byte ___1a10e0h[];
	extern byte ___1a1e6ch[];
	extern byte ___1a1ea8h[];
	extern byte ___18e298h[];
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern void * ___1a01b8h[6];
	extern byte ___1a1e88h[];
	extern byte ___1a1eb4h[];
	extern byte ___1a01e0h[];
	extern byte ___1858c8h[];
	extern byte ___24cc54h[];
	extern byte ___1a10cch[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___196a94h[];
	extern byte ___1a1efch[];
	extern byte ___19bd60h[];
	extern byte ___185c0bh[];
	extern byte ___1a10fch[];
	extern byte ___1a1108h[];


void bpa_read(const char *, void *, const char *);
void bpk_decode2(void *, void *);
void ___135fch(dword, dword, dword, dword);
void ___23230h(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___259e0h_cdecl(dword, dword, dword, dword, dword);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
byte ___5994ch(void);
byte ___59b3ch(void);
dword ___17510h_cdecl(dword, dword, dword, dword, dword, dword, dword, dword, dword);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
byte ___148cch_cdecl(dword, dword, dword, dword);
void ___13710h(dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___13bd4h_cdecl(dword, dword);
void ___2ab50h(void);
char * strlwr_watcom106(char * s);
void ___11378h_cdecl_float(float A1, float A2, float A3);

dword ___3ab5ch_cdecl(dword A1){

	long long 	ll_tmp;
	dword 	eax1, eax2;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x5c];


	D(esp+0x2c) = A1;
	D(esp+0x44) = 0x70;
	bpa_read("MENU.BPA", D(___1a1114h), "licence3.bpk");
	bpk_decode2(___1a54d0h, D(___1a1114h));
	B(esp+0x54) = 1;
	D(___1a1ed0h) = 0;
	D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) = 0;
	___135fch(0, 0x173, 0x27f, 0x6d);
	___23230h();

	___11378h_cdecl_float(
		(float)B(D(___1a0fb8h)+0x180),
		(float)B(D(___1a0fb8h)+0x181),
		(float)B(D(___1a0fb8h)+0x182));

	ebp = 0x3f;

	if(D(esp+0x2c) == 0){

		ecx = 0x0b2;
	}
	else {
	
		ecx = 0x0f9;
	}

	edx = 0x212;
	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	esi = ___1a54d0h;
	ebx += 0x1183f;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esi);
			if(L(eax) != 0) B(ebx) = L(eax);
			ebx++;
			esi++;
			edi--;

			if(edi == 0) break;
		}

		ebx += 0x280;
		ebx -= edx;
		ecx--;

		if(ecx == 0) break;
	}

	edx = D(esp+0x44);
	edx += 0x3c;
	eax = 4*edx;
	edx += eax;
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edx <<= 7;
	ecx = 0x66;
	eax += edx;
	esi = D(___1a10f8h);
	eax += ebp;
	edx = 0x44;
	ebx = eax+0x19;
	L(edx) >>= 2;
___3acaeh:
	H(ecx) = L(edx);
___3acb0h:
	eax = D(esi);
	D(ebx) = eax;
	ebx += 0x4;
	esi += 0x4;
	H(ecx)--;
	if(H(ecx)) goto ___3acb0h;
	ebx += 0x280;
	L(edx) <<= 2;
	ebx -= edx;
	L(edx) >>= 2;
	L(ecx)--;
	if(L(ecx)) goto ___3acaeh;
	edx = D(esp+0x44);
	edx += 0x4f;
	eax = 4*edx;
	edx += eax;
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edx = 0x80*edx;
	ecx = 0x40;
	eax = eax+edx;
	esi = D(___19de70h);
	ebx = eax+ebp;
	edx = ecx;
	ebx = ebx+0x1b;
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esi);
			D(ebx) = eax;
			ebx += 0x4;
			esi += 0x4;
			H(ecx)--;

			if(H(ecx) == 0) break;
		}

		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
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
	ebx = "yes";
	esi = eax+ebp;
	edx = ___185ba9h;
	eax = D(___1a10e0h);
	ecx = esi+0x0a0;
	___12e78h_cdecl(eax, edx, ebx, ecx);
	ebx = "no";
	edx = ___185ba9h;
	eax = D(___1a10e0h);
	ecx = esi+0x14a;
	___12e78h_cdecl(eax, edx, ebx, ecx);
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
___3adb4h:
	ecx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	eax += 0x2;
	ecx += esi;
	edx += 0x2;
	B(ecx+eax-2) = L(ebx);
	if((int)edx < 0x212) goto ___3adb4h;
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
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edi <<= 7;
	ecx = 0x60;
	eax += edi;
	esi = D(___1a1e6ch);
	eax += ebp;
	edx = ecx;
	ebx = eax+0x1a0;
	L(edx) >>= 2;
___3ae14h:
	H(ecx) = L(edx);
___3ae16h:
	eax = D(esi);
	D(ebx) = eax;
	ebx += 0x4;
	esi += 0x4;
	H(ecx)--;
	if(H(ecx)) goto ___3ae16h;
	ebx += 0x280;
	L(edx) <<= 2;
	ebx -= edx;
	L(edx) >>= 2;
	L(ecx)--;
	if(L(ecx)) goto ___3ae14h;
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	ecx = 0x10;
	eax += edi;
	edx = 0x60;
	eax += ebp;
	esi = D(___1a1ea8h);
	ebx = eax+0x1a0;
	edi = esp+0x0c;
	L(edx) >>= 2;
___3ae5ch:
	H(ecx) = L(edx);
___3ae5eh:
	eax = D(esi);
	D(ebx) = eax;
	ebx += 0x4;
	esi += 0x4;
	H(ecx)--;
	if(H(ecx)) goto ___3ae5eh;
	ebx += 0x280;
	L(edx) <<= 2;
	ebx -= edx;
	L(edx) >>= 2;
	L(ecx)--;
	if(L(ecx)) goto ___3ae5ch;
	ebx = 0x0a;
	edx = esp+0x18;
	eax = D(___18e298h+0xc);
	esi = esp+0x18;
	eax = itoa_watcom106(eax, edx, ebx);
	edx = D(esp+0x44);
	strcpy(esp+0xc, "$");
	edx += 0x92;
	strcat(edi, esi);
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	edx = eax+ebp;
	esi = D(esp+0x44);
	eax = esp+0x0c;
	edx += 0x1a0;
	eax = ___25180h_cdecl(eax);
	edx += eax;
	esi += 0x50;
	___12f60h_cdecl(esp+0x0c, edx);
	___259e0h_cdecl(ebp+0x1a0, esi, D(___1a1ed0h), ___1a01b8h[0], CARENCS[0]);
	eax = 4*esi;
	eax += esi;
	edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	eax <<= 7;
	ecx = 0x40;
	edx += eax;
	ebx = 0x60;
	edx += ebp;
	eax += ebp;
	edx += 0x1a0;
	eax += 0x1a0;
	___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
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
	edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	eax <<= 7;
	ecx = 0x10;
	eax += edx;
	esi = D(___1a1e88h);
	eax += ebp;
	edx = 0x126;
	ebx = eax+0x6b;
___3af99h:
	edi = edx;
___3af9bh:
	L(eax) = B(esi);
	if(L(eax) == 0) goto ___3afa3h;
	B(ebx) = L(eax);
___3afa3h:
	ebx++;
	esi++;
	edi--;
	if(edi) goto ___3af9bh;
	ebx += 0x280;
	ebx -= edx;
	ecx--;
	if(ecx) goto ___3af99h;
	edx = D(esp+0x44);
	edx += 0x8b;
	eax = 4*edx;
	eax += edx;
	edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	eax <<= 7;
	ecx = 0x18;
	eax += edx;
	esi = D(___1a1eb4h);
	eax += ebp;
	edx = 0x0a;
	ebx = eax+0x0f9;
___3afe9h:
	edi = edx;
___3afebh:
	L(eax) = B(esi);
	if(L(eax) == 0) goto ___3aff3h;
	B(ebx) = L(eax);
___3aff3h:
	ebx++;
	esi++;
	edi--;
	if(edi) goto ___3afebh;
	ebx += 0x280;
	ebx -= edx;
	ecx--;
	if(ecx) goto ___3afe9h;
	___12cb8h__VESA101_PRESENTSCREEN();
	eax = ___5994ch();
	eax = ___59b3ch();
	edx = D(___1a1ef8h);
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	esi = ___1a01e0h;
	eax <<= 2;
	edi = esp;
	esi += eax;
	ebx = D(esp+0x44);
	strcpy(edi, esi);
	ecx = ___1858c8h;
	edx = D(___1a1ef8h);
	eax = 8*edx;
	ebx += 0x60;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	eax <<= 2;
	strcpy(eax+___1a01e0h, "");
	edx = ebp+0x6e;
	eax = eax+___1a01e0h;
	eax = ___17510h_cdecl(eax, edx, ebx, ecx, 0xa, 0x12c, 0, 1, 1);
	if(eax == 0) goto ___3ba76h;
	edx = 0x1c;
	ecx = D(___24cc54h);
	ebx ^= ebx;
	eax = 1;
	dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
	edx = D(___1a1ef8h);
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	if(D(4*eax+___1a01e0h+0x40) != 2) goto ___3b0feh;
	edx = 6;
	eax = 5;
	ecx = D(___24cc54h);
	ebx ^= ebx;
	dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x24000, 0x8000);
___3b0feh:
	if(D(esp+0x2c) == 0) goto ___3b97bh;
	edx = D(esp+0x44);
	eax = 4*edx;
	ecx = 0x0f9;
	edx += eax;
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edx <<= 7;
	esi = ___1a54d0h;
	eax += edx;
	edx = 0x212;
	ebx = eax+ebp;
___3b132h:
	edi = edx;
___3b134h:
	L(eax) = B(esi);
	if(L(eax) == 0) goto ___3b13ch;
	B(ebx) = L(eax);
___3b13ch:
	ebx++;
	esi++;
	edi--;
	if(edi) goto ___3b134h;
	ebx += 0x280;
	ebx -= edx;
	ecx--;
	if(ecx) goto ___3b132h;
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
	ebx = ___1a01e0h;
	eax -= edx;
	ecx += 0x6e;
	eax <<= 2;
	edx = ___185ba9h;
	ebx += eax;
	eax = D(___1a10cch);
	___12e78h_cdecl(eax, edx, ebx, ecx);
	edx = D(esp+0x44);
	edx += 0x3c;
	eax = 4*edx;
	edx += eax;
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edx <<= 7;
	ecx = 0x66;
	eax += edx;
	esi = D(___1a10f8h);
	ebx = eax+ebp;
	edx = 0x44;
	ebx += 0x19;
	L(edx) >>= 2;
___3b1c5h:
	H(ecx) = L(edx);
___3b1c7h:
	eax = D(esi);
	D(ebx) = eax;
	ebx += 0x4;
	esi += 0x4;
	H(ecx)--;
	if(H(ecx)) goto ___3b1c7h;
	ebx += 0x280;
	L(edx) <<= 2;
	ebx -= edx;
	L(edx) >>= 2;
	L(ecx)--;
	if(L(ecx)) goto ___3b1c5h;

	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(D(esp+0x44)+0x4f)+ebp+0x1b;
	ecx = 0x40;
	edx = 0x40;
	esi = D(___19de70h+4*D(___1a01e0h+0x40+0x6c*D(___1a1ef8h)));
	L(edx) >>= 2;

	while(1){

		H(ecx) = L(edx);

		while(1){

			eax = D(esi);
			D(ebx) = eax;
			ebx += 0x4;
			esi += 0x4;

			H(ecx)--;
			if(H(ecx) == 0) break;
		}

		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;

		L(ecx)--;
		if(L(ecx) == 0) break;
	}

	edx = D(esp+0x44);
	edx += 0x40;
	edi = 4*edx;
	edi += edx;
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edi <<= 7;
	ecx = 0x60;
	eax += edi;
	esi = D(___1a1e6ch);
	eax += ebp;
	edx = ecx;
	ebx = eax+0x1a0;
	L(edx) >>= 2;
___3b288h:
	H(ecx) = L(edx);
___3b28ah:
	eax = D(esi);
	D(ebx) = eax;
	ebx += 0x4;
	esi += 0x4;
	H(ecx)--;
	if(H(ecx)) goto ___3b28ah;
	ebx += 0x280;
	L(edx) <<= 2;
	ebx -= edx;
	L(edx) >>= 2;
	L(ecx)--;
	if(L(ecx)) goto ___3b288h;
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	ecx = 0x10;
	edi += eax;
	edx = 0x60;
	ebx = edi+ebp;
	esi = D(___1a1ea8h);
	ebx += 0x1a0;
	edi = esp+0x0c;
	L(edx) >>= 2;
___3b2d1h:
	H(ecx) = L(edx);
___3b2d3h:
	eax = D(esi);
	D(ebx) = eax;
	ebx += 0x4;
	esi += 0x4;
	H(ecx)--;
	if(H(ecx)) goto ___3b2d3h;
	ebx += 0x280;
	L(edx) <<= 2;
	ebx -= edx;
	L(edx) >>= 2;
	L(ecx)--;
	if(L(ecx)) goto ___3b2d1h;
	ebx = 0x0a;
	edx = esp+0x18;
	eax = D(___18e298h+0xc);
	esi = esp+0x18;
	eax = itoa_watcom106(eax, edx, ebx);
	edx = D(esp+0x44);
	strcpy(esp+0xc, "$");
	edx += 0x92;
	strcat(edi, esi);
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	edx = eax+ebp;
	esi = D(esp+0x44);
	eax = esp+0x0c;
	edx += 0x1a0;
	eax = ___25180h_cdecl(eax);
	edx += eax;
	eax = esp+0x0c;
	esi += 0x50;
	___12f60h_cdecl(eax, edx);
	___259e0h_cdecl(ebp+0x1a0, esi, D(___1a1ed0h), ___1a01b8h[0], CARENCS[0]);
	eax = 4*esi;
	eax += esi;
	edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	eax <<= 7;
	ecx = 0x40;
	edx += eax;
	ebx = 0x60;
	edx += ebp;
	eax += ebp;
	edx += 0x1a0;
	eax += 0x1a0;
	___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
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
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edx <<= 7;
	ecx = 0x10;
	eax += edx;
	esi = D(___1a1e88h);
	eax += ebp;
	edx = 0x126;
	ebx = eax+0x6b;
___3b40dh:
	edi = edx;
___3b40fh:
	L(eax) = B(esi);
	if(L(eax) == 0) goto ___3b417h;
	B(ebx) = L(eax);
___3b417h:
	ebx++;
	esi++;
	edi--;
	if(edi) goto ___3b40fh;
	ebx += 0x280;
	ebx -= edx;
	ecx--;
	if(ecx) goto ___3b40dh;
	edx = D(esp+0x44);
	edx += 0x8b;
	eax = 4*edx;
	eax += edx;
	edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	eax <<= 7;
	eax += edx;
	edx = D(___1a1ef8h);
	ebx = eax+ebp;
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	ecx = 0x18;
	ebx += 0x79;
	edx = D(eax*4+___1a01e0h+0x2c);
	esi = D(___1a1eb4h);
	ebx += edx;
	edx = 0x0a;
___3b478h:
	edi = edx;
___3b47ah:
	L(eax) = B(esi);
	if(L(eax) == 0) goto ___3b482h;
	B(ebx) = L(eax);
___3b482h:
	ebx++;
	esi++;
	edi--;
	if(edi) goto ___3b47ah;
	ebx += 0x280;
	ebx -= edx;
	ecx--;
	if(ecx) goto ___3b478h;
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
___3b4c8h:
	ecx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edx += 0x2;
	ecx += esi;
	eax += 0x2;
	B(ecx+edx-2) = L(ebx);
	if((int)eax < 0x212) goto ___3b4c8h;
___3b4e1h:
	ecx = D(esp+0x4c);
	ecx += 0x280;
	edi++;
	D(esp+0x4c) = ecx;
	if((int)edi < 0xb2) goto ___3b4aah;
	esi = 1;
	edx = D(esp+0x44);
	ecx = ___185a14h_UseWeapons;
	eax = ebp+0x82;
	edx += 0x0d3;
	ebx = esi;
	D(___185a14h_UseWeapons) = esi;
	eax = ___148cch_cdecl(eax, edx, ebx, ecx);
	if(L(eax) != 0) goto ___3b54eh;
	edx = 0x19;
	ecx = D(___24cc54h);
	eax = esi;
	ebx ^= ebx;
	dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
	H(edx) = 0;
	B(esp+0x54) = H(edx);
	goto ___3b97bh;
___3b54eh:
	ebp = ebp+0x1e;
	D(esp+0x44) += 0x1e;
	memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x0d200, D(___1a1138h__VESA101h_DefaultScreenBufferB)+0x0d200, 0x2c380);
	___13710h(0, 0);
	___13248h_cdecl(ebp, D(esp+0x44), 0x1b8, 0x0ba, 1);
	___12e78h_cdecl(D(___1a10cch), ___185ba9h, "Select difficulty:", 0x280*(D(esp+0x44)+0x12)+ebp+0x50);
	___13bd4h_cdecl(ebp+0x16, D(esp+0x44)+0x4f+0x1c*D(___196a94h));
	ecx = 0x280*(D(esp+0x44)+0x4a)+ebp+0x2e;
	edi = D(___196a94h);

	if(edi){

		eax = D(___1a10e0h);
	}
	else {

		eax = D(___1a10cch);
	}

	___12e78h_cdecl(eax, ___185ba9h, "speed makes me dizzy", ecx);
	edx = D(esp+0x44);
	edx += 0x66;
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	ecx = eax+ebp+0x2e;
	ebx = "i live to ride";
	edx = ___185ba9h;

	if(edi != 1){

		eax = D(___1a10e0h);
	}
	else {

		eax = D(___1a10cch);
	}

	___12e78h_cdecl(eax, edx, ebx, ecx);
	edx = D(esp+0x44);
	edx += 0x82;
	eax = 4*edx;
	eax += edx;
	eax <<= 7;
	eax += ebp;
	ecx = eax+0x2e;
	ebx = "petrol in my veins";
	edx = ___185ba9h;

	if(edi != 2){

		eax = D(___1a10e0h);
	}
	else {

		eax = D(___1a10cch);
	}

	___12e78h_cdecl(eax, edx, ebx, ecx);
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
	esi += 0x0d200;

	while(1){

		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax += ecx;
		ebx = 0x163;
		eax += ebp;
		edx = 0x0c4;
		eax += 0x16;
		ecx += 0x280;
		memset(eax, edx, ebx);

		if(ecx == esi) break;
	}

	eax = 0x280*D(esp+0x28);
	eax += ebp;
	ecx = eax+0x2e;
	ebx = "speed makes me dizzy";
	edx = ___185ba9h;

	if(edi != 0){

		eax = D(___1a10e0h);
	}
	else {

		eax = D(___1a10cch);
	}

	___12e78h_cdecl(eax, edx, ebx, ecx);
	eax = 0x280*D(esp+0x38);
	eax += ebp;
	ecx = eax+0x2e;
	ebx = "i live to ride";
	edx = ___185ba9h;

	if(edi != 1){

		eax = D(___1a10e0h);
	}
	else {

		eax = D(___1a10cch);
	}

	___12e78h_cdecl(eax, edx, ebx, ecx);
	ecx = 0x280*D(esp+0x30);
	ecx += ebp;
	ecx += 0x2e;
	ebx = "petrol in my veins";
	edx = ___185ba9h;

	if(edi != 2){

		eax = D(___1a10e0h);
	}
	else {

		eax = D(___1a10cch);
	}

	___12e78h_cdecl(eax, edx, ebx, ecx);
	edx = D(esp+0x24);
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	eax += edx;
	eax += ebp;
	ecx = 0x54;
	edx = eax+0x16;
	ebx = 0x190;
	eax = D(esp+0x34);
	___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
	edx = 0x19;
	eax = 1;
	ecx = D(___24cc54h);
	ebx ^= ebx;
	dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
___3b89fh:
	H(ecx) = B(esp+0x58);

	if((H(ecx) == 0x1c)||(H(ecx) == 0x9c)||(H(ecx) == 0x39)){

		D(___196a94h) = edi;
		if(D(___196a94h) == 0) dRally_Sound_pushEffect(5, 1, 0, D(___24cc54h), 0x24000, 0x8000);
		if(D(___196a94h) == 1) dRally_Sound_pushEffect(5, 2, 0, D(___24cc54h), 0x24000, 0x8000);
		if(D(___196a94h) == 2) dRally_Sound_pushEffect(5, 3, 0, D(___24cc54h), 0x24000, 0x8000);
	}

	if(B(esp+0x58) == 1){

		B(esp+0x54) = 0;
		dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), 0x28000, 0x8000);
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
	eax = eax+___1a01e0h;
	eax = strlwr_watcom106(eax);
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
	while(++edx < eax1) D(___1a1efch) += B(B(edx+0x6c*D(___1a1ef8h)+___1a01e0h)-0x20+___185c0bh+2);

	___11378h_cdecl_float(
		(float)B(3*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)+D(___1a0fb8h)+0),
		(float)B(3*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)+D(___1a0fb8h)+1),
		(float)B(3*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)+D(___1a0fb8h)+2));

	goto ___3bad9h;

___3ba76h:
	dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), 0x28000, 0x8000);
	strcpy(0x6c*D(___1a1ef8h)+___1a01e0h, esp);
	B(esp+0x54) = 0;
	goto ___3bad9h;

___3bad9h:

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0){

		___12e78h_cdecl(D(___1a10fch), ___185c0bh, "press   to enter chat mode", 0x390a3);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "F1", 0x390d9);
	}
#endif // DR_MULTIPLAYER

	___23230h();
	___12cb8h__VESA101_PRESENTSCREEN();
	D(___1a1ed0h) = 0;

	return B(esp+0x54);
}
