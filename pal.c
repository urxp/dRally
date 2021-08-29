#include "drally.h"

#pragma pack(1)
typedef struct rgb24_s {
	byte 	r;
	byte 	g;
	byte 	b;
} rgb24_t;

typedef rgb24_t pal256_t[0x100];

typedef struct x655_s {
	dword 	r;
	dword 	g;
	dword 	b;
} x655_t;

	extern x655_t ___19eb50h[];
	extern x655_t ___19df50h[];

void old_bpa_read(const char *, void *, const char *);

void ___12940h(void){

	int 		n;
	pal256_t	pal;

	old_bpa_read("MENU.BPA", &pal, "menu.pal");

	n = -1;
	while(++n < 0x100){

		___19df50h[n].r = ___19eb50h[n].r = (pal[n].r << 0x10) / 0x64;
		___19df50h[n].g = ___19eb50h[n].g = (pal[n].g << 0x10) / 0x64;
		___19df50h[n].b = ___19eb50h[n].b = (pal[n].b << 0x10) / 0x64;
	}
}

void ___3d154h(const char * pal_name){

	int 		n;
	pal256_t	pal;

	old_bpa_read("MENU.BPA", &pal, pal_name);

	n = -1;
	while(++n < 0x100){

		___19eb50h[n].r = (pal[n].r<<0x10)/0x64;
		___19eb50h[n].g = (pal[n].g<<0x10)/0x64;
		___19eb50h[n].b = (pal[n].b<<0x10)/0x64;
	}
}


void ___11564h_cdecl(dword f1, dword f2, dword f3){

	int 	n;

	n = -1;
	while(++n < 0x10){

		___19eb50h[n+0x40].r = ((f1*(16+9*n)/160)<<0x10)/0x64;
		___19eb50h[n+0x40].g = ((f2*(16+9*n)/160)<<0x10)/0x64;
		___19eb50h[n+0x40].b = ((f3*(16+9*n)/160)<<0x10)/0x64;

		___19eb50h[n+0x50].r = (((n*(63-f1)+16*f1)/16)<<0x10)/0x64;
		___19eb50h[n+0x50].g = (((n*(63-f2)+16*f2)/16)<<0x10)/0x64;
		___19eb50h[n+0x50].b = (((n*(63-f3)+16*f3)/16)<<0x10)/0x64;
	}
}

static dword max_0x3f(dword A0){

	return (A0 < 0x3f) ? A0 : 0x3f;
}

void ___24010h(dword f1, dword f2, dword f3){

	int 	n;

	n = -1;
	while(++n < 7){
	
		___19eb50h[n+0xb0].r = (max_0x3f(f1*(6*n+7)/42)<<0x10)/0x64;
		___19eb50h[n+0xb0].g = (max_0x3f(f2*(6*n+7)/42)<<0x10)/0x64;
		___19eb50h[n+0xb0].b = (max_0x3f(f3*(6*n+7)/42)<<0x10)/0x64;
	}
}





void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);

void setIntensity___19eb50h(dword i){

	dword 	r, g, b, n;

	n = -1;
	while(++n < 0x100){

		r = ((i*___19eb50h[n].r+0x8000)>>0x10)&0xff;
		g = ((i*___19eb50h[n].g+0x8000)>>0x10)&0xff;
		b = ((i*___19eb50h[n].b+0x8000)>>0x10)&0xff;
		__DISPLAY_SET_PALETTE_COLOR(b, g, r, n);
	}
}
