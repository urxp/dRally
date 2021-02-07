#include "drally.h"

	extern byte ___1f2488h[];
	extern byte ___1de7d0h[];
	extern byte ___196dc8h[];
	extern byte ___196d98h[];
	extern byte ___196dcch[];
	extern byte ___243334h[];

char * itoa_watcom106(int value, char * buffer, int radix);
void ___424c8h_cdecl(dword, const char *);


void race___51eb4h(void){

	int 	n, x, y;
	char 	buffer[8];

	n = -1;
	while(++n < 0xf){

		if(((int)D(0x120*n+___1f2488h+0x14) > 0)&&((int)D(___1de7d0h+0x50) > 0)){

			x = D(___196d98h)+D(0x120*n+___1f2488h)-D(___196dc8h);
			y = D(0x120*n+___1f2488h+4)+((int)D(0x120*n+___1f2488h+0x14)>>3)-D(___196dcch)-4;

			if((x >= -18)&&(x < 0x320)&&(y >= 6)&&(y < 200)){

				switch(D(0x120*n+___1f2488h+0x18)-1){
				case 2:
					___424c8h_cdecl(0x200*(y-6)+0x60+x, itoa_watcom106(D(___1de7d0h+0x50), strcpy(buffer, "$")+1, 0xa)-1);
					break;
				case 6:
					___424c8h_cdecl(0x200*(y-6)+0x60+x, itoa_watcom106(0xa*D(___1de7d0h+0x50), strcpy(buffer, "$")+1, 0xa)-1);
					break;
				case 4:
				case 7:
					___424c8h_cdecl(0x200*(y-6)+0x60+x, strcat(itoa_watcom106(D(0x120*n+___1f2488h+0x1c), buffer, 0xa), "%"));
					break;
				default:
					break;
				}
			}

			D(0x120*n+___1f2488h+0x14) -= D(___243334h);
		}
	}
}
