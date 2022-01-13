#include "drally.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];
	extern x655_t ___19df50h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern rgb24_t * ___1a0fb8h;
	extern __DWORD__ ___196ad8h;
	extern rgb24_t * ___1a10c8h;
	extern __BYTE__ ___1a1edch[];

void ___12940h(void);
void ___11564h_cdecl(__DWORD__, __DWORD__, __DWORD__);
void ___24010h(__DWORD__, __DWORD__, __DWORD__);

rgb24_t dummy_pal[0x200];

void ___2b318h(void){
	
	__DWORD__ 	n;
	rgb24_t * p_pal;

	___12940h();

	if(!(p_pal = ___1a0fb8h)) p_pal = dummy_pal;

	___11564h_cdecl(p_pal[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)].r, p_pal[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)].g, p_pal[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)].b);

	if(!(p_pal = ___1a0fb8h)) p_pal = dummy_pal;

	___24010h(p_pal[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)].r, p_pal[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)].g, p_pal[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)].b);
	
	if(!(p_pal = ___1a10c8h)) p_pal = dummy_pal;

	n = -1;
	while(++n < 0x20){

		___19eb50h[0xc0+n].r = ((0x400*n*p_pal[___196ad8h].r)&~0xffff)/0x64;
		___19eb50h[0xc0+n].g = ((0x400*n*p_pal[___196ad8h].g)&~0xffff)/0x64;
		___19eb50h[0xc0+n].b = ((0x400*n*p_pal[___196ad8h].b)&~0xffff)/0x64;
	}

	n = -1;
	while(++n < 0x10){

		___19eb50h[0x10+n].r = ((___19df50h[0x10+n].r*D(___1a1edch)+0x8000)&~0xffff)/0x64;
		___19eb50h[0x10+n].g = ((___19df50h[0x10+n].g*D(___1a1edch)+0x8000)&~0xffff)/0x64;
		___19eb50h[0x10+n].b = ((___19df50h[0x10+n].b*D(___1a1edch)+0x8000)&~0xffff)/0x64;
	}
}
