#include "drally.h"

	extern byte ___2438d0h[];
	extern byte ___1df520h[];
	extern byte ___196dc8h[];
	extern byte ___196d98h[];
	extern byte ___196dcch[];
	extern void * ___243d7ch;
	extern void * ___243d80h;

dword __GET_FRAME_COUNTER(void);

// SOMETHING WITH MINES ???
void race___51ce0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xc];
	__BYTE__ 	px;
	int 	i, j, n;


	D(esp) = 0;

	if((int)D(___2438d0h) > 0){

		while(1){

			if((int)D(___1df520h+0x10*D(esp)+8) != -1){

				edi = D(___196d98h)+D(___1df520h+0x10*D(esp))-D(___196dc8h);
				eax = D(___1df520h+0x10*D(esp)+4)-D(___196dcch);

				if((int)edi >= 8){

					edx = edi+8;

					if(((int)edx < 0x140)&&((int)eax >= 8)){

						edx = eax+8;

						if(((int)edx < 0xc8)&&(D(___1df520h+0x10*D(esp)+8) != 5)){

							j = -1;
							while(++j < 0x10){

								i = -1;
								while(++i < 0x10){

									if((px = B(___243d7ch+0x10*(j+0x10*D(___1df520h+0x10*D(esp)+8))+i)) != 0) B(___243d80h+0x200*(j+eax-8)+i+edi+0x58) = px;
								}
							}
						}
					}
				}

				ebx = D(___1df520h+0x10*D(esp)+0xc)+0x5;
				
				if(__GET_FRAME_COUNTER() >= ebx){
				
					D(___1df520h+0x10*D(esp)+8)++;
					D(___1df520h+0x10*D(esp)+0xc) = __GET_FRAME_COUNTER();
				}

				if((int)D(___1df520h+0x10*D(esp)+8) > 5){

					ebx = D(___2438d0h)-1;
					eax = D(esp);
					D(___1df520h+0x10*D(esp)+8) = -1;

					while((int)eax < (int)ebx){

						D(___1df520h+0x10*eax) = D(___1df520h+0x10*eax+0x10);
						D(___1df520h+0x10*eax+4) = D(___1df520h+0x10*eax+0x10+4);
						D(___1df520h+0x10*eax+8) = D(___1df520h+0x10*eax+0x10+8);
						eax++;
					}

					D(___2438d0h)--;
					D(esp)--;
				}
			}

			D(esp)++;
			if((int)D(esp) >= (int)D(___2438d0h)) break;
		}
	}
}
