#include "drally.h"
#include "drmemory.h"
#include "drally_structs_free.h"

	extern int TRX_WIDTH;
	extern int TRX_HEIGHT;
	extern int TRX_HEIGHT_QTR;
	extern int TRX_WIDTH_QTR;
	extern __POINTER__ TRX_IMA;
	extern __POINTER__ TRX_MAS;
	extern __POINTER__ TRX_VAI;
	extern __POINTER__ TRX_LR1;
	extern __POINTER__ ___243d5ch;
	extern __POINTER__ BACKBUFFER;
	extern car_spins_t * ___243d74h;
	extern __POINTER__ GEN_FLA_BPK;
	extern __POINTER__ GEN_LAM_BPK;
	extern __POINTER__ DAMSLID_BPK;
	extern __POINTER__ GEN_MES_BPK;
	extern __POINTER__ CPY_GEN_MES_BPK;
	extern __POINTER__ RASTI1_BPK;
	extern __POINTER__ GOALNUM2_BPK;
	extern __POINTER__ RACE_FLAMEX_BPK[6];
	extern __POINTER__ RACE_MINES1A_BPK;
	extern __POINTER__ RACE_BLOWI_BPK;
	extern __POINTER__ SIDEBOM1_BPK;
	extern __POINTER__ RACE_SHOTS_BPK;
	extern __POINTER__ RACE_OBSTACLE_BPK;
	extern __POINTER__ RACE_PEDESTR_BPK;
	extern __POINTER__ RACE_SPLATX_BPK[2];
	extern __POINTER__ RACE_ROCKETX_BPK[2];
	extern __POINTER__ RACE_BURN1A_BPK;
	extern __POINTER__ RACE_SMOKE_BPK;
	extern __POINTER__ ___243314h;
	extern __POINTER__ ___243310h;

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);

void race_alloc(void){

	TRX_IMA = ___3f71ch__allocateMemory(TRX_WIDTH*TRX_HEIGHT);
	TRX_MAS = ___3f71ch__allocateMemory(TRX_WIDTH*TRX_HEIGHT);
	TRX_VAI = ___3f71ch__allocateMemory(TRX_WIDTH_QTR*TRX_HEIGHT_QTR);
	TRX_LR1 = ___3f71ch__allocateMemory(TRX_WIDTH_QTR*TRX_HEIGHT_QTR);
	___243d5ch = ___3f71ch__allocateMemory(0x5f370);
	BACKBUFFER = ___3f71ch__allocateMemory(0x19400)+0x200;
	___243d74h = (car_spins_t *)___3f71ch__allocateMemory(4*sizeof(car_spins_t));
	GEN_FLA_BPK = ___3f71ch__allocateMemory(0x4b000);
	GEN_LAM_BPK = ___3f71ch__allocateMemory(0x3840);
	SIDEBOM1_BPK = ___3f71ch__allocateMemory(0x30);
	DAMSLID_BPK = ___3f71ch__allocateMemory(0x240);
	GEN_MES_BPK = ___3f71ch__allocateMemory(0x3c90);
	CPY_GEN_MES_BPK = ___3f71ch__allocateMemory(0x3c90);
	RASTI1_BPK = ___3f71ch__allocateMemory(0x800);
	GOALNUM2_BPK = ___3f71ch__allocateMemory(0x268);
	RACE_FLAMEX_BPK[0] = ___3f71ch__allocateMemory(0xc00);
	RACE_FLAMEX_BPK[1] = ___3f71ch__allocateMemory(0xc00);
	RACE_FLAMEX_BPK[2] = ___3f71ch__allocateMemory(0xc00);
	RACE_FLAMEX_BPK[3] = ___3f71ch__allocateMemory(0xc00);
	RACE_FLAMEX_BPK[4] = ___3f71ch__allocateMemory(0xc00);
	RACE_FLAMEX_BPK[5] = ___3f71ch__allocateMemory(0xc00);
	RACE_MINES1A_BPK = ___3f71ch__allocateMemory(0x140);
	RACE_BLOWI_BPK = ___3f71ch__allocateMemory(0x600);
	RACE_SHOTS_BPK = ___3f71ch__allocateMemory(0x480);
	RACE_OBSTACLE_BPK = ___3f71ch__allocateMemory(0x800);
	RACE_PEDESTR_BPK = ___3f71ch__allocateMemory(0x2400);
	RACE_SPLATX_BPK[0] = ___3f71ch__allocateMemory(0x800);
	RACE_SPLATX_BPK[1] = ___3f71ch__allocateMemory(0x800);
	RACE_ROCKETX_BPK[0] = ___3f71ch__allocateMemory(0x1800);
	RACE_ROCKETX_BPK[1] = ___3f71ch__allocateMemory(0x1800);
	RACE_BURN1A_BPK = ___3f71ch__allocateMemory(0x800);
	RACE_SMOKE_BPK = ___3f71ch__allocateMemory(0xc0);
}

void race_free(void){

	dRMemory_free(TRX_IMA);
	dRMemory_free(TRX_MAS);
	dRMemory_free(TRX_VAI);
	dRMemory_free(TRX_LR1);
	dRMemory_free(___243d5ch);
	dRMemory_free(BACKBUFFER-0x200);
	dRMemory_free((__POINTER__)___243d74h);
	dRMemory_free(GEN_FLA_BPK);
	dRMemory_free(SIDEBOM1_BPK);
	dRMemory_free(GEN_LAM_BPK);
	dRMemory_free(DAMSLID_BPK);
	dRMemory_free(GEN_MES_BPK);
	dRMemory_free(CPY_GEN_MES_BPK);
	dRMemory_free(RASTI1_BPK);
	dRMemory_free(GOALNUM2_BPK);
	dRMemory_free(RACE_FLAMEX_BPK[0]);
	dRMemory_free(RACE_FLAMEX_BPK[1]);
	dRMemory_free(RACE_FLAMEX_BPK[2]);
	dRMemory_free(RACE_FLAMEX_BPK[3]);
	dRMemory_free(RACE_FLAMEX_BPK[4]);
	dRMemory_free(RACE_FLAMEX_BPK[5]);
	dRMemory_free(RACE_MINES1A_BPK);
	dRMemory_free(RACE_BLOWI_BPK);
	dRMemory_free(RACE_SHOTS_BPK);
	dRMemory_free(RACE_OBSTACLE_BPK);
	dRMemory_free(RACE_PEDESTR_BPK);
	dRMemory_free(RACE_SPLATX_BPK[0]);
	dRMemory_free(RACE_SPLATX_BPK[1]);
	dRMemory_free(RACE_ROCKETX_BPK[0]);
	dRMemory_free(RACE_ROCKETX_BPK[1]);
	dRMemory_free(RACE_BURN1A_BPK);
	dRMemory_free(RACE_SMOKE_BPK);
	dRMemory_free(___243314h);
	dRMemory_free(___243310h);
}
