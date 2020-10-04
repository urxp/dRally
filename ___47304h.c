#include "drally.h"

	extern byte ___2432e4h[];
	extern byte ___243e94h[];
	extern byte ___2432e8h[];
	extern byte ___2432d0h[];
	extern byte ___243e74h[];
	extern byte ___243d70h[];
	extern byte ___2432cch[];
	extern byte ___196d98h[];
	extern byte ___2432e0h[];
	extern byte ___1a30a0h[];
	extern byte ___243e78h[];
	extern byte ___243e7ch[];
	extern byte ___243e80h[];
	extern byte ___24330ch[];
	extern byte ___2432d8h[];


// RACE OVER, LEAVING RACE DIALOG BOX LOAD ANIMATION
void ___47304h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		ebp ^= ebp;
		edi ^= edi;
		D(___2432e4h) = ebp;
___4731eh:
		H(eax) = B(edi+___243e94h);
		if(H(eax) != 0x64) goto ___47476h;
		ecx = D(___2432e8h);
		ebp++;
		if((int)ecx >= 0xf24) goto ___4760ah;
		if((int)ebp >= 0x14) goto ___4760ah;
		edx = 0xcc*D(___2432d0h);
		ebx = ___243e74h;
		ecx = 0xcc;
		ebx += edi;
		eax = D(___243d70h);
		ebx += 0x10;
		esi = D(___2432cch);
		eax += edx;
		edx = 0x4;
		esi += eax;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		edx = D(___2432cch);
		eax = D(___196d98h);
		edx += 0x39;
		eax = (int)eax>>0x1;
		eax += edx;
		edx = D(___2432e0h);
		edx = D(4*edx+___1a30a0h);
		edx <<= 0x10;
		D(edi+___243e74h) = edx;
		D(edi+___243e78h) = 0xc40000;
		edx = eax;
		ebx = D(edi+___243e74h);
		edx <<= 0x10;
		esi = D(___2432d0h);
		edx -= ebx;
		ebx = 0x460000;
		esi += 0x40;
		eax ^= eax;
		eax = (eax >> 0x10)|(edx << 0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		edx = esi;
		ecx = D(edi+___243e78h);
		edx <<= 0x10;
		ebx = 0x460000;
		edx -= ecx;
		D(edi+___243e7ch) = eax;
		eax ^= eax;
		eax = (eax >> 0x10)|(edx << 0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		esi = D(___2432e8h);
		H(edx) = 0;
		D(edi+___243e80h) = eax;
		eax = D(___2432d0h);
		esi += 0x4;
		B(edi+___243e94h) = H(edx);
		eax += 0x4;
		D(___2432e8h) = esi;
		D(___2432d0h) = eax;
		if(eax != 0x4c) goto ___47453h;
		ecx = D(___2432cch);
		ebx ^= ebx;
		ecx += 0x4;
		D(___2432d0h) = ebx;
		D(___2432cch) = ecx;
___47453h:
		esi = D(___2432e0h);
		esi++;
		D(___2432e0h) = esi;
		if((int)esi <= 0x63) goto ___4760ah;
		edx ^= edx;
		D(___2432e0h) = edx;
		goto ___4760ah;
___47476h:
		ebx ^= ebx;
		L(ebx) = H(eax);
		eax = D(___24330ch);
		eax += ebx;
		if((int)eax >= 0x46) goto ___4754fh;
		L(eax) = B(___24330ch);
		L(edx) = L(ebx);
		L(edx) += L(eax);
		ebx = D(___24330ch);
		B(edi+___243e94h) = L(edx);
		edx ^= edx;
		if((int)ebx <= 0) goto ___474c6h;
		esi = D(___24330ch);
		eax = edi;
___474adh:
		ebx = D(eax+___243e7ch);
		ecx = D(eax+___243e74h);
		ecx += ebx;
		edx++;
		D(eax+___243e74h) = ecx;
		if((int)edx < (int)esi) goto ___474adh;
___474c6h:
		ebx = D(___24330ch);
		eax = edi;
		edx ^= edx;
		if((int)ebx <= 0) goto ___474f1h;
		esi = D(___24330ch);
___474dah:
		ecx = D(eax+___243e78h);
		ecx += D(eax+___243e80h);
		edx++;
		D(eax+___243e78h) = ecx;
		if((int)edx < (int)esi) goto ___474dah;
___474f1h:
		edx = D(eax+___243e78h);
		ebx = D(eax+___243e74h);
		edx += 0x8000;
		eax = ___243e74h+eax;
		edx = (int)edx>>0x10;
		esi = eax+0x10;
		eax = 0x140*edx;
		ecx = 0x4;
		ebx += 0x8000;
		edx = D(___2432d8h);
		ebx = (int)ebx>>0x10;
		eax += edx;
		edx = 0x140;
		ebx += eax;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		goto ___4759eh;
___4754fh:
		eax = edi;
		edx = ebx;
		if((int)ebx >= 0x46) goto ___47570h;
___47558h:
		ecx = D(eax+___243e74h);
		ecx += D(eax+___243e7ch);
		edx++;
		D(eax+___243e74h) = ecx;
		if((int)edx < 0x46) goto ___47558h;
___47570h:
		edx ^= edx;
		L(edx) = B(eax+___243e94h);
		eax = edi;
		if((int)edx >= 0x46) goto ___47597h;
___4757fh:
		esi = D(eax+___243e78h);
		esi += D(eax+___243e80h);
		edx++;
		D(eax+___243e78h) = esi;
		if((int)edx < 0x46) goto ___4757fh;
___47597h:
		B(eax+___243e94h) = 0x46;
___4759eh:
		if(B(edi+___243e94h) < 0x46) goto ___4760ah;
		eax = D(edi+___243e78h);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax = 0x140*eax;
		esi = ___243e74h;
		ecx = 0x4;
		ebx = D(edi+___243e74h);
		edx = D(___2432d8h);
		ebx += 0x8000;
		esi += edi;
		ebx = (int)ebx>>0x10;
		esi += 0x10;
		eax += edx;
		edx = 0x140;
		ebx += eax;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		ebx += edx;
		esi += ecx;
		eax = D(esi);
		D(ebx) = eax;
		D(___2432e4h)++;
___4760ah:
		edi += 0x21;
		if(edi != 0x7ce9) goto ___4731eh;
		return;
}
