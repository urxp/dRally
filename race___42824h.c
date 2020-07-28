#include "drally.h"

#pragma pack(1)
typedef struct rgb24_s {
	byte 	r;
	byte 	g;
	byte 	b;
} rgb24_t;

typedef rgb24_t pal256_t[0x100];

	extern byte ___19bd64h[];
	extern byte ___243dd0h[];
	extern byte ___243d60h[];
	extern pal256_t ___1a51d0h;
	extern byte ___243d28h[];
	extern byte ___243d2ch[];
	extern byte ___243d58h[];
	extern byte ___243d08h[];
	extern byte ___196dach[];
	extern byte ___1a54d0h[];
	extern byte ___243d30h[];
	extern byte ___243d04h[];
	extern byte ___243d78h[];
	extern byte ___243cf8h[];
	extern byte ___243d10h[];
	extern byte ___243d54h[];
	extern byte ___243d74h[];
	extern byte ___243cf4h[];
	extern byte ___1de580h[];
	extern byte ___196dfch[];
	extern byte ___1de7f4h[];
	extern byte ___243d8ch[];
	extern byte ___243d7ch[];
	extern byte ___243298h[];
	extern byte ___24329ch[];
	extern byte ___2432a0h[];
	extern byte ___2432a4h[];
	extern byte ___2432a8h[];
	extern byte ___2432ach[];
	extern byte ___243d88h[];
	extern byte ___243d38h[];
	extern byte ___243d40h[];
	extern byte ___243288h[];
	extern byte ___24328ch[];
	extern byte ___243290h[];
	extern byte ___243294h[];
	extern byte ___243d68h[];
	extern byte ___243d64h[];
	extern byte ___243c5ch[];
	extern byte ___2438c4h[];
	extern byte ___1de920h[];
	extern byte ___1ded20h[];
	extern byte ___1df120h[];
	extern byte ___1e8448h[];
	extern byte ___1e8048h[];
	extern byte ___1e7c48h[];
	extern byte ___243c88h[];
	extern byte ___1f3b08h[];
	extern byte ___243c94h[];
	extern byte ___240b48h[];
	extern byte ___19bd66h[];
	extern byte ___243d5ch[];
	extern byte ___243078h[];
	extern byte ___242d78h[];
	extern byte ___241c78h[];
	extern byte ___240a48h[];
	extern byte ___242578h[];
	extern byte ___242978h[];
	extern byte ___241d78h[];
	extern byte ___242178h[];
	extern byte ___243d50h[];
	extern byte ___243d6ch[];
	extern byte ___243d4ch[];
	extern byte ___243d48h[];
	extern byte ___243ce8h[];
	extern byte ___1de5ach[];
	extern byte ___1c9f10h[];
	extern byte ___1cb910h[];
	extern byte ___1cc110h[];
	extern byte ___1cc910h[];
	extern byte ___243d84h[];
	extern byte ___1d5890h[];
	extern byte ___1de210h[];
	extern byte ___1d7810h[];
	extern byte ___1d8910h[];
	extern byte ___1d8a10h[];
	extern byte ___1d2710h[];
	extern byte ___243d3ch[];
	extern byte ___243d34h[];
	extern byte ___1d8110h[];
	
void bpa_read(const char *, void *, const char *);
void bpk_decode2(void *, void *);
void bpk_decode4(dword, dword, void *, void *);

static void race___42f04h(void){

	int 		n;
	FILE * 		fd;
	char 		fname[0x10];
	pal256_t 	pal;
/*
	byte 	rix[0xa];
*/
	strcat(strcpy(fname, ___19bd64h), "-IMA.BPK");
	bpa_read(___243dd0h, D(___243d60h), fname);
/*
	bpk_decode4(0xa, 0, &rix, D(___243d60h));
*/
	bpk_decode4(0x300, 0xa, &pal, D(___243d60h));

	n = -1;
	while(++n < 0x100) ___1a51d0h[n] = pal[n];

	bpk_decode4(D(___243d28h)*D(___243d2ch), 0x30a, D(___243d58h), D(___243d60h));
/*
	strcat(strcpy(fname, ___19bd64h), ".SCX");
	fd = fopen(fname, "wb");
	fwrite(&rix, 1, 0xa, fd);
	fwrite(&pal, sizeof(pal256_t), 1, fd);
	fwrite(D(___243d58h), 1, D(___243d28h)*D(___243d2ch), fd);
	fclose(fd);
*/
	if(D(___196dach) != 0){

		strcat(strcpy(fname, ___19bd64h), "-FLIP.PAL");
		bpa_read(___243dd0h, &pal, fname);
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
/*
	FILE * 	fd;
	byte 	header[0x30a];
*/
	strcat(strcpy(fname, ___19bd64h), "-MAS.BPK");
	bpa_read(___243dd0h, ___1a54d0h, fname);
	bpk_decode4(D(___243d28h)*D(___243d2ch), 0x30a, D(___243d60h), ___1a54d0h);
/*
	bpk_decode4(0x30a, 0, &header, ___1a54d0h);
	fd = fopen(strcat(strcpy(fname, ___19bd64h), "-MAS.SCX"), "wb");
	fwrite(&header, 1, 0x30a, fd);
	fwrite(D(___243d60h), 1, D(___243d28h)*D(___243d2ch), fd);
	fclose(fd);
*/
	strcat(strcpy(fname, ___19bd64h), "-VAI.BPK");
	bpa_read(___243dd0h, ___1a54d0h, fname);
	bpk_decode4(D(___243d30h)*D(___243d04h), 0x30a, D(___243d78h), ___1a54d0h);
/*
	bpk_decode4(0x30a, 0, &header, ___1a54d0h);
	fd = fopen(strcat(strcpy(fname, ___19bd64h), "-VAI.SCX"), "wb");
	fwrite(&header, 1, 0x30a, fd);
	fwrite(D(___243d78h), 1, D(___243d30h)*D(___243d04h), fd);
	fclose(fd);
*/
	strcat(strcpy(fname, ___19bd64h), "-LR1.BPK");
	bpa_read(___243dd0h, ___1a54d0h, fname);
	bpk_decode4(D(___243cf8h)*D(___243d10h), 0x30a, D(___243d54h), ___1a54d0h);   
/*
	bpk_decode4(0x30a, 0, &header, ___1a54d0h);
	fd = fopen(strcat(strcpy(fname, ___19bd64h), "-LR1.SCX"), "wb");
	fwrite(&header, 1, 0x30a, fd);
	fwrite(D(___243d54h), 1, D(___243cf8h)*D(___243d10h), fd);
	fclose(fd);
*/
}

static void race___432d8h(void){

	char * 	suffix;
	char 	fname[0x10];
	int 	i, n;

	n = -1;
	while(++n < D(___243cf4h)){

		suffix = ((D(0x54*n+___1de7f4h) == 1)&&((int)D(0x94*n+___1de580h) < 6)) ? "-S.BPK" : ".BPK";
		strcat(strcpy(fname, 0xe*D(0x94*n+___1de580h)+___196dfch), suffix);
		bpa_read("ENGINE.BPA", ___1a54d0h, fname);
		bpk_decode2(0x25800*n+D(___243d74h), ___1a54d0h);

		i = -1;
		while(++i < 0x25800){

			if((B(0x25800*n+i+D(___243d74h)) >= 0xf)&&(B(0x25800*n+i+D(___243d74h)) <= 0x18)) B(0x25800*n+i+D(___243d74h)) += 0xa*n;
		}
	}
}

static void race___43b14h(void){

	bpa_read("ENGINE.BPA", ___1a54d0h, "MINES1A.BPK");
	bpk_decode2(D(___243d8ch), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "BLOWI.BPK");
	bpk_decode2(D(___243d7ch), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME1.BPK");
	bpk_decode2(D(___243298h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME2.BPK");
	bpk_decode2(D(___24329ch), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME3.BPK");
	bpk_decode2(D(___2432a0h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME4.BPK");
	bpk_decode2(D(___2432a4h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME5.BPK");
	bpk_decode2(D(___2432a8h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME6.BPK");
	bpk_decode2(D(___2432ach), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "SHOTS.BPK");
	bpk_decode2(D(___243d88h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, D(___196dach) ? "OBST_REV.BPK" : "OBSTACLE.BPK");
	bpk_decode2(D(___243d38h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "PEDESTR.BPK");
	bpk_decode2(D(___243d40h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "SPLAT3.BPK");
	bpk_decode2(D(___243288h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "SPLAT4.BPK");
	bpk_decode2(D(___24328ch), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "ROCKET1.BPK");
	bpk_decode2(D(___243290h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "ROCKET2.BPK");
	bpk_decode2(D(___243294h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "BURN1A.BPK");
	bpk_decode2(D(___243d68h), ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a54d0h, "SMOKE.BPK");
	bpk_decode2(D(___243d64h), ___1a54d0h);
}

static void race___43984h(void){

	char 	fname[0x10];
	
	bpa_read(___243dd0h, ___1a54d0h, strcat(strcpy(fname, ___19bd64h), "-SHA.BPK"));
	bpk_decode4(4, 0, ___243c5ch, ___1a54d0h);
	bpk_decode4(4, 4, ___2438c4h, ___1a54d0h);
	bpk_decode4(4*D(___243c5ch), 8, ___1de920h, ___1a54d0h);
	bpk_decode4(4*D(___243c5ch), 4*D(___243c5ch)+8, ___1ded20h, ___1a54d0h);
	bpk_decode4(4*D(___243c5ch), 8*D(___243c5ch)+8, ___1df120h, ___1a54d0h);
	bpk_decode4(4*D(___2438c4h), 0xc*D(___243c5ch)+8, ___1e8448h, ___1a54d0h);
	bpk_decode4(4*D(___2438c4h), 4*D(___2438c4h)+0xc*D(___243c5ch)+8, ___1e8048h, ___1a54d0h);
	bpk_decode4(4*D(___2438c4h), 8*D(___2438c4h)+0xc*D(___243c5ch)+8, ___1e7c48h, ___1a54d0h);
}

static void race___43488h(void){

	char 	fname[0x10];

	bpa_read(___243dd0h, ___1a54d0h, strcat(strcpy(fname, ___19bd64h), "-SCE.BPK"));
	bpk_decode4(1, 0, ___243c88h, ___1a54d0h);
	//bpk_decode4(0xc50*D(___243c88h)+1, 1, ___1f3b08h, ___1a54d0h); //? +1
	bpk_decode4(0xc50*D(___243c88h), 1, ___1f3b08h, ___1a54d0h);
	bpk_decode4(1, 0xc50*D(___243c88h)+1, ___243c94h, ___1a54d0h);

	if(0x2c*D(___243c94h) > 0) bpk_decode4(0x2c*D(___243c94h), 0xc50*D(___243c88h)+2, ___240b48h, ___1a54d0h);

	switch((B(___19bd66h)-0x30)&0xff){
	case 0: 
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		bpk_decode4(0x493e0, 0x2c*D(___243c94h)+0xc50*D(___243c88h)+2, D(___243d5ch), ___1a54d0h);
		break;
	case 1:
	case 2:
		bpk_decode4(0x5f370, 0x2c*D(___243c94h)+0xc50*D(___243c88h)+2, D(___243d5ch), ___1a54d0h);
		break;
	default:
		break;
	}
}

static void race___43744h(void){

	char 	fname[0x10];

	bpa_read(___243dd0h, ___243078h, strcat(strcpy(fname, ___19bd64h), "-SKI.TAB"));
	bpa_read(___243dd0h, ___242d78h, strcat(strcpy(fname, ___19bd64h), "-BLO.TAB"));
	bpa_read(___243dd0h, ___241c78h, strcat(strcpy(fname, ___19bd64h), "-LIT.TAB"));
	bpa_read("ENGINE.BPA", ___240a48h, "VARJO.TAB");
}

static void race___43884h(void){

	int 	n;
	char 	fname[0x10];

	bpa_read(___243dd0h, ___242578h, strcat(strcpy(fname, ___19bd64h), "-DRV.DAT"));
	
	n = -1;
	while(++n < 0x100) D(4*n+___241d78h) = D(4*n+___242978h);

	bpa_read(___243dd0h, ___242178h, strcat(strcpy(fname, ___19bd64h), "-OHI.DAT"));
}

static void race___43db0h(void){

	bpa_read("ENGINE.BPA", ___1a54d0h, "GEN-FLA.BPK");
	bpk_decode2(D(___243d50h), ___1a54d0h);  
}

static void race___43de8h(void){

	bpa_read("ENGINE.BPA", ___1a54d0h, "GEN-LAM.BPK");
	bpk_decode2(D(___243d6ch), ___1a54d0h);
}

static void race___43e20h(void){

	bpa_read("ENGINE.BPA", ___1a54d0h, "GEN-MES.BPK");
	bpk_decode2(D(___243d4ch), ___1a54d0h);
	bpa_read("IBFILES.BPA", ___1a54d0h, "DAMSLID.BPK");
	bpk_decode2(D(___243d48h), ___1a54d0h);
}

static void race___42be4h(void){

	int 	n;

	bpa_read("IBFILES.BPA", ___1a54d0h, "BOARDS.BPK");

	if(D(0x94*D(___243ce8h)+___1de5ach) == 0){

		bpk_decode4(0x1a00, 0x1a00*D(___243ce8h)+0x8800, ___1c9f10h, ___1a54d0h);
	}
	else {

		bpk_decode4(0x1a00, 0x2200*D(___243ce8h), ___1c9f10h, ___1a54d0h);
	}

	n = -1;
	if(++n == D(___243ce8h)) n++;
	bpk_decode4(0x800, 0x2200*n+0x1a00, ___1cb910h, ___1a54d0h);
	if(++n == D(___243ce8h)) n++;
	bpk_decode4(0x800, 0x2200*n+0x1a00, ___1cc110h, ___1a54d0h);
	if(++n == D(___243ce8h)) n++;
	bpk_decode4(0x800, 0x2200*n+0x1a00, ___1cc910h, ___1a54d0h);

	bpa_read("IBFILES.BPA", ___1a54d0h, "RASTI1.BPK");
	bpk_decode2(D(___243d84h), ___1a54d0h);

	switch(D(0x94*D(___243ce8h)+___1de580h)){
	case 0:
		bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-KUP.BPK");
		break;
	case 1:
		bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-PIC.BPK");
		break;
	case 2:
		bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-SED.BPK");
		break;
	case 3:
		bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-CAM.BPK");
		break;
	case 4:
		bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-POR.BPK");
		break;
	case 5:
		bpa_read("IBFILES.BPA", ___1a54d0h, "DAM-LOT.BPK");
		break;
	default:
		break;
	}

	bpk_decode4(0x1f80, 0x1f80*D(___243ce8h), ___1d5890h, ___1a54d0h);
	bpa_read("IBFILES.BPA", ___1a54d0h, "BIGNUM6.BPK");
	bpk_decode2(___1de210h, ___1a54d0h);
	bpa_read("IBFILES.BPA", ___1a54d0h, "SMALFO4A.BPK");
	bpk_decode2(___1d7810h, ___1a54d0h);
	bpa_read("IBFILES.BPA", ___1a54d0h, "POSNUM2.BPK");
	bpk_decode2(___1d8910h, ___1a54d0h);
	bpa_read("IBFILES.BPA", ___1a54d0h, "OWN-NUM1.BPK");
	bpk_decode2(___1d8a10h, ___1a54d0h);
	bpa_read("IBFILES.BPA", ___1a54d0h, "OTH-NUM1.BPK");
	bpk_decode2(___1d2710h, ___1a54d0h);
	bpa_read("IBFILES.BPA", ___1a54d0h, "GOALNUM2.BPK");
	bpk_decode2(D(___243d3ch), ___1a54d0h);
	bpa_read("IBFILES.BPA", ___1a54d0h, "SIDEBOM1.BPK");
	bpk_decode2(D(___243d34h), ___1a54d0h);
	bpa_read("IBFILES.BPA", ___1a54d0h, "SMALLBAR.BPK");

	if(D(0x94*D(___243ce8h)+___1de5ach) == 0){

		bpk_decode4(0x800, 0x800*D(___243ce8h)+0x2000, ___1d8110h, ___1a54d0h);
	}
	else {

		bpk_decode4(0x800, 0x800*D(___243ce8h), ___1d8110h, ___1a54d0h);
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
