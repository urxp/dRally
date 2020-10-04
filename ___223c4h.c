#include "drally.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10dch[];
	extern byte ___1a1ef8h[];
	extern byte ___1a0e34h[];
	extern byte ___1a0230h[];
	extern byte ___1a0e28h[];
	extern byte ___1a01e0h[];
	extern byte ___196a94h[];
	extern byte ___1a0e38h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern byte ___18768ah[];
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


	ecx = 0x4b000;
	ebx = 0x27f;
	esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
	edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edx = 0x173;
	memcpy(edi, esi, ecx);
	ecx = 0x6d;
	eax = 0;
	___135fch(eax, edx, ebx, ecx);
	___3e03ch();
	___23230h();
	ecx = 0x36;
	edx = 0x280;
	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	esi = D(___1a10dch);
	ebx += 0xd200;

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

	edx = D(___1a1ef8h);
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	ecx = D(___1a0e34h);
	edx = 0xffffffff;
	ebx = D(4*eax+___1a0230h);
	D(esp+0x2c) = edx;
	eax = 0;
	edx = 0;

	if((int)ebx >= (int)ecx){

		while(1){
			
			edx += 0x14;
			eax++;

			if((int)edx >= 0xc8) break;
			if((int)ebx < (int)D(edx+___1a0e34h)){
			
				D(esp+0x2c) = eax;
				break;
			}
		}
	}
	else {

		D(esp+0x2c) = eax;
	}

	edi = D(esp+0x2c);

	if((int)edi >= 0){

		if(edi != 9){

			ebx = 9;

			if((int)edi < (int)ebx){

				edx = ___1a0e28h;
				ebp = ___1a0e28h;
				edx += 0xa0;
				ebp += 0xb4;

				while(1){

					ecx = 0x14;
					esi = edx;
					edi = ebp;
					memcpy(edi, esi, ecx);
					ebx--;
					ecx = D(esp+0x2c);
					ebp -= 0x14;
					edx -= 0x14;

					if((int)ebx <= (int)ecx) break;
				}
			}
		}

		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = D(esp+0x2c);
		ebx = 4*edx;
		esi = ___1a01e0h;
		ebx += edx;
		edx = ___1a0e28h;
		ebx <<= 2;
		eax <<= 2;
		edx += ebx;
		esi += eax;
		edi = edx;
		strcpy(edi, esi);
		eax = edx;
		eax = strupr_watcom106(eax);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax = D(4*eax+___1a0230h);
		D(ebx+___1a0e34h) = eax;
		eax = D(___196a94h);
		edx = D(esp+0x2c);
		D(ebx+___1a0e38h) = eax;
		eax = 4*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax += eax;
		ecx = 0x18;
		edx = eax+0x8a;
		ebx = 0x25b;
		eax = 0x11;
		___27d24h_cdecl(eax, edx, ebx, ecx);
		CONFIG_WRITE();
	}

	edi = 0x16889;
	ebp = ___1a0e28h;
	eax = 0x16950;
	edx = 0x16948;
	ebx = 0x169ad;
	D(esp+0x38) = edi;
	D(esp+0x30) = ebp;
	D(esp+0x28) = eax;
	D(esp+0x34) = edx;
	D(esp+0x3c) = ebx;
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
		itoa_watcom106(D(ebp+___1a0e34h), esp, 10);

		if(((int)D(ebp+___1a0e34h) >= 0)&&((int)D(ebp+___1a0e34h) < 0xa)){
				
			___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp, esi+0x158);
		}

		if(((int)D(ebp+___1a0e34h) >= 0xa)&&((int)D(ebp+___1a0e34h) < 0x64)){

			___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp, D(esp+0x28));
		}

		if((int)D(ebp+___1a0e34h) >= 0x64){
				
			___12e78h_cdecl(D(___1a10b8h), ___185c7ah, esp, D(esp+0x34));
		}

		strcpy(esp, 0x18*D(ebp+___1a0e38h)+___18768ah);
		___12e78h_cdecl(D(___1a10b8h), ___185c7ah, strupr_watcom106(esp), D(esp+0x3c));
		edi = D(esp+0x40);
		edi++;
		D(esp+0x40) = edi;
		eax = D(esp+0x38);
		edx = D(esp+0x30);
		ebx = D(esp+0x28);
		ecx = D(esp+0x34);
		esi = D(esp+0x3c);
		eax += 0x3700;
		edx += 0x14;
		ebx += 0x3700;
		ecx += 0x3700;
		esi += 0x3700;
		D(esp+0x38) = eax;
		D(esp+0x30) = edx;
		D(esp+0x28) = ebx;
		D(esp+0x34) = ecx;
		D(esp+0x3c) = esi;

		ebp += 0x14;
		if((int)edi >= 0xa) break;
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
