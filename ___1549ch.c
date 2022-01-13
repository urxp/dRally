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
	extern __POINTER__ ___1a1e60h;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___185ba9h[];
	extern __POINTER__ ___1a10cch;

static const eventtext_t l_data[6] = {
	{
		"",
		"",
		"[I am one grateful reaper, driver.",
		"",
		"[More car corpses{ for my domain. You",
		"are my sweetest minion. Your dead-",
		"serious dedication has earned you",
		"a parking space among my horsemen.",
		"[A bonus of $600 to you{, horse-",
		"powered serial-auto-killer."
	},
	{
		"",
		"",
		"[I am one grateful reaper, driver.",
		"",
		"[More car corpses{ for my domain. You",
		"are my sweetest minion. Your dead-",
		"serious dedication has earned you",
		"a parking space among my horsemen.",
		"[A bonus of $1,000 to you{, horse-",
		"powered serial-auto-killer."
	},
	{
		"",
		"",
		"[I am one grateful reaper, driver.",
		"",
		"[More car corpses{ for my domain. You",
		"are my sweetest minion. Your dead-",
		"serious dedication has earned you",
		"a parking space among my horsemen.",
		"[A bonus of $2,000 to you{, horse-",
		"powered serial-auto-killer."
	},
	{
		"",
		"",
		"[I am one grateful reaper, driver.",
		"",
		"[More car corpses{ for my domain. You",
		"are my sweetest minion. Your dead-",
		"serious dedication has earned you",
		"a parking space among my horsemen.",
		"[A bonus of $3,000 to you{, horse-",
		"powered serial-auto-killer."
	},
	{
		"",
		"",
		"[I am one grateful reaper, driver.",
		"",
		"[More car corpses{ for my domain. You",
		"are my sweetest minion. Your dead-",
		"serious dedication has earned you",
		"a parking space among my horsemen.",
		"[A bonus of $4,000 to you{, horse-",
		"powered serial-auto-killer."
	},
	{
		"",
		"",
		"[I am one grateful reaper, driver.",
		"",
		"[More car corpses{ for my domain. You",
		"are my sweetest minion. Your dead-",
		"serious dedication has earned you",
		"a parking space among my horsemen.",
		"[A bonus of $5,000 to you{, horse-",
		"powered serial-auto-killer."
	}
};

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);

// REAPER
void ___1549ch(void){

	int 	i, j, n;
	__BYTE__ 	px;


	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);

	j = -1;
	while(++j < 0x80){

		i = -1;
		while(++i < 0x68){

			if((px = B(___1a1e60h+0x68*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x1a42d+0x280*j+i) = px;
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
	___12e78h_cdecl(___1a10cch, (font_props_t *)___185ba9h, "CONTINUE", 0x316c0);
}
