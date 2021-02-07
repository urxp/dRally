#include "drally.h"

	extern byte ___1a01e0h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a0f18h[];
	extern byte ___19bd60h[];
	extern byte ___1a1168h[];
	extern byte ___1de7d0h[];

// SORT RANKINGS
void ___30a84h_cdecl(dword A1, dword A2){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x10];


	D(esp+0x4) = A1;
	D(esp+0x8) = A2;

	while(1){

		ebx = D(esp+0x4);
		D(esp+0xc) = D(esp+0x8);
		eax = (int)(ebx+D(esp+0x8))/2;
		edx = D(0x6c*eax+___1a01e0h+0x44);

		while(1){

			while(1){
			
				if((int)edx <= (int)D(0x6c*ebx+___1a01e0h+0x44)) break;
				ebx++;
			}

			ecx = 0x6c*D(esp+0xc);

			while(1){

				if((int)edx >= (int)D(ecx+___1a01e0h+0x44)) break;
				ecx = ecx-0x6c;
				D(esp+0xc)--;
			}

			if((int)ebx <= (int)D(esp+0xc)){
			
				if(ebx != D(___1a1ef8h)){

					if(D(___1a1ef8h) == D(esp+0xc)) D(___1a1ef8h) = ebx;
				}
				else {
				
					D(___1a1ef8h) = D(esp+0xc);
				}

				memcpy(___1a0f18h, ___1a01e0h+0x6c*ebx, 0x6c);
				memcpy(___1a01e0h+0x6c*ebx, ___1a01e0h+0x6c*D(esp+0xc), 0x6c);
				memcpy(___1a01e0h+0x6c*D(esp+0xc), ___1a0f18h, 0x6c);

#if defined(DR_MULTIPLAYER)
				if(D(___19bd60h) != 0){

					eax = 0;
					while(1){

						ecx = B(eax+___1a1168h);

						if(ecx != ebx){

							if(ecx == D(esp+0xc)) B(eax+___1a1168h) = L(ebx);
						}
						else {
						
							B(eax+___1a1168h) = B(esp+0xc);
						}

						eax++;
						if((int)eax >= 4) break;
					}

					memcpy(___1a0f18h, ___1de7d0h+0x54*ebx, 0x54);
					memcpy(___1de7d0h+0x54*ebx, ___1de7d0h+0x54*D(esp+0xc), 0x54);
					memcpy(___1de7d0h+0x54*D(esp+0xc), ___1a0f18h, 0x54);
				}
#endif // DR_MULTIPLAYER

				ebx++;
				D(esp+0xc)--;
			}

			if((int)ebx >= (int)D(esp+0xc)) break;
		}

		if((int)D(esp+0x4) < (int)D(esp+0xc)) ___30a84h_cdecl(D(esp+0x4), D(esp+0xc));
		if((int)ebx >= (int)D(esp+8)) break;
		D(esp+0x4) = ebx;
	}
}
