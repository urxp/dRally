#include "drally.h"

	extern byte ___196d94h[];
	extern byte ___196d8ch[];
	extern byte ___243c98h[];
	extern byte ___1f3b08h[];
	extern byte ___1f44f4h[];
	extern byte ___1f3d68h[];
	extern byte ___1f4620h[];
	extern byte ___243d08h[];

void race___5326ch(void){

	dword 	eax, edx;
	int 	n;


	n = -1;
	while(++n < (int)D(0xc50*D(___243c98h)+___1f3b08h)){

		edx = 0x100*D(4*n+0xc50*D(___243c98h)+___1f44f4h);
		eax = (long long)(int)edx/(int)D(4*n+0xc50*D(___243c98h)+___1f3d68h);
		eax = eax+0x80;
		eax = (int)eax>>8;
		edx = 0x100*D(4*n+0xc50*D(___243c98h)+___1f4620h);
		D(4*n+0xc50*D(___243c98h)+___1f44f4h) = eax+D(___196d8ch);
		eax = (long long)(int)edx/(int)D(4*n+0xc50*D(___243c98h)+___1f3d68h);
		eax = eax+0x80;
		eax = (int)eax>>8;
		D(4*n+0xc50*D(___243c98h)+___1f4620h) = eax+D(___196d94h);
	}

	D(___243d08h) = n;
}
