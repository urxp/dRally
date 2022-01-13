#include "drally.h"
#include "drally_keyboard.h"
#include "sfx.h"

	extern __BYTE__ ___196a84h[];
	extern __BYTE__ ___185a5ch[];
	extern __DWORD__ ___24cc54h_sfx_volume;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void menu___14010h(__DWORD__);
void ___14368h_cdecl(__DWORD__);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___2ab50h(void);
void ___13a98h_cdecl(__DWORD__);
__BYTE__ ___5994ch(void);
void menu___3da48h(void);
void ___13cech(__DWORD__);

int ___146c4h_cdecl(__DWORD__ A1){

	int 	rslt, n;
	__BYTE__ 	LastScan;


	rslt = -2;
	n = 0;
	while((D(___196a84h) == 0)&&(rslt == -2)){

		___2ab50h();
		___2ab50h();
		___13a98h_cdecl(A1);
		LastScan = ___5994ch();

		if(A1 == 0){
 
			if(LastScan) n = 0;
			else if(++n > 0x708){
			
				menu___3da48h();
				n = 0;
			}
		}

		switch(LastScan){
		case DR_SCAN_ESCAPE:
			if(A1){

				rslt = -1;
				dRally_Sound_pushEffect(1, SFX_CLICK_1, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			}
			else {

				if(D(0x1c*A1+___185a5ch+0x18) == (D(0x1c*A1+___185a5ch)-1)) break;
				___13cech(A1);
				dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			}
			break;
		case DR_SCAN_ENTER:
		case DR_SCAN_SPACE:
		case DR_SCAN_KP_ENTER:
			rslt = (int)D(0x1c*A1+___185a5ch+0x18);
			dRally_Sound_pushEffect(1, SFX_CLICK_4, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			break;
		case DR_SCAN_F1:
#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0) ___23758h();
#endif // DR_MULTIPLAYER
			break;
		case DR_SCAN_UP:
		case DR_SCAN_KP_8:
			menu___14010h(A1);
			dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			break;
		case DR_SCAN_DOWN:
		case DR_SCAN_KP_2:
			___14368h_cdecl(A1);
			dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			break;
		default:
			break;
		}
	}

	if(D(___196a84h) != 0) rslt = -1;

	return rslt;
}
