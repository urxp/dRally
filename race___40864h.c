#include "drally.h"

	extern byte ___243d80h[];
	extern byte ___1d8110h[];
	extern byte ___243ce8h[];
	extern byte ___1de5b4h[];
	extern byte ___182f37h[];
	extern byte ___1de5ach[];
	extern byte ___1de5b0h[];
	extern byte ___182f47h[];
	extern byte ___243d34h[];
	extern byte ___1de5a8h[];
	extern byte ___243cdch[];
	extern byte ___243cb8h[];
	extern byte ___1d7810h[];
	extern byte ___182f3fh[];
	extern byte ___243334h[];
	extern byte ___243ca0h[];
	extern byte ___1de598h[];
	extern byte ___182f4fh[];
	extern byte ___1de210h[];
	extern byte ___182f57h[];
	extern byte ___1de530h[];
	extern byte ___196de8h[];
	extern byte ___196dech[];
	extern byte ___182ed4h[];
	extern byte ___1de7d0h[];
	extern byte ___196df4h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
dword ___4256ch_cdecl(dword A1, dword A2, dword A3, dword A4, dword A5, dword A6, dword A7, dword A8);

double dR_Math_ceil(double);

// WIDESCREEN INFOBOX
void race___40864h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5, p6, p7, p8;
	byte 	esp[0x10];


		ebp = D(___243d80h);
		edx = 0x60;
		esi = ebp;
		edi ^= edi;
		eax ^= eax;
___40888h:
		ebx ^= ebx;
___4088ah:
		L(ecx) = B(eax+___1d8110h);
		if(L(ecx) <= 0) goto ___40897h;
		B(edx+esi) = L(ecx);
___40897h:
		edx++;
		ebx++;
		eax++;
		if((int)ebx < 0x40) goto ___4088ah;
		edi++;
		edx += 0x1c0;
		if((int)edi < 0x20) goto ___40888h;
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(eax*4+___1de5b4h));
		ST(0) = ST(0)*F64(___182f37h);
		ST(0) = (int)ST(0);
		D(esp+0x8) = (int)FPOP();
		if((int)D(esp+8) >= 0) goto ___408e2h;
		ebx ^= ebx;
		D(esp+0x8) = ebx;
___408e2h:
		edx = 0x3a;
		eax ^= eax;
		edi = 0x7;
		L(eax) = B(esp+8);
		ebx = ebp+0xe64;
		edx -= eax;
		ebx += eax;
		eax ^= eax;
		D(___243d80h) = ebp;
		if(edx == 0) goto ___40920h;
___40908h:
		ecx = edx;
___4090ah:
		if((signed char)B(ebx) < 0x40) goto ___40911h;
		B(ebx) = L(eax);
___40911h:
		ebx++;
		ecx--;
		if(ecx) goto ___4090ah;
		ebx += 0x200;
		ebx -= edx;
		edi--;
		if(edi) goto ___40908h;
___40920h:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		edx += eax;
		edx <<= 0x2;
		ecx = D(edx+___1de5ach);
		ebp = D(___243d80h);
		if(ecx == 0) goto ___40a21h;
		FPUSH((int)D(edx+___1de5b0h));
		ST(0) = ST(0)*F64(___182f47h);
		ST(0) = (int)ST(0);
		D(esp+0x4) = (int)FPOP();
		if((int)D(esp+4) >= 0) goto ___4096dh;
		ecx ^= ecx;
		D(esp+0x4) = ecx;
___4096dh:
		edx = 0x37;
		ebx ^= ebx;
		edi = 0x3;
		L(ebx) = B(esp+4);
		eax = ebp+0x2664;
		edx -= ebx;
		ebx += eax;
		eax ^= eax;
		D(___243d80h) = ebp;
		if(edx == 0) goto ___409a6h;
___40993h:
		ecx = edx;
___40995h:
		B(ebx) = L(eax);
		ebx++;
		ecx--;
		if(ecx) goto ___40995h;
		ebx += 0x200;
		ebx -= edx;
		edi--;
		if(edi) goto ___40993h;
___409a6h:
		edi ^= edi;
		ebp = D(___243d80h);
		D(esp+0xc) = edi;
		goto ___40a01h;
___409b4h:
		ecx = D(esp+0xc);
		edx = 0x8;
		eax = ebp+0x1a00;
		esi = D(___243d34h);
		eax += ecx;
		ecx = 0x6;
		ebx = eax+0x60;
___409d3h:
		H(ecx) = L(edx);
___409d5h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___409ddh;
		B(ebx) = L(eax);
___409ddh:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___409d5h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___409d3h;
		esi = D(esp+0xc);
		edi++;
		esi += 0x8;
		ebp = D(___243d80h);
		D(esp+0xc) = esi;
___40a01h:
		eax = 0x94*D(___243ce8h);
		ebx = D(eax+___1de5a8h);
		D(___243d80h) = ebp;
		if((int)edi >= (int)ebx) goto ___40bd0h;
		goto ___409b4h;
___40a21h:
		if((int)D(___243cdch) <= 0) goto ___40b13h;
		eax = D(___243cb8h);
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		p8 = ecx;
		p7 = 0xfffffffa;
		p6 = 0x207b;
		p5 = 0x10;
		ebx = 0x6;
		ecx = eax;
		eax = ___1d7810h;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, p5, p6, p7, p8);
		eax = D(___243cb8h);
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		p8 = 0;
		p7 = 6;
		p6 = 0x2089;
		p5 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		ecx = edx;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, p5, p6, p7, p8);
		eax = D(___243cb8h);
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		p8 = 0;
		p7 = 6;
		D(esp) = edx;
		p6 = 0x2097;
		FPUSH((int)D(esp));
		ST(0) = ST(0)*F64(___182f3fh);
		p5 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		edx = ebx;
		ST(0) = (int)ST(0);
		D(esp) = (int)FPOP();
		ecx = D(esp);
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, p5, p6, p7, p8);
		eax = D(___243334h);
		edi = D(___243cdch);
		edi -= eax;
		D(___243cdch) = edi;
		if((int)edi >= 0) goto ___40bd0h;
		edx ^= edx;
		D(___243cdch) = edx;
		goto ___40bd0h;
___40b13h:
		eax = D(___243ca0h);
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		p8 = ecx;
		p7 = 0xfffffffa;
		p6 = 0x207b;
		p5 = 0x10;
		ebx = 0x6;
		ecx = eax;
		eax = ___1d7810h;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, p5, p6, p7, p8);
		eax = D(___243ca0h);
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		p8 = 0;
		p7 = 6;
		p6 = 0x2089;
		p5 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		ecx = edx;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, p5, p6, p7, p8);
		eax = D(___243ca0h);
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		p8 = 0;
		p7 = 6;
		D(esp) = edx;
		p6 = 0x2097;
		FPUSH((int)D(esp));
		ST(0) = ST(0)*F64(___182f3fh);
		p5 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		edx = ebx;
		ST(0) = (int)ST(0);
		D(esp) = (int)FPOP();
		ecx = D(esp);
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, p5, p6, p7, p8);
___40bd0h:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(eax*4+___1de598h));
		ST(0) = ST(0)*F64(___182f4fh);
		ebx = 0xa;
		edx = 0x8;
		ST(0) = dR_Math_ceil(ST(0));
		p8 = 0xfffffff0;
		eax = ___1de210h;
		ST(0) = F64(___182f57h)-ST(0);
		p7 = 0xfffffff8;
		ST(0) = (int)ST(0);
		p6 = 0x2c90;
		D(esp) = (int)FPOP();
		p5 = 0;
		ecx = D(esp);
		esi = ___1de530h;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, p5, p6, p7, p8);
		ecx = 0xa;
		ebp = D(___243d80h);
		edx = 0x8;
		ebx = eax+ebp;
___40c46h:
		H(ecx) = L(edx);
___40c48h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___40c50h;
		B(ebx) = L(eax);
___40c50h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___40c48h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___40c46h;
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		edi = D(eax*4+___1de598h);
		ebp = D(___243d80h);
		if((int)edi >= 0x5000) goto ___40cc5h;
		if(D(___196de8h) != 0) goto ___40cb4h;
		ecx = 0x10000;
		edx = 0x1;
		eax = 0x2;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
___40cb4h:
		edx = 0x1;
		ebp = D(___243d80h);
		D(___196de8h) = edx;
___40cc5h:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		if((int)D(eax*4+___1de598h) >= 0x2800) goto ___40d27h;
		ecx = D(___196dech);
		D(___243d80h) = ebp;
		if(ecx) goto ___40d16h;
		ecx = 0x10000;
		edx = 0x1;
		eax = 0x2;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
___40d16h:
		esi = 0x1;
		ebp = D(___243d80h);
		D(___196dech) = esi;
___40d27h:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		edi = D(eax*4+___1de598h);
		D(___243d80h) = ebp;
		if(edi) goto ___40da3h;
		eax = 4*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		eax <<= 0x2;
		edx = ___182ed4h;
		eax = ___1de7d0h+eax;
		eax = strcmp(eax, edx);
		if(eax) goto ___40da3h;
		if(D(___196df4h) != 0) goto ___40d99h;
		ecx = 0x10000;
		edx = 0x20;
		eax = 0x2;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
___40d99h:
		D(___196df4h) = 1;
___40da3h:
		ebp = D(___243d80h);
		return;
}
