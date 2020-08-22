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
void ___424c8h_cdecl(dword, const char *);


void race___51eb4h(void){

	int 	n, x, y;
	char 	buffer[8];

	n = -1;
	while(++n < 0xf){

		if(((int)D(0x120*n+___1f249ch) > 0)&&((int)D(___1de820h) > 0)){

			x = D(___196d98h)+D(0x120*n+___1f2488h)-D(___196dc8h);
			y = D(0x120*n+___1f248ch)+((int)D(0x120*n+___1f249ch)>>3)-D(___196dcch)-4;

			if((x >= -18)&&(x < 0x320)&&(y >= 6)&&(y < 200)){

				switch(D(0x120*n+___1f24a0h)-1){
				case 2:
					___424c8h_cdecl(0x200*(y-6)+0x60+x, itoa_watcom106(D(___1de820h), strcpy(buffer, "$")+1, 0xa)-1);
					break;
				case 6:
					___424c8h_cdecl(0x200*(y-6)+0x60+x, itoa_watcom106(0xa*D(___1de820h), strcpy(buffer, "$")+1, 0xa)-1);
					break;
				case 4:
				case 7:
					___424c8h_cdecl(0x200*(y-6)+0x60+x, strcat(itoa_watcom106(D(0x120*n+___1f24a4h), buffer, 0xa), "%"));
					break;
				default:
					break;
				}
			}

			D(0x120*n+___1f249ch) -= D(___243334h);
		}
	}
}
