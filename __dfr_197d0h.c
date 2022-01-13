#include "drally.h"

	extern __DWORD__ ___19dec0h[4];
	extern __BYTE__ ___1a0ffch[];

void ___197d0h_cdecl(__DWORD__ A0, __DWORD__ A1){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0xc];


	D(esp+4) = A0;

	while(1){

		esi = A1;
		ebx = D(esp+4);

		eax = (int)(ebx+esi)/2;


		edi = ___19dec0h[eax];

		while(1){

			while(1){
			
				if((int)edi <= (int)___19dec0h[ebx]) break;
				ebx++;
			}

			eax = esi;

			while(1){

				edx = ___19dec0h[eax];
				if((int)edi >= (int)edx) break;
				eax--;
				esi--;
			}

			if((int)ebx <= (int)esi){

				D(esp) = ___19dec0h[ebx];
				___19dec0h[ebx] = edx;
				___19dec0h[eax] = D(esp);
				edx = 0xb*esi;
				eax = 0xb*ebx;
				ebp = 0xb*(ebx+1);

				while(1){

					B(esp) = B(___1a0ffch+eax);
					B(___1a0ffch+eax) = B(___1a0ffch+edx);
					B(___1a0ffch+edx) = B(esp);
				
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

		if((int)ebx >= (int)A1) break;
		D(esp+4) = ebx;
	}
}
