#include "drally.h"

	extern byte ___185c6dh[];
	extern byte ___185c6eh[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10b0h[];
	extern byte ___185c6fh[];
	extern byte ___185c40h[];

void ___12f60h_cdecl(dword A1, dword A2){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x18];

	edx = A2;
	eax = A1;

	D(esp+4) = eax;
	ebp = edx;
	ebx = 0;
	L(ebx) = B(___185c6dh);
	D(esp+0xc) = ebx;
	ebx = 0;
	L(ebx) = B(___185c6eh);
	D(esp+8) = ebx;
	ebx = D(esp+0xc);
	ebx = ebx*D(esp+8);
	edx = 0;
	D(esp+0x14) = eax;
	D(esp+0x10) = edx;
	D(esp) = ebx;
	edi = D(esp+4);
	esi = D(esp+0x10);
	ecx = strlen(edi);

	if(ecx > esi){

		while(1){

			ebx = D(esp+0x14);

			if(B(ebx) != '$'){

				esi = D(esp+0x14);
				ecx = 0;
				L(ecx) = B(esi);
				edi = D(esp);
				ecx -= 0x2f;
				ecx = ecx*edi;
				edx = D(esp+0xc);
				ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				esi = D(___1a10b0h);
				ebx += ebp;
				esi += ecx;
				ecx = D(esp+8);
				L(edx) >>= 2;

				while(1){

					H(ecx) = L(edx);

					while(1){

						eax = D(esi);
						D(ebx) = eax;
						ebx += 4;
						esi += 4;
						H(ecx)--;
					
						if(H(ecx) == 0) break;
					}

					ebx += 0x280;
					L(edx) <<= 2;
					ebx -= edx;
					L(edx) >>= 2;
					L(ecx)--;

					if(L(ecx) == 0) break;
				}

				ecx = D(esp+0x14);
				ebx = 0;
				L(ebx) = B(ecx);
				L(ebx) = B(ebx+___185c40h);
				ebx &= 0xff;
			}
			else {

				ecx = D(esp+8);
				edx = D(esp+0xc);
				ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				esi = D(___1a10b0h);
				ebx += ebp;
				L(edx) >>= 2;

				while(1){

					H(ecx) = L(edx);

					while(1){

						eax = D(esi);
						D(ebx) = eax;
						ebx += 4;
						esi += 4;
						H(ecx)--;
					
						if(H(ecx) == 0) break;
					}

					ebx += 0x280;
					L(edx) <<= 2;
					ebx -= edx;
					L(edx) >>= 2;
					L(ecx)--;
				
					if(L(ecx) == 0) break;
				}

				ebx = 0;
				L(ebx) = B(___185c6fh);
			}

			ebp += ebx;
			edx = D(esp+0x10);
			eax = D(esp+0x14);
			edx++;
			eax++;
			D(esp+0x10) = edx;
			D(esp+0x14) = eax;
			edi = D(esp+4);
			esi = D(esp+0x10);
			ecx = strlen(edi);
		
			if(ecx <= esi) break;
		}
	}
}
