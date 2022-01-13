#include "drally.h"
#include "drally_fonts.h"

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

typedef char char80[80];
typedef struct eventtext_s {
	char80 	l0;
	char80 	l1;
	char80 	l2;
	char80 	l3;
	char80 	l4;
	char80 	l5;
	char80 	l6;
	char80 	l7;
	char80 	l8;
	char80 	l9;
} eventtext_t;

#pragma pack(pop)

#define Racers ___1a01e0h
	extern racer_t ___1a01e0h[];

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e74h;
	extern __BYTE__ ___1a1ef8h[];

static const eventtext_t l_data[6] = {
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 600 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	},
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 1,000 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	},
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 2,000 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	},
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 3,000 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	},
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 4,000 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	},
	{
		"",
		"",
		"[Not too shabby, driver.",
		"",
		"[Your wild winning streak has earned",
		"[you an extra 5,000 bucks.{ But don't",
		"get cocky, those other wannabe",
		"victory hounds are going to zero",
		"right into your blazing taillights.",
		"And they want to get you bad."
	}
};




void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

// WINNING STREAK
void ___14dc4h(void){

	int 	m, n;
	__BYTE__ 	px;


	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);	

	n = -1;
	while(++n < 0x80){

		m = -1;
		while(++m < 0x68){

			if((px = read_b(___1a1e74h+0x68*n+m)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x1a42d+0x280*n+m, px);
		}
	}

	n = 0;

	if(Racers[D(___1a1ef8h)].car == 5){

		n = 5;
		Racers[D(___1a1ef8h)].money += 0x1388;
	}

	if(Racers[D(___1a1ef8h)].car == 4){
	
		n = 4;
		Racers[D(___1a1ef8h)].money += 0xfa0;
	}

	if(Racers[D(___1a1ef8h)].car == 3){

		n = 3;
		Racers[D(___1a1ef8h)].money += 0xbb8;
	}

	if(Racers[D(___1a1ef8h)].car == 2){

		n = 2;
		Racers[D(___1a1ef8h)].money += 0x7d0;
	}

	if(Racers[D(___1a1ef8h)].car == 1){

		n = 1;
		Racers[D(___1a1ef8h)].money += 0x3e8;
	}

	if(Racers[D(___1a1ef8h)].car == 0){
			
		n = 0;
		Racers[D(___1a1ef8h)].money += 0x258;
	}

	VESA101_16X16_FORMAT_PRINT(l_data[n].l0, 161, 136);
	VESA101_16X16_FORMAT_PRINT(l_data[n].l1, 161, 152);
	VESA101_16X16_FORMAT_PRINT(l_data[n].l2, 161, 168);
	VESA101_16X16_FORMAT_PRINT(l_data[n].l3, 161, 184);
	VESA101_16X16_FORMAT_PRINT(l_data[n].l4, 161, 200);
	VESA101_16X16_FORMAT_PRINT(l_data[n].l5, 161, 216);
	VESA101_16X16_FORMAT_PRINT(l_data[n].l6, 161, 232);
	VESA101_16X16_FORMAT_PRINT(l_data[n].l7, 161, 248);
	VESA101_16X16_FORMAT_PRINT(l_data[n].l8, 161, 264);
	VESA101_16X16_FORMAT_PRINT(l_data[n].l9, 161, 280);
	___12e78h_v3(___1a10cch___185ba9h, "CONTINUE", 192, 316);
}
