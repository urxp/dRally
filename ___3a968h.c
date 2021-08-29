#include "drally.h"

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1124h__VESA101h_ScreenBufferA;
	extern void * ___1a10c4h;

void ___2aa08h(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
void dRally_Sound_setMasterVolume(dword vol);
byte ___5994ch(void);
byte ___59b3ch(void);

// GOING TO PREPARE TO RACE 
void ___3a968h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];
	void * 	esip;
	void * 	ebxp;
	void * 	edip;


	eax = A1;
	D(esp) = eax;
	ebx = 0xb680;
	ecx = 0xfffc;
	edx ^= edx;
	D(esp+0x8) = ebx;
	D(esp+0xc) = ecx;
	D(esp+0x4) = edx;
	D(esp+0x10) = edx;

	while(1){

		___2aa08h();
		edx = 0xf*D(esp+0x10);
		edi ^= edi;
		ebp = 0xbb80;
		D(esp+0x1c) = edi;
		D(esp+0x18) = ebp;
		D(esp+0x14) = edx;

		while(1){

			ecx = D(esp+0x18);
			edx ^= edx;
			esi = D(esp+0x14);
			D(esp+0x20) = edx;
			D(esp+0x24) = edx;
			ebp = ecx+esi;

			while(1){

				eax = D(esp+0x20);
				ecx = 0xf;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+ebp-0x500;
				edip = ___1a1124h__VESA101h_ScreenBufferA+ebp-0x500;
				esip = ___1a10c4h+eax;
				edx = ecx;

				while(1){

					H(ecx) = L(edx);

					while(1){

						L(eax) = B(esip);
						if(L(eax) != 0){
						
							L(eax) = B(edip);
							B(ebxp) = L(eax);
						}

						ebxp++;
						esip++;
						edip++;
						H(ecx)--;
						if(H(ecx) == 0) break;
					}

					ebxp += 0x280;
					ebxp -= edx;
					edip += 0x280;
					edip -= edx;
					L(ecx)--;
					if(L(ecx) == 0) break;
				}

				ebp += 0xf;
				edx = D(esp+0x20);
				ebx = D(esp+0x24);
				edx += 0xe1;
				ebx++;
				D(esp+0x20) = edx;
				D(esp+0x24) = ebx;
				
				if((int)ebx >= 0xa) break;
			}

			edi = D(esp+0x1c);
			esi = D(esp+0x18);
			edi++;
			esi += 0x2580;
			D(esp+0x1c) = edi;
			D(esp+0x18) = esi;
			
			if((int)edi >= 0x1b) break;
		}

		___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x8), ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xbb80+0xf*D(esp+0x10)-0x500, 0x96, 0x195);

		if(D(esp) == 0xffffffff) dRally_Sound_setMasterVolume(D(esp+0xc));
		if(D(esp) == 1) dRally_Sound_setMasterVolume(D(esp+0x4));

		esi = D(esp+0xc);
		edi = D(esp+0x4);
		ebp = D(esp+0x10);
		ecx = D(esp+0x8);
		esi -= 0x5f4;
		edi += 0x5f4;
		ebp++;
		ecx += 0xf;
		D(esp+0xc) = esi;
		D(esp+0x4) = edi;
		D(esp+0x10) = ebp;
		D(esp+0x8) = ecx;

		if((int)ebp >= 0x2b) break;
	}

	___5994ch();
	___59b3ch();
}
