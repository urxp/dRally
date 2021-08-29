#include "drally.h"

#pragma pack(1)
typedef struct x655_s {
	dword 	r;
	dword 	g;
	dword 	b;
} x655_t;

	extern x655_t ___19eb50h[];

	extern byte ___1a0d60h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___1a0fb8h[];
	extern __DWORD__ ___24cc58h_msx_volume;

void ___10b80h_cdecl(const char *, dword, const char *, dword, const char *, dword, dword);
void ___606dfh(void);
void ___605deh_cdecl(dword, dword);
void ___3d890h(void);
void ___1240ch(void);
void ___24548h(void);
void ___2faf0h(void);
void ___3d2bch(void);
void ___12940h(void);
void ___11564h_cdecl(dword, dword, dword);
void ___223c4h(void);
void ___2b318h(void);
void ___58c60h(void);
void dRally_Sound_setMasterVolume(dword vol);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void dRally_Sound_release(void);
void dRally_Sound_load(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch);
void dRally_Sound_setMusicVolume(dword vol);
void dRally_Sound_setSampleRate(dword freq);
void dRally_Sound_play(void);

void __VESA101_SETMODE(void);
dword GET_FILE_SIZE(const char *);

void ___22808h(void){

	dword 	rr, gg, bb;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x70];
	int 	n;


	strcat(strcpy(esp, ___1a0d60h), "endani.haf");
	if(GET_FILE_SIZE(esp) != 0) ___10b80h_cdecl("endani.haf", 1, "tr0-mus.cmf", 2, "endani-e.cmf", 1, 0x78);

	___606dfh();
	__VESA101_SETMODE();
	___605deh_cdecl(0x46, 0);
	___3d890h();
	___1240ch();
	___24548h();
	___2faf0h();
	___3d2bch();
	___12940h();
	esi = D(___1a0fb8h)+3*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c);
	___11564h_cdecl(B(esi), B(esi+1), B(esi+2));
	___223c4h();
	___2b318h();

	D(esp+0x68) = 0xffdc;
	ebp = 0x64;
	while(1){

		___58c60h();
		dRally_Sound_setMasterVolume(D(esp+0x68));

		n = -1;
		while(++n < 0x100){

			rr = ((ebp*___19eb50h[n].r+0x8000)>>0x10)&0xff;
			gg = ((ebp*___19eb50h[n].g+0x8000)>>0x10)&0xff;
			bb = ((ebp*___19eb50h[n].b+0x8000)>>0x10)&0xff;
			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
		}

		ebp -= 0x2;
		D(esp+0x68) -= 0x51e;

		if(ebp == 0xfffffffe) break;
	}

	dRally_Sound_release();
	dRally_Sound_load(1, "MEN-MUS.CMF", 2, "MEN-SAM.CMF", 5);
	dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
	dRally_Sound_setSampleRate(0x5622);
	dRally_Sound_play();
}
