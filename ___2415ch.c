#include "drally.h"

#pragma pack(push,1)
typedef struct racer_s {
	char 	name[0xc];			//	+0
	dword 	damage;				// 	+0xc
	dword 	engine;				// 	+0x10
	dword 	tires;				// 	+0x14
	dword 	armor;				//	+0x18
	dword 	car;				//	+0x1c
	char 	unk0[0xc];			// 	+0x20
	dword 	color;				// 	+0x2c
	dword 	money;				//	+0x30
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


	extern byte ___196a84h[];
	extern byte ___196a98h[];
	extern byte ___196a9ch[];
	extern byte ___196aa0h[];
	extern byte ___185a50h[];
	extern byte ___1a1ef8h[];
	extern byte ___199f54h[];
	extern byte ___185a30h[];
	extern byte ___1a01d4h[];
	extern byte ___1a01d8h[];
	extern byte ___1a01dch[];
	extern byte ___1a01d0h[];
	extern byte ___1a0190h[];
	extern byte ___1a0234h[];
	extern byte ___18e938h[];
	extern byte ___18e2a4h[];
	extern byte ___1a0224h[];
	extern byte ___1a0214h[];
	extern byte ___1a0218h[];
	extern byte ___1a1ee8h[];
	extern byte ___1a1ec0h[];
	extern byte ___1a1ee0h[];
	extern byte ___1a1eech[];
	extern byte ___1a1ec8h[];
	extern byte ___1a1ed0h[];
	extern byte ___1a1ee4h[];

#define Racers ___1a01e0h
	extern racer_t ___1a01e0h[];

void ___2ec68h_cdecl(void);
void ___2b318h(void);
int rand_watcom106(void);


const char name_list[0x14][0xb] = {
	"SAM SPEED", "JANE HONDA", "DUKE NUKEM",
	"NASTY NICK",
	"MOTOR MARY", "MAD MAC", "MATT MILER",
	"CLINT WEST",
	"LEE VICE", "DARK RYDER",
	"GREG PECK",
	"SUZY STOCK", "IRON JOHN", "MORI SATO",
	"CHER STONE",
	"DIESEL JOE", "MIC DAIR",
	"LIZ ARDEN",
	"BOGUS BILL", "FARMER TED",
};

void ___2415ch(void){


	long long 	ll_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, n;
	byte 	esp[0x100];

	const dword cars[20] = { 5,5,5,4,4,4,4,3,3,3,2,2,2,2,1,1,1,0,0,0 };

	memcpy(esp, name_list, 0xdc);
	memset(esp+0xdc, 0, 0x14);

	D(___196a84h) = 0;
	D(___196a98h) = 0;
	D(___196a9ch) = 0;
	D(___196aa0h) = 0;
	D(___185a50h) = 0;
	D(___1a1ef8h) = 0x13;

	___2ec68h_cdecl();
	
	D(___199f54h) = 0;
	D(___185a30h) = 0;

	n = -1;
	while(++n < 0x14){

		Racers[n].car = cars[n];
		Racers[n].mines = 0;
		Racers[n].spikes = 0;
		Racers[n].rocket_fuel = 0;
		Racers[n].sabotage = 0;
	}

	n = -1;
	while(++n < 0x13){

		Racers[n].points = ((201-(int)(77.0*log10((double)(n+1))))*2-11*n)/4;
		Racers[n].wins = 0;
		Racers[n].races = 0;
		D(0x6c*n+___1a0234h) = 0;
		Racers[n].income = 0;
		Racers[n].damage = 0;
		Racers[n].money = rand_watcom106()%0x186a0;
		Racers[n].engine = rand_watcom106()%D(Racers[n].car*0x6e0+___18e938h);
		Racers[n].tires = rand_watcom106()%D(Racers[n].car*0x6e0+___18e938h+4);
		Racers[n].armor = rand_watcom106()%D(Racers[n].car*0x6e0+___18e938h+8);
		Racers[n].refund = D(Racers[n].car*0x6e0+___18e2a4h);
		Racers[n].rank = n+1;

		edx = n;
		while(B(esp+edx+0xdc)||(edx == Racers[D(___1a1ef8h)].face)) edx++;

		B(esp+edx+0xdc) = 1;
		strcpy(Racers[n].name, esp+0xb*edx);
		Racers[n].face = edx;
		Racers[n].color = edx;
	}

	Racers[D(___1a1ef8h)].damage = 0;
	Racers[D(___1a1ef8h)].engine = 0;
	Racers[D(___1a1ef8h)].armor = 0;
	Racers[D(___1a1ef8h)].tires = 0;
	Racers[D(___1a1ef8h)].car = 0;
	Racers[D(___1a1ef8h)].wins = 0;
	Racers[D(___1a1ef8h)].races = 0;
	D(0x6c*D(___1a1ef8h)+___1a0234h) = 0;
	Racers[D(___1a1ef8h)].points = 0;
	Racers[D(___1a1ef8h)].income = 0;
	Racers[D(___1a1ef8h)].money = 495;
	D(0x6c*D(___1a1ef8h)+___1a0214h) = 0xffffffff;
	D(0x6c*D(___1a1ef8h)+___1a0218h) = 0xffffffff;
	Racers[D(___1a1ef8h)].rank = 20;
	Racers[D(___1a1ef8h)].refund = D(___18e2a4h);
	___2b318h();
	D(___1a1ee8h) = 0;
	D(___1a1ec0h) = 0;
	D(___1a1ee0h) = 0;
	D(___1a1eech) = 0;
	D(___1a1ec8h) = 0;
	D(___1a1ed0h) = 0;
	D(___1a1ee4h) = 1;
}
