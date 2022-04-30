#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10c0h;
	extern char ___18d492h[][0xf];
	extern record_t ___19f750h[6][18];
	extern __BYTE__ ___18e298h[];

int ___1f094h_cdecl(const char *);
char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);

void ___21fd4h_cdecl(__DWORD__ A1){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x6c];
	__BYTE__ 	px;
	int 		i, j, n, x, y;


	D(esp+0x5c) = A1;

	ebp = 0x14c80;
	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebp+0xe1, ___1a1138h__VESA101_BACKGROUND+ebp+0xe1, 0x17d);

		ebp += 0x280;
		if(ebp == 0x19500) break;
	}

	ebp = 0x20300;
	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebp+0xe0, ___1a1138h__VESA101_BACKGROUND+ebp+0xe0, 0x170);

		ebp += 0x280;
		if(ebp == 0x34800) break;
	}

	j = -1;
	while(++j < 0x44){

		i = -1;
		while(++i < 0x280){

			if((px = B(___1a10c0h+0x280*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x14a00+0x280*j+i) = px;
		}
	}

	strcpy(esp+0x14, ___18d492h[D(esp+0x5c)]);
	eax = ___1f094h_cdecl(esp+0x14);
	eax = (int)eax>>1;
	x = 0x1559d-eax;
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3(___1a10cch___185ba9h, esp+0x14, x, y);

	n = -1;
	while(++n < 6){

		strcpy(esp+0x14, ___18e298h+0x6e0*(5-n));
		strupr_watcom106(esp+0x14);
		x = 0x208e4+0x3700*n;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a10b8h___185c7ah, esp+0x14, x, y);
		strcpy(esp+0x14, ___19f750h[5-n][D(esp+0x5c)].name);
		strupr_watcom106(esp+0x14);
		x = 0x20968+0x3700*n;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a10b8h___185c7ah, esp+0x14, x, y);
		itoa_watcom106(___19f750h[5-n][D(esp+0x5c)].min, esp, 0xa);
		itoa_watcom106(___19f750h[5-n][D(esp+0x5c)].sec, esp+0x3c, 0xa);
		itoa_watcom106(___19f750h[5-n][D(esp+0x5c)].sec100, esp+0x28, 0xa);

		if(strlen(esp) == 1){

			B(esp+2) = 0;
			B(esp+1) = B(esp);
			B(esp) = 0x30;
		}

		if(strlen(esp+0x3c) == 1){
				
			B(esp+0x3e) = 0;
			B(esp+0x3d) = B(esp+0x3c);
			B(esp+0x3c) = 0x30;
		}

		if(strlen(esp+0x28) == 1){

			B(esp+0x2a) = 0;
			B(esp+0x29) = B(esp+0x28);
			B(esp+0x28) = 0x30;
		}

		strcpy(esp+0x14, esp);
		strcat(esp+0x14, ":");
		strcat(esp+0x14, esp+0x3c);
		strcat(esp+0x14, ".");
		strcat(esp+0x14, esp+0x28);
		x = 0x20a02+0x3700*n;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a10b8h___185c7ah, esp+0x14, x, y);
	}
}
