#include "drally.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___1a0a50h[];
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1e5ch;
	extern byte ___1a017ch_PriceSabotage[];
#if defined(DR_MULTIPLAYER)
	extern byte ___19bd60h[];
#endif // DR_MULTIPLAYER

void ___2d184h(void);
void ___2d20ch(void);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, dword A2);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___2d054h_cdecl(dword);

// MARKET SABOTAGE
void ___2db88h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];
	void * 	ebxp;
	void * 	esip;


	ecx = D(___1a1ef8h);
	edx = 0;
	eax = 0;
	ebp = 0;

	while(1){

		ebx = D(eax+___1a01e0h+0x44);
		if(((int)ebp < (int)ebx)&&(edx != ecx)) ebp = ebx;
		edx++;
		eax += 0x6c;
		if((int)edx >= 0x14) break;
	}

	if(D(___1a0a50h+0xc) == 1){

		ecx = 0x60;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x279c8;
		esip = ___1a1e5ch+0x6c00;
		edx = ecx;
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esip);
				D(ebxp) = eax;
				ebxp += 0x4;
				esip += 0x4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebxp += 0x280;
			L(edx) <<= 2;
			ebxp -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		___2d054h_cdecl(0x3);
		itoa_watcom106(D(___1a017ch_PriceSabotage), esp+0x14, 0xa);
		strcpy(esp, "$");
		strcat(esp, esp+0x14);
		___12f60h_cdecl(esp, ___25180h_cdecl(esp)+0x346c8);
	}

	if(D(___1a0a50h+0xc) == 0){

		ecx = 0x60;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x279c8;
		esip = ___1a1e5ch+0x18c00;
		edx = ecx;
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esip);
				D(ebxp) = eax;
				ebxp += 0x4;
				esip += 0x4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebxp += 0x280;
			L(edx) <<= 2;
			ebxp -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) != 0){

			___2d184h();
		}
		else {
#endif // DR_MULTIPLAYER
			if((int)ebp >= (int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x44)){

				___2d184h();
			}
			else {

				___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
				___13094h_cdecl("[No sabotage. No way.", 0x136aa);
				___13094h_cdecl("", 0x15eaa);
				___13094h_cdecl("What? You crazy, man? Nobody", 0x186aa);
				___13094h_cdecl("touches the Adversary's auto-", 0x1aeaa);
				___13094h_cdecl("mobile and lives, nobody.", 0x1d6aa);
				___13094h_cdecl("", 0x1feaa);
			}
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
	}

	if(D(___1a0a50h+0xc) == 0xffffffff){

		ecx = 0x60;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x279c8;
		esip = ___1a1e5ch+0xfc00;
		edx = ecx;
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esip);
				D(ebxp) = eax;
				ebxp += 0x4;
				esip += 0x4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebxp += 0x280;
			L(edx) <<= 2;
			ebxp -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		___2d20ch();
	}

	return;
}
