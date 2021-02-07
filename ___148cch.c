#include "drally.h"
#include "drally_keyboard.h"

	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte ___1a10e0h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e68h[];
	extern byte ___1a10f4h[];
	extern byte ___19bd60h[];
	extern byte ___24cc54h[];

void ___12e78h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
void ___2ab50h(void);
byte ___5994ch(void);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);

int ___148cch_cdecl(int x, int y, dword A3, int * A4){

	int 	n, i, j, status;
	byte 	tmp;

	if(*A4 != 1){

		___12e78h_cdecl(D(___1a10e0h), ___185ba9h, "yes", 0x280*(y-7)+x+30);
		___12e78h_cdecl(D(___1a10cch), ___185ba9h, "no", 0x280*(y-7)+x+200);
	}
	else {

		___12e78h_cdecl(D(___1a10cch), ___185ba9h, "yes", 0x280*(y-7)+x+30);
		___12e78h_cdecl(D(___1a10e0h), ___185ba9h, "no", 0x280*(y-7)+x+200);
	}

	___12cb8h__VESA101_PRESENTSCREEN();

	status = 0;
	while(!status){

		___2ab50h();
		___2ab50h();

		n = -1;
		while(++n < 0x14) memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(y+n)+x+7+0xaa*(1-*A4), 0xc4, 0x14);

		j = -1;
		while(++j < 0x14){

			i = -1;
			while(++i < 0x14){
				
				tmp = B(0x190*D(___1a1e68h)+D(___1a10f4h)+0x14*j+i);
				if(tmp) B(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(y+j)+x+i+7+0xaa*(1-*A4)) = tmp;
			}
		}

		___1398ch__VESA101_PRESENTRECTANGLE(0x280*y+x+2, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*y+x+2, 0xf0, 0x1c);
		D(___1a1e68h)++;

		if((int)D(___1a1e68h) > 0x31) D(___1a1e68h) = 0;

		switch(___5994ch()){
		case DR_SCAN_ESCAPE:
			if(A3 != 0){
			
				status = -2;
				*A4 = 0;
			}
			break;
		case DR_SCAN_Y:
		case DR_SCAN_LEFT:
		case DR_SCAN_KP_4:
			if(*A4 == 0) dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), 0x28000, 0x8000);

			n = -1;
			while(++n < 0x19) memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(y+n)+x+2, 0xc4, 0xf0);

			___12e78h_cdecl(D(___1a10cch), ___185ba9h, "yes", 0x280*(y-7)+x+30);
			___12e78h_cdecl(D(___1a10e0h), ___185ba9h, "no", 0x280*(y-7)+x+200);
			*A4 = 1;
			break;
		case DR_SCAN_N:
		case DR_SCAN_RIGHT:
		case DR_SCAN_KP_6:
			if(*A4 == 1) dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), 0x28000, 0x8000);
			
			n = -1;
			while(++n < 0x19) memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(y+n)+x+2, 0xc4, 0xf0);

			___12e78h_cdecl(D(___1a10e0h), ___185ba9h, "yes", 0x280*(y-7)+x+30);
			___12e78h_cdecl(D(___1a10cch), ___185ba9h, "no", 0x280*(y-7)+x+200);
			*A4 = 0;
			break;
		case DR_SCAN_ENTER:
		case DR_SCAN_KP_ENTER:
			status = -1;
			break;
#if defined(DR_MULTIPLAYER)
		case DR_SCAN_F1:
			if(D(___19bd60h) != 0) ___23758h();
			break;
#endif
		default:
			break;
		}
	}

	dRally_Sound_pushEffect(1, 0x1c, 0, D(___24cc54h), 0x28000, 0x8000);

	return !!(status != -2);
}
