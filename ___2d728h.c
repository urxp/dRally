#include "drally.h"

	extern __BYTE__ ___1a0a50h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e5ch;
	extern __DWORD__ ___1a0170h_PriceMines;

int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___2d184h(void);
void ___2d20ch(void);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___2d054h_cdecl(__DWORD__);

// MARKET MINES
void ___2d728h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x28];
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;

	if(D(___1a0a50h) == 1){

		ecx = 0x60;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x27890;
		esip = ___1a1e5ch;
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

		___2d054h_cdecl(0);
		itoa_watcom106(___1a0170h_PriceMines, esp, 0xa);
		strcpy(esp+0x14, "$");
		strcat(esp+0x14, esp);
		___12f60h_cdecl(esp+0x14, ___25180h_cdecl(esp+0x14)+0x34590);
	}

	if(D(___1a0a50h) == 0){

		ecx = 0x60;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x27890;
		esip = ___1a1e5ch+0x12000;
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

		___2d184h();
	}

	if(D(___1a0a50h) == 0xffffffff){

		ecx = 0x60;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x27890;
		esip = ___1a1e5ch+0x9000;
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
