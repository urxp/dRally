#include "drally.h"
#include "drally_keyboard.h"
#include "drally_structs_free.h"
#include "sfx.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern byte ___185ba9h[];
	extern void * ___1a10cch;
	extern kb_control_t ___1a1140h;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1124h__VESA101h_ScreenBufferA;
	extern __DWORD__ ___24cc54h_sfx_volume;

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
int ___252e0h_cdecl(const char *);
void dRally_Sound_pushEffect(byte, byte, dword, dword, dword, dword);
byte ___5994ch(void);
byte ___59b3ch(void);

static const byte ReservedKeys[0xf] = { 
	DR_SCAN_P,
	DR_SCAN_TAB,
	DR_SCAN_F1,
	DR_SCAN_F2,
	DR_SCAN_F3,
	DR_SCAN_F4,
	DR_SCAN_F5,
	DR_SCAN_F6,
	DR_SCAN_F7,
	DR_SCAN_F8,
	DR_SCAN_F9,
	DR_SCAN_F10,
	DR_SCAN_F11,
	DR_SCAN_F12,
	DR_SCAN_ESCAPE
};

static dword InvalidConfiguration(void){

	const char * msg = "Invalid key configuration!";

	memcpy(___1a1124h__VESA101h_ScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___13248h_cdecl(0x1a, 0xc2 , 0x253, 0x56, 1);
	___12e78h_cdecl(___1a10cch, ___185ba9h, msg, 0x1fcc2-___252e0h_cdecl(msg));
	___12e78h_cdecl(___1a10cch, ___185ba9h, "Press any key to re-enter.", 0x24bdf);
	___12cb8h__VESA101_PRESENTSCREEN();
	dRally_Sound_pushEffect(1, SFX_BUMMER, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
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

		if(___1a1140h.turbo_boost == ReservedKeys[n]) return InvalidConfiguration();
		if(___1a1140h.horn == ReservedKeys[n]) return InvalidConfiguration();
		if(___1a1140h.steer_left == ReservedKeys[n]) return InvalidConfiguration();
		if(___1a1140h.steer_right == ReservedKeys[n]) return InvalidConfiguration();
		if(___1a1140h.brake == ReservedKeys[n]) return InvalidConfiguration();
		if(___1a1140h.drop_mine == ReservedKeys[n]) return InvalidConfiguration();
		if(___1a1140h.accelerate == ReservedKeys[n]) return InvalidConfiguration();
		if(___1a1140h.machine_gun == ReservedKeys[n]) return InvalidConfiguration();
	}

	if(___1a1140h.machine_gun == ___1a1140h.accelerate) return InvalidConfiguration();
	if(___1a1140h.machine_gun == ___1a1140h.drop_mine) return InvalidConfiguration();
	if(___1a1140h.machine_gun == ___1a1140h.brake) return InvalidConfiguration();
	if(___1a1140h.machine_gun == ___1a1140h.steer_right) return InvalidConfiguration();
	if(___1a1140h.machine_gun == ___1a1140h.steer_left) return InvalidConfiguration();
	if(___1a1140h.machine_gun == ___1a1140h.horn) return InvalidConfiguration();
	if(___1a1140h.machine_gun == ___1a1140h.turbo_boost) return InvalidConfiguration();
	if(___1a1140h.accelerate == ___1a1140h.drop_mine) return InvalidConfiguration();
	if(___1a1140h.accelerate == ___1a1140h.brake) return InvalidConfiguration();
	if(___1a1140h.accelerate == ___1a1140h.steer_right) return InvalidConfiguration();
	if(___1a1140h.accelerate == ___1a1140h.steer_left) return InvalidConfiguration();
	if(___1a1140h.accelerate == ___1a1140h.horn) return InvalidConfiguration();
	if(___1a1140h.accelerate == ___1a1140h.turbo_boost) return InvalidConfiguration();
	if(___1a1140h.drop_mine == ___1a1140h.brake) return InvalidConfiguration();
	if(___1a1140h.drop_mine == ___1a1140h.steer_right) return InvalidConfiguration();
	if(___1a1140h.drop_mine == ___1a1140h.steer_left) return InvalidConfiguration();
	if(___1a1140h.drop_mine == ___1a1140h.horn) return InvalidConfiguration();
	if(___1a1140h.drop_mine == ___1a1140h.turbo_boost) return InvalidConfiguration();
	if(___1a1140h.brake == ___1a1140h.steer_right) return InvalidConfiguration();
	if(___1a1140h.brake == ___1a1140h.steer_left) return InvalidConfiguration();
	if(___1a1140h.brake == ___1a1140h.horn) return InvalidConfiguration();
	if(___1a1140h.brake == ___1a1140h.turbo_boost) return InvalidConfiguration();
	if(___1a1140h.steer_right == ___1a1140h.steer_left) return InvalidConfiguration();
	if(___1a1140h.steer_right == ___1a1140h.horn) return InvalidConfiguration();
	if(___1a1140h.steer_right == ___1a1140h.turbo_boost) return InvalidConfiguration();
	if(___1a1140h.steer_left == ___1a1140h.horn) return InvalidConfiguration();
	if(___1a1140h.steer_left == ___1a1140h.turbo_boost) return InvalidConfiguration();
	if(___1a1140h.horn == ___1a1140h.turbo_boost) return InvalidConfiguration();

	return 0;
}
