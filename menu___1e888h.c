#include "drally.h"
#include "drally_keyboard.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___196a78h[];
	extern __BYTE__ ___196a84h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___185a34h[];
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a1100h__VESA101h_DefaultScreenBuffer;
	extern __BYTE__ ___196a7ch[];
	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a10fch;
	extern __POINTER__ ___1a1108h;
	extern __BYTE__ ___196a80h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a1ef4h[];
	extern __DWORD__ CONNECTION_TYPE;
	extern __BYTE__ ___185a24h[];
	extern __BYTE__ ___196a74h[];
	extern __BYTE__ ___196ad4h[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___185a5ch[];
	extern __BYTE__ ___185b58h[];


void dRally_Sound_setMasterVolume(__DWORD__ vol);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void ___13710h(__DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3a6a4h_v2(int);
__DWORD__ ___146c4h_cdecl(__DWORD__);
void ___1d00ch(void);
//void ___1d2a8h(void);
//void ___1d9f8h(void);
//void ___1e09ch(void);
//void ___1f124h_cdecl(__DWORD__);

#if defined(DR_MULTIPLAYER)
void shop_main(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
__BYTE__ ___148cch_cdecl(__DWORD__, __DWORD__, __DWORD__, int *);
void ___2415ch(void);
void ___23488h_cdecl(__POINTER__, __DWORD__, __DWORD__);
void ___58c60h(void);
void ___2b318h(void);
void ___2ab50h(void);
__BYTE__ ___59b3ch(void);
__BYTE__ ___5994ch(void);
__BYTE__ dRally_Sound_setPosition(__DWORD__ pos_n);
void ___16e6ch(void);
void ___23230h(void);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___1c374h_cdecl(__DWORD__);
void ___1c178h(void);
void ___1b140h(void);
void ___1e4f8h(void);
#endif // DR_MULTIPLAYER
void dRChatbox_push(const char * line, int col);

static __DWORD__ helper_color(__DWORD__ A0, __DWORD__ A1){

	__DWORD__ 	eax, edx;

	eax = A0;
	edx = A1;
	eax = edx / 0x10000 * eax;
	eax += 0x8000;
	eax = (int)eax>>0x10;
	eax &= 0xff;

	return eax;
}




void menu___1e888h(void){

	__DWORD__ 	bb, gg, rr, nn;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	__esp[0x10+8];
	__BYTE__ * 	esp = __esp+0x10;
	char 	buffer[0x96];
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;

	while(1){

		D(___196a78h) = 1;

#if defined(DR_MULTIPLAYER)
		if((___19bd60h == 0)||(D(___196a84h) == 0)){
#endif // DR_MULTIPLAYER

			memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd200, ___1a1138h__VESA101_BACKGROUND+0xd200, 0x2c380);

#if defined(DR_MULTIPLAYER)
		}
		else {

			ebp = 0xffdc;
			edi = 0x640000;
			D(___185a5ch+0x18) = 1;
			___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a1100h__VESA101h_DefaultScreenBuffer;
			___2b318h();

			while(1){

				___58c60h();
				if(D(___185a34h) != 0) dRally_Sound_setMasterVolume(ebp);

				nn = 0;
				while(1){

					rr = helper_color(___19eb50h[nn].r, edi);
					gg = helper_color(___19eb50h[nn].g, edi);
					bb = helper_color(___19eb50h[nn].b, edi);
					__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
					nn++;
					if((int)nn >= 0x60) break;
				}

				nn = 0x80;
				while(1){

					rr = helper_color(___19eb50h[nn].r, edi);
					gg = helper_color(___19eb50h[nn].g, edi);
					bb = helper_color(___19eb50h[nn].b, edi);
					__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);

					nn++;
					if((int)nn >= 0x100) break;
				}

				edi -= 0x20000;
				ebp -= 0x51e;
			
				if(edi == 0xfffe0000) break;
			}

			memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1138h__VESA101_BACKGROUND, 0x4b000);
			___135fch(0, 0x173, 0x27f, 0x6d);

			if(D(___196a7ch) == 0){

				___12e78h_cdecl(___1a10fch, (font_props_t *)___185c0bh, "press   to enter chat mode", 0x390a3);
				___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "F1", 0x390d9);
			}

			___23230h();
		}
#endif // DR_MULTIPLAYER

		___13710h(0, 0);
		___13710h(2, 1);

#if defined(DR_MULTIPLAYER)
		if((___19bd60h != 0)&&(D(___196a84h) != 0)){

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

				nn = 0;
				while(1){

					rr = helper_color(___19eb50h[nn].r, edi);
					gg = helper_color(___19eb50h[nn].g, edi);
					bb = helper_color(___19eb50h[nn].b, edi);
					__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
					nn++;
					if((int)nn >= 0x60) break;
				}

				nn = 0x80;
				while(1){

					rr = helper_color(___19eb50h[nn].r, edi);
					gg = helper_color(___19eb50h[nn].g, edi);
					bb = helper_color(___19eb50h[nn].b, edi);
					__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
					nn++;
					if((int)nn >= 0x100) break;
				}

				edi += 0x20000;
				ebp += 0x51e;

				if(edi == 0x640000) break;
			}


			if((D(___196a7ch) == 1)&&(CONNECTION_TYPE != 2)){
					
				___19bd60h = 0;
				CONNECTION_TYPE = 0;
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

					if((edx == DR_SCAN_ENTER)||(edx == DR_SCAN_KP_ENTER)) break;
					edx = ___5994ch();
					___2ab50h();
					___2ab50h();

					if(edx == 1) break;
				}

				___5994ch();
				___59b3ch();
				D(___196a80h) = 0;
				D(___196ad4h) = 0;
				memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd200, ___1a1138h__VESA101_BACKGROUND+0xd200, 0x2c380);
				___13710h(0, 0);
				___13710h(2, 1);
				___12cb8h__VESA101_PRESENTSCREEN();
			}
		}
#endif // DR_MULTIPLAYER

		___3a6a4h_v2(0);
		
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
				if(CONNECTION_TYPE == 2){
		
					___1b140h();	// NETWORK, JOIN AN EXISTING NETGAME
				}
				else {
				
					___1c178h();
				}
			}
			else {

				___13710h(2, 0);
				___13248h_cdecl(0xaa, 0xdc, 0x12c, 0x50, 1);
				___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Abort current game?", 0x23ada);
				D(esp) = 1;
				eax = ___148cch_cdecl(0xb4, 0x102, 1, (int *)esp);

				if((D(esp) != 0)&&(eax != 0)){

					strcat(strcat(strcpy(buffer, "-- "), s_6c[D(___1a1ef8h)].name), " aborted current netgame.");
					dRChatbox_push(buffer, 0);
					___23488h_cdecl(buffer, 0x64, 0x14);
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
			___1d00ch();
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
			//___1f124h_cdecl(6);
			break;
		case 7:		// PREVIOUS MENU
			D(___185a5ch+0x50) = 0;
			D(esp+4) = -1;

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

		if(D(esp+4) == -1) break;
	}
	
	D(___196a78h) = 0;
}
