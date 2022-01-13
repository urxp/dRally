#include "drally.h"
#include "drally_structs_fixed.h"
#include "drally_fonts.h"

#pragma pack(push,1)
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
	extern __POINTER__ ___1a1e84h;
	extern __BYTE__ ___1a1ef8h[];

static const eventtext_t l_data[6] = {
	{
		"",
		"",
		"[Inconceivable, driver!",
		"",
		"It was a snowball's chance in hell.",
		"Through that blitzkrieg battle, and",
		"[not a shadow of a scratch on your",
		"[paint job.{ My bet was on you, and",
		"it paid me back big time. Here, [your",
		"[share{, [$350{. Go knock yourself out."
	},
	{
		"",
		"",
		"[Inconceivable, driver!",
		"",
		"It was a snowball's chance in hell.",
		"Through that blitzkrieg battle, and",
		"[not a shadow of a scratch on your",
		"[paint job.{ My bet was on you, and",
		"it paid me back big time. Here, [your",
		"[share{, [$750{. Go knock yourself out."
	},
	{
		"",
		"",
		"[Inconceivable, driver!",
		"",
		"It was a snowball's chance in hell.",
		"Through that blitzkrieg battle, and",
		"[not a shadow of a scratch on your",
		"[paint job.{ My bet was on you, and",
		"it paid me back big time. Here, [your",
		"[share{, [$1,500{. Go knock yourself out."
	},
	{
		"",
		"",
		"[Inconceivable, driver!",
		"",
		"It was a snowball's chance in hell.",
		"Through that blitzkrieg battle, and",
		"[not a shadow of a scratch on your",
		"[paint job.{ My bet was on you, and",
		"it paid me back big time. Here, [your",
		"[share, [$3,000{. Go knock yourself out."
	},
	{
		"",
		"",
		"[Inconceivable, driver!",
		"",
		"It was a snowball's chance in hell.",
		"Through that blitzkrieg battle, and",
		"[not a shadow of a scratch on your",
		"[paint job.{ My bet was on you, and",
		"it paid me back big time. Here, [your",
		"[share, [$4,500{. Go knock yourself out."
	},
	{
		"",
		"",
		"[Inconceivable, driver!",
		"",
		"It was a snowball's chance in hell.",
		"Through that blitzkrieg battle, and",
		"[not a shadow of a scratch on your",
		"[paint job.{ My bet was on you, and",
		"it paid me back big time. Here, [your",
		"[share, [$6,000{. Go knock yourself out."
	}
};

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
	
// INCONCEIVABLE
void ___15130h(void){

	__BYTE__ 	px;
	int 	i, j, n;


	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);

	j = -1;
	while(++j < 0x80){

		i = -1;
		while(++i < 0x68){

			if((px = B(___1a1e84h+0x68*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x1a42d+0x280*j+i) = px;
		}
	}

	n = 0;

	if(Racers[D(___1a1ef8h)].car == 5){
			
		n = 5;
		Racers[D(___1a1ef8h)].money += 0x1770;
	}

	if(Racers[D(___1a1ef8h)].car == 4){
			
		n = 4;
		Racers[D(___1a1ef8h)].money += 0x1194;
	}

	if(Racers[D(___1a1ef8h)].car == 3){
			
		n = 3;
		Racers[D(___1a1ef8h)].money += 0xbb8;
	}

	if(Racers[D(___1a1ef8h)].car == 2){

		n = 2;
		Racers[D(___1a1ef8h)].money += 0x5dc;
	}

	if(Racers[D(___1a1ef8h)].car == 1){
			
		n = 1;
		Racers[D(___1a1ef8h)].money += 0x2ee;
	}

	if(Racers[D(___1a1ef8h)].car == 0){
			
		n = 0;
		Racers[D(___1a1ef8h)].money += 0x15e;
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
