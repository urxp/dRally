#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1ed4h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01fch[];
	extern byte ___1a0180h[];
	extern byte ___1a01e0h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern byte ___1a0210h[];
	extern byte ___180728h[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1a01f0h[];
	extern byte ___18e220h[];
	extern byte ___180130h[];
	extern byte ___181f50h[];
	extern byte ___1a0228h[];
	extern byte ___181f54h[];
	extern byte ___1a01ech[];
	extern byte ___181f56h[];
	extern byte ___185bedh[];
	extern byte ___1a1e90h[];
	extern byte ___18e938h[];
	extern byte ___18e93ch[];
	extern byte ___18e940h[];
	extern byte ___1a01f4h[];
	extern byte ___1a01f8h[];


dword ___250e0h(dword);
char * strupr_watcom106(char * s);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___12e78h_cdecl(dword, dword, dword, dword);
dword ___25230h(dword);

double dR_Math_ceil(double);

// SHOP, MARKET, RACE SIGN UP RIGHT PANEL
void ___25330h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x3c];


		ecx = 0xe0;
		edx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1ed4h);
		ebx += 0x13aa0;
		L(edx) >>= 2;
___25362h:
		H(ecx) = L(edx);
___25364h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___25364h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___25362h;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		ecx = 0x40;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(eax*4+___1a01fch);
		ebx += 0x162a0;
		edx = 0x60;
		esi = D(esi*4+___1a0180h);
		L(edx) >>= 2;
___253bfh:
		H(ecx) = L(edx);
___253c1h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___253c1h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___253bfh;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		esi = ___1a01e0h;
		eax <<= 0x2;
		edi = esp+0x14;
		esi += eax;
		strcpy(edi, esi);
		eax = esp+0x14;
		eax = strupr_watcom106(eax);
		eax = esp+0x14;
		ebx = esp+0x14;
		eax = ___25230h(eax);
		ecx = eax+0x13d20;
		edx = ___185c7ah;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		eax <<= 0x2;
		if((int)D(eax+___1a0210h) <= 0x98967f) goto ___25475h;
		D(eax+___1a0210h) = 0x98967f;
___25475h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		ebx = 0xa;
		edx = esp;
		eax = D(eax*4+___1a0210h);
		esi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		X(eax) = W(___180728h);
		edi = esp+0x14;
		W(esp+0x14) = X(eax);
		strcat(edi, esi);
		eax = esp+0x14;
		ebx = esp+0x14;
		eax = ___250e0h(eax);
		ecx = eax+0x202a0;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = 4*eax;
		ebx = D(edx+___1a01fch);
		eax = 4*ebx;
		edx = D(edx+___1a01f0h);
		eax += ebx;
		edx <<= 0x2;
		ebx = 0xa;
		eax = D(edx+4*eax+___18e220h);
		edx = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		L(eax) = B(___180130h);
		edi = esp;
		B(esp+0x14) = L(eax);
		ecx = strlen(edi);
		if(ecx != 2) goto ___2555ch;
		X(eax) = W(___181f50h);
		W(esp+0x14) = X(eax);
___2555ch:
		esi = esp;
		edi = esp+0x14;
		ebx = esp+0x14;
		edx = ___185c7ah;
		strcat(edi, esi);
		ecx = 0x31fe0;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		ebx = 0xa;
		edx = esp;
		eax = D(eax*4+___1a0228h);
		eax = itoa_watcom106(eax, edx, ebx);
		L(eax) = B(___180130h);
		edi = esp;
		B(esp+0x14) = L(eax);
		ecx = strlen(edi);
		if(ecx != 1) goto ___255e8h;
		X(eax) = W(___181f50h);
		W(esp+0x14) = X(eax);
___255e8h:
		esi = ___181f54h;
		edi = esp+0x14;
		ebx = esp+0x14;
		strcat(edi, esi);
		esi = esp;
		edi = esp+0x14;
		edx = ___185c7ah;
		strcat(edi, esi);
		ecx = 0x34560;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x2fd00;
		esi = 0x3f;
___2565dh:
		eax = 0x6c*D(___1a1ef8h);
		FPUSH((int)D(eax+___1a01ech));
		ST(0) = ST(0)*F64(___181f56h);
		edx = esi;
		ST(0) = dR_Math_ceil(ST(0));
		ST(0) = (int)ST(0);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		Q(esp+0x28) = (long long)FPOP();
		eax += ecx;
		ebx = D(esp+0x28);
		eax += 0x224;
		ecx += 0x280;
		memset(eax, edx, ebx);
		if(ecx != 0x30980) goto ___2565dh;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		ebx = 0xa;
		eax -= edx;
		esi = esp;
		edx = esp;
		eax = D(eax*4+___1a01ech);
		edi = esp+0x14;
		eax = itoa_watcom106(eax, edx, ebx);
		strcpy(edi, esi);
		ebx ^= ebx;
		edx ^= edx;
		goto ___2570ah;
___256f6h:
		eax ^= eax;
		L(eax) = B(esp+edx+0x14);
		L(eax) = B(eax+___185bedh);
		eax &= 0xff;
		edx++;
		ebx += eax;
___2570ah:
		edi = esp+0x14;
		ecx = strlen(edi);
		if(edx < ecx) goto ___256f6h;
		ecx = 0x2f56f;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		edi ^= edi;
		ecx -= ebx;
		ebx = esp+0x14;
		ebp ^= ebp;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		goto ___25788h;
___2573ch:
		ecx = 0xa;
		edx = 0x14;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e90h);
		eax += 0x248a3;
		esi += 0x320;
		ebx = eax+ebp;
		edi++;
		L(edx) >>= 2;
___25763h:
		H(ecx) = L(edx);
___25765h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___25765h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___25763h;
		ebp += 0x17;
___25788h:
		eax = 0x6c*D(___1a1ef8h);
		eax = 0x6e0*D(eax+___1a01fch);
		if((int)edi < (int)D(eax+___18e938h)) goto ___2573ch;
		edi ^= edi;
		ebp ^= ebp;
		goto ___257f3h;
___257a7h:
		ecx = 0xa;
		edx = 0x14;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e90h);
		eax += 0x284a3;
		esi += 0x320;
		ebx = eax+edi;
		ebp++;
		L(edx) >>= 2;
___257ceh:
		H(ecx) = L(edx);
___257d0h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___257d0h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___257ceh;
		edi += 0x17;
___257f3h:
		eax = 0x6c*D(___1a1ef8h);
		eax = 0x6e0*D(eax+___1a01fch);
		if((int)ebp < (int)D(eax+___18e93ch)) goto ___257a7h;
		edi ^= edi;
		ebp ^= ebp;
		goto ___2585fh;
___25812h:
		ecx = 0xa;
		edx = 0x14;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e90h);
		ebx += 0x2c0a3;
		esi += 0x320;
		ebx += edi;
		ebp++;
		L(edx) >>= 2;
___2583ah:
		H(ecx) = L(edx);
___2583ch:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2583ch;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2583ah;
		edi += 0x17;
___2585fh:
		eax = 0x6c*D(___1a1ef8h);
		eax = 0x6e0*D(eax+___1a01fch);
		if((int)ebp < (int)D(eax+___18e940h)) goto ___25812h;
		ebx ^= ebx;
		ebp ^= ebp;
		edi ^= edi;
		D(esp+0x38) = ebx;
		goto ___258dah;
___25884h:
		ecx = 0xa;
		edx = 0x14;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e90h);
		eax += 0x248a3;
		esi += ebp;
		ebx = eax+edi;
		L(edx) >>= 2;
___258a6h:
		H(ecx) = L(edx);
___258a8h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___258a8h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___258a6h;
		edx = D(esp+0x38);
		ebp += 0xc8;
		edx++;
		edi += 0x17;
		D(esp+0x38) = edx;
___258dah:
		eax = 0x6c*D(___1a1ef8h);
		edx = D(esp+0x38);
		if((int)edx < (int)D(eax+___1a01f0h)) goto ___25884h;
		edi ^= edi;
		ebp ^= ebp;
		D(esp+0x30) = edi;
		goto ___25952h;
___258f7h:
		eax = D(esp+0x30);
		ecx = 0xa;
		edx = 0x14;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e90h);
		ebx += 0x284a3;
		esi += ebp;
		ebx += eax;
		L(edx) >>= 2;
___2591eh:
		H(ecx) = L(edx);
___25920h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___25920h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2591eh;
		edx = D(esp+0x30);
		edi++;
		edx += 0x17;
		ebp += 0xc8;
		D(esp+0x30) = edx;
___25952h:
		eax = 0x6c*D(___1a1ef8h);
		if((int)edi < (int)D(eax+___1a01f4h)) goto ___258f7h;
		edi ^= edi;
		ebp ^= ebp;
		D(esp+0x34) = edi;
		goto ___259c6h;
___2596bh:
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(esp+0x34);
		ebx += 0x2c0a3;
		ecx = 0xa;
		ebx += esi;
		esi = D(___1a1e90h);
		edx = 0x14;
		esi += ebp;
		L(edx) >>= 2;
___25992h:
		H(ecx) = L(edx);
___25994h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___25994h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___25992h;
		eax = D(esp+0x34);
		edi++;
		eax += 0x17;
		ebp += 0xc8;
		D(esp+0x34) = eax;
___259c6h:
		eax = 0x6c*D(___1a1ef8h);
		if((int)edi < (int)D(eax+___1a01f8h)) goto ___2596bh;
		return;
}
