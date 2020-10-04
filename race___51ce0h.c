#include "drally.h"

	extern byte ___2438d0h[];
	extern byte ___1df528h[];
	extern byte ___196dc8h[];
	extern byte ___1df520h[];
	extern byte ___196d98h[];
	extern byte ___196dcch[];
	extern byte ___1df524h[];
	extern byte ___243d7ch[];
	extern byte ___243d80h[];
	extern byte ___1df52ch[];
	extern byte ___1df518h[];
	extern byte ___1df510h[];
	extern byte ___1df514h[];

dword __GET_FRAME_COUNTER(void);

void race___51ce0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xc];

		edx = 0;
		ebx = D(___2438d0h);
		D(esp) = edx;
		if((int)ebx <= 0) goto ___51e87h;
___51d06h:
		ebp = D(esp);
		ebp <<= 4;
		if(D(ebp+___1df528h) == 0xffffffff) goto ___51e72h;
		edx = D(___196dc8h);
		eax = D(ebp+___1df520h);
		edi = D(___196d98h);
		eax -= edx;
		ebx = D(___196dcch);
		edi += eax;
		eax = D(ebp+___1df524h);
		eax -= ebx;
		if((int)edi < 8) goto ___51de2h;
		edx = edi+8;
		if((int)edx >= 0x140) goto ___51de2h;
		if((int)eax < 8) goto ___51de2h;
		edx = eax+8;
		if((int)edx >= 0xc8) goto ___51de2h;
		if(D(ebp+___1df528h) == 5) goto ___51de2h;
		eax <<= 9;
		esi = 0;
		eax -= 0x1000;
		D(esp+0x8) = esi;
		D(esp+0x4) = eax;
___51d88h:
		esi = D(esp+0x4);
		ecx = D(esp+0x8);
		eax = 0;
___51d92h:
		edx = D(___243d7ch);
		ebx = D(ebp+___1df528h);
		edx += eax;
		ebx <<= 8;
		edx += ecx;
		edx += ebx;
		if(B(edx) == 0) goto ___51dbch;
		ebx = D(___243d80h);
		ebx += eax;
		ebx += edi;
		L(edx) = B(edx);
		B(esi+ebx+0x58) = L(edx);
___51dbch:
		eax++;
		if((int)eax < 0x10) goto ___51d92h;
		edx = D(esp+0x4);
		eax = D(esp+0x8);
		edx += 0x200;
		eax += 0x10;
		D(esp+0x4) = edx;
		D(esp+0x8) = eax;
		if(eax != 0x100) goto ___51d88h;
___51de2h:
		edx = D(esp);
		edx <<= 4;
		ebx = D(edx+___1df52ch);
		ebx += 0x5;
		eax = __GET_FRAME_COUNTER();
		if(eax < ebx) goto ___51e0bh;
		D(edx+___1df528h)++;
		eax = __GET_FRAME_COUNTER();
		D(edx+___1df52ch) = eax;
___51e0bh:
		edx = D(esp);
		edx <<= 4;
		if((int)D(edx+___1df528h) <= 5) goto ___51e72h;
		ebx = D(___2438d0h);
		edi = 0xffffffff;
		ebx--;
		eax = edx;
		ebx <<= 4;
		D(edx+___1df528h) = edi;
		if((int)edx >= (int)ebx) goto ___51e60h;
___51e35h:
		eax += 0x10;
		edx = D(eax+___1df528h);
		D(eax+___1df518h) = edx;
		edx = D(eax+___1df520h);
		D(eax+___1df510h) = edx;
		edx = D(eax+___1df524h);
		D(eax+___1df514h) = edx;
		if((int)eax < (int)ebx) goto ___51e35h;
___51e60h:
		eax = D(___2438d0h);
		ebp = D(esp);
		eax--;
		ebp--;
		D(___2438d0h) = eax;
		D(esp) = ebp;
___51e72h:
		ecx = D(esp);
		ecx++;
		esi = D(___2438d0h);
		D(esp) = ecx;
		if((int)ecx < (int)esi) goto ___51d06h;
___51e87h:
		return;
}
