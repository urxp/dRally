#ifndef __DRALLY_STRUCTS_H
#define __DRALLY_STRUCTS_H

#include "drally.h"

#pragma pack(push,1)
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
	char 				unk2[0x8];			// 	+0x34
	__DWORD__ 			refund;				// 	+0x3c
	__DWORD__ 			face;				// 	+0x40
	__DWORD__ 			points;				// 	+0x44
	__DWORD__ 			rank;				// 	+0x48
	__DWORD__ 			wins;				// 	+0x4c
	__DWORD__ 			races;				// 	+0x50
	char 				unk3[4];			// 	+0x54
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


#endif // __DRALLY_STRUCTS_H
