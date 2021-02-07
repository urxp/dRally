#include "drally.h"

	extern byte ___243cd4h[];
	extern byte ___243ca0h[];
	extern byte ___243894h[];
	extern byte ___243330h[];
	extern byte ___243334h[];
	extern byte ___243ca4h[];
	extern byte ___24332ch[];
	extern byte ___243ce8h[];
	extern byte ___1e6ed0h[];
	extern byte ___1a10a0h[];
	extern byte ___1a10a8h[];
	extern byte ___1a1094h[];
	extern byte ___1a109ch[];
	extern byte ___1a1090h[];
	extern byte ___1a102ch[];
	extern byte ___243cdch[];

void race___40864h(void);

// TAB SWITCH
void race___40db4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[4];


		esi = D(___243cd4h);
		edi = D(___243ca0h);
		eax = D(___243894h);
		edx = D(___243330h);
		eax -= edx;
		D(___243334h) = eax;
		eax = D(___243894h);
		edx = D(___243334h);
		ebx = 0x20000;
		edx <<= 0x10;
		D(___243330h) = eax;
		eax = 0;
		eax = (eax >> 0x10)|(edx << 0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		//idiv    ebx
		ebx = D(___243ca4h);
		D(___24332ch) = eax;
		if((int)ebx <= 0xbe) goto ___40ef4h;
		eax = 0x35e*D(___243ce8h);
		if(D(eax+___1e6ed0h+0x10a) != 0) goto ___40ef4h;
		ebx = 0x46;
		eax = D(___243334h);
		esi = D(___243cd4h);
		edi = D(___243ca0h);
		esi += eax;
		edi += eax;
		edx = esi;
		eax = esi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		//idiv    ebx
		edx = eax;
		ecx = 0x3c;
		edx = (int)edx>>0x1f;
		ebx = eax;
		___idiv32(&eax, &edx, ecx);
		//idiv    ecx
		D(___1a10a0h) = eax;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		//idiv    ecx
		ebx = 0x46;
		D(___1a10a8h) = edx;
		edx = esi;
		eax = esi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		//idiv    ebx
		D(esp) = edx;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		//idiv    ebx
		edx = eax;
		edx = (int)edx>>0x1f;
		ebx = eax;
		___idiv32(&eax, &edx, ecx);
		//idiv    ecx
		D(___1a1094h) = eax;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		//idiv    ecx
		ebx = 0x46;
		D(___1a109ch) = edx;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		//idiv    ebx
		FPUSH(1.42);
		FPUSH((int)D(esp));
		ST(0) = ST(0)*ST(1);
		D(esp) = edx;
		FPUSH((int)D(esp));
		ST(2) = ST(2)*ST(0); FPOP();
		D(___243cd4h) = esi;
		D(___243ca0h) = edi;
		ST(0) = (int)ST(0);
		D(___1a1090h) = (int)FPOP();
		ST(0) = (int)ST(0);
		D(___1a102ch) = (int)FPOP();
___40ef4h:
		edi = D(___243ca0h);
		eax = D(___243cdch);
		esi = D(___243cd4h);
		if((int)eax <= 0) goto ___40f28h;
		edx = D(___243cdch);
		eax = D(___243334h);
		edx -= eax;
		D(___243cdch) = edx;
		if((int)edx >= 0) goto ___40f28h;
		ecx = 0;
		D(___243cdch) = ecx;
___40f28h:
		D(___243cd4h) = esi;
		D(___243ca0h) = edi;
		race___40864h();
		esi = D(___243cd4h);
		return;
}
