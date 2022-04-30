#ifndef __DRALLY_STRUCTS_FIXED_H
#define __DRALLY_STRUCTS_FIXED_H

#include "drally.h"

#pragma pack(push,1)

typedef struct hof_entry_s {
    char    	name[12];
    __DWORD__   races;
    __DWORD__   difficulty;
} hof_entry_t;

typedef struct record_s {
    char    	name[12];		// +00
    __DWORD__   min;			// +0c
    __DWORD__   sec;			// +10
    __DWORD__   sec100;			// +14
} record_t;

typedef struct config_s {
	__BYTE__    		soundtype;
	__BYTE__    		soundirq;
	__BYTE__    		sounddma;
	__DWORD__   		soundaddr;
    __BYTE__    		key;
    union {
		__BYTE__ 		raw[0xb76];
		struct {
			__DWORD__ 	msx_volume;					// +000
			__DWORD__ 	sfx_volume;					// +004
			__DWORD__ 	com_port_option;			// +008
			__DWORD__ 	difficulty;					// +00c
			__DWORD__ 	gamepad;					// +010
			char 		modem_dial_number[0x15];	// +014
			char 		modem_init_string[0x15];	// +029
			__DWORD__	modem_dialing;				// +03e
			__DWORD__ 	com_port_standard;			// +042
			__DWORD__ 	com_port_addr;				// +046
			__DWORD__	com_port_irq;				// +04a
			record_t 	track_records[6][0x12];		// +04e
			hof_entry_t	hall_of_fame[10];			// +a6e
			__DWORD__	kb_accelerate;				// +b36
			__DWORD__ 	kb_brake;					// +b3a
			__DWORD__ 	kb_steer_left;				// +b3e	
			__DWORD__ 	kb_steer_right;				// +b42
			__DWORD__ 	kb_turbo_boost;				// +b46
			__DWORD__ 	kb_machine_gun;				// +b4a
			__DWORD__ 	kb_drop_mine;				// +b4e
			__DWORD__ 	kb_horn;					// +b52
			__DWORD__ 	gp_accelerate;				// +b56
			__DWORD__ 	gp_brake;					// +b5a
			__DWORD__ 	gp_steer_left;				// +b5e
			__DWORD__ 	gp_steer_right;				// +b62
			__DWORD__ 	gp_turbo_boost;				// +b66
			__DWORD__ 	gp_machine_gun;				// +b6a
			__DWORD__ 	gp_drop_mine;				// +b6e
			__DWORD__ 	counter;					// +b72
		};
	};
} config_t;

typedef struct racer_s {
	char 				name[0xc];			//	+0
	__DWORD__ 			damage;				// 	+0xc
	__SIGNED_DWORD__	engine;				// 	+0x10
	__DWORD__ 			tires;				// 	+0x14
	__DWORD__ 			armor;				//	+0x18
	__DWORD__ 			car;				//	+0x1c
	char 				unk0[0xc];			// 	+0x20
	__DWORD__ 			color;				// 	+0x2c
	__SIGNED_DWORD__ 	money;				//	+0x30
	__DWORD__ 			loanshark_type;		// 	+0x34
	__DWORD__ 			loanshark_counter;	// 	+0x38
	__DWORD__ 			refund;				// 	+0x3c
	__DWORD__ 			face;				// 	+0x40
	__DWORD__ 			points;				// 	+0x44
	__DWORD__ 			rank;				// 	+0x48
	__DWORD__ 			wins;				// 	+0x4c
	__DWORD__ 			races;				// 	+0x50		
	__DWORD__ 			bonus;				// 	+0x54
	__DWORD__ 			income;				// 	+0x58
	__DWORD__ 			mines;				// 	+0x5c
	__DWORD__ 			spikes;				// 	+0x60
	__DWORD__ 			rocket_fuel;		// 	+0x64
	__DWORD__ 			sabotage;			//	+0x68
} racer_t;

typedef struct saved_game_s {
	__BYTE__ 	key;
	__BYTE__ 	me;
	__BYTE__ 	weapons;
	__BYTE__ 	difficulty;
	char 		name[15];
	racer_t 	racers[20];
} saved_game_t;
#pragma pack(pop)


#endif // __DRALLY_STRUCTS_FIXED_H
