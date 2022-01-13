#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___1f2488h[];
	extern __BYTE__ ___1de7d0h[];
	extern __BYTE__ ___196dc8h[];
	extern __BYTE__ ___196d98h[];
	extern __BYTE__ ___196dcch[];
	extern __BYTE__ ___243334h[];

char * itoa_watcom106(int value, char * buffer, int radix);
void ___424c8h_cdecl(__DWORD__, const char *);


void race___51eb4h(void){

	int 			n, x, y;
	char 			buffer[8];
	struct_54_t * 	s_54;


	s_54 = (struct_54_t *)___1de7d0h;

	n = -1;
	while(++n < 0xf){

		if(((int)D(0x120*n+___1f2488h+0x14) > 0)&&((int)s_54[0].__50 > 0)){

			x = D(___196d98h)+D(0x120*n+___1f2488h)-D(___196dc8h);
			y = D(0x120*n+___1f2488h+4)+((int)D(0x120*n+___1f2488h+0x14)>>3)-D(___196dcch)-4;

			if((x >= -18)&&(x < 0x320)&&(y >= 6)&&(y < 200)){

				switch(D(0x120*n+___1f2488h+0x18)-1){
				case 2:
					___424c8h_cdecl(0x200*(y-6)+0x60+x, itoa_watcom106(s_54[0].__50, strcpy(buffer, "$")+1, 0xa)-1);
					break;
				case 6:
					___424c8h_cdecl(0x200*(y-6)+0x60+x, itoa_watcom106(0xa*s_54[0].__50, strcpy(buffer, "$")+1, 0xa)-1);
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
