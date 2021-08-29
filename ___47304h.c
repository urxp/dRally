#include "drally.h"

	extern byte ___2432e4h[];
	extern byte ___243e74h[];
	extern byte ___2432e8h[];
	extern byte ___2432d0h[];
	extern void * ___243d70h;
	extern byte ___2432cch[];
	extern byte ___196d98h[];
	extern byte ___2432e0h[];
	extern byte ___1a30a0h[];
	extern byte ___24330ch[];
	extern void * ___2432d8h;


// PAUSE, RACE OVER, DIALOG BOX LOAD ANIMATION
void ___47304h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
    int     i, j, n;


    ebp = 0;
    D(___2432e4h) = ebp;

    n = -1;
    while(++n < 969){

		if(B(___243e74h+0x21*n+0x20) != 0x64){

            eax = D(___24330ch)+B(___243e74h+0x21*n+0x20);

            if((int)eax >= 0x46){

                edx = B(___243e74h+0x21*n+0x20);

                if((int)edx < 0x46){

                    while(1){

                        D(___243e74h+0x21*n) += D(___243e74h+0x21*n+8);
                        D(___243e74h+0x21*n+4) += D(___243e74h+0x21*n+0xc);

                        edx++;
                        if((int)edx >= 0x46) break;
                    }
                }

                B(___243e74h+0x21*n+0x20) = 0x46;
            }
            else {
                    
                B(___243e74h+0x21*n+0x20) += B(___24330ch);
                
                i = -1;
                while(++i < (int)D(___24330ch)){
                    
                    D(___243e74h+0x21*n) += D(___243e74h+0x21*n+8);
                    D(___243e74h+0x21*n+4) += D(___243e74h+0x21*n+0xc);
                }

                edx = (int)(D(___243e74h+0x21*n+4)+0x8000)>>0x10;
                ebx = (int)(D(___243e74h+0x21*n)+0x8000)>>0x10;
                D(___2432d8h+ebx+0x140*edx) = D(___243e74h+0x21*n+0x10);
                D(___2432d8h+ebx+0x140*edx+0x140) = D(___243e74h+0x21*n+0x14);
                D(___2432d8h+ebx+0x140*edx+2*0x140) = D(___243e74h+0x21*n+0x18);
                D(___2432d8h+ebx+0x140*edx+3*0x140) = D(___243e74h+0x21*n+0x1c);
            }

            if(B(___243e74h+0x21*n+0x20) >= 0x46){

                eax = (int)(D(___243e74h+0x21*n+4)+0x8000)>>0x10;
                ebx = (int)(D(___243e74h+0x21*n)+0x8000)>>0x10;
                D(___2432d8h+ebx+0x140*eax) = D(___243e74h+0x21*n+0x10);
                D(___2432d8h+ebx+0x140*eax+0x140) = D(___243e74h+0x21*n+0x14);
                D(___2432d8h+ebx+0x140*eax+2*0x140) = D(___243e74h+0x21*n+0x18);
                D(___2432d8h+ebx+0x140*eax+3*0x140) = D(___243e74h+0x21*n+0x1c);
                D(___2432e4h)++;
            }
        }
        else {

            ebp++;

            if(((int)D(___2432e8h) < 0xf24)&&((int)ebp < 0x14)){
                
                D(___243e74h+0x21*n+0x10) = D(___243d70h+D(___2432cch)+0xcc*D(___2432d0h));
                D(___243e74h+0x21*n+0x14) = D(___243d70h+D(___2432cch)+0xcc*D(___2432d0h)+0xcc);
                D(___243e74h+0x21*n+0x18) = D(___243d70h+D(___2432cch)+0xcc*D(___2432d0h)+2*0xcc);
                D(___243e74h+0x21*n+0x1c) = D(___243d70h+D(___2432cch)+0xcc*D(___2432d0h)+3*0xcc);
                eax = (int)D(___196d98h)>>0x1;
                eax = eax+D(___2432cch)+0x39;
                D(___243e74h+0x21*n) = 0x10000*D(___1a30a0h+4*D(___2432e0h));
                D(___243e74h+0x21*n+4) = 0xc40000;
                edx = 0x10000*eax-D(___243e74h+0x21*n);
                esi = D(___2432d0h)+0x40;
                eax = edx << 0x10;
                edx = (int)edx>>0x10;
                ___idiv32(&eax, &edx, 0x460000);
                edx = 0x10000*esi-D(___243e74h+0x21*n+4);
                D(___243e74h+0x21*n+8) = eax;
                eax = edx << 0x10;
                edx = (int)edx>>0x10;
                ___idiv32(&eax, &edx, 0x460000);
                D(___243e74h+0x21*n+0xc) = eax;
                B(___243e74h+0x21*n+0x20) = 0;
                D(___2432e8h) += 0x4;
                D(___2432d0h) += 0x4;

                if(D(___2432d0h) == 0x4c){

                    D(___2432d0h) = 0;
                    D(___2432cch) += 0x4;
                }

                D(___2432e0h)++;
                if((int)D(___2432e0h) > 0x63) D(___2432e0h) = 0;
            }
        }
    }
}
