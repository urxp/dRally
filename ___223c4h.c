#include "drally.h"
#include "drally_fonts.h"

	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10dch;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a0e28h[];
	extern __BYTE__ ___1a01e0h[];
	extern __DWORD__ ___196a94h_difficulty;
	extern __BYTE__ ___185c7ah[];
	extern __POINTER__ ___1a10b8h;
	extern char ___18768ah[][0x18];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___3e03ch(void);
void ___23230h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2b318h(void);
void ___3d1f0h(void);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
void ___2ab50h(void);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___27d24h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void CONFIG_WRITE(void);
char * strupr_watcom106(char * s);

void ___223c4h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x44];
	int 	i, j, n, x, y;
	__BYTE__ 	px;


	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1138h__VESA101h_DefaultScreenBufferB, 0x4b000);
	___135fch(0, 0x173, 0x27f, 0x6d);
	___3e03ch();
	___23230h();

	j = -1;
	while(++j < 0x36){

		i = -1;
		while(++i < 0x280){

			if((px = B(___1a10dch+0x280*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(j+0x54)+i) = px;
		}
	}

	n = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x50);
	D(esp+0x2c) = -1;
	eax = 0;
	edx = 0;

	if(n >= (int)D(___1a0e28h+0xc)){

		while(1){
			
			edx += 0x14;
			eax++;

			if((int)edx >= 0xc8) break;
			if(n < (int)D(___1a0e28h+edx+0xc)){
			
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
		D(___1a0e28h+0x14*D(esp+0x2c)+0xc) = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x50);
		D(___1a0e28h+0x14*D(esp+0x2c)+0x10) = ___196a94h_difficulty;
		___27d24h_cdecl(0x11, 0x16*D(esp+0x2c)+0x8a, 0x25b, 0x18);
		CONFIG_WRITE();
	}

	n = -1;
	while(++n < 0xa){

		itoa_watcom106(n+1, esp, 10);
		strcat(esp, ".");
		ecx = 0x280*(0x16*n+0x90)+0x24;
		if(n == 9) ecx -= 8;
		___12e78h_v3(___1a10b8h___185c7ah, esp, ecx%0x280, ecx/0x280);
		strcpy(esp, ___1a0e28h+0x14*n);
		strupr_watcom106(esp);
		esi = 0x280*(0x16*n+0x90);

		x = 7817+0x3700*(n+6);
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a10b8h___185c7ah, esp, x, y);
		itoa_watcom106(D(___1a0e28h+0x14*n+0xc), esp, 10);

		if(((int)D(___1a0e28h+0x14*n+0xc) >= 0)&&((int)D(___1a0e28h+0x14*n+0xc) < 0xa)){
				
			x = esi+0x158;
			y = x/0x280;
			x = x%0x280;
			___12e78h_v3(___1a10b8h___185c7ah, esp, x, y);
		}

		if(((int)D(___1a0e28h+0x14*n+0xc) >= 0xa)&&((int)D(___1a0e28h+0x14*n+0xc) < 0x64)){

			x = 8016+0x3700*(n+6);
			y = x/0x280;
			x = x%0x280;
			___12e78h_v3(___1a10b8h___185c7ah, esp, x, y);
		}

		if((int)D(___1a0e28h+0x14*n+0xc) >= 0x64){
				
			x = 8008+0x3700*(n+6);
			y = x/0x280;
			x = x%0x280;
			___12e78h_v3(___1a10b8h___185c7ah, esp, x, y);
		}

		strcpy(esp, ___18768ah[D(___1a0e28h+0x14*n+0x10)]);
		x = 8109+0x3700*(n+6);
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a10b8h___185c7ah, strupr_watcom106(esp), x, y);
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
		if((___19bd60h != 0)&&(H(eax) == 0x3b)){
		
			___23758h();
			H(eax) = 0;
		}
#endif // DR_MULTIPLAYER

		if(H(eax) != 0) break;
	}
	
	___5994ch();
	___59b3ch();
}
