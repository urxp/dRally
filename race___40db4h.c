#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243cd4h[];
	extern __BYTE__ ___243ca0h[];
	extern __BYTE__ ___243330h[];
	extern __BYTE__ ___243334h[];
	extern __BYTE__ ___24332ch[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___1a10a0h[];
	extern __BYTE__ ___1a10a8h[];
	extern int LAP_PREVIOUS_MIN;
	extern int LAP_PREVIOUS_SEC;
	extern __BYTE__ ___1a1090h[];
	extern int LAP_PREVIOUS_100;
	extern __BYTE__ ___243cdch[];

void race___40864h(void);

// TAB SWITCH
void race___40db4h(void){

	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[4];
	struct_35e_t *	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

		esi = D(___243cd4h);
		edi = D(___243ca0h);
		eax = getCounter(3);
		edx = D(___243330h);
		eax -= edx;
		D(___243334h) = eax;
		eax = getCounter(3);
		edx = D(___243334h);
		ebx = 0x20000;
		edx <<= 0x10;
		D(___243330h) = eax;
		eax = 0;
		eax = (eax >> 0x10)|(edx << 0x10);
		edx = (int)edx>>0x10;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		//idiv    ebx
		ebx = getCounter(1);
		D(___24332ch) = eax;
		if((int)ebx <= 0xbe) goto ___40ef4h;
		eax = 0x35e*D(MY_CAR_IDX);
		if(s_35e[eax/0x35e].Finished != 0) goto ___40ef4h;
		ebx = 0x46;
		eax = D(___243334h);
		esi = D(___243cd4h);
		edi = D(___243ca0h);
		esi += eax;
		edi += eax;
		edx = esi;
		eax = esi;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		//idiv    ebx
		edx = eax;
		ecx = 0x3c;
		edx = (int)edx>>0x1f;
		ebx = eax;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ecx);
		//idiv    ecx
		D(___1a10a0h) = eax;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ecx);
		//idiv    ecx
		ebx = 0x46;
		D(___1a10a8h) = edx;
		edx = esi;
		eax = esi;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		//idiv    ebx
		D(esp) = edx;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		//idiv    ebx
		edx = eax;
		edx = (int)edx>>0x1f;
		ebx = eax;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ecx);
		//idiv    ecx
		LAP_PREVIOUS_MIN = eax;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ecx);
		//idiv    ecx
		ebx = 0x46;
		LAP_PREVIOUS_SEC = edx;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
		//idiv    ebx
		D(___1a1090h) = (int)((double)(int)D(esp)*1.42);
		D(esp) = edx;
		LAP_PREVIOUS_100 = (int)(1.42*(double)(int)D(esp));
		D(___243cd4h) = esi;
		D(___243ca0h) = edi;
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
