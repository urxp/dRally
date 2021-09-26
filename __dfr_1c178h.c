#include "drally.h"

void ___1c178h(void){

/*
#include "drally.h"
#include "drmemory.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___24e4ach[];
	extern byte ___196a84h[];
	extern byte ___196ab8h[];
	extern byte ___1a2010h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___185a54h[];
	extern byte ___19bd60h[];
	extern byte ___1a1098h[];
	extern byte ___196adch[];
	extern byte ___185a24h[];

void * ___3f71ch__allocateMemory(dword);
void ___13710h(dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
byte ___5994ch(void);
void ___2ab50h(void);
void ___13bd4h_cdecl(dword, dword);
dword ___23594h_cdecl(dword, dword);
void ___13c9ch_cdecl(dword, dword);
void ___23488h_cdecl(dword, dword, dword);
void ___1c6bch_cdecl(dword);
void shop_main(void);

void ___1c178h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xc];


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
	D(___19bd60h) = ecx;
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
