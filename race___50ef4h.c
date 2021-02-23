#include "drally.h"

	extern byte ___243d80h[];
	extern byte ___243d64h[];
	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern byte ___196dc8h[];
	extern byte ___196d98h[];
	extern byte ___196dcch[];
	extern byte ___243334h[];

void race___50ef4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x2c];


	esi = D(___243d80h);
	edi = D(___243d64h);
	D(esp+0xc) = 0;

	while(1){

		if((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x1e2) > 0){

			D(esp+0x20) = D(___196d98h)+D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x25a)-D(___196dc8h);
			edx = D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x2d2)-D(___196dcch);
			ecx = D(esp+0x20);

			if((int)ecx >= 4){
				
				ecx += 4;

				if(((int)ecx < 0x140)&&((int)edx >= 4)){

					ecx = edx+4;

					if((int)ecx < 0xc8){

						if(((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x1e2) > 0)&&((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x1e2) <= 4)) ebx = 0;
						if(((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x1e2) > 4)&&((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x1e2) <= 8)) ebx = 0x40;
						if(((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x1e2) > 8)&&((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x1e2) <= 0xc)) ebx = 0x80;
						D(esp+0x18) = 0;
						D(esp+0x14) = 0x200*edx-0x800;

						while(1){

							D(esp+0x24) = D(esp+0x14);
							D(esp+0x8) = D(esp+0x18);

							eax = 0;
							while(1){

								edx = edi+ebx+eax+D(esp+0x8);
								if(B(edx) != 0)B(esi+D(esp+0x20)+eax+D(esp+0x24)+0x5c) = B(edx);

								eax++;
								if((int)eax >= 8) break;
							}

							D(esp+0x14) += 0x200;
							D(esp+0x18) += 8;
							if(D(esp+0x18) == 0x40) break;
						}
					}
				}
			}

			D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x1e2) += D(___243334h);
			if((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x1e2) >= 0xd) D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x1e2) = 0;
		}

		if((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x21e) > 0){

			D(esp) = D(___196d98h)+D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x296)-D(___196dc8h);
			edx = D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x30e)-D(___196dcch);
			ecx = D(esp);

			if((int)ecx >= 4){

				ecx += 4;

				if(((int)ecx < 0x140)&&((int)edx >= 4)){

					ecx = edx+4;

					if((int)ecx < 0xc8){

						if(((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x21e) > 0)&&((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x21e) <= 4)) ebx = 0;
						if(((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x21e) > 4)&&((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x21e) <= 8)) ebx = 0x40;
						if(((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x21e) > 8)&&((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x21e) <= 0xc)) ebx = 0x80;
						D(esp+0x1c) = 0;
						D(esp+0x10) = 0x200*edx-0x800;

						while(1){

							D(esp+0x28) = D(esp+0x10);
							D(esp+0x4) = D(esp+0x1c);

							eax = 0;
							while(1){

								edx = edi+ebx+eax+D(esp+0x4);
								if(B(edx) != 0) B(esi+D(esp)+eax+D(esp+0x28)+0x5c) = B(edx);

								eax++;
								if((int)eax >= 8) break;
							}

							D(esp+0x10) += 0x200;
							D(esp+0x1c) += 8;
							if(D(esp+0x1c) == 0x40) break;
						}
					}
				}
			}

			D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x21e) += D(___243334h);
			if((int)D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x21e) >= 0xd) D(0x35e*D(___243c60h)+D(esp+0xc)+___1e6ed0h+0x21e) = 0;
		}

		D(esp+0xc) += 4;
		if(D(esp+0xc) == 0x3c) break;
	}

	D(___243d64h) = edi;
	D(___243d80h) = esi;
}
