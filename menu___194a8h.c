#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

#if defined(DR_CDCHECK)
#include "drally_keyboard.h"
#include "sfx.h"
#endif // DR_CDCHECK

#if defined(DR_CDCHECK)
	extern __DWORD__ ___24cc54h_sfx_volume;
#endif // DR_CDCHECK

	extern __BYTE__ ___185a24h[];
	extern __BYTE__ ___185a2ch[];
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185b58h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___185a48h[];
	extern __BYTE__ ___185a44h[];
	extern __BYTE__ ___185a40h[];
	extern __BYTE__ ___185a3ch[];
	extern __BYTE__ ___1a01e0h[];
	extern __DWORD__ ___243d44h;
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185a5ch[];

#if defined(DR_CDCHECK)
int cdcheck___3e4a0h(void);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
void ___2ab50h(void);
void ___13bd4h_cdecl(__DWORD__, __DWORD__);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
#endif // DR_CDCHECK

void ___13710h(__DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3a6a4h_v2(int);
void ___2415ch(void);
void shop_main(void);
int ___148cch_cdecl(int x, int y, __DWORD__ A3, int * A4);
__DWORD__ ___146c4h_cdecl(__DWORD__);
__DWORD__ ___3ab5ch_cdecl(__DWORD__);
void ___190c4h(void);
__DWORD__ ___18924h(void);
void ___18cf0h(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___2b5f0h(void);


static void menu___194a8h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[4];
	racer_t * 	s_6c;
		
		
	s_6c = (racer_t *)___1a01e0h;
	D(___185a24h) = 0;

	while(1){

		if(D(___185a2ch)) return;
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xe600, ___1a1138h__VESA101_BACKGROUND+0xe600, 0x2af80);
		___13710h(0, 0);
		___13710h(1, 1);
		___3a6a4h_v2(0);

		ebp = ___146c4h_cdecl(1);
		if(ebp == -1) return;

		switch(ebp){
		case 0: // START A NEW GAME / ENTER THE SHOP
			if(strcmp(___1866b8h+0x1c2, "Start A New Game") == 0){

				___13710h(1, 0);

				if(___3ab5ch_cdecl(1)){
					
					write_b(___185b58h+1, 0);
					write_b(___185b58h+0xa, 1);
					write_b(___185b58h+0xb, 1);
					write_b(___185b58h+0xd, 1);
					D(___185a48h) = 1;
					D(___185a44h) = 1;
					D(___185a40h) = 1;
					D(___185a3ch) = 1;
					edx = s_6c[D(___1a1ef8h)].color;
					___2415ch();
					s_6c[D(___1a1ef8h)].color = edx;
					___2b5f0h();
					___243d44h = 1;
					B(___185b58h+0xa) = 1;  
					strcpy(___1866b8h, "Continue Racing");
					strcpy(___1866b8h+0x1c2, "Enter The Shop");
					shop_main();
    				D(___185a24h) = 1;
				}
			}
			else {

				shop_main();
    			D(___185a24h) = 1;
			}
			break;
		case 1: // END CURRENT GAME
			___13710h(1, 0);
			___13248h_cdecl(0xaa, 0xdc, 0x12c, 0x50, 1);
			___12e78h_v3(___1a1108h___185c0bh, "End current game?", 232, 228);
			D(esp) = 1;
			eax = ___148cch_cdecl(0xb4, 0x102, 1, (int *)esp)&0xff;

			if(D(esp)&&eax){
				
				B(___185b58h+1) = 1;
				B(___185b58h+0xa) = 0;
				B(___185b58h+0xb) = 0;
				B(___185b58h+0xd) = 0;
				D(___185a48h) = 0;
				D(___185a44h) = 0;
				strcpy(___1866b8h+0x1c2, "Start A New Game");
				D(___185a40h) = 0;
				D(___185a3ch) = 0;
				strcpy(___1866b8h, "Start Racing");
				___2415ch();
				___2b5f0h();
				___243d44h = 1;
				D(___185a5ch+0x34) = 0;
			}
			break;
		case 2: // SEE CURRENT STATISTICS
			___190c4h();
			break;
		case 3:	// LOAD GAME
			if(___18924h()){
				
				shop_main();
    			D(___185a24h) = 1;
			}
			break;
		case 4: // SAVE GAME
			___18cf0h();
			break;
		case 5: // PREVIOUS MENU
			D(___185a5ch+0x34) = 0;
			while(B(___185b58h+D(___185a5ch+0x34)+9) == 0){

				if((int)D(___185a5ch+0x34) >= (int)(D(___185a5ch+0x1c)-1)){

					D(___185a5ch+0x34) = 0;
				}
				else {

					D(___185a5ch+0x34)++;
				}
			}
			return;
		default:
			break;
		}
	}
}

// START RACING
void menu___194a8h_2(void){

#if defined(DR_CDCHECK)
	__BYTE__ 	scan;

	if(cdcheck___3e4a0h()){
#endif // DR_CDCHECK
		menu___194a8h();
#if defined(DR_CDCHECK)
	}
	else {
			
		___13710h(0, 0);
		___13248h_cdecl(78, 175, 0x1e4, 0x61, 1);
		___12e78h_v3(___1a1108h___185c0bh, "Please insert Death Rally to CD-ROM drive!", 118, 193);
		___12e78h_v3(___1a10cch___185ba9h, "CONTINUE", 244, 225);
		___13bd4h_cdecl(218, 231);
		___12cb8h__VESA101_PRESENTSCREEN();

		while(1){

			dRally_Sound_pushEffect(1, SFX_BUMMER, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			___5994ch();
			___59b3ch();
			scan = 0;

			while(1){

				if((scan == DR_SCAN_ENTER)||(scan == DR_SCAN_KP_ENTER)) break;
				scan = ___5994ch();
				___2ab50h();
				___2ab50h();
				___13bd4h_cdecl(218, 231);
				if(scan == DR_SCAN_ESCAPE) break;
			}

			___5994ch();
			___59b3ch();
			if(cdcheck___3e4a0h()) break;
			if(scan == DR_SCAN_ESCAPE) break;
		}

		if(scan != DR_SCAN_ESCAPE) menu___194a8h();
	}
#endif // DR_CDCHECK
}
