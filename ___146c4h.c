#include "drally.h"
#include "drally_keyboard.h"

	extern byte ___196a84h[];
	extern byte ___185a5ch[];
	extern byte ___24cc54h[];
	extern byte ___19bd60h[];

#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void menu___14010h(dword);
void ___14368h_cdecl(dword);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___2ab50h(void);
void ___13a98h_cdecl(dword);
byte ___5994ch(void);
void menu___3da48h(void);
void ___13cech(dword);

int ___146c4h_cdecl(dword A1){

	int 	rslt, n;
	byte 	LastScan;


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
				dRally_Sound_pushEffect(1, 0x16, 0, D(___24cc54h), 0x28000, 0x8000);
			}
			else {

				if(D(0x1c*A1+___185a5ch+0x18) == (D(0x1c*A1+___185a5ch)-1)) break;
				___13cech(A1);
				dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), 0x28000, 0x8000);
			}
			break;
		case DR_SCAN_ENTER:
		case DR_SCAN_SPACE:
		case DR_SCAN_KP_ENTER:
			rslt = (int)D(0x1c*A1+___185a5ch+0x18);
			dRally_Sound_pushEffect(1, 0x1c, 0, D(___24cc54h), 0x28000, 0x8000);
			break;
#if defined(DR_MULTIPLAYER)
		case DR_SCAN_F1:
			if(D(___19bd60h) != 0) ___23758h();
			break;
#endif // DR_MULTIPLAYER
		case DR_SCAN_UP:
		case DR_SCAN_KP_8:
			menu___14010h(A1);
			dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), 0x28000, 0x8000);
			break;
		case DR_SCAN_DOWN:
		case DR_SCAN_KP_2:
			___14368h_cdecl(A1);
			dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), 0x28000, 0x8000);
			break;
		default:
			break;
		}
	}

	if(D(___196a84h) != 0) rslt = -1;

	return rslt;
}
