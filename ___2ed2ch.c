#include "drally.h"

	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __POINTER__ ___1a1e54h;
	extern __POINTER__ ___1a1e64h;
	extern __POINTER__ ___1a1e58h;
	extern __POINTER__ ___1a1e98h;

void ___25330h(void);
void ___2d728h(void);
void ___2d898h(void);
void ___2da10h(void);
void ___2db88h(void);
void ___2ddc8h(void);

// MARKET BACKGROUND
void ___2ed2ch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__POINTER__	ebxp;
	__POINTER__ 	esip;


	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xe600, ___1a1138h__VESA101_BACKGROUND+0xe600, 0x2a580);

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		esip = ___1a1e64h;
	}
	else {
#endif // DR_MULTIPLAYER
		esip = ___1a1e54h;
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER


	ecx = 0x10;
	edx = 0x280;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xe600;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esip);
			if(L(eax) != 0) B(ebxp) = L(eax);
			ebxp++;
			esip++;
			edi--;
			if(edi == 0) break;
		}

		ebxp += 0x280;
		ebxp -= edx;
		ecx--;
		if(ecx == 0) break;
	}

	___25330h();
	ecx = 0x60;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x13890;
	esip = ___1a1e58h;
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

	ecx = 0x60;
	ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x27a30;
	esip = ___1a1e98h+0x9000;
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

	___2d728h();
	___2d898h();
	___2da10h();
	___2db88h();
	___2ddc8h();
}
