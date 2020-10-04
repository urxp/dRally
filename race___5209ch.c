#include "drally.h"

	extern byte ___243d38h[];
	extern byte ___196dd0h[];
	extern byte ___243334h[];
	extern byte ___1f2498h[];
	extern byte ___1f2490h[];
	extern byte ___196dd4h[];
	extern byte ___1f2494h[];
	extern byte ___1f2488h[];
	extern byte ___243ce8h[];
	extern byte ___1de5ach[];
	extern byte ___1f248ch[];
	extern byte ___243d28h[];
	extern byte ___243d58h[];

int rand_watcom106(void);

void race___5209ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x44];


		ebp = D(___243d38h);
		edx = D(___196dd0h);
		if((int)edx <= 0) goto ___520d0h;
		eax = D(___243334h);
		ecx = edx;
		ecx -= eax;
		D(___196dd0h) = ecx;
		goto ___520d8h;
___520d0h:
		ebx ^= ebx;
		D(___196dd0h) = ebx;
___520d8h:
		edx = D(___243334h);
		eax ^= eax;
___520e0h:
		esi = D(eax+___1f2498h);
		if((int)esi >= 0x7d0) goto ___52100h;
		if(D(eax+___1f2490h) == 0) goto ___52100h;
		ebx = esi+edx;
		D(eax+___1f2498h) = ebx;
___52100h:
		eax += 0x120;
		if(eax != 0xd80) goto ___520e0h;
		ecx = D(___196dd0h);
		D(___243d38h) = ebp;
		if(ecx) goto ___52429h;
		if(D(___196dd4h) != 0) goto ___52429h;
		D(esp+0x18) = ecx;
		eax ^= eax;
___52133h:
		edx = D(eax+___1f2490h);
		ebp = D(___243d38h);
		if((int)edx <= 0) goto ___52147h;
		D(esp+0x18)++;
___52147h:
		eax += 0x120;
		D(___243d38h) = ebp;
		if(eax != 0xd80) goto ___52133h;
		ecx = 0xc;
		eax = esp;
		edx ^= edx;
		memset(eax, edx, ecx);
		ecx ^= ecx;
		D(esp+0x10) = ecx;
___5216dh:
		eax = rand_watcom106();
		edx = eax;
		ebx = 0xc;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		D(esp+0x30) = edx;
		if(B(esp+edx) == 1) goto ___5216dh;
		eax = D(esp+0x30);
		B(esp+eax) = 1;
		eax = 0x120*eax;
		edi = D(eax+___1f2494h);
		ebp = D(___243d38h);
		if((int)edi <= 0) goto ___521b8h;
		edx = D(___243334h);
		ebx = edi;
		ebx -= edx;
		D(eax+___1f2494h) = ebx;
		goto ___521c0h;
___521b8h:
		edx ^= edx;
		D(eax+___1f2494h) = edx;
___521c0h:
		ebx = 0x120*D(esp+0x30);
		esi = D(ebx+___1f2490h);
		D(___243d38h) = ebp;
		if(esi) goto ___52417h;
		if((int)D(ebx+___1f2488h) <= 0) goto ___52417h;
		if(D(ebx+___1f2494h) != 0) goto ___52417h;
		if((int)D(esp+0x18) >= 4) goto ___52417h;
		eax = rand_watcom106();
		edx = eax;
		ecx = 0x64;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		eax = 0x94*D(___243ce8h);
		if(D(eax+___1de5ach) == 0) goto ___522aah;
		ebp = D(___243d38h);
		if((int)edx < 0) goto ___52242h;
		if((int)edx >= 0x1e) goto ___52242h;
		D(ebx+___1f2490h) = 0x1;
___52242h:
		if((int)edx < 0x1e) goto ___5225eh;
		if((int)edx >= 0x41) goto ___5225eh;
		eax = 0x120*D(esp+0x30);
		D(eax+___1f2490h) = 0x2;
___5225eh:
		if((int)edx < 0x41) goto ___5227ah;
		if((int)edx >= 0x50) goto ___5227ah;
		eax = 0x120*D(esp+0x30);
		D(eax+___1f2490h) = 0x3;
___5227ah:
		if((int)edx < 0x50) goto ___52296h;
		if((int)edx >= 0x55) goto ___52296h;
		eax = 0x120*D(esp+0x30);
		D(eax+___1f2490h) = 0x4;
___52296h:
		if((int)edx < 0x55) goto ___52317h;
		if((int)edx >= 0x64) goto ___52317h;
		goto ___52305h;
___522aah:
		ebp = D(___243d38h);
		if((int)edx < 0) goto ___522c3h;
		if((int)edx >= 0x2d) goto ___522c3h;
		D(ebx+___1f2490h) = 0x2;
___522c3h:
		if((int)edx < 0x2d) goto ___522dfh;
		if((int)edx >= 0x50) goto ___522dfh;
		eax = 0x120*D(esp+0x30);
		D(eax+___1f2490h) = 0x3;
___522dfh:
		if((int)edx < 0x50) goto ___522fbh;
		if((int)edx >= 0x5a) goto ___522fbh;
		eax = 0x120*D(esp+0x30);
		D(eax+___1f2490h) = 0x4;
___522fbh:
		if((int)edx < 0x5a) goto ___52317h;
		if((int)edx >= 0x64) goto ___52317h;
___52305h:
		eax = 0x120*D(esp+0x30);
		D(eax+___1f2490h) = 0x5;
___52317h:
		eax = 0x120*D(esp+0x30);
		edi = D(esp+0x18);
		D(___243d38h) = ebp;
		esi ^= esi;
		edx ^= edx;
		edi++;
		D(esp+0x28) = eax;
		D(eax+___1f2498h) = esi;
		eax = ___1f2488h+eax;
		D(esp+0x18) = edi;
		ebx = eax+0x20;
___52344h:
		eax = D(esp+0x28);
		eax = D(eax+___1f248ch);
		eax += edx;
		ecx = D(___243d28h);
		eax -= 0x8;
		eax = eax*ecx;
		ecx = D(esp+0x28);
		esi = D(___243d58h);
		esi += D(ecx+___1f2488h);
		ecx = 0x10;
		esi -= 0x8;
		edi = ebx;
		esi += eax;
		edx++;
		memcpy(edi, esi, ecx);
		ebx += 0x10;
		if((int)edx < 0x10) goto ___52344h;
		edi ^= edi;
		eax = D(esp+0x30);
		D(esp+0x34) = edi;
		edx = 0x120*eax;
___523a1h:
		ebx = D(esp+0x34);
		ebp = D(___243d38h);
		eax ^= eax;
		D(esp+0x40) = ebx;
___523b1h:
		ecx = D(edx+___1f2490h);
		ecx <<= 0x8;
		ebx = ecx+ebp;
		ecx = D(esp+0x40);
		ebx += eax;
		ebx += ecx;
		if(B(ebx+0xffffff00) == 0) goto ___523fah;
		ecx = D(edx+___1f248ch);
		ecx += edi;
		esi = D(___243d28h);
		ecx -= 0x8;
		esi = esi*ecx;
		ecx = D(___243d58h);
		ecx += eax;
		ecx += D(edx+___1f2488h);
		L(ebx) = B(ebx+0xffffff00);
		B(ecx+esi-8) = L(ebx);
___523fah:
		eax++;
		if((int)eax < 0x10) goto ___523b1h;
		esi = D(esp+0x34);
		edi++;
		esi += 0x10;
		D(___243d38h) = ebp;
		D(esp+0x34) = esi;
		if((int)edi < 0x10) goto ___523a1h;
___52417h:
		edi = D(esp+0x10);
		edi++;
		D(esp+0x10) = edi;
		if((int)edi < 0xc) goto ___5216dh;
___52429h:
		eax = ___1f2488h;
		ebp = D(___243d38h);
		edx ^= edx;
		eax += 0x20;
		D(esp+0x1c) = edx;
		D(esp+0x14) = eax;
___52441h:
		edx = 0x7d0;
		ebx = D(esp+0x1c);
		eax = 0x7c6;
		ecx ^= ecx;
___52451h:
		esi = D(ebx+___1f2498h);
		if((int)eax >= (int)esi) goto ___52464h;
		if((int)edx <= (int)esi) goto ___52464h;
		ecx = 0x1;
___52464h:
		edx -= 0x14;
		eax -= 0x14;
		if((int)edx >= 0x604) goto ___52451h;
		if(ecx == 0) goto ___524ffh;
		ebx ^= ebx;
		edx = D(esp+0x1c);
		D(esp+0x38) = ebx;
		D(esp+0xc) = ebx;
		edi = 0x10;
___5248dh:
		ebx = D(esp+0x38);
		eax ^= eax;
		D(esp+0x3c) = ebx;
___52497h:
		ecx = D(edx+___1f2490h);
		ecx <<= 0x8;
		ebx = ecx+ebp;
		ecx = D(esp+0x3c);
		ebx += eax;
		ebx += ecx;
		if(B(ebx+0xffffff00) == 0) goto ___524e2h;
		ecx = D(esp+0xc);
		ecx += D(edx+___1f248ch);
		esi = D(___243d28h);
		ecx -= 0x8;
		esi = esi*ecx;
		ecx = D(___243d58h);
		ecx += eax;
		ecx += D(edx+___1f2488h);
		L(ebx) = B(ebx+0xffffff00);
		B(ecx+esi-8) = L(ebx);
___524e2h:
		eax++;
		if((int)eax < 0x10) goto ___52497h;
		ebx = D(esp+0xc);
		eax = D(esp+0x38);
		ebx++;
		eax += edi;
		D(esp+0xc) = ebx;
		D(esp+0x38) = eax;
		if((int)edi > (int)ebx) goto ___5248dh;
___524ffh:
		edx = 0x7c6;
		eax = D(esp+0x1c);
		ebx = 0x7bc;
		ecx ^= ecx;
___5250fh:
		esi = D(eax+___1f2498h);
		if((int)ebx >= (int)esi) goto ___52522h;
		if((int)edx <= (int)esi) goto ___52522h;
		ecx = 0x1;
___52522h:
		edx -= 0x14;
		ebx -= 0x14;
		if((int)edx >= 0x5fa) goto ___5250fh;
		D(___243d38h) = ebp;
		if(ecx == 0) goto ___52596h;
		eax = D(esp+0x1c);
		edx = D(esp+0x14);
		ebx ^= ebx;
		D(esp+0x24) = eax;
___52548h:
		eax = D(esp+0x24);
		eax = D(eax+___1f248ch);
		eax += ebx;
		edi = D(___243d28h);
		eax -= 0x8;
		edi = edi*eax;
		ecx = D(esp+0x24);
		esi = D(ecx+___1f2488h);
		eax = D(___243d58h);
		eax += esi;
		ecx = 0x10;
		eax -= 0x8;
		esi = edx;
		edi += eax;
		ebx++;
		memcpy(edi, esi, ecx);
		edx += 0x10;
		if((int)ebx < 0x10) goto ___52548h;
___52596h:
		eax = D(esp+0x1c);
		if((int)D(eax+___1f2498h) < 0x7d0) goto ___52651h;
		ecx = D(esp+0x1c);
		D(esp+0x2c) = eax;
		eax = ___1f2488h;
		eax += ecx;
		ebx ^= ebx;
		eax += 0x20;
		edx ^= edx;
		D(esp+0x20) = eax;
___525c4h:
		eax = D(esp+0x2c);
		eax = D(eax+___1f248ch);
		eax += edx;
		edi = D(___243d28h);
		eax -= 0x8;
		edi = edi*eax;
		esi = D(esp+0x20);
		ecx = D(esp+0x2c);
		eax = D(___243d58h);
		esi += ebx;
		eax += D(ecx+___1f2488h);
		ebx += 0x10;
		eax -= 0x8;
		ecx = 0x10;
		edi += eax;
		edx++;
		memcpy(edi, esi, ecx);
		if((int)edx < 0x10) goto ___525c4h;
		eax = D(esp+0x2c);
		esi ^= esi;
		D(eax+___1f2498h) = esi;
		D(eax+___1f2490h) = esi;
		D(___196dd0h) = 0x118;
		eax = rand_watcom106();
		edx = eax;
		ebx = 0xc8;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		eax = D(esp+0x2c);
		edx += 0x12c;
		D(eax+___1f2494h) = edx;
___52651h:
		ebx = D(esp+0x1c);
		edx = D(esp+0x14);
		ebp = D(___243d38h);
		ebx += 0x120;
		edx += 0x120;
		D(esp+0x1c) = ebx;
		D(esp+0x14) = edx;
		if(ebx != 0xd80) goto ___52441h;
		return;
}
