#include "drally.h"

	extern byte ___19dec0h[];
	extern byte ___1a0ffch[];

void ___197d0h_cdecl(dword A0, dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xc];


	D(esp+4) = A0;
	D(esp+8) = A1;

	while(1){

		esi = D(esp+8);
		ebx = D(esp+4);

		eax = (int)(ebx+esi)/2;


		edi = D(eax*4+___19dec0h);

		while(1){

			while(1){
			
				if((int)edi <= (int)D(ebx*4+___19dec0h)) break;
				ebx++;
			}

			eax = 4*esi;

			while(1){

				edx = D(eax+___19dec0h);
				if((int)edi >= (int)edx) break;
				eax -= 4;
				esi--;
			}

			if((int)ebx <= (int)esi){

				D(esp) = D(___19dec0h+4*ebx);
				D(___19dec0h+4*ebx) = edx;
				D(___19dec0h+eax) = D(esp);
				edx = 0xb*esi;
				eax = 0xb*ebx;
				ebp = 0xb*(ebx+1);

				while(1){

					B(esp) = B(eax+___1a0ffch);
					B(eax+___1a0ffch) = B(edx+___1a0ffch);
					B(edx+___1a0ffch) = B(esp);
				
					edx++;
					eax++;
					if(eax == ebp) break;
				}

				esi--;
				ebx++;
			}

			if((int)ebx >= (int)esi) break;
		}

		if((int)esi > (int)D(esp+4)) ___197d0h_cdecl(D(esp+4), esi);

		if((int)ebx >= (int)D(esp+8)) break;
		D(esp+4) = ebx;
	}
}
