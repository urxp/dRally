#include "drally.h"
#include "drally_structs_fixed.h"

	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a0f18h[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___1a1168h[];
	extern __BYTE__ ___1de7d0h[];

// SORT RANKINGS
void ___30a84h_cdecl(__DWORD__ A1, __DWORD__ A2){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x10];
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;
	D(esp+0x4) = A1;
	D(esp+0x8) = A2;

	while(1){

		ebx = D(esp+0x4);
		D(esp+0xc) = D(esp+0x8);
		eax = (int)(ebx+D(esp+0x8))/2;
		edx = s_6c[eax].points;

		while(1){

			while(1){
			
				if((int)edx <= (int)s_6c[ebx].points) break;
				ebx++;
			}

			ecx = 0x6c*D(esp+0xc);

			while(1){

				if((int)edx >= (int)s_6c[ecx/0x6c].points) break;
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

				memcpy(___1a0f18h, &s_6c[ebx], sizeof(racer_t));
				memcpy(&s_6c[ebx], &s_6c[D(esp+0xc)], sizeof(racer_t));
				memcpy(&s_6c[D(esp+0xc)], ___1a0f18h, sizeof(racer_t));

#if defined(DR_MULTIPLAYER)
				if(___19bd60h != 0){

					eax = 0;
					while(1){

						ecx = B(___1a1168h+eax);

						if(ecx != ebx){

							if(ecx == D(esp+0xc)) B(___1a1168h+eax) = L(ebx);
						}
						else {
						
							B(___1a1168h+eax) = B(esp+0xc);
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
