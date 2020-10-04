#include "drally.h"

	extern byte ___243d80h[];
	extern byte ___243d88h[];
	extern byte ___243c60h[];
	extern byte ___1e7082h[];
	extern byte ___196dc8h[];
	extern byte ___1e709ah[];
	extern byte ___196d98h[];
	extern byte ___196dcch[];
	extern byte ___1e709eh[];
	extern byte ___1e707eh[];
	extern byte ___1e7092h[];
	extern byte ___1e7096h[];
	extern byte ___1e707ah[];
	extern byte ___1e708ah[];
	extern byte ___1e708eh[];

void race___50ba4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x3c];


		ebx = D(___243d80h);
		esi = D(___243d88h);
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e7082h) <= 0) goto ___50cabh;
		edi = D(___196dc8h);
		edx = D(eax+___1e709ah);
		ecx = D(___196d98h);
		edx -= edi;
		ebp = D(___196dcch);
		ecx += edx;
		edx = D(eax+___1e709eh);
		D(esp) = ecx;
		edx -= ebp;
		if((int)ecx < 0) goto ___50c99h;
		ecx += 0x8;
		if((int)ecx >= 0x140) goto ___50c99h;
		if((int)edx < 0) goto ___50c99h;
		ecx = edx+0x8;
		if((int)ecx >= 0xc8) goto ___50c99h;
		edx <<= 0x9;
		eax = D(eax+___1e7082h);
		edi ^= edi;
		eax--;
		D(esp+0x1c) = edi;
		eax <<= 0x6;
		D(esp+0x14) = edx;
		D(esp+0x28) = eax;
___50c46h:
		edx = D(esp+0x14);
		ebp = D(esp+0x1c);
		eax ^= eax;
		D(esp+0x38) = edx;
___50c54h:
		ecx = D(esp+0x28);
		edx = esi+ecx;
		edx += eax;
		edx += ebp;
		if(B(edx) == 0) goto ___50c76h;
		edi = D(esp);
		ecx = ebx+edi;
		edi = D(esp+0x38);
		ecx += eax;
		L(edx) = B(edx);
		B(ecx+edi+0x60) = L(edx);
___50c76h:
		eax++;
		if((int)eax < 8) goto ___50c54h;
		eax = D(esp+0x14);
		ebp = D(esp+0x1c);
		eax += 0x200;
		ebp += 0x8;
		D(esp+0x14) = eax;
		D(esp+0x1c) = ebp;
		if(ebp != 0x40) goto ___50c46h;
___50c99h:
		eax = 0x35e*D(___243c60h);
		edi ^= edi;
		D(eax+___1e7082h) = edi;
___50cabh:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e707eh) <= 0) goto ___50dc7h;
		ecx = D(___196dc8h);
		edx = D(eax+___1e7092h);
		edx -= ecx;
		ecx = D(___196d98h);
		ecx += edx;
		edi = D(___196dcch);
		D(esp+0x34) = ecx;
		ecx = D(eax+___1e7092h);
		edx = D(eax+___1e7096h);
		D(eax+___1e709ah) = ecx;
		ebp = D(esp+0x34);
		ecx = D(eax+___1e7096h);
		edx -= edi;
		D(eax+___1e709eh) = ecx;
		if((int)ebp < 0) goto ___50da8h;
		ecx = ebp+0x8;
		if((int)ecx >= 0x140) goto ___50da8h;
		if((int)edx < 0) goto ___50da8h;
		ecx = edx+0x8;
		if((int)ecx >= 0xc8) goto ___50da8h;
		eax = D(eax+___1e707eh);
		eax--;
		eax <<= 0x6;
		D(esp+0x24) = eax;
		eax ^= eax;
		D(esp+0x18) = eax;
		eax = edx;
		eax <<= 0x9;
		D(esp+0xc) = eax;
		ebp = 0x8;
___50d56h:
		edi = D(esp+0xc);
		edx = D(esp+0x18);
		eax ^= eax;
		D(esp+0x4) = edx;
___50d64h:
		ecx = D(esp+0x24);
		edx = esi+ecx;
		ecx = D(esp+0x4);
		edx += eax;
		edx += ecx;
		if(B(edx) == 0) goto ___50d86h;
		ecx = ebx;
		ecx += D(esp+0x34);
		ecx += eax;
		L(edx) = B(edx);
		B(ecx+edi+0x60) = L(edx);
___50d86h:
		eax++;
		if((int)eax < 8) goto ___50d64h;
		eax = D(esp+0xc);
		edi = D(esp+0x18);
		eax += 0x200;
		edi += ebp;
		D(esp+0xc) = eax;
		D(esp+0x18) = edi;
		if(edi != 0x40) goto ___50d56h;
___50da8h:
		eax = 0x35e*D(___243c60h);
		edx = D(eax+___1e707eh);
		edi ^= edi;
		edx++;
		D(eax+___1e707eh) = edi;
		D(eax+___1e7082h) = edx;
___50dc7h:
		eax = 0x35e*D(___243c60h);
		if((int)D(eax+___1e707ah) <= 0) goto ___50edch;
		ecx = D(___196dc8h);
		edx = D(eax+___1e708ah);
		edx -= ecx;
		ecx = D(___196d98h);
		ecx += edx;
		edi = D(___196dcch);
		D(esp+0x30) = ecx;
		ecx = D(eax+___1e708ah);
		edx = D(eax+___1e708eh);
		D(eax+___1e7092h) = ecx;
		ebp = D(esp+0x30);
		ecx = D(eax+___1e708eh);
		edx -= edi;
		D(eax+___1e7096h) = ecx;
		if((int)ebp < 0) goto ___50ebdh;
		ecx = ebp+0x8;
		if((int)ecx >= 0x140) goto ___50ebdh;
		if((int)edx < 0) goto ___50ebdh;
		ecx = edx+0x8;
		if((int)ecx >= 0xc8) goto ___50ebdh;
		eax = D(eax+___1e707ah);
		eax--;
		eax <<= 0x6;
		D(esp+0x2c) = eax;
		eax ^= eax;
		D(esp+0x20) = eax;
		eax = edx;
		eax <<= 0x9;
		D(esp+0x10) = eax;
___50e69h:
		edx = D(esp+0x10);
		ebp = D(esp+0x20);
		eax ^= eax;
		D(esp+0x8) = edx;
___50e77h:
		ecx = D(esp+0x2c);
		edx = esi+ecx;
		edx += eax;
		edx += ebp;
		if(B(edx) == 0) goto ___50e9ah;
		edi = D(esp+0x30);
		ecx = ebx+edi;
		edi = D(esp+0x8);
		ecx += eax;
		L(edx) = B(edx);
		B(ecx+edi+0x60) = L(edx);
___50e9ah:
		eax++;
		if((int)eax < 8) goto ___50e77h;
		eax = D(esp+0x10);
		ebp = D(esp+0x20);
		eax += 0x200;
		ebp += 0x8;
		D(esp+0x10) = eax;
		D(esp+0x20) = ebp;
		if(ebp != 0x40) goto ___50e69h;
___50ebdh:
		eax = 0x35e*D(___243c60h);
		edx = D(eax+___1e707ah);
		edi ^= edi;
		edx++;
		D(eax+___1e707ah) = edi;
		D(eax+___1e707eh) = edx;
___50edch:
		D(___243d88h) = esi;
		D(___243d80h) = ebx;
		return;
}
