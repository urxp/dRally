#include "drally.h"

	extern __BYTE__ ___1df520h[];
	extern int TRX_VIEWPORT_TL_X;
	extern int CURRENT_VIEWPORT_X;
	extern int TRX_VIEWPORT_TL_Y;
	extern __POINTER__ RACE_BLOWI_BPK;
	extern __POINTER__ BACKBUFFER;

__DWORD__ __GET_FRAME_COUNTER(void);

// SOMETHING WITH MINES ???
void race___51ce0h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0xc];
	__BYTE__ 	px;
	int 	i, j, n;


	D(esp) = 0;

	if((int)getCounter(6) > 0){

		while(1){

			if((int)D(___1df520h+0x10*D(esp)+8) != -1){

				edi = CURRENT_VIEWPORT_X+D(___1df520h+0x10*D(esp))-TRX_VIEWPORT_TL_X;
				eax = D(___1df520h+0x10*D(esp)+4)-TRX_VIEWPORT_TL_Y;

				if((int)edi >= 8){

					edx = edi+8;

					if(((int)edx < 0x140)&&((int)eax >= 8)){

						edx = eax+8;

						if(((int)edx < 0xc8)&&(D(___1df520h+0x10*D(esp)+8) != 5)){

							j = -1;
							while(++j < 0x10){

								i = -1;
								while(++i < 0x10){

									if((px = B(RACE_BLOWI_BPK+0x10*(j+0x10*D(___1df520h+0x10*D(esp)+8))+i)) != 0) B(BACKBUFFER+0x200*(j+eax-8)+i+edi+0x58) = px;
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

					ebx = getCounter(6)-1;
					eax = D(esp);
					D(___1df520h+0x10*D(esp)+8) = -1;

					while((int)eax < (int)ebx){

						D(___1df520h+0x10*eax) = D(___1df520h+0x10*eax+0x10);
						D(___1df520h+0x10*eax+4) = D(___1df520h+0x10*eax+0x10+4);
						D(___1df520h+0x10*eax+8) = D(___1df520h+0x10*eax+0x10+8);
						eax++;
					}

					decCounter(6);
					D(esp)--;
				}
			}

			D(esp)++;
			if((int)D(esp) >= (int)getCounter(6)) break;
		}
	}
}
