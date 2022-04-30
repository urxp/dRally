#include "drally.h"

	extern __BYTE__ ___196e68h[];
	extern int * ___243314h;	// [3601]
	extern int CURRENT_VIEWPORT_X;
	extern __POINTER__ BACKBUFFER;
	extern __BYTE__ * VGA13_ACTIVESCREEN;

// DRUGGED
void race___454ach(void){

	__DWORD__ 	eax, ebx, ecx, edi, esi;
	int 	i, j, k, l, m, n;


	D(___196e68h) += 3;
	D(___196e68h) %= 360;

	n = -1;
	while(++n < 0xc8) memcpy(VGA13_ACTIVESCREEN+0x140*n, BACKBUFFER+0x200*n+0x60, CURRENT_VIEWPORT_X);

	m = D(___196e68h);
	j = -1;
	while(++j < 100){

		m += 2*(___243314h[2*D(___196e68h)]+2000);
		m %= 0x5a000;
		
		ebx = D(___196e68h)+0x4b;
		ecx = 0x100*___243314h[2*D(___196e68h)+j+1];

		k = (0x140-CURRENT_VIEWPORT_X)/2;

		i = -1;
		while(++i < k){

			ebx++;
			ebx %= 360;

			esi = 0x100*___243314h[ebx]+m;
			l = ___243314h[((int)esi>>0xa)+360]>>7;
			edi = ___243314h[((int)ecx>>0xa)+360]>>8;
			eax = edi+CURRENT_VIEWPORT_X+2*i;

			ecx += 2*(___243314h[D(___196e68h)+125]+2000);
			ecx %= 0x5a000;

			if(((int)eax < CURRENT_VIEWPORT_X)||((int)eax >= 0x13f)){

				W(VGA13_ACTIVESCREEN+2*(0x140*j+i)+CURRENT_VIEWPORT_X) = 0;
				W(VGA13_ACTIVESCREEN+2*(0x140*j+i)+CURRENT_VIEWPORT_X+0x140) = 0;
			}
			else {

				eax = l+2*j;

				if(((int)eax < 0)||((int)eax >= 0xc7)){

					W(VGA13_ACTIVESCREEN+2*(0x140*j+i)+CURRENT_VIEWPORT_X) = 0;
					W(VGA13_ACTIVESCREEN+2*(0x140*j+i)+CURRENT_VIEWPORT_X+0x140) = 0;
				}
				else {

					W(VGA13_ACTIVESCREEN+2*(0x140*j+i)+CURRENT_VIEWPORT_X) = W(BACKBUFFER+0x60+0x200*eax+CURRENT_VIEWPORT_X+2*i+(int)edi);
					W(VGA13_ACTIVESCREEN+2*(0x140*j+i)+CURRENT_VIEWPORT_X+0x140) = W(BACKBUFFER+0x60+0x200*eax+CURRENT_VIEWPORT_X+2*i+(int)edi+0x200);
				}
			}
		}
	}
}
