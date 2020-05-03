#include "drally.h"

	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern dword ___1a1140h[];
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1124h__VESA101h_ScreenBufferA;
	extern byte ___1854bch[];
	extern byte ___24cc54h[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
dword ___252e0h_cdecl(dword);
void dRally_Sound_pushEffect(byte, byte, dword, dword, dword, dword);
byte ___5994ch(void);
byte ___59b3ch(void);

static const byte ReservedKeys[0xf] = { 
	0x19,	// DR_SCAN_P
	0x0f,	// DR_SCAN_TAB
	0x3b,	// DR_SCAN_F1
	0x3c,	// DR_SCAN_F2
	0x3d,	// DR_SCAN_F3
	0x3e,	// DR_SCAN_F4
	0x3f,	// DR_SCAN_F5
	0x40,	// DR_SCAN_F6
	0x41,	// DR_SCAN_F7
	0x42,	// DR_SCAN_F8
	0x43,	// DR_SCAN_F9
	0x44,	// DR_SCAN_F10
	0x57,	// DR_SCAN_F11
	0x58,	// DR_SCAN_F12
	0x01	// DR_SCAN_ESCAPE
};

static dword InvalidConfiguration(void){

	const char * msg = "Invalid key configuration!";

	memcpy(___1a1124h__VESA101h_ScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___13248h_cdecl(0x1a, 0xc2 , 0x253, 0x56, 1);
	___12e78h_cdecl(D(___1a10cch), ___185ba9h, msg, 0x1fcc2-___252e0h_cdecl(msg));
	___12e78h_cdecl(D(___1a10cch), ___185ba9h, "Press any key to re-enter.", 0x24bdf);
	___12cb8h__VESA101_PRESENTSCREEN();
	dRally_Sound_pushEffect(1, 0x1d, 0, D(___24cc54h), D(___1854bch), 0x8000);
	___5994ch();
	___59b3ch();
	while(___5994ch() == 0);
	___5994ch();
	___59b3ch();
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1124h__VESA101h_ScreenBufferA, 0x4b000);
	___12cb8h__VESA101_PRESENTSCREEN();
	return 1;
}

dword ___20220h(void){

	int 	k, n;

	n = -1;
	while(++n < 0xf){

		k = -1;
		while(++k < 8){

			if(___1a1140h[k] == ReservedKeys[n]) return InvalidConfiguration();
		}
	}

	if(___1a1140h[7] == ___1a1140h[6]) return InvalidConfiguration();
	if(___1a1140h[7] == ___1a1140h[5]) return InvalidConfiguration();
	if(___1a1140h[7] == ___1a1140h[4]) return InvalidConfiguration();
	if(___1a1140h[7] == ___1a1140h[3]) return InvalidConfiguration();
	if(___1a1140h[7] == ___1a1140h[2]) return InvalidConfiguration();
	if(___1a1140h[7] == ___1a1140h[1]) return InvalidConfiguration();
	if(___1a1140h[7] == ___1a1140h[0]) return InvalidConfiguration();
	if(___1a1140h[6] == ___1a1140h[5]) return InvalidConfiguration();
	if(___1a1140h[6] == ___1a1140h[4]) return InvalidConfiguration();
	if(___1a1140h[6] == ___1a1140h[3]) return InvalidConfiguration();
	if(___1a1140h[6] == ___1a1140h[2]) return InvalidConfiguration();
	if(___1a1140h[6] == ___1a1140h[1]) return InvalidConfiguration();
	if(___1a1140h[6] == ___1a1140h[0]) return InvalidConfiguration();
	if(___1a1140h[5] == ___1a1140h[4]) return InvalidConfiguration();
	if(___1a1140h[5] == ___1a1140h[3]) return InvalidConfiguration();
	if(___1a1140h[5] == ___1a1140h[2]) return InvalidConfiguration();
	if(___1a1140h[5] == ___1a1140h[1]) return InvalidConfiguration();
	if(___1a1140h[5] == ___1a1140h[0]) return InvalidConfiguration();
	if(___1a1140h[4] == ___1a1140h[3]) return InvalidConfiguration();
	if(___1a1140h[4] == ___1a1140h[2]) return InvalidConfiguration();
	if(___1a1140h[4] == ___1a1140h[1]) return InvalidConfiguration();
	if(___1a1140h[4] == ___1a1140h[0]) return InvalidConfiguration();
	if(___1a1140h[3] == ___1a1140h[2]) return InvalidConfiguration();
	if(___1a1140h[3] == ___1a1140h[1]) return InvalidConfiguration();
	if(___1a1140h[3] == ___1a1140h[0]) return InvalidConfiguration();
	if(___1a1140h[2] == ___1a1140h[1]) return InvalidConfiguration();
	if(___1a1140h[2] == ___1a1140h[0]) return InvalidConfiguration();
	if(___1a1140h[1] == ___1a1140h[0]) return InvalidConfiguration();

	return 0;
}
