#include "drally.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10dch[];
	extern byte ___1a1ef8h[];
	extern byte ___1a0e28h[];
	extern byte ___1a01e0h[];
	extern __DWORD__ ___196a94h_difficulty;
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern char ___18768ah[][0x18];
	extern byte ___19bd60h[];

#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void ___135fch(dword, dword, dword, dword);
void ___3e03ch(void);
void ___23230h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2b318h(void);
void ___3d1f0h(void);
byte ___5994ch(void);
byte ___59b3ch(void);
void ___2ab50h(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___27d24h_cdecl(dword, dword, dword, dword);
void CONFIG_WRITE(void);
char * strupr_watcom106(char * s);

void ___223c4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x44];
	int 	i, j, n;
	byte 	px;


	memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR), D(___1a1138h__VESA101h_DefaultScreenBufferB), 0x4b000);
	___135fch(0, 0x173, 0x27f, 0x6d);
	___3e03ch();
	___23230h();

	j = -1;
	while(++j < 0x36){

		i = -1;
		while(++i < 0x280){

			if((px = B(D(___1a10dch)+0x280*j+i)) != 0) B(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0xd200+0x280*j+i) = px;
		}
	}

	n = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x50);
	D(esp+0x2c) = 0xffffffff;
	eax = 0;
	edx = 0;

	if(n >= (int)D(___1a0e28h+0xc)){

		while(1){
			
			edx += 0x14;
			eax++;

			if((int)edx >= 0xc8) break;
			if(n < (int)D(edx+___1a0e28h+0xc)){
			
				D(esp+0x2c) = eax;
				break;
			}
		}
	}
	else {

		D(esp+0x2c) = 0;
	}

	if((int)D(esp+0x2c) >= 0){

		if((int)D(esp+0x2c) < 9){

			n = 9;
			while(1){

				memcpy(___1a0e28h+0x14*n, ___1a0e28h+0x14*(n-1), 0x14);

				n--;
				if(n <= (int)D(esp+0x2c)) break;
			}
		}

		strcpy(___1a0e28h+0x14*D(esp+0x2c), ___1a01e0h+0x6c*D(___1a1ef8h));
		strupr_watcom106(___1a0e28h+0x14*D(esp+0x2c));
		D(0x14*D(esp+0x2c)+___1a0e28h+0xc) = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x50);
		D(0x14*D(esp+0x2c)+___1a0e28h+0x10) = ___196a94h_difficulty;
		___27d24h_cdecl(0x11, 0x16*D(esp+0x2c)+0x8a, 0x25b, 0x18);
		CONFIG_WRITE();
	}

	D(esp+0x38) = 0x16889;
	D(esp+0x30) = ___1a0e28h;
	D(esp+0x28) = 0x16950;
	D(esp+0x34) = 0x16948;
	D(esp+0x3c) = 0x169ad;
	D(esp+0x40) = 0;
	ebp = 0;

	while(1){

		itoa_watcom106(D(esp+0x40)+1, esp, 10);
		strcat(esp, ".");
		ecx = 0x280*(0x16*D(esp+0x40)+0x90)+0x24;
		if(D(esp+0x40) == 9) ecx -= 8;
		___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp, ecx);
		strcpy(esp, D(esp+0x30));
		strupr_watcom106(esp);
		esi = 0x280*(0x16*D(esp+0x40)+0x90);
		___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp, D(esp+0x38));
		itoa_watcom106(D(ebp+___1a0e28h+0xc), esp, 10);

		if(((int)D(ebp+___1a0e28h+0xc) >= 0)&&((int)D(ebp+___1a0e28h+0xc) < 0xa)){
				
			___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp, esi+0x158);
		}

		if(((int)D(ebp+___1a0e28h+0xc) >= 0xa)&&((int)D(ebp+___1a0e28h+0xc) < 0x64)){

			___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp, D(esp+0x28));
		}

		if((int)D(ebp+___1a0e28h+0xc) >= 0x64){
				
			___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp, D(esp+0x34));
		}

		strcpy(esp, ___18768ah[D(ebp+___1a0e28h+0x10)]);
		___12e78h_cdecl(D(___1a10b8h), ___185c7ah, strupr_watcom106(esp), D(esp+0x3c));

		D(esp+0x40)++;
		D(esp+0x38) += 0x3700;
		D(esp+0x30) += 0x14;
		D(esp+0x28) += 0x3700;
		D(esp+0x34) += 0x3700;
		D(esp+0x3c) += 0x3700;

		ebp += 0x14;
		if((int)D(esp+0x40) >= 0xa) break;
	}

	___12cb8h__VESA101_PRESENTSCREEN();
	___2b318h();
	___3d1f0h();

	___5994ch();
	___59b3ch();

	while(1){

		___2ab50h();
		H(eax) = ___5994ch();
		
#if defined(DR_MULTIPLAYER)
		if((H(eax) == 0x3b)&&(D(___19bd60h) != 0)){
		
			___23758h();
			H(eax) = 0;
		}
#endif // DR_MULTIPLAYER

		if(H(eax) != 0) break;
	}
	
	___5994ch();
	___59b3ch();
}
