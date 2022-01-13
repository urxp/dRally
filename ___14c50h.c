#include "drally.h"

#pragma pack(push,1)
typedef struct racer_s {
	char 	name[0xc];			//	+0
	__DWORD__ 	damage;				// 	+0xc
	int 	engine;				// 	+0x10
	__DWORD__ 	tires;				// 	+0x14
	__DWORD__ 	armor;				//	+0x18
	__DWORD__ 	car;				//	+0x1c
	char 	unk0[0xc];			// 	+0x20
	__DWORD__ 	color;				// 	+0x2c
	int 	money;				//	+0x30
	char 	unk2[0x8];			// 	+0x34
	__DWORD__ 	refund;				// 	+0x3c
	__DWORD__ 	face;				// 	+0x40
	__DWORD__ 	points;				// 	+0x44
	__DWORD__ 	rank;				// 	+0x48
	__DWORD__ 	wins;				// 	+0x4c
	__DWORD__ 	races;				// 	+0x50
	char 	unk3[4];			// 	+0x54
	__DWORD__ 	income;				// 	+0x58
	__DWORD__ 	mines;				// 	+0x5c
	__DWORD__ 	spikes;				// 	+0x60
	__DWORD__ 	rocket_fuel;		// 	+0x64
	__DWORD__ 	sabotage;			//	+0x68
} racer_t;
#pragma pack(pop)

	extern __BYTE__ ___1a1ef8h[];

#define Racers ___1a01e0h
	extern racer_t ___1a01e0h[];

__DWORD__ ___14c50h(void){

	if(Racers[D(___1a1ef8h)].engine > 0){

		Racers[D(___1a1ef8h)].engine--;
	}
	else {

		Racers[D(___1a1ef8h)].money /= 2;
	}

	return 0;
}
