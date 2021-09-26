#include "drally.h"

	extern byte ___19bd60h[];
	extern byte ___196a78h[];
	extern byte ___196a84h[];
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte ___185a34h[];
	extern byte ___19eb50h[];
	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern byte ___196a7ch[];
	extern byte ___185c0bh[];
	extern byte ___1a10fch[];
	extern byte ___1a1108h[];
	extern byte ___196a80h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a1ef4h[];
	extern byte CONNECTION_TYPE[];
	extern byte ___185a24h[];
	extern byte ___196a74h[];
	extern byte ___196ad4h[];
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern byte ___1a116ch[];
	extern byte ___1a1f4eh[];
	extern byte ___1a01e0h[];
	extern byte ___185a5ch[];
	extern byte ___185b58h[];


void dRally_Sound_setMasterVolume(dword vol);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void ___13710h(dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3a6a4h(void);
dword ___146c4h_cdecl(dword);
void restoreDefaultScreenBuffer(void);
//void ___1d00ch(void);
//void ___1d2a8h(void);
//void ___1d9f8h(void);
//void ___1e09ch(void);
//void ___1f124h_cdecl(dword);

#if defined(DR_MULTIPLAYER)
void shop_main(void);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
byte ___148cch_cdecl(dword, dword, dword, dword);
void ___2415ch(void);
void ___23488h_cdecl(dword, dword, dword);
void ___58c60h(void);
void ___2b318h(void);
void ___2ab50h(void);
byte ___59b3ch(void);
byte ___5994ch(void);
byte dRally_Sound_setPosition(dword pos_n);
void ___16e6ch(void);
void ___23230h(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___135fch(dword, dword, dword, dword);
void ___1c374h_cdecl(dword);
void ___1c178h(void);
void ___1b140h(void);
void ___1e4f8h(void);
#endif // DR_MULTIPLAYER
	
void menu___1e888h(dword A1){

#if defined(DR_MULTIPLAYER)

	long long ll_tmp;
	dword 	bb, gg, rr, nn;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x10+8];
	byte * 	esp = __esp+0x10;


	if(A1 != 0xffffffff){

		while(1){

			D(___196a78h) = 1;

#if defined(DR_MULTIPLAYER)
			if((D(___19bd60h) == 0)||(D(___196a84h) == 0)){
#endif // DR_MULTIPLAYER

				memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd200, ___1a1138h__VESA101h_DefaultScreenBufferB+0xd200, 0x2c380);

#if defined(DR_MULTIPLAYER)
			}
			else {

				ebp = 0xffdc;
				edi = 0x640000;
				D(___185a5ch+0x18) = 1;
				restoreDefaultScreenBuffer();
				___2b318h();

				while(1){

					___58c60h();
					if(D(___185a34h) != 0) dRally_Sound_setMasterVolume(ebp);

					D(esp) = 0;
					while(1){

						eax = 0;
						L(eax) = B(esp);
						ebx = D(esp);
						esp -= 4; D(esp) = eax;
						eax = 0xc*ebx;
						edx = edi;
						eax = D(eax+___19eb50h);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						eax = D(esp+8);
						eax = 3*eax;
						edx = edi;
						eax = D(4*eax+___19eb50h+4);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						eax = D(esp+0xc);
						eax = 3*eax;
						edx = edi;
						eax = D(4*eax+___19eb50h+8);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						__DISPLAY_SET_PALETTE_COLOR(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
						esp += 0x10;
						ecx = D(esp);
						ecx++;
						D(esp) = ecx;

						if((int)ecx >= 0x60) break;
					}

					D(esp) = 0x80;

					while(1){

						eax = 0;
						L(eax) = B(esp);
						ebx = D(esp);
						esp -= 4; D(esp) = eax;
						eax = 0xc*ebx;
						edx = edi;
						eax = D(eax+___19eb50h);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						eax = D(esp+8);
						eax = 3*eax;
						edx = edi;
						eax = D(4*eax+___19eb50h+4);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						eax = D(esp+0xc);
						eax = 3*eax;
						edx = edi;
						eax = D(4*eax+___19eb50h+8);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						__DISPLAY_SET_PALETTE_COLOR(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
						esp += 0x10;
						ecx = D(esp);
						ecx++;
						D(esp) = ecx;
					
						if((int)ecx >= 0x100) break;
					}

					edi -= 0x20000;
					ebp -= 0x51e;
				
					if(edi == 0xfffe0000) break;
				}

				memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1138h__VESA101h_DefaultScreenBufferB, 0x4b000);
				___135fch(0, 0x173, 0x27f, 0x6d);

				if(D(___196a7ch) == 0){

					___12e78h_cdecl(D(___1a10fch), ___185c0bh, "press   to enter chat mode", 0x390a3);
					___12e78h_cdecl(D(___1a1108h), ___185c0bh, "F1", 0x390d9);
				}

				___23230h();
			}
#endif // DR_MULTIPLAYER

			___13710h(0, 0);
			___13710h(2, 1);

#if defined(DR_MULTIPLAYER)
			if((D(___19bd60h) != 0)&&(D(___196a84h) != 0)){

				if(D(___196a80h) != 0) ___16e6ch();

				D(___1a1ef8h) = 0x13;
				___12cb8h__VESA101_PRESENTSCREEN();
				___2b318h();

				if(D(___185a34h) != 0) dRally_Sound_setPosition(D(___1a1ef4h));

				edi = 0;
				ebp = 0;
				while(1){

					___58c60h();

					if(D(___185a34h) != 0) dRally_Sound_setMasterVolume(ebp);

					D(esp) = 0;
				
					while(1){

						eax = 0;
						L(eax) = B(esp);
						ebx = D(esp);
						esp -= 4; D(esp) = eax;
						eax = 0xc*ebx;
						edx = edi;
						eax = D(eax+___19eb50h);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						eax = D(esp+8);
						eax = 3*eax;
						edx = edi;
						eax = D(4*eax+___19eb50h+4);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						eax = D(esp+0xc);
						eax = 3*eax;
						edx = edi;
						eax = D(4*eax+___19eb50h+8);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						__DISPLAY_SET_PALETTE_COLOR(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
						esp += 0x10;
						ecx = D(esp);
						ecx++;
						D(esp) = ecx;
					
						if((int)ecx >= 0x60) break;
					}

					D(esp) = 0x80;

					while(1){

						eax = 0;
						L(eax) = B(esp);
						ebx = D(esp);
						esp -= 4; D(esp) = eax;
						eax = 0xc*ebx;
						edx = edi;
						eax = D(eax+___19eb50h);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						eax = D(esp+8);
						eax = 3*eax;
						edx = edi;
						eax = D(4*eax+___19eb50h+4);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						eax = D(esp+0xc);
						eax = 3*eax;
						edx = edi;
						eax = D(4*eax+___19eb50h+8);
						ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
						eax += 0x8000;
						edx += !!(eax < 0x8000);
						eax = (eax >> 0x10)|(edx << 0x10);
						eax += 0x8000;
						eax = (int)eax>>0x10;
						eax &= 0xff;
						esp -= 4; D(esp) = eax;
						__DISPLAY_SET_PALETTE_COLOR(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
						esp += 0x10;
						ecx = D(esp);
						ecx++;
						D(esp) = ecx;
					
						if((int)ecx >= 0x100) break;
					}

					edi += 0x20000;
					ebp += 0x51e;

					if(edi == 0x640000) break;
				}


				if((D(___196a7ch) == 1)&&(D(CONNECTION_TYPE) != 2)){
						
					D(___19bd60h) = 0;
					D(CONNECTION_TYPE) = 0;
				}

				D(___196a7ch) = 0;
				D(___185a24h) = 0;
				D(___185a34h) = 0;
				D(___196a74h) = 1;
				D(___196a84h) = 0;

				if(D(___196a80h) != 0){

					___5994ch();
					___59b3ch();

					edx = 0;
					while(1){

						if((edx == 0x1c)||(edx == 0x9c)) break;
						edx = ___5994ch();
						___2ab50h();
						___2ab50h();

						if(edx == 1) break;
					}

					___5994ch();
					___59b3ch();
					D(___196a80h) = 0;
					D(___196ad4h) = 0;
					memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd200, ___1a1138h__VESA101h_DefaultScreenBufferB+0xd200, 0x2c380);
					___13710h(0, 0);
					___13710h(2, 1);
					___12cb8h__VESA101_PRESENTSCREEN();
				}
			}
#endif // DR_MULTIPLAYER

			if(D(___185a24h) != 0){

				restoreDefaultScreenBuffer();
				___3a6a4h();
				___12cb8h__VESA101_PRESENTSCREEN();
				D(___185a24h) = 0;
			}
			else {
				
				___12cb8h__VESA101_PRESENTSCREEN();
			}

			D(esp+4) = ___146c4h_cdecl(2);

			switch(D(esp+4)){
#if defined(DR_MULTIPLAYER)
			case 0:
				D(___196a78h) = 0;
				eax = strcmp( ___1866b8h+0x384, "Continue Current Game");
				if(eax){

					// Initialize A New Game
					___1c374h_cdecl(eax);
				}
				else {

					shop_main();
					D(___185a24h) = 1;
				}
				break;
			case 1:
				D(___196a78h) = 0;

				if(strcmp(___1866b8h+0x3b6, "Abort Current Game")){
					
					// Join an existing game
					if(D(CONNECTION_TYPE) == 2){
			
						___1b140h();
					}
					else {
					
						___1c178h();
					}
				}
				else {

					___13710h(2, 0);
					___13248h_cdecl(0xaa, 0xdc, 0x12c, 0x50, 1);
					___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Abort current game?", 0x23ada);
					D(esp) = 1;
					eax = ___148cch_cdecl(0xb4, 0x102, 1, esp);

					if((D(esp) != 0)&&(eax != 0)){
					
						ebp = ___1a116ch;
						edx = 0;
						ebx = ebp+0x96;
					
						while(1){

							esi = ebx;
							edi = ebp;
							strcpy(edi, esi);
							B(edx+___1a1f4eh) = B(edx+___1a1f4eh+1);

							edx++;
							ebp += 0x96;
							ebx += 0x96;
							if((int)edx >= 0x15) break;
						}

						strcpy(___1a116ch+0xc4e, "-- ");
						strcat(___1a116ch+0xc4e, 0x6c*D(___1a1ef8h)+___1a01e0h);
						strcat(___1a116ch+0xc4e, " aborted current netgame.");
						B(___1a1f4eh+0x15) = 0;
						___23488h_cdecl(___1a116ch+0xc4e, 0x64, 0x14);
						___23230h();
						___1e4f8h();
						D(___196a84h) = 0;
						___2415ch();
					}
				}
				break;
#endif // DR_MULTIPLAYER
			case 2:		// NETWORK CONNECTION
				D(___196a78h) = 0;
				//___1d00ch();
				break;
			case 3:		// SERIAL CONNECTION
				D(___196a78h) = 0;
				//___1d2a8h();
				break;
			case 4:		// DIAL MODEM
				D(___196a78h) = 0;
				//___1d9f8h();
				break;
			case 5:		// ANSWER MODEM
				D(___196a78h) = 0;
				//___1e09ch();
				break;
			case 6:		// SERIAL/COM OPTIONS
				//___1f124h_cdecl(D(esp+4));
				break;
			case 7:		// PREVIOUS MENU
				D(___185a5ch+0x50) = 0;
				D(esp+4) = 0xffffffff;

				while(B(D(___185a5ch+0x50)+___185b58h+0x12) == 0){

					if((int)D(___185a5ch+0x50) >= (int)(D(___185a5ch+0x38)-1)){

						D(___185a5ch+0x50) = 0;
					}
					else {

						D(___185a5ch+0x50)++;
					}
				}
				D(___196a78h) = 0;
				break;
			default:
				break;
			}

			if(D(esp+4) == 0xffffffff) break;
		}
	}
	
	D(___196a78h) = 0;
#else
	printf("[dRally.MP] Multiplayer not supported!\n");
#endif // DR_MULTIPLAYER
}
