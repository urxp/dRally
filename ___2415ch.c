#include "drally.h"
#include "drally_structs_free.h"
#include "drally_structs_fixed.h"

	extern __BYTE__ ___196a84h[];
	extern __BYTE__ ___196a98h[];
	extern __BYTE__ ___196a9ch[];
	extern __BYTE__ ___196aa0h[];
	extern __BYTE__ ___185a50h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___185a30h[];
	extern cardata_t ___18e298h[6];
	extern __BYTE__ ___1a1ee8h[];
	extern __BYTE__ ___1a1ec0h[];
	extern __BYTE__ ___1a1ee0h[];
	extern __BYTE__ ___1a1eech[];
	extern __BYTE__ ___1a1ec8h[];
	extern __BYTE__ ___1a1ed0h[];
	extern __BYTE__ ___1a1ee4h[];
	extern __BYTE__ ___1a01e0h[];

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


	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, n;
	__BYTE__ 	esp[0x100];
	racer_t * 	s_6c;

	const __DWORD__ cars[20] = { 5,5,5,4,4,4,4,3,3,3,2,2,2,2,1,1,1,0,0,0 };

	s_6c = (racer_t *)___1a01e0h;
	memcpy(esp, name_list, 0xdc);
	memset(esp+0xdc, 0, 0x14);

	D(___196a84h) = 0;
	D(___196a98h) = 0;
	D(___196a9ch) = 0;
	D(___196aa0h) = 0;
	D(___185a50h) = 0;
	D(___1a1ef8h) = 0x13;

	___2ec68h_cdecl();
	
	D(___185a30h) = 0;

	n = -1;
	while(++n < 0x14){

		s_6c[n].car = cars[n];
		s_6c[n].mines = 0;
		s_6c[n].spikes = 0;
		s_6c[n].rocket_fuel = 0;
		s_6c[n].sabotage = 0;
	}

	n = -1;
	while(++n < 0x13){

		s_6c[n].points = ((201-(int)(77.0*log10((double)(n+1))))*2-11*n)/4;
		s_6c[n].wins = 0;
		s_6c[n].races = 0;
		s_6c[n].bonus = 0;
		s_6c[n].income = 0;
		s_6c[n].damage = 0;
		s_6c[n].money = rand_watcom106()%0x186a0;
		s_6c[n].engine = rand_watcom106()%___18e298h[s_6c[n].car].n_engine_upgrades;
		s_6c[n].tires = rand_watcom106()%___18e298h[s_6c[n].car].n_tire_upgrades;
		s_6c[n].armor = rand_watcom106()%___18e298h[s_6c[n].car].n_armor_upgrades;
		s_6c[n].refund = ___18e298h[s_6c[n].car].price;
		s_6c[n].rank = n+1;

		edx = n;
		while(B(esp+edx+0xdc)||(edx == s_6c[D(___1a1ef8h)].face)) edx++;

		B(esp+edx+0xdc) = 1;
		strcpy(s_6c[n].name, esp+0xb*edx);
		s_6c[n].face = edx;
		s_6c[n].color = edx;
	}

	s_6c[D(___1a1ef8h)].damage = 0;
	s_6c[D(___1a1ef8h)].engine = 0;
	s_6c[D(___1a1ef8h)].armor = 0;
	s_6c[D(___1a1ef8h)].tires = 0;
	s_6c[D(___1a1ef8h)].car = 0;
	s_6c[D(___1a1ef8h)].wins = 0;
	s_6c[D(___1a1ef8h)].races = 0;
	s_6c[D(___1a1ef8h)].bonus = 0;
	s_6c[D(___1a1ef8h)].points = 0;
	s_6c[D(___1a1ef8h)].income = 0;
	s_6c[D(___1a1ef8h)].money = 495;
	s_6c[D(___1a1ef8h)].loanshark_type = -1;
	s_6c[D(___1a1ef8h)].loanshark_counter = -1;
	s_6c[D(___1a1ef8h)].rank = 20;
	s_6c[D(___1a1ef8h)].refund = ___18e298h[0].price;
	___2b318h();
	D(___1a1ee8h) = 0;
	D(___1a1ec0h) = 0;
	D(___1a1ee0h) = 0;
	D(___1a1eech) = 0;
	D(___1a1ec8h) = 0;
	D(___1a1ed0h) = 0;
	D(___1a1ee4h) = 1;
}
