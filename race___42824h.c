#include "drally.h"
#include "drally_structs_free.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

typedef rgb24_t pal256_t[0x100];

typedef struct xc50_s {
	int 		PointsN;			// +000
	int 		TrianglesN;			// +004
	__DWORD__ 	CONST_X___8[75];		// +008
	__DWORD__ 	CONST_Y_134[75];		// +134
	__DWORD__	CONST_Z_260[75];		// +260
	__DWORD__ 	_38C;			// +38c
	__DWORD__	_390;			// +390
	__DWORD__	_394;			// +394
	__DWORD__ 	_398;			// +398
	__DWORD__	IndicesP1[100];		// +39c
	__DWORD__	IndicesP2[100];		// +52c
	__DWORD__	IndicesP3[100];		// +6bc
	__DWORD__	_84C[100];		// +84c
	__DWORD__	TRX_X;			// +9dc
	__DWORD__ 	TRX_Y;			// +9e0
	__DWORD__	X_REL_VIEWPORT_CENTER;			// +9e4
	__DWORD__	Y_REL_VIEWPORT_CENTER;			// +9e8
	__DWORD__	PointsX[75];		// +9ec
	__DWORD__	PointsY[75];		// +b18
	__DWORD__	_C44;			// +c44
	__DWORD__	_C48;			// +c48
	__DWORD__	_C4C;			// +c4c
} xc50_t;

typedef struct x2c_s {
    __DWORD__   width;     	// +00
    __DWORD__   height;   	// +04
    __DWORD__   offset;    	// +08
    __DWORD__   XPos;      	// +0c
    __DWORD__   YPos;     	// +10
    __DWORD__   _14;        // +14
    __DWORD__   _18;        // +18
    __DWORD__   _1C;        // +1c
    __DWORD__   _20;        // +20
    __DWORD__   _24;        // +24
    __DWORD__   _28;        // +28
} x2c_t;

	extern char ___19bd64h[16];
	extern char TRX_BPA[14];
	extern __POINTER__ TRX_MAS;
	extern pal256_t ___1a51d0h;
	extern int TRX_WIDTH;
	extern int TRX_HEIGHT;
	extern __POINTER__ TRX_IMA;
	extern __BYTE__ ___243d08h[];
	extern __BYTE__ ___196dach[];
	extern __BYTE__ ___1a54d0h[];
	extern int TRX_WIDTH_QTR;
	extern int TRX_HEIGHT_QTR;
	extern __POINTER__ TRX_VAI;
	extern __POINTER__ TRX_LR1;
	extern car_spins_t * ___243d74h;
	extern __BYTE__ NUM_OF_CARS[];
	extern __BYTE__ ___1de580h[];
	extern __POINTER__ RACE_MINES1A_BPK;
	extern __POINTER__ RACE_BLOWI_BPK;
	extern __POINTER__ RACE_FLAMEX_BPK[6];
	extern __POINTER__ RACE_SHOTS_BPK;
	extern __POINTER__ RACE_OBSTACLE_BPK;
	extern __POINTER__ RACE_PEDESTR_BPK;
	extern __POINTER__ RACE_SPLATX_BPK[2];
	extern __POINTER__ RACE_ROCKETX_BPK[2];
	extern __POINTER__ RACE_BURN1A_BPK;
	extern __POINTER__ RACE_SMOKE_BPK;
	extern __BYTE__ ___243c5ch[];
	extern __BYTE__ ___2438c4h[];
	extern __BYTE__ X___1de920h[];
	extern __BYTE__ Y___1ded20h[];
	extern __BYTE__ ___1df120h[];
	extern __BYTE__ ___1e8448h[];
	extern __BYTE__ ___1e8048h[];
	extern __BYTE__ ___1e7c48h[];
	extern float TRX_DRV_DAT[0x200];
	extern int TRX_OHI_DAT[0x100];
	extern __POINTER__ GEN_FLA_BPK;
	extern __POINTER__ GEN_LAM_BPK;
	extern __POINTER__ GEN_MES_BPK;
	extern __POINTER__ DAMSLID_BPK;
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___1c9f10h[];
	extern __POINTER__ RASTI1_BPK;
	extern __BYTE__ ___1d5890h[0x1f80];
	extern __BYTE__ ___1de210h[];
	extern __BYTE__ ___1d7810h[];
	extern __BYTE__ ___1d8910h[];
	extern __BYTE__ ___1d8a10h[];
	extern __BYTE__ ___1d2710h[];
	extern __POINTER__ GOALNUM2_BPK;
	extern __POINTER__ SIDEBOM1_BPK;
	extern __BYTE__ ___1d8110h[];
	extern __BYTE__ ___1de7d0h[];
	extern __DWORD__ NUM_OF_OBJECTS;
    extern __DWORD__ NUM_OF_TEXTURES;
    extern xc50_t ___1f3b08h[];
    extern x2c_t ___240b48h[];		// <0x240b48 - 0x240b74)
    extern __POINTER__ ___243d5ch;
	
	
__BYTE__ VARJO_TAB[0x100];
__BYTE__ TRX_LIT_TAB[0x100];
__BYTE__ TRX_BLO_TAB[0x100];
__BYTE__ TRX_SKI_TAB[0x100];

void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode2(__POINTER__, __POINTER__);
void bpk_decode4(__DWORD__, __DWORD__, __POINTER__, __POINTER__);


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

void race___42824h(void){

	int 			i, n;
	FILE * 			fd;
	char 			fname[0x10];
	pal256_t 		pal;
	char * 			suffix;
	__BYTE__ * 		CarSpinsStripe;
	struct_54_t *	s_54;


	strcat(strcpy(TRX_BPA, ___19bd64h), ".BPA");
	strcat(strcpy(fname, ___19bd64h), "-IMA.BPK");
	old_bpa_read(TRX_BPA, TRX_MAS, fname);
	bpk_decode4(0x300, 0xa, (__POINTER__)&pal, TRX_MAS);

	n = -1;
	while(++n < 0x100) ___1a51d0h[n] = pal[n];

	bpk_decode4(TRX_WIDTH*TRX_HEIGHT, 0x30a, TRX_IMA, TRX_MAS);

	if(D(___196dach) != 0){

		strcat(strcpy(fname, ___19bd64h), "-FLIP.PAL");
		old_bpa_read(TRX_BPA, (__POINTER__)&pal, fname);
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

	strcat(strcpy(fname, ___19bd64h), "-MAS.BPK");
	old_bpa_read(TRX_BPA, ___1a54d0h, fname);
	bpk_decode4(TRX_WIDTH*TRX_HEIGHT, 0x30a, TRX_MAS, ___1a54d0h);

	strcat(strcpy(fname, ___19bd64h), "-VAI.BPK");
	old_bpa_read(TRX_BPA, ___1a54d0h, fname);
	bpk_decode4(TRX_WIDTH_QTR*TRX_HEIGHT_QTR, 0x30a, TRX_VAI, ___1a54d0h);

	strcat(strcpy(fname, ___19bd64h), "-LR1.BPK");
	old_bpa_read(TRX_BPA, ___1a54d0h, fname);
	bpk_decode4(TRX_WIDTH_QTR*TRX_HEIGHT_QTR, 0x30a, TRX_LR1, ___1a54d0h);  


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

	old_bpa_read("ENGINE.BPA", ___1a54d0h, "MINES1A.BPK");
	bpk_decode2(RACE_MINES1A_BPK, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "BLOWI.BPK");
	bpk_decode2(RACE_BLOWI_BPK, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME1.BPK");
	bpk_decode2(RACE_FLAMEX_BPK[0], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME2.BPK");
	bpk_decode2(RACE_FLAMEX_BPK[1], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME3.BPK");
	bpk_decode2(RACE_FLAMEX_BPK[2], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME4.BPK");
	bpk_decode2(RACE_FLAMEX_BPK[3], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME5.BPK");
	bpk_decode2(RACE_FLAMEX_BPK[4], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "FLAME6.BPK");
	bpk_decode2(RACE_FLAMEX_BPK[5], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "SHOTS.BPK");
	bpk_decode2(RACE_SHOTS_BPK, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, D(___196dach) ? "OBST_REV.BPK" : "OBSTACLE.BPK");
	bpk_decode2(RACE_OBSTACLE_BPK, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "PEDESTR.BPK");
	bpk_decode2(RACE_PEDESTR_BPK, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "SPLAT3.BPK");
	bpk_decode2(RACE_SPLATX_BPK[0], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "SPLAT4.BPK");
	bpk_decode2(RACE_SPLATX_BPK[1], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "ROCKET1.BPK");
	bpk_decode2(RACE_ROCKETX_BPK[0], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "ROCKET2.BPK");
	bpk_decode2(RACE_ROCKETX_BPK[1], ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "BURN1A.BPK");
	bpk_decode2(RACE_BURN1A_BPK, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "SMOKE.BPK");
	bpk_decode2(RACE_SMOKE_BPK, ___1a54d0h);
	
	old_bpa_read(TRX_BPA, ___1a54d0h, strcat(strcpy(fname, ___19bd64h), "-SHA.BPK"));
	bpk_decode4(4, 0, ___243c5ch, ___1a54d0h);
	D(___243c5ch) = SDL_SwapLE32(D(___243c5ch));
	bpk_decode4(4, 4, ___2438c4h, ___1a54d0h);
	D(___2438c4h) = SDL_SwapLE32(D(___2438c4h));
	bpk_decode4(4*D(___243c5ch), 8, X___1de920h, ___1a54d0h);
	bpk_decode4(4*D(___243c5ch), 4*D(___243c5ch)+8, Y___1ded20h, ___1a54d0h);
	bpk_decode4(4*D(___243c5ch), 8*D(___243c5ch)+8, ___1df120h, ___1a54d0h);
	bpk_decode4(4*D(___2438c4h), 0xc*D(___243c5ch)+8, ___1e8448h, ___1a54d0h);
	bpk_decode4(4*D(___2438c4h), 4*D(___2438c4h)+0xc*D(___243c5ch)+8, ___1e8048h, ___1a54d0h);
	bpk_decode4(4*D(___2438c4h), 8*D(___2438c4h)+0xc*D(___243c5ch)+8, ___1e7c48h, ___1a54d0h);
	for (int i = 0; i < 256; i++) {
		((int*)X___1de920h)[i] = SDL_SwapLE32(((int*)X___1de920h)[i]);
		((int*)Y___1ded20h)[i] = SDL_SwapLE32(((int*)Y___1ded20h)[i]);
		((int*)___1df120h)[i] = SDL_SwapLE32(((int*)___1df120h)[i]); // TODO unused?
		((int*)___1e8448h)[i] = SDL_SwapLE32(((int*)___1e8448h)[i]);
		((int*)___1e8048h)[i] = SDL_SwapLE32(((int*)___1e8048h)[i]);
		((int*)___1e7c48h)[i] = SDL_SwapLE32(((int*)___1e7c48h)[i]);
	}

	old_bpa_read(TRX_BPA, ___1a54d0h, strcat(strcpy(fname, ___19bd64h), "-SCE.BPK"));

	NUM_OF_OBJECTS = 0;
    bpk_decode4(1, 0, (__POINTER__)&NUM_OF_OBJECTS, ___1a54d0h);
	NUM_OF_OBJECTS = SDL_SwapLE32(NUM_OF_OBJECTS);
    bpk_decode4(sizeof(xc50_t)*NUM_OF_OBJECTS, 1, (__POINTER__)&___1f3b08h, ___1a54d0h);
	for (int i = 0; i < NUM_OF_OBJECTS; i++)
	{
		xc50_t* obj = &___1f3b08h[i];
		obj->PointsN = SDL_SwapLE32(obj->PointsN);
		obj->TrianglesN = SDL_SwapLE32(obj->TrianglesN);
		for (int j = 0; j < 75; j++) {
			obj->CONST_X___8[j] = SDL_SwapLE32(obj->CONST_X___8[j]);
			obj->CONST_Y_134[j] = SDL_SwapLE32(obj->CONST_Y_134[j]);
			obj->CONST_Z_260[j] = SDL_SwapLE32(obj->CONST_Z_260[j]);
			obj->PointsX[j] = SDL_SwapLE32(obj->PointsX[j]);
			obj->PointsY[j] = SDL_SwapLE32(obj->PointsY[j]);
		}
		for (int j = 0; j < 100; j++) {
			obj->IndicesP1[j] = SDL_SwapLE32(obj->IndicesP1[j]);
			obj->IndicesP2[j] = SDL_SwapLE32(obj->IndicesP2[j]);
			obj->IndicesP3[j] = SDL_SwapLE32(obj->IndicesP3[j]);
			obj->_84C[j] = SDL_SwapLE32(obj->_84C[j]);
		}
		obj->_38C = SDL_SwapLE32(obj->_38C);
		obj->_390 = SDL_SwapLE32(obj->_390);
		obj->_394 = SDL_SwapLE32(obj->_394);
		obj->_398 = SDL_SwapLE32(obj->_398);
		obj->TRX_X = SDL_SwapLE32(obj->TRX_X);
		obj->TRX_Y = SDL_SwapLE32(obj->TRX_Y);
		obj->X_REL_VIEWPORT_CENTER = SDL_SwapLE32(obj->X_REL_VIEWPORT_CENTER);
		obj->Y_REL_VIEWPORT_CENTER = SDL_SwapLE32(obj->Y_REL_VIEWPORT_CENTER);
		obj->_C44 = SDL_SwapLE32(obj->_C44);
		obj->_C48 = SDL_SwapLE32(obj->_C48);
		obj->_C4C = SDL_SwapLE32(obj->_C4C);
	}
	NUM_OF_TEXTURES = 0;
    bpk_decode4(1, sizeof(xc50_t)*NUM_OF_OBJECTS+1, (__POINTER__)&NUM_OF_TEXTURES, ___1a54d0h);
	NUM_OF_TEXTURES = SDL_SwapLE32(NUM_OF_TEXTURES);

    if(NUM_OF_TEXTURES > 0) bpk_decode4(sizeof(x2c_t)*NUM_OF_TEXTURES, sizeof(xc50_t)*NUM_OF_OBJECTS+2, (__POINTER__)&___240b48h, ___1a54d0h);
	for (int i = 0; i < NUM_OF_TEXTURES; i++)
	{
		x2c_t* texture = &___240b48h[i];
		texture->width = SDL_SwapLE32(texture->width);
		texture->height = SDL_SwapLE32(texture->height);
		texture->offset = SDL_SwapLE32(texture->offset);
		texture->XPos = SDL_SwapLE32(texture->XPos);
		texture->YPos = SDL_SwapLE32(texture->YPos);
		texture->_14 = SDL_SwapLE32(texture->_14);
		texture->_18 = SDL_SwapLE32(texture->_18);
		texture->_1C = SDL_SwapLE32(texture->_1C);
		texture->_20 = SDL_SwapLE32(texture->_20);
		texture->_24 = SDL_SwapLE32(texture->_24);
		texture->_28 = SDL_SwapLE32(texture->_28);
	}
/*
	n = -1;
	while(++n < NUM_OF_TEXTURES){

		printf("[%2d] %dx%d, +%d, X=%d, Y=%d, M=%d\n", n, 
			___240b48h[n].width,
			___240b48h[n].height,
			___240b48h[n].offset,
			___240b48h[n].XPos,
			___240b48h[n].YPos,
			___240b48h[n]._14
		);
	}
*/
    switch(___19bd64h[2]){
    case '0':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        bpk_decode4(0x493e0, sizeof(x2c_t)*NUM_OF_TEXTURES+sizeof(xc50_t)*NUM_OF_OBJECTS+2, ___243d5ch, ___1a54d0h);
        break;
    case '1':
    case '2':
        bpk_decode4(0x5f370, sizeof(x2c_t)*NUM_OF_TEXTURES+sizeof(xc50_t)*NUM_OF_OBJECTS+2, ___243d5ch, ___1a54d0h);
        break;
    default: 
        break;
    }

	old_bpa_read(TRX_BPA, TRX_SKI_TAB, strcat(strcpy(fname, ___19bd64h), "-SKI.TAB"));
	old_bpa_read(TRX_BPA, TRX_BLO_TAB, strcat(strcpy(fname, ___19bd64h), "-BLO.TAB"));
	old_bpa_read(TRX_BPA, TRX_LIT_TAB, strcat(strcpy(fname, ___19bd64h), "-LIT.TAB"));
	old_bpa_read("ENGINE.BPA", VARJO_TAB, "VARJO.TAB");
	old_bpa_read(TRX_BPA, (__POINTER__)TRX_DRV_DAT, strcat(strcpy(fname, ___19bd64h), "-DRV.DAT"));
	for (int i = 0; i < 512; i++) {
		TRX_DRV_DAT[i] = SDL_SwapFloatLE(TRX_DRV_DAT[i]);
	}
	old_bpa_read(TRX_BPA, (__POINTER__)TRX_OHI_DAT, strcat(strcpy(fname, ___19bd64h), "-OHI.DAT"));
	for (int i = 0; i < 256; i++) {
		TRX_OHI_DAT[i] = SDL_SwapLE32(TRX_OHI_DAT[i]);
	}
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "GEN-FLA.BPK");
	bpk_decode2(GEN_FLA_BPK, ___1a54d0h);  
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "GEN-LAM.BPK");
	bpk_decode2(GEN_LAM_BPK, ___1a54d0h);
	old_bpa_read("ENGINE.BPA", ___1a54d0h, "GEN-MES.BPK");
	bpk_decode2(GEN_MES_BPK, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "DAMSLID.BPK");
	bpk_decode2(DAMSLID_BPK, ___1a54d0h);
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
	bpk_decode2(RASTI1_BPK, ___1a54d0h);

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
	bpk_decode2(GOALNUM2_BPK, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "SIDEBOM1.BPK");
	bpk_decode2(SIDEBOM1_BPK, ___1a54d0h);
	old_bpa_read("IBFILES.BPA", ___1a54d0h, "SMALLBAR.BPK");

	if(D(0x94*D(MY_CAR_IDX)+___1de580h+0x2c) == 0){

		bpk_decode4(0x800, 0x800*D(MY_CAR_IDX)+0x2000, ___1d8110h, ___1a54d0h);
	}
	else {

		bpk_decode4(0x800, 0x800*D(MY_CAR_IDX), ___1d8110h, ___1a54d0h);
	}
}
