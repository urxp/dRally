#include "drally.h"
#include "drally_structs_free.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

typedef rgb24_t pal256_t[0x100];

	extern char ___19bd64h[16];
	extern __BYTE__ ___243dd0h[];
	extern __POINTER__ ___243d60h;
	extern pal256_t ___1a51d0h;
	extern __BYTE__ ___243d28h[];
	extern __BYTE__ ___243d2ch[];
	extern __POINTER__ ___243d58h;
	extern __BYTE__ ___243d08h[];
	extern __BYTE__ ___196dach[];
	extern __BYTE__ ___1a54d0h[];
	extern __BYTE__ ___243d30h[];
	extern __BYTE__ ___243d04h[];
	extern __POINTER__ ___243d78h;
	extern __BYTE__ ___243cf8h[];
	extern __BYTE__ ___243d10h[];
	extern __POINTER__ ___243d54h;
	extern car_spins_t * ___243d74h;
	extern __BYTE__ NUM_OF_CARS[];
	extern __BYTE__ ___1de580h[];
	extern __POINTER__ ___243d8ch;
	extern __POINTER__ ___243d7ch;
	extern __POINTER__ ___243298h[6];
	extern __POINTER__ ___243d88h;
	extern __POINTER__ ___243d38h;
	extern __POINTER__ ___243d40h;
	extern __POINTER__ ___243288h[2];
	extern __POINTER__ ___243290h[2];
	extern __POINTER__ ___243d68h;
	extern __POINTER__ ___243d64h;
	extern __BYTE__ ___243c5ch[];
	extern __BYTE__ ___2438c4h[];
	extern __BYTE__ ___1de920h[];
	extern __BYTE__ ___1ded20h[];
	extern __BYTE__ ___1df120h[];
	extern __BYTE__ ___1e8448h[];
	extern __BYTE__ ___1e8048h[];
	extern __BYTE__ ___1e7c48h[];
	extern __BYTE__ ___242578h[];
	extern __BYTE__ ___241d78h[];
	extern __BYTE__ ___242178h[];
	extern __POINTER__ ___243d50h;
	extern __POINTER__ ___243d6ch;
	extern __POINTER__ ___243d4ch;
	extern __POINTER__ ___243d48h;
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___1c9f10h[];
	extern __POINTER__ ___243d84h;
	extern __BYTE__ ___1d5890h[0x1f80];
	extern __BYTE__ ___1de210h[];
	extern __BYTE__ ___1d7810h[];
	extern __BYTE__ ___1d8910h[];
	extern __BYTE__ ___1d8a10h[];
	extern __BYTE__ ___1d2710h[];
	extern __POINTER__ ___243d3ch;
	extern __POINTER__ ___243d34h;
	extern __BYTE__ ___1d8110h[];
	extern __BYTE__ ___1de7d0h[];
	
	
__BYTE__ ___240a48h[0x100];
__BYTE__ ___241c78h[0x100];
__BYTE__ ___242d78h[0x100];
__BYTE__ ___243078h[0x100];

void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode2(__POINTER__, __POINTER__);
void bpk_decode4(__DWORD__, __DWORD__, __POINTER__, __POINTER__);
void race___43488h(void);

static void race___42f04h(void){

	int 		n;
	FILE * 		fd;
	char 		fname[0x10];
	pal256_t 	pal;

	strcat(strcpy(fname, ___19bd64h), "-IMA.BPK");
	old_bpa_read(___243dd0h, ___243d60h, fname);
	bpk_decode4(0x300, 0xa, (__POINTER__)&pal, ___243d60h);

	n = -1;
	while(++n < 0x100) ___1a51d0h[n] = pal[n];

	bpk_decode4(D(___243d28h)*D(___243d2ch), 0x30a, ___243d58h, ___243d60h);

	if(D(___196dach) != 0){

		strcat(strcpy(fname, ___19bd64h), "-FLIP.PAL");
		old_bpa_read(___243dd0h, (__POINTER__)&pal, fname);
		strcat(strcpy(fname, ___19bd64h), "-FLIP.SCX");
		
		if((fd = fopen(fname, "rb")) != 0){

			fseek(fd, 0xa, SEEK_SET);
			fread(&pal, sizeof(pal256_t), 1, fd);
			fclose(fd);
		}

		n = -1;
		while(++n < 0x100) ___1a51d0h[n] = pal[n];
	}

	D(___243d08h) = 0x100;
}

static void race___4313ch(void){

	char 	fname[0x10];

	strcat(strcpy(fname, ___19bd64h), "-MAS.BPK");
	old_bpa_read(___243dd0h, ___1a54d0h, fname);
	bpk_decode4(D(___243d28h)*D(___243d2ch), 0x30a, ___243d60h, ___1a54d0h);

	strcat(strcpy(fname, ___19bd64h), "-VAI.BPK");
	old_bpa_read(___243dd0h, ___1a54d0h, fname);
	bpk_decode4(D(___243d30h)*D(___243d04h), 0x30a, ___243d78h, ___1a54d0h);

	strcat(strcpy(fname, ___19bd64h), "-LR1.BPK");
	old_bpa_read(___243dd0h, ___1a54d0h, fname);
	bpk_decode4(D(___243cf8h)*D(___243d10h), 0x30a, ___243d54h, ___1a54d0h);   
}

typedef char char14[14];

static const char14 ___196dfch[7] = {
	[0] = "KUPLA",
	[1] = "PICKUP",
	[2] = "SEDAN",
	[3] = "CAMARO",
	[4] = "PORCHE",
	[5] = "LOTUS",
	[6] = "SPECIAL"
};

static void race___432d8h(void){
// LOAD CAR IMAGES 

	char * 			suffix;
	char 			fname[0x10];
	int 			i, n;
	__BYTE__ * 		CarSpinsStripe;
	struct_54_t *	s_54;


	s_54 = (struct_54_t *)___1de7d0h;

	n = -1;
	while(++n < D(NUM_OF_CARS)){

		suffix = ((s_54[n].__24 == 1)&&((int)D(___1de580h+0x94*n) < 6)) ? "-S.BPK" : ".BPK";
		strcat(strcpy(fname, ___196dfch[D(___1de580h+0x94*n)]), suffix);
		old_bpa_read("ENGINE.BPA", ___1a54d0h, fname);
		CarSpinsStripe = (__BYTE__ *)___243d74h[n];
		bpk_decode2(CarSpinsStripe, ___1a54d0h);	// 40*40*96

		i = -1;
		while(++i < sizeof(car_spins_t)){

			if((CarSpinsStripe[i] >= 0xf)&&(CarSpinsStripe[i] <= 0x18)) CarSpinsStripe[i] += 0xa*n;
		}
	}
}

static void race___43b14h(void){

	old_bpa_read("ENGINE.BPA", ___1a54d0h, "MINES1A.BPK");
	bpk_decode2(___243d8ch, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "BLOWI.BPK");
	bpk_decode2(___243d7ch, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME1.BPK");
	bpk_decode2(___243298h[0], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME2.BPK");
	bpk_decode2(___243298h[1], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME3.BPK");
	bpk_decode2(___243298h[2], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME4.BPK");
	bpk_decode2(___243298h[3], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME5.BPK");
	bpk_decode2(___243298h[4], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME6.BPK");
	bpk_decode2(___243298h[5], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "SHOTS.BPK");
	bpk_decode2(___243d88h, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, D(___196dach) ? "OBST_REV.BPK" : "OBSTACLE.BPK");
	bpk_decode2(___243d38h, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "PEDESTR.BPK");
	bpk_decode2(___243d40h, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "SPLAT3.BPK");
	bpk_decode2(___243288h[0], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "SPLAT4.BPK");
	bpk_decode2(___243288h[1], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "ROCKET1.BPK");
	bpk_decode2(___243290h[0], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "ROCKET2.BPK");
	bpk_decode2(___243290h[1], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "BURN1A.BPK");
	bpk_decode2(___243d68h, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "SMOKE.BPK");
	bpk_decode2(___243d64h, ___1a54d0h);
}

static void race___43984h(void){

	char 	fname[0x10];
	
	old_bpa_read(___243dd0h, ___1a54d0h, strcat(strcpy(fname, ___19bd64h), "-SHA.BPK"));
	bpk_decode4(4, 0, ___243c5ch, ___1a54d0h);
	bpk_decode4(4, 4, ___2438c4h, ___1a54d0h);
	bpk_decode4(4*D(___243c5ch), 8, ___1de920h, ___1a54d0h);
	bpk_decode4(4*D(___243c5ch), 4*D(___243c5ch)+8, ___1ded20h, ___1a54d0h);
	bpk_decode4(4*D(___243c5ch), 8*D(___243c5ch)+8, ___1df120h, ___1a54d0h);
	bpk_decode4(4*D(___2438c4h), 0xc*D(___243c5ch)+8, ___1e8448h, ___1a54d0h);
	bpk_decode4(4*D(___2438c4h), 4*D(___2438c4h)+0xc*D(___243c5ch)+8, ___1e8048h, ___1a54d0h);
	bpk_decode4(4*D(___2438c4h), 8*D(___2438c4h)+0xc*D(___243c5ch)+8, ___1e7c48h, ___1a54d0h);
}

static void race___43744h(void){

	char 	fname[0x10];

	old_bpa_read(___243dd0h, ___243078h, strcat(strcpy(fname, ___19bd64h), "-SKI.TAB"));
	old_bpa_read(___243dd0h, ___242d78h, strcat(strcpy(fname, ___19bd64h), "-BLO.TAB"));
	old_bpa_read(___243dd0h, ___241c78h, strcat(strcpy(fname, ___19bd64h), "-LIT.TAB"));
	old_bpa_read("ENGINE.BPA", ___240a48h, "VARJO.TAB");
}

static void race___43884h(void){

	int 	n;
	char 	fname[0x10];

	old_bpa_read(___243dd0h, ___242578h, strcat(strcpy(fname, ___19bd64h), "-DRV.DAT"));
	
	n = -1;
	while(++n < 0x100) D(4*n+___241d78h) = D(___242578h+4*(n+0x100));

	old_bpa_read(___243dd0h, ___242178h, strcat(strcpy(fname, ___19bd64h), "-OHI.DAT"));
}

static void race___43db0h(void){

	old_bpa_read("ENGINE.BPA", ___1a54d0h, "GEN-FLA.BPK");
	bpk_decode2(___243d50h, ___1a54d0h);  
}

static void race___43de8h(void){

	old_bpa_read("ENGINE.BPA", ___1a54d0h, "GEN-LAM.BPK");
	bpk_decode2(___243d6ch, ___1a54d0h);
}

static void race___43e20h(void){

	old_bpa_read("ENGINE.BPA", ___1a54d0h, "GEN-MES.BPK");
	bpk_decode2(___243d4ch, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "DAMSLID.BPK");
	bpk_decode2(___243d48h, ___1a54d0h);
}

static void race___42be4h(void){

	int 	n;

	old_bpa_read("IBFILES.BPA", ___1a54d0h, "BOARDS.BPK");

	if(D(0x94*D(MY_CAR_IDX)+___1de580h+0x2c) == 0){

		bpk_decode4(0x1a00, 0x1a00*D(MY_CAR_IDX)+0x8800, ___1c9f10h, ___1a54d0h);
	}
	else {

		bpk_decode4(0x1a00, 0x2200*D(MY_CAR_IDX), ___1c9f10h, ___1a54d0h);
	}

	n = -1;
	if(++n == D(MY_CAR_IDX)) n++;
	bpk_decode4(0x800, 0x2200*n+0x1a00, ___1c9f10h+0x1a00, ___1a54d0h);
	if(++n == D(MY_CAR_IDX)) n++;
	bpk_decode4(0x800, 0x2200*n+0x1a00, ___1c9f10h+0x2200, ___1a54d0h);
	if(++n == D(MY_CAR_IDX)) n++;
	bpk_decode4(0x800, 0x2200*n+0x1a00, ___1c9f10h+0x2a00, ___1a54d0h);


	old_bpa_read("IBFILES.BPA", ___1a54d0h, "RASTI1.BPK");
	bpk_decode2(___243d84h, ___1a54d0h);

	switch(D(0x94*D(MY_CAR_IDX)+___1de580h)){
	case 0:
		old_bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-KUP.BPK");
		break;
	case 1:
		old_bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-PIC.BPK");
		break;
	case 2:
		old_bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-SED.BPK");
		break;
	case 3:
		old_bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-CAM.BPK");
		break;
	case 4:
		old_bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-POR.BPK");
		break;
	case 5:
		old_bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-LOT.BPK");
		break;
	default:
		break;
	}

	bpk_decode4(0x1f80, 0x1f80*D(MY_CAR_IDX), ___1d5890h, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "BIGNUM6.BPK");
	bpk_decode2(___1de210h, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "SMALFO4A.BPK");
	bpk_decode2(___1d7810h, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "POSNUM2.BPK");
	bpk_decode2(___1d8910h, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "OWN-NUM1.BPK");
	bpk_decode2(___1d8a10h, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "OTH-NUM1.BPK");
	bpk_decode2(___1d2710h, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "GOALNUM2.BPK");
	bpk_decode2(___243d3ch, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "SIDEBOM1.BPK");
	bpk_decode2(___243d34h, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "SMALLBAR.BPK");

	if(D(0x94*D(MY_CAR_IDX)+___1de580h+0x2c) == 0){

		bpk_decode4(0x800, 0x800*D(MY_CAR_IDX)+0x2000, ___1d8110h, ___1a54d0h);
	}
	else {

		bpk_decode4(0x800, 0x800*D(MY_CAR_IDX), ___1d8110h, ___1a54d0h);
	}
}

void race___42824h(void){

	strcpy(___243dd0h, ___19bd64h);
	strcat(___243dd0h, ".BPA");
	race___42f04h();
	race___4313ch();
	race___432d8h();
	race___43b14h();
	race___43984h();
	race___43488h();
	race___43744h();
	race___43884h();
	race___43db0h();
	race___43de8h();
	race___43e20h();
	race___42be4h();
}
