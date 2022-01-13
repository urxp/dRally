#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___185a24h[];
	extern __BYTE__ ___185a2ch[];
	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
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

void ___13710h(__DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3a6a4h(void);
void ___2415ch(void);
void shop_main(void);
int ___148cch_cdecl(int x, int y, __DWORD__ A3, int * A4);
void restoreDefaultScreenBuffer(void);
__DWORD__ ___146c4h_cdecl(__DWORD__);
__DWORD__ ___3ab5ch_cdecl(__DWORD__);
void ___190c4h(void);
__DWORD__ ___18924h(void);
void ___18cf0h(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___2b5f0h(void);


// START RACING
void menu___194a8h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[4];
		
		
	D(___185a24h) = 0;

	while(1){

		if(D(___185a2ch)) return;
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xe600, ___1a1138h__VESA101h_DefaultScreenBufferB+0xe600, 0x2af80);
		___13710h(0, 0);
		___13710h(1, 1);

		if(D(___185a24h) != 0){

			restoreDefaultScreenBuffer();
			___3a6a4h();
			D(___185a24h) = 0;
		}
		___12cb8h__VESA101_PRESENTSCREEN();

		ebp = ___146c4h_cdecl(1);
		if(ebp == 0xffffffff) return;

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
					edx = D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c);
					___2415ch();
					D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) = edx;
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
			while(B(D(___185a5ch+0x34)+___185b58h+9) == 0){

				edx = D(___185a5ch+0x1c)-1;

				if((int)D(___185a5ch+0x34) >= (int)edx){

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
