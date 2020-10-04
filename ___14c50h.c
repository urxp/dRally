#include "drally.h"

#pragma pack(push,1)
typedef struct racer_s {
	char 	name[0xc];			//	+0
	dword 	damage;				// 	+0xc
	int 	engine;				// 	+0x10
	dword 	tires;				// 	+0x14
	dword 	armor;				//	+0x18
	dword 	car;				//	+0x1c
	char 	unk0[0xc];			// 	+0x20
	dword 	color;				// 	+0x2c
	int 	money;				//	+0x30
	char 	unk2[0x8];			// 	+0x34
	dword 	refund;				// 	+0x3c
	dword 	face;				// 	+0x40
	dword 	points;				// 	+0x44
	dword 	rank;				// 	+0x48
	dword 	wins;				// 	+0x4c
	dword 	races;				// 	+0x50
	char 	unk3[4];			// 	+0x54
	dword 	income;				// 	+0x58
	dword 	mines;				// 	+0x5c
	dword 	spikes;				// 	+0x60
	dword 	rocket_fuel;		// 	+0x64
	dword 	sabotage;			//	+0x68
} racer_t;
#pragma pack(pop)

	extern byte ___1a1ef8h[];

#define Racers ___1a01e0h
	extern racer_t ___1a01e0h[];

dword ___14c50h(void){

	if(Racers[D(___1a1ef8h)].engine > 0){

		Racers[D(___1a1ef8h)].engine--;
	}
	else {

		Racers[D(___1a1ef8h)].money /= 2;
	}

	return 0;
}
