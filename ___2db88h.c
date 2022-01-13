#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1a0a50h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e5ch;
	extern __DWORD__ ___1a017ch_PriceSabotage;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

void ___2d184h(void);
void ___2d20ch(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___2d054h_cdecl(__DWORD__);

// MARKET SABOTAGE
void ___2db88h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x28];
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;


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
		itoa_watcom106(___1a017ch_PriceSabotage, esp+0x14, 0xa);
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
		if(___19bd60h != 0){

			___2d184h();
		}
		else {
#endif // DR_MULTIPLAYER
			if((int)ebp >= (int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x44)){

				___2d184h();
			}
			else {

				___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);

				VESA101_16X16_FORMAT_PRINT("[No sabotage. No way.", 170, 124);
				VESA101_16X16_FORMAT_PRINT("", 170, 140);
				VESA101_16X16_FORMAT_PRINT("What? You crazy, man? Nobody", 170, 156);
				VESA101_16X16_FORMAT_PRINT("touches the Adversary's auto-", 170, 172);
				VESA101_16X16_FORMAT_PRINT("mobile and lives, nobody.", 170, 188);
				VESA101_16X16_FORMAT_PRINT("", 170, 204);
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
