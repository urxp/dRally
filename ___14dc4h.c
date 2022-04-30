#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

typedef char char80[80];
typedef struct event_s {
	const char80 	common[10];
	const char80 	spcf[6];
	int 			spcf_i;
	int 			rewards[6];
} event_t;

	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e74h;
	extern __BYTE__ ___1a1ef8h[];
	extern __POINTER__ ___1a1e84h;
	extern __POINTER__ ___1a1e60h;

static event_t * streak = &(event_t){
	.common = {
		[0] = "",
		[1] = "",
		[2] = "[Not too shabby, driver.",
		[3] = "",
		[4] = "[Your wild winning streak has earned",
		[5] = "", // <--
		[6] = "get cocky, those other wannabe",
		[7] = "victory hounds are going to zero",
		[8] = "right into your blazing taillights.",
		[9] = "And they want to get you bad."
	},
	.spcf = {
		[0] = "[you an extra 600 bucks.{ But don't",
		[1] = "[you an extra 1,000 bucks.{ But don't",
		[2] = "[you an extra 2,000 bucks.{ But don't",
		[3] = "[you an extra 3,000 bucks.{ But don't",
		[4] = "[you an extra 4,000 bucks.{ But don't",
		[5] = "[you an extra 5,000 bucks.{ But don't"
	},
	.spcf_i = 5,
	.rewards = { 600, 1000, 2000, 3000, 4000, 5000 }
};

static event_t * reaper = &(event_t){
	.common = {
		[0] = "",
		[1] = "",
		[2] = "[I am one grateful reaper, driver.",
		[3] = "",
		[4] = "[More car corpses{ for my domain. You",
		[5] = "are my sweetest minion. Your dead-",
		[6] = "serious dedication has earned you",
		[7] = "a parking space among my horsemen.",
		[8] = "", // <--
		[9] = "powered serial-auto-killer."
	},
	.spcf = {
		[0] = "[A bonus of $600 to you{, horse-",
		[1] = "[A bonus of $1,000 to you{, horse-",
		[2] = "[A bonus of $2,000 to you{, horse-",
		[3] = "[A bonus of $3,000 to you{, horse-",
		[4] = "[A bonus of $4,000 to you{, horse-",
		[5] = "[A bonus of $5,000 to you{, horse-"
	},
	.spcf_i = 8,
	.rewards = { 600, 1000, 2000, 3000, 4000, 5000 }
};

static event_t * inconceivable = &(event_t){
	.common = {
		[0] = "",
		[1] = "",
		[2] = "[Inconceivable, driver!",
		[3] = "",
		[4] = "It was a snowball's chance in hell.",
		[5] = "Through that blitzkrieg battle, and",
		[6] = "[not a shadow of a scratch on your",
		[7] = "[paint job.{ My bet was on you, and",
		[8] = "it paid me back big time. Here, [your",
		[9] = "" // <--
	},
	.spcf = {
		[0] = "[share{, [$350{. Go knock yourself out.",
		[1] = "[share{, [$750{. Go knock yourself out.",
		[2] = "[share{, [$1,500{. Go knock yourself out.",
		[3] = "[share, [$3,000{. Go knock yourself out.",
		[4] = "[share, [$4,500{. Go knock yourself out.",
		[5] = "[share, [$6,000{. Go knock yourself out."
	},
	.spcf_i = 9,
	.rewards = { 350, 750, 1500, 3000, 4500, 6000 }
};


void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

static void helper00(event_t * e, __POINTER__ pic){

	int 		i, j;
	__BYTE__ 	px;
	racer_t * 	rc;

	rc = &((racer_t *)___1a01e0h)[D(___1a1ef8h)];
	___13248h_cdecl(33, 131, 482, 230, 1);

	j = -1;
	while(++j < 128){

		i = -1;
		while(++i < 104){

			if((px = B(pic+104*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(168+j)+(45+i)) = px;
		}
	}

	rc->money += e->rewards[rc->car];

	i = -1;
	while(++i < 10) VESA101_16X16_FORMAT_PRINT((e->spcf_i == i)?e->spcf[rc->car]:e->common[i], 161, 136+16*i);

	___12e78h_v3(___1a10cch___185ba9h, "CONTINUE", 192, 316);
}

// WINNING STREAK
void ___14dc4h(void){ helper00(streak, ___1a1e74h); }

// REAPER
void ___1549ch(void){ helper00(reaper, ___1a1e60h); }

// INCONCEIVABLE
void ___15130h(void){ helper00(inconceivable, ___1a1e84h); }
