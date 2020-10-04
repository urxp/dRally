#include "drally.h"

	extern byte ___243d80h[];
	extern byte ___243d64h[];
	extern byte ___243c60h[];
	extern byte ___1e70b2h[];
	extern byte ___196dc8h[];
	extern byte ___1e712ah[];
	extern byte ___196d98h[];
	extern byte ___1e71a2h[];
	extern byte ___196dcch[];
	extern byte ___243334h[];
	extern byte ___1e70eeh[];
	extern byte ___1e7166h[];
	extern byte ___1e71deh[];

void race___50ef4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x2c];


		esi = D(___243d80h);
		edi = D(___243d64h);
		edx ^= edx;
		D(esp+0xc) = edx;
		ebp ^= ebp;
___50f1bh:
		eax = 0x35e*D(___243c60h);
		eax += D(esp+0xc);
		if((int)ebp >= (int)D(eax+___1e70b2h)) goto ___5107bh;
		ecx = D(___196dc8h);
		edx = D(eax+___1e712ah);
		edx -= ecx;
		ecx = D(___196d98h);
		ecx += edx;
		D(esp+0x20) = ecx;
		edx = D(eax+___1e71a2h);
		edx -= D(___196dcch);
		ecx = D(esp+0x20);
		if((int)ecx < 4) goto ___5104eh;
		ecx += 4;
		if((int)ecx >= 0x140) goto ___5104eh;
		if((int)edx < 4) goto ___5104eh;
		ecx = edx+4;
		if((int)ecx >= 0xc8) goto ___5104eh;
		ecx = D(eax+___1e70b2h);
		if((int)ebp >= (int)ecx) goto ___50fa0h;
		if((int)ecx > 4) goto ___50fa0h;
		ebx = ebp;
___50fa0h:
		eax = 0x35e*D(___243c60h);
		eax += D(esp+0xc);
		ecx = D(eax+___1e70b2h);
		if((int)ecx <= 4) goto ___50fc3h;
		if((int)ecx > 8) goto ___50fc3h;
		ebx = 0x40;
___50fc3h:
		eax = 0x35e*D(___243c60h);
		eax += D(esp+0xc);
		ecx = D(eax+___1e70b2h);
		if((int)ecx <= 8) goto ___50fe6h;
		if((int)ecx > 0xc) goto ___50fe6h;
		ebx = 0x80;
___50fe6h:
		edx <<= 0x9;
		edx -= 0x800;
		D(esp+0x18) = ebp;
		D(esp+0x14) = edx;
___50ff7h:
		edx = D(esp+0x14);
		D(esp+0x24) = edx;
		edx = D(esp+0x18);
		eax ^= eax;
		D(esp+0x8) = edx;
___51009h:
		edx = edi+ebx;
		ecx = D(esp+0x8);
		edx += eax;
		edx += ecx;
		if(B(edx) == 0) goto ___5102ah;
		ecx = esi;
		ecx += D(esp+0x20);
		ecx += eax;
		ecx += D(esp+0x24);
		L(edx) = B(edx);
		B(ecx+0x5c) = L(edx);
___5102ah:
		eax++;
		if((int)eax < 8) goto ___51009h;
		edx = D(esp+0x14);
		eax = D(esp+0x18);
		edx += 0x200;
		eax += 8;
		D(esp+0x14) = edx;
		D(esp+0x18) = eax;
		if(eax != 0x40) goto ___50ff7h;
___5104eh:
		eax = 0x35e*D(___243c60h);
		eax += D(esp+0xc);
		edx = D(___243334h);
		ecx = D(eax+___1e70b2h);
		ecx += edx;
		D(eax+___1e70b2h) = ecx;
		if((int)ecx < 0xd) goto ___5107bh;
		D(eax+___1e70b2h) = ebp;
___5107bh:
		eax = 0x35e*D(___243c60h);
		eax += D(esp+0xc);
		if((int)ebp >= (int)D(eax+___1e70eeh)) goto ___511d8h;
		ecx = D(___196dc8h);
		edx = D(eax+___1e7166h);
		edx -= ecx;
		ecx = D(___196d98h);
		ecx += edx;
		D(esp) = ecx;
		edx = D(eax+___1e71deh);
		edx -= D(___196dcch);
		ecx = D(esp);
		if((int)ecx < 4) goto ___511abh;
		ecx += 4;
		if((int)ecx >= 0x140) goto ___511abh;
		if((int)edx < 4) goto ___511abh;
		ecx = edx+4;
		if((int)ecx >= 0xc8) goto ___511abh;
		ecx = D(eax+___1e70eeh);
		if((int)ebp >= (int)ecx) goto ___510feh;
		if((int)ecx > 4) goto ___510feh;
		ebx = ebp;
___510feh:
		eax = 0x35e*D(___243c60h);
		eax += D(esp+0xc);
		ecx = D(eax+___1e70eeh);
		if((int)ecx <= 4) goto ___51121h;
		if((int)ecx > 8) goto ___51121h;
		ebx = 0x40;
___51121h:
		eax = 0x35e*D(___243c60h);
		eax += D(esp+0xc);
		ecx = D(eax+___1e70eeh);
		if((int)ecx <= 8) goto ___51144h;
		if((int)ecx > 0xc) goto ___51144h;
		ebx = 0x80;
___51144h:
		edx <<= 0x9;
		edx -= 0x800;
		D(esp+0x1c) = ebp;
		D(esp+0x10) = edx;
___51155h:
		edx = D(esp+0x10);
		D(esp+0x28) = edx;
		edx = D(esp+0x1c);
		eax ^= eax;
		D(esp+0x4) = edx;
___51167h:
		edx = edi+ebx;
		ecx = D(esp+0x4);
		edx += eax;
		edx += ecx;
		if(B(edx) == 0) goto ___51187h;
		ecx = esi;
		ecx += D(esp);
		ecx += eax;
		ecx += D(esp+0x28);
		L(edx) = B(edx);
		B(ecx+0x5c) = L(edx);
___51187h:
		eax++;
		if((int)eax < 8) goto ___51167h;
		edx = D(esp+0x10);
		eax = D(esp+0x1c);
		edx += 0x200;
		eax += 8;
		D(esp+0x10) = edx;
		D(esp+0x1c) = eax;
		if(eax != 0x40) goto ___51155h;
___511abh:
		eax = 0x35e*D(___243c60h);
		eax += D(esp+0xc);
		edx = D(___243334h);
		ecx = D(eax+___1e70eeh);
		ecx += edx;
		D(eax+___1e70eeh) = ecx;
		if((int)ecx < 0xd) goto ___511d8h;
		D(eax+___1e70eeh) = ebp;
___511d8h:
		ecx = D(esp+0xc);
		ecx += 4;
		D(esp+0xc) = ecx;
		if(ecx != 0x3c) goto ___50f1bh;
		D(___243d64h) = edi;
		D(___243d80h) = esi;
		return;
}
