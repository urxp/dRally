#include "drally.h"

void ___1c178h(void){

	printf("TODO ___1c178h\n");
	exit(1);
/*
#include "drally.h"
#include "drmemory.h"

	extern __BYTE__ ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern __BYTE__ ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern __BYTE__ ___185c0bh[];
	extern __BYTE__ ___1a1108h[];
	extern __BYTE__ ___24e4ach[];
	extern __BYTE__ ___196a84h[];
	extern __BYTE__ ___196ab8h[];
	extern __BYTE__ ___1a2010h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___185a54h[];
	extern __DWORD__ ___19bd60h;
	extern __BYTE__ ___1a1098h[];
	extern __BYTE__ ___196adch[];
	extern __BYTE__ ___185a24h[];

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
void ___13710h(__DWORD__, __DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___12e78h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
__BYTE__ ___5994ch(void);
void ___2ab50h(void);
void ___13bd4h_cdecl(__DWORD__, __DWORD__);
__DWORD__ ___23594h_cdecl(__DWORD__, __DWORD__);
void ___13c9ch_cdecl(__DWORD__, __DWORD__);
void ___23488h_cdecl(__DWORD__, __DWORD__, __DWORD__);
void ___1c6bch_cdecl(__DWORD__);
void shop_main(void);

void ___1c178h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0xc];


	eax = 0x12;
	ecx = 0x28f00;
	eax = ___3f71ch__allocateMemory(eax);
	ebp = eax;
	eax = 1;
	edx = 0;
	eax = ___3f71ch__allocateMemory(eax);
	esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
	edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	esi += 0x10680;
	edi += 0x10680;
	D(esp+8) = eax;
	memcpy(edi, esi, ecx);
	eax = 0;
	ebx = 0x14e;
	___13710h(eax, edx);
	eax = 2;
	edx = 0;
	ecx = 0x41;
	___13710h(eax, edx);
	edx = 0xc5;
	eax = 0x97;
	___13248h_cdecl(eax, edx, ebx, ecx, 1);
	ecx = 0x20dbf;
	ebx = "Waiting for remote player...";
	edx = ___185c0bh;
	eax = D(___1a1108h);
	___12e78h_cdecl(eax, edx, ebx, ecx);
	ecx = 0x2383f;
	ebx = "Press ESC to abort";
	edx = ___185c0bh;
	eax = D(___1a1108h);
	___12e78h_cdecl(eax, edx, ebx, ecx);
	___12cb8h__VESA101_PRESENTSCREEN();
	ebx = 0x1000;
	eax = D(___24e4ach);
	edx = 0;
	eax += 4;
	memset(eax, edx, ebx);
	ecx = 1;
___1c252h:
	if(D(___196a84h) != 0) goto ___1c354h;
	L(eax) = ___5994ch();
	ebx = 0;
	edx = 0xd8;
	L(ebx) = L(eax);
	___2ab50h();
	___2ab50h();
	eax = 0xa6;
	___13bd4h_cdecl(eax, edx);
	edx = 0xb;
	eax = ebp;
	eax = ___23594h_cdecl(eax, edx);
	if(eax == 0) goto ___1c34bh;
	edx = 0xd8;
	eax = 0xa6;
	___13c9ch_cdecl(eax, edx);
	edx = ebp;
	eax = 0;
___1c2a8h:
	eax++;
	L(ebx) = B(edx);
	edx++;
	B(esp+eax-1) = L(ebx);
	if((int)eax < 7) goto ___1c2a8h;
	eax = 0;
	L(eax) = B(ebp+7);
	edx = ebp;
	D(___196ab8h) = eax;
	eax = 0;
___1c2c3h:
	L(ebx) = B(edx+8);
	edx++;
	B(eax+___1a2010h+1) = L(ebx);
	eax++;
	if((int)eax < 9) goto ___1c2c3h;
	eax = 0;
	L(eax) = B(ebp+0x11);
	ebx = 0xa;
	D(___185a14h_UseWeapons) = eax;
	eax = esp;
	edx = ecx;
	eax = atoi(eax);
	D(___185a54h) = eax;
	eax = D(esp+8);
	___23488h_cdecl(eax, edx, ebx);
	eax = D(esp+8);
	dRMemory_free(eax);
	eax = ebp;
	ebx = 0x1000;
	dRMemory_free(eax);
	eax = D(___24e4ach);
	edx = 0;
	eax += 4;
	memset(eax, edx, ebx);
	ebx = 2;
	eax = D(___185a54h);
	___19bd60h = ecx;
	D(___1a1098h) = ebx;
	D(___196adch) = ebx;
	___1c6bch_cdecl(eax);
	shop_main();
	D(___185a24h) = ecx;
	ebx = ecx;
___1c34bh:
	if(ebx != 1) goto ___1c252h;
___1c354h:
	return;
}
*/
}
