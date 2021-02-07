#include "drally.h"

	extern byte ___243d38h[];
	extern byte ___1f2488h[];
	extern byte ___196dd0h[];
	extern byte ___243d28h[];
	extern byte ___243d58h[];
	extern byte ___1de7d0h[];
	extern byte ___19bd60h[];


int rand_watcom106(void);

void race___496b0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];

		ebp = D(___243d38h);
		eax = 0;
___496cbh:
		edx = 0;
		D(eax+___1f2488h+0x14) = edx;
		eax += 0x120;
		if(eax != 0x1680) goto ___496cbh;
		eax = 0;
___496e1h:
		ebx = 0;
		D(eax+___1f2488h+0x18) = ebx;
		eax += 0x120;
		if(eax != 0x1680) goto ___496e1h;
		eax = 0;
___496f7h:
		ecx = 0;
		D(eax+___1f2488h+0x1c) = ecx;
		eax += 0x120;
		if(eax != 0x1680) goto ___496f7h;
		eax = 0;
___4970dh:
		esi = 0;
		D(eax+___1f2488h+8) = esi;
		eax += 0x120;
		if(eax != 0x1680) goto ___4970dh;
		ebx = 0;
		ecx = 0x32;
		D(___243d38h) = ebp;
___4972eh:
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		edx += 0x64;
		D(ebx+___1f2488h+0xc) = edx;
		ebx += 0x120;
		if(ebx != 0x1680) goto ___4972eh;
		eax = 0;
___49753h:
		edi = 0;
		D(eax+___1f2488h+0x10) = edi;
		eax += 0x120;
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
		D(ecx+___1f2488h+8) = edx;
		ecx = ___1f2488h+ecx;
		ebx = 0;
		edx = ecx+0x20;
___497deh:
		eax = D(esp);
		eax = D(eax+___1f2488h+4);
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
		ebx = D(edx+___1f2488h+8);
		ebx <<= 0x8;
		ebx += ebp;
		ecx = D(esp+0x1c);
		ebx += eax;
		ebx += ecx;
		if(B(ebx+0xffffff00) == 0) goto ___498a5h;
		ecx = D(esp+0x24);
		ecx += D(edx+___1f2488h+4);
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
		if(D(___1de7d0h+0x4c) != 1) goto ___49a21h;
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
		D(eax+___1f2488h+8) = ebx;
		eax = ___1f2488h+eax;
		edx = 0;
		ebx = eax+0x20;
___4992ch:
		eax = D(esp+0x14);
		eax = D(eax+___1f2488h+4);
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
		ecx = D(edx+___1f2488h+8);
		ecx <<= 0x8;
		ebx = ecx+ebp;
		ecx = D(esp+0x20);
		ebx += eax;
		ebx += ecx;
		if(B(ebx+0xffffff00) == 0) goto ___499f6h;
		ecx = D(esp+0x8);
		ecx += D(edx+___1f2488h+4);
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
		D(___1de7d0h+0x4c) = esi;
___49a21h:
		ebp = D(___243d38h);
		return;
}
