#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___185ba9h[];
	extern __POINTER__ ___1a10e0h;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

void ___12e78h_cdecl(__POINTER__, font_props_t *, const char *, __DWORD__);
void ___23758h(void);
void ___17384h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
__DWORD__ ___59720h(void);

// MODEM INIT STRING
__DWORD__ ___18394h_cdecl(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3, __POINTER__ A4, __DWORD__ A5, __DWORD__ A6, __DWORD__ A7, __DWORD__ A8){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, ebx_t, edx_t;
	__BYTE__ 	esp[0x6c+0x10+0x10];
	__POINTER__ 	vp, vp0;

	edx = A2;
	ebx = A3;
	D(esp+0x7c) = A5;
	D(esp+0x80) = A6;
	D(esp+0x84) = A7;
	D(esp+0x88) = A8;


		vp = A1;
		D(esp+0x64) = edx;
		D(esp+0x60) = ebx;
		vp0 = A4;
		edx = 0x3f;
		ebx = 0x70;
		ecx = D(esp+0x64);
		H(eax) = 0;
		D(esp+0x34) = edx;
		B(esp+0x69) = H(eax);
		edx = D(esp+0x60);
		strcpy(esp, vp);
		eax = 4*edx;
		D(esp+0x50) = ebx;
		eax += edx;
		eax <<= 7;
		ecx += eax;
		ebp = 0;
		___12e78h_cdecl(___1a10e0h, (font_props_t *)___185ba9h, esp, ecx);
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
		ecx = strlen(esp);
		if(ebx < ecx) goto ___18419h;
		edx = D(esp+0x60);
		edi = 4*edx;
		edi += edx;
		edi <<= 7;
		ebx = ebp;
		esi = ecx+edi;
		D(esp+0x3c) = edi;
		ecx = 0x20;
		D(esp+0x44) = edi;
		___1398ch__VESA101_PRESENTRECTANGLE(esi, ___1a112ch__VESA101_ACTIVESCREEN_PTR+edi+D(esp+0x64), ebx, ecx);
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
#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			goto ___1861ah;
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
		___23758h();
		goto ___1861ah;
___18502h:
		if(D(esp+0x88) == 0) goto ___1861ah;
		eax = 0;
		goto ___1876bh;
___18517h:
		ecx = strlen(esp);
		if(ecx <= 0) goto ___1861ah;
		D(esp+0x58) = 0xffffffff;
		goto ___1861ah;
___18538h:
		ecx = strlen(esp);
		if(ecx <= 0) goto ___1861ah;
		ecx = strlen(esp);
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
		ebx = 0;
		ecx = strlen(esp);
		L(ebx) = B(esp+ecx-1);
		L(ebx) = B(___185ba9h+ebx-0x1e);
		ecx = D(esp+0x64);
		edx = 0xc4;
		edi = D(esp+0x5c);
		ebx &= 0xff;
		ebx = ebx+0x14;
		memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+esi+ecx+ebp, edx, ebx);
		esi += 0x280;
		if(esi != edi) goto ___18580h;
		ecx = strlen(esp);
		eax = 0;
		L(eax) = B(esp+ecx-1);
		ebx = 0;
		edx = D(esp+0x44);
		L(ebx) = B(___185ba9h+eax-0x1e);
		ecx = 0x20;
		ebx = ebx+0x14;
		eax = D(esp+0x48)+ebp;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x64)+ebp, ebx, ecx);
		L(edx) = 0;
		ecx = strlen(esp);
		B(esp+ecx-1) = L(edx);
___1861ah:
		edx = D(esp+0x54);
		edx = (int)edx>>8;
		if(B(vp0+edx) != 1) goto ___1872dh;
		ebx = D(esp+0x7c);
		ecx = strlen(esp);
		if(ecx >= ebx) goto ___1872dh;
		if((int)ebp >= (int)D(esp+0x80)) goto ___1872dh;
		B(esp+0x68) = L(edx);
		if(L(edx) <= 0x40) goto ___1866bh;
		if(L(edx) >= 0x5b) goto ___1866bh;
		H(ecx) = L(edx);
		H(ecx) += 0x20;
		B(esp+0x68) = H(ecx);
___1866bh:
		strcat(esp, esp+0x68);
		esi = 0x280*D(esp+0x60);
		edi = 0xc4;
		ecx = esi;
		esi += 0x5000;
___186a8h:
		ebx = 0x20;
		edx = edi;
		memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+ecx+D(esp+0x64)+ebp, edx, ebx);
		ecx += 0x280;
		if(ecx != esi) goto ___186a8h;
		esi = D(esp+0x4c);
		esi += ebp;
		ecx = esi;
		___12e78h_cdecl(___1a10e0h, (font_props_t *)___185ba9h, esp+0x68, ecx);
		ebx = 0;
		L(ebx) = B(esp+0x68);
		L(ebx) = B(___185ba9h+ebx-0x1e);
		edi = D(esp+0x64);
		ebx &= 0xff;
		ecx = 0x20;
		___1398ch__VESA101_PRESENTRECTANGLE(esi, ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x3c)+edi+ebp, ebx, ecx);
		eax = 0;
		L(eax) = B(esp+0x68);
		L(eax) = B(___185ba9h+eax-0x1e);
		eax &= 0xff;
		ebp += eax;
___1872dh:
		if(D(esp+0x58) == 0) goto ___18481h;
		eax = D(esp+0x54);
		eax &= 0xff;
		
		if(eax != 1){
		
			strcpy(vp, esp);
		}

		eax = 0x1;
___1876bh:
		return eax;
}
