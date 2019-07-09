#include "x86.h"

enum {
	KUPLA, PICKUP, SEDAN, CAMARO, PORSCHE, LOTUS
};

enum {
	LEVEL1, LEVEL2, LEVEL3, LEVEL4
};

    extern const char MENU_BPA[];
	extern byte BPA_Buffer[];

	extern void * bpk_cars[];
	extern void * bpk_engines[];
	extern void * bpk_tires[];
	extern void * bpk_armors[];

    extern byte Roster[];
    extern dword MyID;

    extern byte ___1a1edch[];
    extern byte ___1a1ecch[];
    extern byte ___1a1ee8h[];
    extern byte ___1a1ee0h[];
    extern byte ___1a1eech[];
    extern byte ___1a1ec0h[];
    extern byte ___1a1ec8h[];
    extern byte ___1a1ed0h[];
    extern byte ___1a1ec4h[];
    extern byte ___1a1ee4h[];

    extern void * ___1a10e4h;
    extern void * ___1a1124h;
    extern void * tex_carframe;

    extern void * p_bpk_drugdeal;
    extern void * p_bpk_spons1b;
    extern void * p_bpk_event_2;
    extern void * p_bpk_repear_x;
    extern void * p_bpk_statbas7;
    extern void * p_bpk_statpop4;
    extern void * p_bpk_f_sma3f;
    extern void * p_bpk_choo2;
    extern void * p_bpk_arrows1d;
    extern void * p_bpk_maxi1f;
    extern void * p0_bpk_scenecar;
    extern void * p1_bpk_scenecar;
    extern void * p2_bpk_scenecar;
    extern void * p3_bpk_scenecar;
    extern void * p4_bpk_scenecar;
    extern void * p5_bpk_scenecar;
    extern void * p_bpk_repaani;
    extern void * p_bpk_contani;
    extern void * p_bpk_volcur2;
    extern void * p_bpk_slidcur3;
    extern void * p_bpk_slidcop2;
    extern void * p_bpk_slidmus2;
    extern void * p_bpk_carname;
    extern void * p_bpk_carbas2;
    extern void * p0_bpk_bases4;
    extern void * p1_bpk_bases4;
    extern void * p2_bpk_bases4;
    extern void * p3_bpk_bases4;
    extern void * p4_bpk_bases4;
    extern void * p_bpk_market1e;
    extern void * p_bpk_dealer2b;
    extern void * p_bpk_blacktx1;
    extern void * p_bpk_blacktx2;

    extern const char bpk_statbas7[];	// "statbas7.bpk"
    extern const char bpk_statpop4[];	// "statpop4.bpk"
    extern const char bpk_f_sma3f[];	// "f-sma3f.bpk"
    extern const char bpk_kupla[];		// "kupla.bpk"
    extern const char bpk_pickup[];		// "pickup.bpk"
    extern const char bpk_sedan[];		// "sedan.bpk"
    extern const char bpk_camaro[];		// "camaro.bpk"
    extern const char bpk_porsche[];	// "porsche.bpk"
    extern const char bpk_lotus[];		// "lotus.bpk"
    extern const char bpk_engi1[];		// "engi1.bpk"
    extern const char bpk_engi2[];		// "engi2.bpk"
    extern const char bpk_engi3[];		// "engi3.bpk"
    extern const char bpk_engi4[];		// "engi4.bpk"	
    extern const char bpk_tire1[];		// "tire1.bpk"
    extern const char bpk_tire2[];		// "tire2.bpk"
    extern const char bpk_tire3[];		// "tire3.bpk"
    extern const char bpk_tire4[];		// "tire4.bpk"
    extern const char bpk_armor1[];		// "armor1.bpk"
    extern const char bpk_armor2[];		// "armor2.bpk"
    extern const char bpk_armor3[];		// "armor3.bpk"
    extern const char bpk_armor4[];		// "armor4.bpk"
    extern const char bpk_contani[];	// "contani.bpk"
    extern const char bpk_repaani[];	// "repaani.bpk"
    extern const char bpk_carbas2[];	// "carbas2.bpk"
    extern const char bpk_spons1b[];	// "spons1b.bpk"
    extern const char bpk_drugdeal[];	// "drugdeal.bpk"
    extern const char bpk_event_2[];	// "event_2.bpk"
    extern const char bpk_reaper_x[];	// "reaper_x.bpk"
    extern const char bpk_blacktx1[];	// "blacktx1.bpk"
    extern const char bpk_blacktx2[];	// "blacktx2.bpk"
    extern const char bpk_dealer2b[];	// "dealer2b.bpk"
    extern const char bpk_market1e[];	// "market1e.bpk"
    extern const char bpk_bases4[];		// "bases4.bpk"
    extern const char bpk_scenecar[];	// "scenecar.bpk"
    extern const char bpk_choo2[];		// "choo2.bpk"
    extern const char bpk_arrows1d[];	// "arrows1d.bpk"
    extern const char bpk_maxi1f[];		// "maxi1f.bpk"
    extern const char bpk_carname[];	// "carname.bpk"
    extern const char bpk_slidmus2[];	// "slidmus2.bpk"
    extern const char bpk_slidcur3[];	// "slidcur3.bpk"
    extern const char bpk_volcur2[];	// "volcur2.bpk"
    extern const char bpk_slidcop2[];	// "slidcop2.bpk"


    void * allocMemSafe(dword);

	void read__bpa(const char *, void *, const char *);

	#pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);

	#pragma aux decode4__bpk parm routine []
	void decode4__bpk(dword nbytes, dword dst_offset, void * dst, void * src);

// 24548h
void loadShopBPK(void){

	D(___1a1ec0h) = 0;
	D(___1a1ec4h) = 5;
	D(___1a1ec8h) = 0;
	D(___1a1ecch) = 0;
	D(___1a1ed0h) = 0;
	D(___1a1edch) = 0x64;
	D(___1a1ee0h) = 0;
	D(___1a1ee8h) = 0;
	D(___1a1eech) = 0;

	D(___1a1ee4h) = D(0x6c * MyID + Roster + 0x1c) + 1;
	if(D(___1a1ee4h) > 5) D(___1a1ee4h) = 5;

	___1a10e4h = ___1a1124h = allocMemSafe(0x4b000);
	tex_carframe = allocMemSafe(0x1800);

	bpk_cars[KUPLA] = allocMemSafe(0x1af00);
	read__bpa(MENU_BPA, bpk_cars[KUPLA], bpk_kupla);
	bpk_cars[PICKUP] = allocMemSafe(0x1a77b);
	read__bpa(MENU_BPA, bpk_cars[PICKUP], bpk_pickup);
	bpk_cars[SEDAN] = allocMemSafe(0x18f14);
	read__bpa(MENU_BPA, bpk_cars[SEDAN], bpk_sedan);
	bpk_cars[CAMARO] = allocMemSafe(0x18f51);
	read__bpa(MENU_BPA, bpk_cars[CAMARO], bpk_camaro);
	bpk_cars[PORSCHE] = allocMemSafe(0x1a060);
	read__bpa(MENU_BPA, bpk_cars[PORSCHE], bpk_porsche);
	bpk_cars[LOTUS] = allocMemSafe(0x1bea2);
	read__bpa(MENU_BPA, bpk_cars[LOTUS], bpk_lotus);

	bpk_engines[LEVEL1] = allocMemSafe(0xa235);
	read__bpa(MENU_BPA, bpk_engines[LEVEL1], bpk_engi1);
	bpk_engines[LEVEL2] = allocMemSafe(0xae36);
	read__bpa(MENU_BPA, bpk_engines[LEVEL2], bpk_engi2);
	bpk_engines[LEVEL3] = allocMemSafe(0xb413);
	read__bpa(MENU_BPA, bpk_engines[LEVEL3], bpk_engi3);
	bpk_engines[LEVEL4] = allocMemSafe(0xd788);
	read__bpa(MENU_BPA, bpk_engines[LEVEL4], bpk_engi4);

	bpk_tires[LEVEL1] = allocMemSafe(0x511c);
	read__bpa(MENU_BPA, bpk_tires[LEVEL1], bpk_tire1);
	bpk_tires[LEVEL2] = allocMemSafe(0x52b8);
	read__bpa(MENU_BPA, bpk_tires[LEVEL2], bpk_tire2);
	bpk_tires[LEVEL3] = allocMemSafe(0x5724);
	read__bpa(MENU_BPA, bpk_tires[LEVEL3], bpk_tire3);
	bpk_tires[LEVEL4] = allocMemSafe(0x5f1e);
	read__bpa(MENU_BPA, bpk_tires[LEVEL4], bpk_tire4);

	bpk_armors[LEVEL1] = allocMemSafe(0x5ffb);
	read__bpa(MENU_BPA, bpk_armors[LEVEL1], bpk_armor1);
	bpk_armors[LEVEL2] = allocMemSafe(0x6dd9);
	read__bpa(MENU_BPA, bpk_armors[LEVEL2], bpk_armor2);
	bpk_armors[LEVEL3] = allocMemSafe(0x7922);
	read__bpa(MENU_BPA, bpk_armors[LEVEL3], bpk_armor3);
	bpk_armors[LEVEL4] = allocMemSafe(0x7801);
	read__bpa(MENU_BPA, bpk_armors[LEVEL4], bpk_armor4);

	p_bpk_contani = allocMemSafe(0x8ae9);
	read__bpa(MENU_BPA, p_bpk_contani, bpk_contani);

	p_bpk_repaani = allocMemSafe(0x878b);
	read__bpa(MENU_BPA, p_bpk_repaani, bpk_repaani);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_statbas7);
	p_bpk_statbas7 = allocMemSafe(0x5400);
	decode2__bpk(p_bpk_statbas7, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_statpop4);
	p_bpk_statpop4 = allocMemSafe(0x4b0);
	decode2__bpk(p_bpk_statpop4, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_f_sma3f);
	p_bpk_f_sma3f = allocMemSafe(0x8f0);
	decode2__bpk(p_bpk_f_sma3f, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_carbas2);
	p_bpk_carbas2 = allocMemSafe(0x2400);
	decode2__bpk(p_bpk_carbas2, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_spons1b);
	p_bpk_spons1b = allocMemSafe(0x3400);
	decode2__bpk(p_bpk_spons1b, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_drugdeal);
	p_bpk_drugdeal = allocMemSafe(0x3400);
	decode2__bpk(p_bpk_drugdeal, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_event_2);
	p_bpk_event_2 = allocMemSafe(0x3400);
	decode2__bpk(p_bpk_event_2, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_reaper_x);
	p_bpk_repear_x = allocMemSafe(0x3400);
	decode2__bpk(p_bpk_repear_x, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_blacktx1);
	p_bpk_blacktx1 = allocMemSafe(0x2800);
	decode2__bpk(p_bpk_blacktx1, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_blacktx2);
	p_bpk_blacktx2 = allocMemSafe(0x2800);
	decode2__bpk(p_bpk_blacktx2, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_dealer2b);
	p_bpk_dealer2b = allocMemSafe(0x2400);
	decode2__bpk(p_bpk_dealer2b, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_market1e);
	p_bpk_market1e = allocMemSafe(0x1b000);
	decode2__bpk(p_bpk_market1e, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_bases4);
	p0_bpk_bases4 = allocMemSafe(0x2400);
	decode4__bpk(0x2400, 0, p0_bpk_bases4, BPA_Buffer);
	p1_bpk_bases4 = allocMemSafe(0x2400);
	decode4__bpk(0x2400, 0x2400, p1_bpk_bases4, BPA_Buffer);
	p2_bpk_bases4 = allocMemSafe(0x2400);
	decode4__bpk(0x2400, 0x4800, p2_bpk_bases4, BPA_Buffer);
	p3_bpk_bases4 = allocMemSafe(0x2400);
	decode4__bpk(0x2400, 0x6c00, p3_bpk_bases4, BPA_Buffer);
	p4_bpk_bases4 = allocMemSafe(0x2400);
	decode4__bpk(0x2400, 0x9000, p4_bpk_bases4, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_scenecar);
	p0_bpk_scenecar = allocMemSafe(0x1800);
	decode4__bpk(0x1800, 0, p0_bpk_scenecar, BPA_Buffer);
	p1_bpk_scenecar = allocMemSafe(0x1800);
	decode4__bpk(0x1800, 0x1800, p1_bpk_scenecar, BPA_Buffer);
	p2_bpk_scenecar = allocMemSafe(0x1800);
	decode4__bpk(0x1800, 0x3000, p2_bpk_scenecar, BPA_Buffer);
	p3_bpk_scenecar = allocMemSafe(0x1800);
	decode4__bpk(0x1800, 0x4800, p3_bpk_scenecar, BPA_Buffer);
	p4_bpk_scenecar = allocMemSafe(0x1800);
	decode4__bpk(0x1800, 0x6000, p4_bpk_scenecar, BPA_Buffer);
	p5_bpk_scenecar = allocMemSafe(0x1800);
	decode4__bpk(0x1800, 0x7800, p5_bpk_scenecar, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_choo2);
	p_bpk_choo2 = allocMemSafe(0x900);
	decode2__bpk(p_bpk_choo2, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_arrows1d);
	p_bpk_arrows1d = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_arrows1d, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_maxi1f);
	p_bpk_maxi1f = allocMemSafe(0x12000);
	decode2__bpk(p_bpk_maxi1f, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_carname);
	p_bpk_carname = allocMemSafe(0x2400);
	decode2__bpk(p_bpk_carname, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_slidmus2);
	p_bpk_slidmus2 = allocMemSafe(0x1020);
	decode2__bpk(p_bpk_slidmus2, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_slidcur3);
	p_bpk_slidcur3 = allocMemSafe(0xf0);
	decode2__bpk(p_bpk_slidcur3, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_volcur2);
	p_bpk_volcur2 = allocMemSafe(0xf0);
	decode2__bpk(p_bpk_volcur2, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_slidcop2);
	p_bpk_slidcop2 = allocMemSafe(0x1260);
	decode2__bpk(p_bpk_slidcop2, BPA_Buffer);
}
