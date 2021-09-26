#include "drally.h"

	extern byte ___243d14h[];
	extern byte ___196dc8h[];
	extern byte ___196dcch[];
	extern byte ___243cc4h[];
	extern byte ___243cc0h[];
	extern byte ___243ccch[];
	extern byte ___243cc8h[];
	extern byte ___243c90h[];
	extern byte ___243c8ch[];
	extern byte ___243cbch[];
	extern byte ___243ce8h[];
	extern byte ___1de580h[];
	extern byte ___196d88h[];
	extern byte ___196d8ch[];
	extern byte ___196d90h[];
	extern byte ___196d94h[];
	extern byte ___196d98h[];
	extern byte ___2438d0h[];
	extern byte ___243cf0h[];
	extern byte ___1df520h[];
	extern int ___243178h[4];
	extern byte ___243ce4h[];
	extern byte ___243d08h[];
	extern byte ___196df4h[];
	extern byte ___196dbch[];
	extern byte ___196dc0h[];
	extern byte ___196dc4h[];
	extern byte ___196db8h[];
	extern byte ___196d9ch[];
	extern byte ___2438c8h[];
	extern byte ___196dd4h[];
	extern byte ___196dd8h[];
	extern byte ___196de0h[];
	extern byte ___196de8h[];
	extern byte ___196dech[];
	extern byte ___196df0h[];
	extern byte ___196de4h[];
	extern byte ___243ce0h[];
	extern byte ___243ca4h[];
	extern byte ___243cdch[];
	extern byte ___243ca0h[];
	extern byte ___243cb8h[];
	extern byte ___243cd4h[];
	extern byte ___196df8h[];
	extern byte ___243874h[];

void race___49a34h(void){

	dword 	n;

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
	F32(___243cf0h) = 3.75/(double)F32(___1de580h+0x94*D(___243ce8h)+0x14);
	D(___196d88h) = 0x100;
	D(___196d8ch) = 0x80;
	D(___196d90h) = 0xc8;
	D(___196d94h) = 0x64;
	D(___196d98h) = 0x40;
	D(___2438d0h) = 0;

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
	D(___196d9ch) = 0;
	D(___2438c8h) = 0;
	D(___196dd4h) = 0;
	D(___196dd8h) = 0;
	D(___196de0h) = 0;
	D(___196de8h) = 0;
	D(___196dech) = 0;
	D(___196df0h) = 0;
	D(___196de4h) = 0;
	D(___243ce0h) = 0;
	D(___243ca4h) = 0;
	D(___243cdch) = 0;
	D(___243ca0h) = 0;
	D(___243cb8h) = 0;
	D(___243cd4h) = 0;
	D(___243d08h) = 4;
	D(___196df8h) = 0x28000;
	D(___243874h) = 0;
}
