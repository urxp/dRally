#include "drally.h"

	extern byte ___243d38h[];
	extern byte ___1f237ch[];
	extern byte ___1f2380h[];
	extern byte ___1f2384h[];
	extern byte ___1f2370h[];
	extern byte ___1f2374h[];
	extern byte ___1f2378h[];
	extern byte ___196dd0h[];
	extern byte ___1f2488h[];
	extern byte ___1f2490h[];
	extern byte ___1f248ch[];
	extern byte ___243d28h[];
	extern byte ___243d58h[];
	extern byte ___1de81ch[];
	extern byte ___19bd60h[];


int rand_watcom106(void);

void race___496b0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];

		ebp = D(___243d38h);
		eax = 0;
___496cbh:
		eax += 0x120;
		edx = 0;
		D(eax+___1f237ch) = edx;
		if(eax != 0x1680) goto ___496cbh;
		eax = 0;
___496e1h:
		eax += 0x120;
		ebx = 0;
		D(eax+___1f2380h) = ebx;
		if(eax != 0x1680) goto ___496e1h;
		eax = 0;
___496f7h:
		eax += 0x120;
		ecx = 0;
		D(eax+___1f2384h) = ecx;
		if(eax != 0x1680) goto ___496f7h;
		eax = 0;
___4970dh:
		eax += 0x120;
		esi = 0;
		D(eax+___1f2370h) = esi;
		if(eax != 0x1680) goto ___4970dh;
		ebx = 0;
		ecx = 0x32;
		D(___243d38h) = ebp;
___4972eh:
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		ebx += 0x120;
		edx += 0x64;
		D(ebx+___1f2374h) = edx;
		if(ebx != 0x1680) goto ___4972eh;
		eax = 0;
___49753h:
		eax += 0x120;
		edi = 0;
		D(eax+___1f2378h) = edi;
		if(eax != 0x1680) goto ___49753h;
		D(___196dd0h) = 0x15e;
		eax = rand_watcom106();
		edx = eax;
		ebx = 4;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		if(edx) goto ___498c8h;
		eax = rand_watcom106();
		edx = eax;
		ebx = 2;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx += 0xc;
		D(esp+0xc) = edx;
		ecx = 8*edx;
		ecx += edx;
		ecx <<= 5;
		if((int)D(ecx+___1f2488h) <= 0) goto ___498c8h;
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx += 7;
		D(esp) = ecx;
		D(ecx+___1f2490h) = edx;
		ecx = ___1f2488h+ecx;
		ebx = 0;
		edx = ecx+0x20;
___497deh:
		eax = D(esp);
		eax = D(eax+___1f248ch);
		eax += ebx;
		esi = D(___243d28h);
		eax -= 8;
		esi = esi*eax;
		ecx = D(esp);
		edi = D(ecx+___1f2488h);
		eax = D(___243d58h);
		eax += edi;
		ecx = 0x10;
		eax -= 8;
		edi = edx;
		esi += eax;
		ebx++;
		memcpy(edi, esi, ecx);
		edx += 0x10;
		if((int)ebx < 0x10) goto ___497deh;
		eax = 0;
		D(esp+0x24) = eax;
		eax = D(esp+0xc);
		edx = 8*eax;
		ebx = 0;
		edx += eax;
		D(esp+0x18) = ebx;
		edx <<= 0x5;
		edi = 0x10;
___4984bh:
		ebx = D(esp+0x18);
		ebp = D(___243d38h);
		eax = 0;
		D(esp+0x1c) = ebx;
___4985bh:
		ebx = D(edx+___1f2490h);
		ebx <<= 0x8;
		ebx += ebp;
		ecx = D(esp+0x1c);
		ebx += eax;
		ebx += ecx;
		if(B(ebx+0xffffff00) == 0) goto ___498a5h;
		ecx = D(esp+0x24);
		ecx += D(edx+___1f248ch);
		esi = D(___243d28h);
		ecx -= 8;
		esi = esi*ecx;
		ecx = D(___243d58h);
		ecx += eax;
		ecx += D(edx+___1f2488h);
		L(ebx) = B(ebx+0xffffff00);
		B(ecx+esi-8) = L(ebx);
___498a5h:
		eax++;
		if((int)eax < 0x10) goto ___4985bh;
		ebx = D(esp+0x24);
		eax = D(esp+0x18);
		D(___243d38h) = ebp;
		ebx++;
		eax += edi;
		D(esp+0x24) = ebx;
		D(esp+0x18) = eax;
		if((int)edi > (int)ebx) goto ___4984bh;
___498c8h:
		if(D(___1de81ch) != 1) goto ___49a21h;
		if(D(___19bd60h) != 0) goto ___49a21h;
		eax = rand_watcom106();
		edx = eax;
		ebx = 2;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx += 0xe;
		D(esp+0x10) = edx;
		eax = 8*edx;
		eax += edx;
		eax <<= 0x5;
		if((int)D(eax+___1f2488h) <= 0) goto ___49a19h;
		ebx = 0x6;
		D(esp+0x14) = eax;
		D(eax+___1f2490h) = ebx;
		eax = ___1f2488h+eax;
		edx = 0;
		ebx = eax+0x20;
___4992ch:
		eax = D(esp+0x14);
		eax = D(eax+___1f248ch);
		eax += edx;
		esi = D(___243d28h);
		eax -= 8;
		esi = esi*eax;
		ecx = D(esp+0x14);
		edi = D(ecx+___1f2488h);
		eax = D(___243d58h);
		eax += edi;
		ecx = 0x10;
		eax -= 8;
		edi = ebx;
		esi += eax;
		edx++;
		memcpy(edi, esi, ecx);
		ebx += 0x10;
		if((int)edx < 0x10) goto ___4992ch;
		eax = 0;
		D(esp+0x8) = eax;
		eax = D(esp+0x10);
		edx = 8*eax;
		ebx = 0;
		edx += eax;
		D(esp+0x4) = ebx;
		edx <<= 0x5;
		edi = 0x10;
___4999bh:
		ebx = D(esp+0x4);
		ebp = D(___243d38h);
		eax = 0;
		D(esp+0x20) = ebx;
___499abh:
		ecx = D(edx+___1f2490h);
		ecx <<= 0x8;
		ebx = ecx+ebp;
		ecx = D(esp+0x20);
		ebx += eax;
		ebx += ecx;
		if(B(ebx+0xffffff00) == 0) goto ___499f6h;
		ecx = D(esp+0x8);
		ecx += D(edx+___1f248ch);
		esi = D(___243d28h);
		ecx -= 8;
		esi = esi*ecx;
		ecx = D(___243d58h);
		ecx += eax;
		ecx += D(edx+___1f2488h);
		L(ebx) = B(ebx+0xffffff00);
		B(ecx+esi-8) = L(ebx);
___499f6h:
		eax++;
		if((int)eax < 0x10) goto ___499abh;
		ebx = D(esp+0x8);
		eax = D(esp+0x4);
		D(___243d38h) = ebp;
		ebx++;
		eax += edi;
		D(esp+0x8) = ebx;
		D(esp+0x4) = eax;
		if((int)edi > (int)ebx) goto ___4999bh;
___49a19h:
		esi = 0;
		D(___1de81ch) = esi;
___49a21h:
		ebp = D(___243d38h);
		return;
}
