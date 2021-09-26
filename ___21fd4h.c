#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a10c0h;
	extern char ___18d492h[][0xf];
	extern byte ___185ba9h[];
	extern void * ___1a10cch;
	extern byte ___19f750h[];
	extern byte ___18e298h[];
	extern byte ___185c7ah[];
	extern void * ___1a10b8h;

int ___1f094h_cdecl(const char *);
char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);

void ___21fd4h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x6c];
	__BYTE__ 	px;
	int 		i, j, n;


	D(esp+0x5c) = A1;

	ebp = 0x14c80;
	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebp+0xe1, ___1a1138h__VESA101h_DefaultScreenBufferB+ebp+0xe1, 0x17d);

		ebp += 0x280;
		if(ebp == 0x19500) break;
	}

	ebp = 0x20300;
	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebp+0xe0, ___1a1138h__VESA101h_DefaultScreenBufferB+ebp+0xe0, 0x170);

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
	___12e78h_cdecl(___1a10cch, ___185ba9h, esp+0x14, 0x1559d-eax);

	n = -1;
	while(++n < 6){

		strcpy(esp+0x14, ___18e298h+0x6e0*(5-n));
		strupr_watcom106(esp+0x14);
		___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x14, 0x208e4+0x3700*n);
		strcpy(esp+0x14, ___19f750h+0x18*D(esp+0x5c)+0x1b0*(5-n));
		strupr_watcom106(esp+0x14);
		___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x14, 0x20968+0x3700*n);
		itoa_watcom106(D(___19f750h+0x18*D(esp+0x5c)+0x1b0*(5-n)+0xc), esp, 0xa);
		itoa_watcom106(D(___19f750h+0x18*D(esp+0x5c)+0x1b0*(5-n)+0x10), esp+0x3c, 0xa);
		itoa_watcom106(D(___19f750h+0x18*D(esp+0x5c)+0x1b0*(5-n)+0x14), esp+0x28, 0xa);

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
		___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x14, 0x20a02+0x3700*n);
	}
}
