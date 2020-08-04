#include "drally.h"

	extern byte ___185a24h[];
	extern byte ___185a2ch[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1100h__VESA101h_DefaultScreenBuffer[];
	extern byte ___1866b8h[];
	extern byte ___185b58h[];
	extern byte ___1a1ef8h[];
	extern byte ___185a48h[];
	extern byte ___185a44h[];
	extern byte ___185a40h[];
	extern byte ___185a3ch[];
	extern byte ___1a020ch[];
	extern byte ___243d44h[];
	extern byte ___1866b8h[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___185a5ch[];

void ___13710h(dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3a6a4h(void);
void ___2415ch(void);
void shop_main(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
byte ___148cch_cdecl(dword, dword, dword, dword);
void restoreDefaultScreenBuffer(void);
dword ___146c4h_cdecl(dword);
dword ___3ab5ch_cdecl(dword);
void ___190c4h(void);
dword ___18924h(void);
void ___18cf0h(void);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___2b5f0h(void);


// START RACING
void menu___194a8h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[4];
		
		
	D(___185a24h) = 0;

	while(1){

		if(D(___185a2ch)) return;
		memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0xe600, D(___1a1138h__VESA101h_DefaultScreenBufferB)+0xe600, 0x2af80);
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
		case 0:
			if(strcmp(___1866b8h+0x1c2, "Start A New Game") == 0){

				___13710h(1, 0);

				if(___3ab5ch_cdecl(1)){
					
					B(___185b58h+1) = 0;
					B(___185b58h+0xa) = 1;
					B(___185b58h+0xb) = 1;
					B(___185b58h+0xd) = 1;
					D(___185a48h) = 1;
					D(___185a44h) = 1;
					D(___185a40h) = 1;
					D(___185a3ch) = 1;
					edx = D(0x6c*D(___1a1ef8h)+___1a020ch);
					___2415ch();
					D(0x6c*D(___1a1ef8h)+___1a020ch) = edx;
					___2b5f0h();
					D(___243d44h) = 1;
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
		case 1:
			___13710h(1, 0);
			___13248h_cdecl(0xaa, 0xdc, 0x12c, 0x50, 1);
			___12e78h_cdecl(D(___1a1108h), ___185c0bh, "End current game?", 0x23ae8);
			D(esp) = 1;
			eax = ___148cch_cdecl(0xb4, 0x102, 1, esp)&0xff;

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
				D(___243d44h) = 1;
				D(___185a5ch+0x34) = 0;
			}
			break;
		case 2:
			___190c4h();
			break;
		case 3:	// LOAD GAME
			if(___18924h()){

				shop_main();
				D(___185a24h) = 1;
			}
			break;
		case 4:
			___18cf0h();
			break;
		case 5:
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
