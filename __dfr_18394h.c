#include "drally.h"

	extern byte ___185ba9h[];
	extern byte ___1a10e0h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___19bd60h[];

void ___12e78h_cdecl(dword, dword, dword, dword);
void ___23758h(void);
void ___17384h_cdecl(dword, dword, dword, dword, dword, dword);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
dword ___59720h(void);

// MODEM INIT STRING
dword ___18394h_cdecl(dword A1, dword A2, dword A3, dword A4, dword A5, dword A6, dword A7, dword A8){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, ebx_t, edx_t;
	byte 	esp[0x6c+0x10+0x10];

	eax = A1;
	edx = A2;
	ebx = A3;
	ecx = A4;
	D(esp+0x7c) = A5;
	D(esp+0x80) = A6;
	D(esp+0x84) = A7;
	D(esp+0x88) = A8;


		D(esp+0x38) = eax;
		D(esp+0x64) = edx;
		D(esp+0x60) = ebx;
		D(esp+0x40) = ecx;
		edx = 0x3f;
		ebx = 0x70;
		esi = D(esp+0x38);
		edi = esp;
		ecx = D(esp+0x64);
		H(eax) = 0;
		D(esp+0x34) = edx;
		B(esp+0x69) = H(eax);
		edx = D(esp+0x60);
		strcpy(edi, esi);
		eax = 4*edx;
		D(esp+0x50) = ebx;
		eax += edx;
		ebx = esp;
		eax <<= 7;
		edx = ___185ba9h;
		ecx += eax;
		eax = D(___1a10e0h);
		ebp = 0;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ebx = 0;
		goto ___1842ch;
___18419h:
		eax = 0;
		L(eax) = B(esp+ebx);
		L(eax) = B(___185ba9h+eax-0x1e);
		eax &= 0xff;
		ebx++;
		ebp += eax;
___1842ch:
		edi = esp;
		ecx = strlen(edi);
		if(ebx < ecx) goto ___18419h;
		edx = D(esp+0x60);
		edi = 4*edx;
		edi += edx;
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edi <<= 7;
		ecx = D(esp+0x64);
		edx += edi;
		ebx = ebp;
		edx += ecx;
		esi = ecx+edi;
		D(esp+0x3c) = edi;
		ecx = 0x20;
		eax = esi;
		D(esp+0x44) = edi;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		D(esp+0x4c) = esi;
		eax = 0;
		D(esp+0x48) = esi;
		D(esp+0x58) = eax;
___18481h:
		edx = D(esp+0x50);
		ebx = D(esp+0x34);
		edx_t = edx;
		eax = D(esp+0x64);
		ecx = 0;
		ebx_t = ebx;
		edx = D(esp+0x60);
		ebx = ebp;
	 	___17384h_cdecl(eax, edx, ebx, ecx, ebx_t, edx_t);
		eax = ___59720h();
		D(esp+0x54) = eax;
		eax &= 0xff;
		if(eax < 0x1c) goto ___184c8h;
		if(eax <= 0x1c) goto ___18517h;
		if(eax < 0x3b) goto ___1861ah;
		if(eax <= 0x3b) goto ___184ddh;
		if(eax == 0x9c) goto ___18517h;
		goto ___1861ah;
___184c8h:
		if(eax < 1) goto ___1861ah;
		if(eax <= 1) goto ___18502h;
		if(eax == 0xe) goto ___18538h;
		goto ___1861ah;
___184ddh:
		if(D(esp+0x84) == 0) goto ___1861ah;
		if(D(___19bd60h) == 0) goto ___1861ah;
		___23758h();
		goto ___1861ah;
___18502h:
		if(D(esp+0x88) == 0) goto ___1861ah;
		eax = 0;
		goto ___1876bh;
___18517h:
		edi = esp;
		ecx = strlen(edi);
		if(ecx <= 0) goto ___1861ah;
		D(esp+0x58) = 0xffffffff;
		goto ___1861ah;
___18538h:
		edi = esp;
		ecx = strlen(edi);
		if(ecx <= 0) goto ___1861ah;
		edi = esp;
		ecx = strlen(edi);
		eax = 0;
		L(eax) = B(esp+ecx-1);
		L(eax) = B(___185ba9h+eax-0x1e);
		eax &= 0xff;
		edx = D(esp+0x60);
		ebp -= eax;
		eax = 0x280*edx;
		esi = eax;
		eax += 0x5000;
		D(esp+0x5c) = eax;
___18580h:
		edi = esp;
		ebx = 0;
		ecx = strlen(edi);
		L(ebx) = B(esp+ecx-1);
		L(ebx) = B(___185ba9h+ebx-0x1e);
		ecx = D(esp+0x64);
		edx = 0xc4;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edi = D(esp+0x5c);
		eax += esi;
		ebx &= 0xff;
		eax += ecx;
		ebx += 0x14;
		eax += ebp;
		esi += 0x280;
		memset(eax, edx, ebx);
		if(esi != edi) goto ___18580h;
		edi = esp;
		ecx = strlen(edi);
		eax = 0;
		L(eax) = B(esp+ecx-1);
		ebx = 0;
		edx = D(esp+0x44);
		L(ebx) = B(___185ba9h+eax-0x1e);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = 0x20;
		eax += edx;
		edx = D(esp+0x64);
		ebx += 0x14;
		edx += eax;
		eax = D(esp+0x48);
		edx += ebp;
		eax += ebp;
		edi = esp;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		L(edx) = 0;
		ecx = strlen(edi);
		B(esp+ecx-1) = L(edx);
___1861ah:
		edx = D(esp+0x54);
		eax = D(esp+0x40);
		edx = (int)edx>>8;
		if(B(edx+eax) != 1) goto ___1872dh;
		edi = esp;
		ebx = D(esp+0x7c);
		ecx = strlen(edi);
		if(ecx >= ebx) goto ___1872dh;
		if((int)ebp >= (int)D(esp+0x80)) goto ___1872dh;
		B(esp+0x68) = L(edx);
		if(L(edx) <= 0x40) goto ___1866bh;
		if(L(edx) >= 0x5b) goto ___1866bh;
		H(ecx) = L(edx);
		H(ecx) += 0x20;
		B(esp+0x68) = H(ecx);
___1866bh:
		esi = esp+0x68;
		edi = esp;
		strcat(edi, esi);
		esi = 0x280*D(esp+0x60);
		edi = 0xc4;
		ecx = esi;
		esi += 0x5000;
___186a8h:
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = D(esp+0x64);
		eax += ecx;
		ebx = 0x20;
		eax += edx;
		edx = edi;
		eax += ebp;
		ecx += 0x280;
		memset(eax, edx, ebx);
		if(ecx != esi) goto ___186a8h;
		esi = D(esp+0x4c);
		ebx = esp+0x68;
		edx = ___185ba9h;
		esi += ebp;
		eax = D(___1a10e0h);
		ecx = esi;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ebx = 0;
		L(ebx) = B(esp+0x68);
		L(ebx) = B(___185ba9h+ebx-0x1e);
		ecx = D(esp+0x3c);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edi = D(esp+0x64);
		eax += ecx;
		eax += edi;
		ebx &= 0xff;
		edx = eax+ebp;
		ecx = 0x20;
		eax = esi;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		eax = 0;
		L(eax) = B(esp+0x68);
		L(eax) = B(___185ba9h+eax-0x1e);
		eax &= 0xff;
		ebp += eax;
___1872dh:
		if(D(esp+0x58) == 0) goto ___18481h;
		eax = D(esp+0x54);
		eax &= 0xff;
		if(eax == 1) goto ___18766h;
		esi = esp;
		edi = D(esp+0x38);
		strcpy(edi, esi);
___18766h:
		eax = 0x1;
___1876bh:
		return eax;
}
