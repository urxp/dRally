#include "drally.h"
#include "drally_fonts.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

    extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
    extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
#if defined(DR_MULTIPLAYER)
    extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
    extern __BYTE__ ___185c0bh[];
    extern __POINTER__ ___1a10fch;
    extern __POINTER__ ___1a1108h;

void ___2b318h(void);
void ___58c60h(void);
void ___13a98h_cdecl(__DWORD__);
void ___23230h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(__BYTE__ * A1, const font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___13710h(__DWORD__, __DWORD__);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
void ___3892ch_cdecl(__DWORD__);

static __DWORD__ helper00(__DWORD__ eax, __DWORD__ edx){

	long long 	ll_tmp;

	ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
	eax += 0x8000;
	edx += !!(eax < 0x8000);
	eax = (eax >> 0x10)|(edx << 0x10);
	eax += 0x8000;
	eax = (int)eax>>0x10;
	eax &= 0xff;

	return eax;
}

void ___190c4h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	__BYTE__ 	esp[0xc];
	int 		n;


	___2b318h();
	ebp = 0x32;
	D(esp+0x8) = 0x640000;

	while(1){

		___58c60h();
		esi = 0x2;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)esi;
		
		if(edx != 0) ___13a98h_cdecl(1);

		n = -1;
		while(++n < 0x60){

			rr = helper00(___19eb50h[n].r, D(esp+0x8));
			gg = helper00(___19eb50h[n].g, D(esp+0x8));
			bb = helper00(___19eb50h[n].b, D(esp+0x8));
			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
		}

		n = -1;
		while(++n < 0x80){

			rr = helper00(___19eb50h[n+0x80].r, D(esp+0x8));
			gg = helper00(___19eb50h[n+0x80].g, D(esp+0x8));
			bb = helper00(___19eb50h[n+0x80].b, D(esp+0x8));
			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n+0x80);
		}

		D(esp+0x8) -= 0x20000;
		ebp--;
		if((int)ebp < 0) break;
	}

	___59b3ch();
	___5994ch();
	___3892ch_cdecl(2);
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1138h__VESA101h_DefaultScreenBufferB, 0x4b000);
	___13710h(0, 0);
	___13710h(1, 1);
	___135fch(0, 0x173, 0x27f, 0x6d);
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		___12e78h_cdecl(___1a10fch, (font_props_t *)___185c0bh, "press   to enter chat mode", 0x390a3);
		___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "F1", 0x390d9);
	}
#endif // DR_MULTIPLAYER
	___23230h();
	___12cb8h__VESA101_PRESENTSCREEN();
	ebp = 0;
	___2b318h();
	D(esp) = ebp;

	while(1){

		___58c60h();
		esi = 0x2;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)esi;

		if(edx != 0) ___13a98h_cdecl(1);

		n = -1;
		while(++n < 0x60){

			rr = helper00(___19eb50h[n].r, D(esp));
			gg = helper00(___19eb50h[n].g, D(esp));
			bb = helper00(___19eb50h[n].b, D(esp));
			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
		}

		n = -1;
		while(++n < 0x80){

			rr = helper00(___19eb50h[n+0x80].r, D(esp));
			gg = helper00(___19eb50h[n+0x80].g, D(esp));
			bb = helper00(___19eb50h[n+0x80].b, D(esp));
			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n+0x80);
		}

		D(esp) += 0x20000;
		ebp++;
		if((int)ebp >= 0x32) break;
	}

	___59b3ch();
	___5994ch();
}
