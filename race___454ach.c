#include "drally.h"

	extern byte ___196e68h[];
	extern byte ___243314h[];
	extern byte ___196d98h[];
	extern byte ___243d80h[];
	extern byte VGA13_ACTIVESCREEN[];

// DRUGGED
void race___454ach(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x20];


		ebx = D(___196e68h);
		ebx += 3;
	edx = VGA13_ACTIVESCREEN;
		D(___196e68h) = ebx;
		if((int)ebx < 0x168) goto ___454e7h;
		esi = ebx+0xfffffe98;
		D(___196e68h) = esi;
___454e7h:
		ebx = D(___243314h);
		eax = D(___196e68h);
		eax = D(ebx+8*eax);
		eax += eax;
		eax += 0xfa0;
		D(esp+4) = eax;
		eax = D(___196e68h);
	ebp = VGA13_ACTIVESCREEN;
		ebx = D(ebx+4*eax+0x1f4);
		D(esp+0x18) = eax;
		ebx += ebx;
		eax += eax;
		ebx += 0xfa0;
		D(esp+0x8) = eax;
		D(esp+0x10) = ebx;
		ebx = 0;
___45529h:
		ecx = D(___196d98h);
		esi = D(___243d80h);
		edi = ebp;
		esi += 0x60;
		ebp += 0x140;
		esi += ebx;
		ebx += 0x200;
		memcpy(edi, esi, ecx);
		if(ebx != 0x19000) goto ___45529h;
		eax = D(esp+0x8);
		edi = 0;
		eax <<= 2;
		D(esp+0x14) = edi;
		D(esp+0xc) = eax;
___45571h:
		eax = D(esp+0x4);
		ebp = D(esp+0x18);
		ebp += eax;
		D(esp+0x18) = ebp;
		if((int)ebp < 0x5a000) goto ___45591h;
		ebx = ebp+0xfffa6000;
		D(esp+0x18) = ebx;
___45591h:
		ecx = D(esp+0xc);
		esi = D(esp+0x8);
		ebx = D(___196e68h);
		eax = D(___243314h);
		ebp = D(___196d98h);
		ecx += 0x4;
		esi++;
		ebx += 0x4b;
		eax += ecx;
		edx += ebp;
		D(esp+0xc) = ecx;
		ecx = D(eax);
		D(esp+0x8) = esi;
		ecx <<= 8;
		if((int)ebp >= 0x140) goto ___45697h;
___455ceh:
		ebx++;
		if((int)ebx < 0x168) goto ___455ddh;
		ebx -= 0x168;
___455ddh:
		eax = D(___243314h);
		esi = D(eax+4*ebx);
		edi = D(esp+0x18);
		esi <<= 8;
		esi += edi;
		esi = (int)esi>>0xa;
		D(esp) = esi;
		esi = D(eax+4*esi+0x5a0);
		esi = (int)esi>>7;
		D(esp+0x1c) = esi;
		esi = ecx;
		esi = (int)esi>>0xa;
		edi = D(eax+4*esi+0x5a0);
		eax = D(esp+0x10);
		D(esp) = esi;
		ecx += eax;
		edi = (int)edi>>8;
		if((int)ecx < 0x5a000) goto ___45628h;
		ecx -= 0x5a000;
___45628h:
		esi = D(___196d98h);
		eax = edi+ebp;
		if((int)eax < (int)esi) goto ___45676h;
		if((int)eax >= 0x13f) goto ___45676h;
		eax = D(esp+0x14);
		eax += D(esp+0x1c);
		if((int)eax < 0) goto ___45676h;
		if((int)eax >= 0xc7) goto ___45676h;
		esi = D(___243d80h);
		eax <<= 9;
		esi += 0x60;
		eax += esi;
		eax += ebp;
		esi = eax+edi;
		edi = edx;
		W(edi) = W(esi); edi += 2; esi += 2;
		edi += 0x13e;
		esi += 0x1fe;
		W(edi) = W(esi); edi += 2; esi += 2;
		goto ___45685h;
___45676h:
		edi = edx;
		X(eax) = 0;
		W(edi) = X(eax); edi += 2;
		edi += 0x13e;
		W(edi) = X(eax); edi += 2;
___45685h:
		ebp += 0x2;
		edx += 0x2;
		if((int)ebp < 0x140) goto ___455ceh;
___45697h:
		eax = D(esp+0x14);
		eax += 0x2;
		edx += 0x140;
		D(esp+0x14) = eax;
		if((int)eax < 0xc8) goto ___45571h;

		return;
}
