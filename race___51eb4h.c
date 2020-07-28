#include "drally.h"

	extern byte ___1f249ch[];
	extern byte ___1de820h[];
	extern byte ___196dc8h[];
	extern byte ___1f2488h[];
	extern byte ___196d98h[];
	extern byte ___1f248ch[];
	extern byte ___196dcch[];
	extern byte ___1f24a0h[];
	extern byte ___1f24a4h[];
	extern byte ___243334h[];

char * itoa_watcom106(int value, char * buffer, int radix);
void ___424c8h_cdecl(dword, dword);


void race___51eb4h(void){

	int 	n;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x18];

	ebp = 0;
	n = -1;
	while(++n < 0xf){

		if(((int)D(0x120*n+___1f249ch) > 0)&&((int)D(___1de820h) > 0)){

			D(esp+0x10) = D(___196d98h)+D(0x120*n+___1f2488h)-D(___196dc8h);
			edx = (int)D(0x120*n+___1f249ch)>>3;
			eax = D(0x120*n+___1f248ch)-0xa+edx-D(___196dcch);
			D(esp+0x14) = eax;

			if(((int)D(esp+0x10) >= (int)0xffffffee)&&((int)D(esp+0x10) < 0x140)&&((int)eax >= 0)){
					
				eax += 6;
				if((int)eax < 0xc8){

					switch(D(0x120*n+___1f24a0h)-1){
					case 2:
						itoa_watcom106(D(___1de820h), esp+8, 0xa);
						___424c8h_cdecl(0x200*D(esp+0x14)+0x60+D(esp+0x10), strcat(strcpy(esp, "$"), esp+8));
						break;
					case 6:
						itoa_watcom106(0xa*D(___1de820h), esp+8, 0xa);
						___424c8h_cdecl(0x200*D(esp+0x14)+0x60+D(esp+0x10), strcat(strcpy(esp, "$"), esp+8));
						break;
					case 4:
					case 7:
						itoa_watcom106(D(0x120*n+___1f24a4h), esp+8, 0xa);
						___424c8h_cdecl(0x200*D(esp+0x14)+0x60+D(esp+0x10), strcat(esp+8, "%"));
						break;
					default:
						break;
					}
				}

				D(0x120*n+___1f249ch) -= D(___243334h);
			}
		}
	}
}
