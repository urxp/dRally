#include "drally.h"

	extern __BYTE__ ___243d14h[];
	extern __BYTE__ ___196dc8h[];
	extern __BYTE__ ___196dcch[];
	extern __BYTE__ ___243cc4h[];
	extern __BYTE__ ___243cc0h[];
	extern __BYTE__ ___243ccch[];
	extern __BYTE__ ___243cc8h[];
	extern __BYTE__ ___243c90h[];
	extern __BYTE__ ___243c8ch[];
	extern __BYTE__ ___243cbch[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___196d88h[];
	extern __BYTE__ ___196d8ch[];
	extern __BYTE__ ___196d90h[];
	extern __BYTE__ ___196d94h[];
	extern __BYTE__ ___196d98h[];
	extern __BYTE__ ___243cf0h[];
	extern __BYTE__ ___1df520h[];
	extern int ___243178h[4];
	extern __BYTE__ ___243ce4h[];
	extern __BYTE__ ___243d08h[];
	extern __BYTE__ ___196df4h[];
	extern __BYTE__ ___196dbch[];
	extern __BYTE__ ___196dc0h[];
	extern __BYTE__ ___196dc4h[];
	extern __BYTE__ ___196db8h[];
	extern __BYTE__ ___2438c8h[];
	extern __BYTE__ ___196dd4h[];
	extern __BYTE__ ___196dd8h[];
	extern __BYTE__ ___196de0h[];
	extern __BYTE__ ___196de8h[];
	extern __BYTE__ ___196dech[];
	extern __BYTE__ ___196df0h[];
	extern __BYTE__ ___196de4h[];
	extern __BYTE__ ___243ce0h[];
	extern __BYTE__ ___243cdch[];
	extern __BYTE__ ___243ca0h[];
	extern __BYTE__ ___243cb8h[];
	extern __BYTE__ ___243cd4h[];
	extern __BYTE__ ___196df8h[];

void race___49a34h(void){

	__DWORD__ 	n;

	D(___243d14h) = 0;
	D(___196dc8h) = 0;
	D(___196dcch) = 0;
	D(___243cc4h) = 0;
	D(___243cc0h) = 0;
	D(___243ccch) = 0;
	D(___243cc8h) = 0;
	D(___243c90h) = 0;
	D(___243c8ch) = 0;
	D(___243cbch) = 0;
	F32(___243cf0h) = 3.75/(double)F32(___1de580h+0x94*D(MY_CAR_IDX)+0x14);
	D(___196d88h) = 0x100;
	D(___196d8ch) = 0x80;
	D(___196d90h) = 0xc8;
	D(___196d94h) = 0x64;
	D(___196d98h) = 0x40;
	resetCounter(6);

	n = -1;
	while(++n < 0x20){

		D(___1df520h+0x10*n+8) = -1;
		D(___1df520h+0x10*n+0xc) = 0;
	}

	D(___243ce4h) = 0;
	___243178h[0] = -1;
	___243178h[1] = -1;
	___243178h[2] = -1;
	___243178h[3] = -1;
	D(___196df4h) = 0;
	D(___196dbch) = 0;
	D(___196dc0h) = 0;
	D(___196dc4h) = 0;
	D(___196db8h) = 0;
	D(___2438c8h) = 0;
	D(___196dd4h) = 0;
	D(___196dd8h) = 0;
	D(___196de0h) = 0;
	D(___196de8h) = 0;
	D(___196dech) = 0;
	D(___196df0h) = 0;
	D(___196de4h) = 0;
	D(___243ce0h) = 0;
	resetCounter(1);
	D(___243cdch) = 0;
	D(___243ca0h) = 0;
	D(___243cb8h) = 0;
	D(___243cd4h) = 0;
	D(___243d08h) = 4;
	D(___196df8h) = 0x28000;
	resetCounter(5);
}
