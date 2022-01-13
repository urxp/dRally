#include "drally.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

	extern __BYTE__ ___1a0d60h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___1a0fb8h;
	extern __DWORD__ ___24cc58h_msx_volume;

void ___10b80h_cdecl(const char *, __DWORD__, const char *, __DWORD__, const char *, __DWORD__, __DWORD__);
void ___606dfh(void);
void ___605deh_cdecl(__DWORD__, __DWORD__);
void ___3d890h(void);
void ___1240ch(void);
void ___24548h(void);
void ___2faf0h(void);
void ___3d2bch(void);
void ___12940h(void);
void ___11564h_cdecl(__DWORD__, __DWORD__, __DWORD__);
void ___223c4h(void);
void ___2b318h(void);
void ___58c60h(void);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void dRally_Sound_release(void);
void dRally_Sound_load(__DWORD__ msx_t, const char * msx_f, __DWORD__ sfx_t, const char * sfx_f, __DWORD__ num_ch);
void dRally_Sound_setMusicVolume(__DWORD__ vol);
void dRally_Sound_setSampleRate(__DWORD__ freq);
void dRally_Sound_play(void);

void __VESA101_SETMODE(void);
__DWORD__ GET_FILE_SIZE(const char *);

void ___22808h(void){

	__DWORD__ 	rr, gg, bb;
	__DWORD__ 	eax, ebx, ecx, edx, edi, ebp;
	__POINTER__ 	esi;
	__BYTE__ 	esp[0x70];
	int 	i, k, n;


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
	esi = ___1a0fb8h+3*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x2c);
	___11564h_cdecl(B(esi), B(esi+1), B(esi+2));
	___223c4h();
	___2b318h();

	k = -1;
	while(++k < 51){

		___58c60h();	// wait 1 frame
		i = 100-2*k;
		dRally_Sound_setMasterVolume(655*i);

		n = -1;
		while(++n < 0x100){

			rr = ((i*___19eb50h[n].r+0x8000)>>0x10)&0xff;
			gg = ((i*___19eb50h[n].g+0x8000)>>0x10)&0xff;
			bb = ((i*___19eb50h[n].b+0x8000)>>0x10)&0xff;
			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
		}
	}

	dRally_Sound_release();
	dRally_Sound_load(1, "MEN-MUS.CMF", 2, "MEN-SAM.CMF", 5);
	dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
	dRally_Sound_setSampleRate(0x5622);
	dRally_Sound_play();
}
