#include "drally.h"
#include "drally_fonts.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___196adch[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a0fc0h;

char * itoa_watcom106(int value, char * buffer, int radix);

// RACE RESULTS FRAMES
void ___35dd0h(void){

	int 		i, j, n, m, k;
	__BYTE__ 	px;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x18];


	m = 4;

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) m = D(___196adch);
#endif // DR_MULTIPLAYER

	//k = 79+(350-79*m)/(m+1);
	k = 429/(m+1);

	n = 0;
	while(++n <= m){

		j = -1;
		while(++j < 0x4a){

			i = -1;
			while(++i < 0xca){

				if((px = read_b(___1a0fc0h+0xca*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(k*n+j+29)+0x185+i, px);
			}
		}

		itoa_watcom106(n, esp+0x14, 0xa);
		___12e78h_v3(___1a10cch___185ba9h, esp+0x14, (n==1)?0x191:0x18c, k*n+36);
	}
}
