#include "drally.h"

	extern void * ___243d80h;
	extern void * ___243d88h;
	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern byte ___196dc8h[];
	extern byte ___196d98h[];
	extern byte ___196dcch[];

// MACHINE GUNS EFFECTS 
void race___50ba4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x3c];
	void * 	esip;
	void * 	edxp;
	void * 	ebxp;
	int 	i, j, n, m;
	__BYTE__ 	px;


	ebxp = ___243d80h;
	esip = ___243d88h;

	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x1b2) > 0){

		n = D(___196d98h)+D(___1e6ed0h+0x35e*D(___243c60h)+0x1ca)-D(___196dc8h);
		m = D(___1e6ed0h+0x35e*D(___243c60h)+0x1ce)-D(___196dcch);

		if(n >= 0){

			if(((n+0x8) < 0x140)&&(m >= 0)){
					
				if((m+0x8) < 0xc8){
					
					j = -1;
					while(++j < 8){

						i = -1;
						while(++i < 8){

							if((px = B(esip+0x40*(D(___1e6ed0h+0x35e*D(___243c60h)+0x1b2)-1)+i+8*j)) != 0) B(ebxp+n+i+0x200*(j+m)+0x60) = px;
						}
					}
				}
			}
		}

		D(___1e6ed0h+0x35e*D(___243c60h)+0x1b2) = 0;
	}

	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x1ae) > 0){

		n = D(___196d98h)+D(___1e6ed0h+0x35e*D(___243c60h)+0x1c2)-D(___196dc8h);
		D(___1e6ed0h+0x35e*D(___243c60h)+0x1ca) = D(___1e6ed0h+0x35e*D(___243c60h)+0x1c2);
		m = D(___1e6ed0h+0x35e*D(___243c60h)+0x1c6)-D(___196dcch);
		D(___1e6ed0h+0x35e*D(___243c60h)+0x1ce) = D(___1e6ed0h+0x35e*D(___243c60h)+0x1c6);

		if(n >= 0){

			if(((n+0x8) < 0x140)&&(m >= 0)){

				if((m+0x8) < 0xc8){

					j = -1;
					while(++j < 8){

						i = -1;
						while(++i < 8){

							if((px = B(esip+0x40*(D(___1e6ed0h+0x35e*D(___243c60h)+0x1ae)-1)+i+8*j)) != 0) B(ebxp+n+i+0x200*(j+m)+0x60) = px;
						}
					}
				}
			}
		}

		D(___1e6ed0h+0x35e*D(___243c60h)+0x1b2) = 1+D(___1e6ed0h+0x35e*D(___243c60h)+0x1ae);
		D(___1e6ed0h+0x35e*D(___243c60h)+0x1ae) = 0;
	}

	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x1aa) > 0){

		n = D(___196d98h)+D(___1e6ed0h+0x35e*D(___243c60h)+0x1ba)-D(___196dc8h);
		D(___1e6ed0h+0x35e*D(___243c60h)+0x1c2) = D(___1e6ed0h+0x35e*D(___243c60h)+0x1ba);
		m = D(___1e6ed0h+0x35e*D(___243c60h)+0x1be)-D(___196dcch);
		D(___1e6ed0h+0x35e*D(___243c60h)+0x1c6) = D(___1e6ed0h+0x35e*D(___243c60h)+0x1be);

		if(n >= 0){

			if(((n+0x8) < 0x140)&&(m >= 0)){

				if((m+0x8) < 0xc8){

					j = -1;
					while(++j < 8){

						i = -1;
						while(++i < 8){

							if((px = B(esip+0x40*(D(___1e6ed0h+0x35e*D(___243c60h)+0x1aa)-1)+i+8*j)) != 0) B(ebxp+n+i+0x200*(j+m)+0x60) = px;
						}
					}
				}
			}
		}

		D(___1e6ed0h+0x35e*D(___243c60h)+0x1ae) = 1+D(___1e6ed0h+0x35e*D(___243c60h)+0x1aa);
		D(___1e6ed0h+0x35e*D(___243c60h)+0x1aa) = 0;
	}

	___243d88h = esip;
	___243d80h = ebxp;
}
