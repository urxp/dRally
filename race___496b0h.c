#include "drally.h"

	extern void * ___243d38h;
	extern byte ___1f2488h[];
	extern byte ___196dd0h[];
	extern byte ___243d28h[];
	extern void * ___243d58h;
	extern byte ___1de7d0h[];
	extern byte ___19bd60h[];


int rand_watcom106(void);

void race___496b0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];
	void * 	edxp;
	void * 	ebxp;
	void * 	ebpp;


	ebpp = ___243d38h;

	eax = 0;
	while(1){

		edx = 0;
		D(eax+___1f2488h+0x14) = edx;
		eax += 0x120;
		if(eax == 0x1680) break;
	}

	eax = 0;
	while(1){

		ebx = 0;
		D(eax+___1f2488h+0x18) = ebx;
		eax += 0x120;
		if(eax == 0x1680) break;
	}

	eax = 0;
	while(1){

		ecx = 0;
		D(eax+___1f2488h+0x1c) = ecx;
		eax += 0x120;
		if(eax == 0x1680) break;
	}

	eax = 0;
	while(1){

		esi = 0;
		D(eax+___1f2488h+8) = esi;
		eax += 0x120;
		if(eax == 0x1680) break;
	}

	ebx = 0;
	ecx = 0x32;
	___243d38h = ebpp;

	while(1){

		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		edx += 0x64;
		D(ebx+___1f2488h+0xc) = edx;
		ebx += 0x120;
		if(ebx == 0x1680) break;
	}

	eax = 0;

	while(1){

		edi = 0;
		D(eax+___1f2488h+0x10) = edi;
		eax += 0x120;
		if(eax == 0x1680) break;
	}

	D(___196dd0h) = 0x15e;
	eax = rand_watcom106();
	edx = eax;
	ebx = 4;
	edx = (int)edx>>0x1f;
	___idiv32(&eax, &edx, ebx);

	if(edx == 0){

		eax = rand_watcom106();
		edx = eax;
		ebx = 2;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx += 0xc;
		D(esp+0xc) = edx;
		ecx = 8*edx;
		ecx += edx;
		ecx <<= 5;

		if((int)D(ecx+___1f2488h) > 0){

			eax = rand_watcom106();
			edx = eax;
			edx = (int)edx>>0x1f;
			___idiv32(&eax, &edx, ebx);
			edx += 7;
			D(esp) = ecx;
			D(ecx+___1f2488h+8) = edx;
			ebx = 0;
			edxp = ___1f2488h+ecx+0x20;

			while(1){

				eax = D(esp);
				eax = D(eax+___1f2488h+4);
				eax = eax+ebx;
				eax = eax-8;
				edi = D(D(esp)+___1f2488h);
				memcpy(edxp, ___243d58h+D(___243d28h)*eax+edi-8, 0x10);
				ebx++;
				edxp += 0x10;
				if((int)ebx >= 0x10) break;
			}

			eax = 0;
			D(esp+0x24) = eax;
			eax = D(esp+0xc);
			edx = 8*eax;
			ebx = 0;
			edx += eax;
			D(esp+0x18) = ebx;
			edx <<= 0x5;
			edi = 0x10;

			while(1){

				ebx = D(esp+0x18);
				ebpp = ___243d38h;
				eax = 0;
				D(esp+0x1c) = ebx;

				while(1){

					ebxp = ebpp+0x100*D(edx+___1f2488h+8)+eax+D(esp+0x1c);

					if(B(ebxp-0x100) != 0){

						ecx = D(esp+0x24);
						ecx = ecx+D(edx+___1f2488h+4);
						ecx = ecx-8;
						B(___243d58h+eax+D(edx+___1f2488h)+D(___243d28h)*ecx-8) = B(ebxp-0x100);
					}

					eax++;
					if((int)eax >= 0x10) break;
				}

				ebx = D(esp+0x24);
				eax = D(esp+0x18);
				___243d38h = ebpp;
				ebx++;
				eax += edi;
				D(esp+0x24) = ebx;
				D(esp+0x18) = eax;
				if((int)edi <= (int)ebx) break;
			}
		}
	}

	if(D(___1de7d0h+0x4c) == 1){
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
			eax = rand_watcom106();
			edx = eax;
			ebx = 2;
			edx = (int)edx>>0x1f;
			___idiv32(&eax, &edx, ebx);
			edx += 0xe;
			D(esp+0x10) = edx;
			eax = 8*edx;
			eax += edx;
			eax <<= 0x5;

			if((int)D(eax+___1f2488h) > 0){

				D(esp+0x14) = eax;
				D(___1f2488h+D(esp+0x14)+8) = 6;
				ebxp = ___1f2488h+D(esp+0x14)+0x20;

				edx = 0;
				while(1){

					memcpy(ebxp, ___243d58h+D(___243d28h)*(D(___1f2488h+D(esp+0x14)+4)+edx-8)+D(___1f2488h+D(esp+0x14))-8, 0x10);
					ebxp += 0x10;
					edx++;
					if((int)edx >= 0x10) break;
				}

				D(esp+0x8) = 0;
				eax = D(esp+0x10);
				edx = 8*eax;
				ebx = 0;
				edx += eax;
				D(esp+0x4) = ebx;
				edx <<= 0x5;
				edi = 0x10;

				while(1){

					ebx = D(esp+0x4);
					ebpp = ___243d38h;
					eax = 0;
					D(esp+0x20) = ebx;

					while(1){

						ecx = 0x100*D(___1f2488h+edx+8);
						ebxp = ebpp+ecx+eax+D(esp+0x20);

						if(B(ebxp-0x100) != 0){

							ecx = D(esp+0x8);
							ecx += D(___1f2488h+edx+4);
							esi = D(___243d28h);
							ecx -= 8;
							esi = esi*ecx;
							ecx = ___243d58h;
							ecx += eax;
							ecx += D(edx+___1f2488h);
							B(ecx+esi-8) = B(ebxp-0x100);
						}

						eax++;
						if((int)eax >= 0x10) break;
					}

					ebx = D(esp+0x8);
					eax = D(esp+0x4);
					___243d38h = ebpp;
					ebx++;
					eax += edi;
					D(esp+0x8) = ebx;
					D(esp+0x4) = eax;
					if((int)edi <= (int)ebx) break;
				}
			}

			D(___1de7d0h+0x4c) = 0;
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
	}

	ebpp = ___243d38h;
	return;
}
