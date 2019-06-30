#include "x86.h"

enum {
	KUPLA, PICKUP, SEDAN, CAMARO, PORSCHE, LOTUS
};

enum {
	LEVEL1, LEVEL2, LEVEL3, LEVEL4
};

    extern const char MENU_BPA[];

//    extern void * tex_kupla_p;
//    extern void * tex_pickup_p;
//    extern void * tex_sedan_p;
//    extern void * tex_camaro_p;
//    extern void * tex_porsche_p;
//    extern void * tex_lotus_p;
	extern void * tex_cars[];

//    extern byte ___1a01a8h[];
//    extern byte ___1a01ach[];
//    extern byte ___1a01b0h[];
//    extern byte ___1a01b4h[];
	extern void * tex_engines[];


//    extern byte ___1a0198h[];
//    extern byte ___1a019ch[];
//    extern byte ___1a01a0h[];
//    extern byte ___1a01a4h[];
	extern void * tex_tires[];

//    extern byte ___1a01d0h[];
//    extern byte ___1a01d4h[];
//    extern byte ___1a01d8h[];
//    extern byte ___1a01dch[];
	extern void * tex_armors[];

    extern byte ___1a1edch[];
    extern byte ___1a1ecch[];
    extern byte ___1a1ee8h[];
    extern byte ___1a1ef8h[];
    extern byte ___1a1ee0h[];
    extern byte ___1a1eech[];
    extern byte ___1a1ec0h[];
    extern byte ___1a1ec8h[];
    extern byte ___1a1ed0h[];
    extern byte ___1a01fch[];
    extern byte ___1a1ec4h[];
    extern byte ___1a1ee4h[];
    extern byte ___1a1124h[];
    extern byte ___1a10e4h[];
    extern byte ___1a1e80h[];
    extern byte ___1a1e74h[];
    extern byte ___1a1e84h[];
    extern byte ___1a1e60h[];
    extern byte ___1a1ed4h[];
    extern byte ___1a1e90h[];
    extern byte ___1a10b0h[];
    extern byte ___1a1eb0h[];
    extern byte ___1a1e78h[];
    extern byte ___1a1eb8h[];
    extern byte ___1a0180h[];
    extern byte ___1a0184h[];
    extern byte ___1a0188h[];
    extern byte ___1a018ch[];
    extern byte ___1a0190h[];
    extern byte ___1a0194h[];
    extern byte ___1a1e8ch[];
    extern byte ___1a1ea0h[];
    extern byte ___1a1e7ch[];
    extern byte ___1a1ebch[];
    extern byte ___1a1eb4h[];
    extern byte ___1a1e88h[];
    extern byte ___1a1ea4h[];
    extern byte ___1a1ea8h[];
    extern byte ___1a1e6ch[];
    extern byte ___1a1e98h[];
    extern byte ___1a1each[];
    extern byte ___1a1e94h[];
    extern byte ___1a1e9ch[];
    extern byte ___1a1e70h[];
    extern byte ___1a1e5ch[];
    extern byte ___1a1e58h[];
    extern byte ___1a1e54h[];
    extern byte ___1a1e64h[];

    extern byte BPA_Buffer[];

    extern const char ___181d24h[];		// "statbas7.bpk"
    extern const char ___181d34h[];		// "statpop4.bpk"
    extern const char ___181d44h[];		// "f-sma3f.bpk"
    extern const char ___181d50h[];		// "kupla.bpk"
    extern const char ___181d5ch[];		// "pickup.bpk"
    extern const char ___181d68h[];		// "sedan.bpk"
    extern const char ___181d74h[];		// "camaro.bpk"
    extern const char ___181d80h[];		// "porsche.bpk"
    extern const char ___181d8ch[];		// "lotus.bpk"
    extern const char ___181d98h[];		// "engi1.bpk"
    extern const char ___181da4h[];		// "engi2.bpk"
    extern const char ___181db0h[];		// "engi3.bpk"
    extern const char ___181dbch[];		// "engi4.bpk"	
    extern const char ___181dc8h[];		// "tire1.bpk"
    extern const char ___181dd4h[];		// "tire2.bpk"
    extern const char ___181de0h[];		// "tire3.bpk"
    extern const char ___181dech[];		// "tire4.bpk"
    extern const char ___181df8h[];		// "armor1.bpk"
    extern const char ___181e04h[];		// "armor2.bpk"
    extern const char ___181e10h[];		// "armor3.bpk"
    extern const char ___181e1ch[];		// "armor4.bpk"
    extern const char ___181e28h[];		// "contani.bpk"
    extern const char ___181e34h[];		// "repaani.bpk"
    extern const char ___181e40h[];		// "carbas2.bpk"
    extern const char ___181e4ch[];		// "spons1b.bpk"
    extern const char ___181e58h[];		// "drugdeal.bpk"
    extern const char ___181e68h[];		// "event_2.bpk"
    extern const char ___181e74h[];		// "reaper_x.bpk"
    extern const char ___181e84h[];		// "blacktx1.bpk"
    extern const char ___181e94h[];		// "blacktx2.bpk"
    extern const char ___181ea4h[];		// "dealer2b.bpk"
    extern const char ___181eb4h[];		// "market1e.bpk"
    extern const char ___181ec4h[];		// "bases4.bpk"
    extern const char ___181ed0h[];		// "scenecar.bpk"
    extern const char ___181ee0h[];		// "choo2.bpk"
    extern const char ___181eech[];		// "arrows1d.bpk"
    extern const char ___181efch[];		// "maxi1f.bpk"
    extern const char ___181f08h[];		// "carname.bpk"
    extern const char ___181f14h[];		// "slidmus2.bpk"
    extern const char ___181f24h[];		// "slidcur3.bpk"
    extern const char ___181f34h[];		// "volcur2.bpk"
    extern const char ___181f40h[];		// "slidcop2.bpk"


    void * allocMemSafe(dword);

	void read__bpa(const char *, void *, const char *);

	#pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);

	#pragma aux decode4__bpk parm routine []
	void decode4__bpk(dword nbytes, dword dst_offset, void * dst, void * src);

// 24548h
void ___24548h(void){

	D(___1a1ec0h) = 0;
	D(___1a1ec4h) = 5;
	D(___1a1ec8h) = 0;
	D(___1a1ecch) = 0;
	D(___1a1ed0h) = 0;
	D(___1a1edch) = 0x64;
	D(___1a1ee0h) = 0;
	D(___1a1ee8h) = 0;
	D(___1a1eech) = 0;

	D(___1a1ee4h) = D(0x6c * D(___1a1ef8h) + ___1a01fch) + 1;
	if(D(___1a1ee4h) >= 5) D(___1a1ee4h) = 5;


	D(___1a1124h) = D(___1a10e4h) = allocMemSafe(0x4b000);
	D(___1a1e7ch) = allocMemSafe(0x1800);


	D(___1a1ed4h) = allocMemSafe(0x5400);
	read__bpa(MENU_BPA, BPA_Buffer, ___181d24h);
	decode2__bpk(D(___1a1ed4h), BPA_Buffer);

	D(___1a1e90h) = allocMemSafe(0x4b0);
	read__bpa(MENU_BPA, BPA_Buffer, ___181d34h);
	decode2__bpk(D(___1a1e90h), BPA_Buffer);

	D(___1a10b0h) = allocMemSafe(0x8f0);
	read__bpa(MENU_BPA, BPA_Buffer, ___181d44h);
	decode2__bpk(D(___1a10b0h), BPA_Buffer);

	tex_cars[KUPLA] = allocMemSafe(0x1af00);
	read__bpa(MENU_BPA, tex_cars[KUPLA], ___181d50h);
	tex_cars[PICKUP] = allocMemSafe(0x1a77b);
	read__bpa(MENU_BPA, tex_cars[PICKUP], ___181d5ch);
	tex_cars[SEDAN] = allocMemSafe(0x18f14);
	read__bpa(MENU_BPA, tex_cars[SEDAN], ___181d68h);
	tex_cars[CAMARO] = allocMemSafe(0x18f51);
	read__bpa(MENU_BPA, tex_cars[CAMARO], ___181d74h);
	tex_cars[PORSCHE] = allocMemSafe(0x1a060);
	read__bpa(MENU_BPA, tex_cars[PORSCHE], ___181d80h);
	tex_cars[LOTUS] = allocMemSafe(0x1bea2);
	read__bpa(MENU_BPA, tex_cars[LOTUS], ___181d8ch);

	tex_engines[LEVEL1] = allocMemSafe(0xa235);
	read__bpa(MENU_BPA, tex_engines[LEVEL1], ___181d98h);
	tex_engines[LEVEL2] = allocMemSafe(0xae36);
	read__bpa(MENU_BPA, tex_engines[LEVEL2], ___181da4h);
	tex_engines[LEVEL3] = allocMemSafe(0xb413);
	read__bpa(MENU_BPA, tex_engines[LEVEL3], ___181db0h);
	tex_engines[LEVEL4] = allocMemSafe(0xd788);
	read__bpa(MENU_BPA, tex_engines[LEVEL4], ___181dbch);

	tex_tires[LEVEL1] = allocMemSafe(0x511c);
	read__bpa(MENU_BPA, tex_tires[LEVEL1], ___181dc8h);
	tex_tires[LEVEL2] = allocMemSafe(0x52b8);
	read__bpa(MENU_BPA, tex_tires[LEVEL2], ___181dd4h);
	tex_tires[LEVEL3] = allocMemSafe(0x5724);
	read__bpa(MENU_BPA, tex_tires[LEVEL3], ___181de0h);
	tex_tires[LEVEL4] = allocMemSafe(0x5f1e);
	read__bpa(MENU_BPA, tex_tires[LEVEL4], ___181dech);

	tex_armors[LEVEL1] = allocMemSafe(0x5ffb);
	read__bpa(MENU_BPA, tex_armors[LEVEL1], ___181df8h);
	tex_armors[LEVEL2] = allocMemSafe(0x6dd9);
	read__bpa(MENU_BPA, tex_armors[LEVEL2], ___181e04h);
	tex_armors[LEVEL3] = allocMemSafe(0x7922);
	read__bpa(MENU_BPA, tex_armors[LEVEL3], ___181e10h);
	tex_armors[LEVEL4] = allocMemSafe(0x7801);
	read__bpa(MENU_BPA, tex_armors[LEVEL4], ___181e1ch);

	D(___1a1ea0h) = allocMemSafe(0x8ae9);
	read__bpa(MENU_BPA, D(___1a1ea0h), ___181e28h);
	D(___1a1e8ch) = allocMemSafe(0x878b);
	read__bpa(MENU_BPA, D(___1a1e8ch), ___181e34h);

	D(___1a1e6ch) = allocMemSafe(0x2400);
	read__bpa(MENU_BPA, BPA_Buffer, ___181e40h);
	decode2__bpk(D(___1a1e6ch), BPA_Buffer);

	D(___1a1e74h) = allocMemSafe(0x3400);
	read__bpa(MENU_BPA, BPA_Buffer, ___181e4ch);
	decode2__bpk(D(___1a1e74h), BPA_Buffer);

	D(___1a1e80h) = allocMemSafe(0x3400);
	read__bpa(MENU_BPA, BPA_Buffer, ___181e58h);
	decode2__bpk(D(___1a1e80h), BPA_Buffer);

	D(___1a1e84h) = allocMemSafe(0x3400);
	read__bpa(MENU_BPA, BPA_Buffer, ___181e68h);
	decode2__bpk(D(___1a1e84h), BPA_Buffer);

	D(___1a1e60h) = allocMemSafe(0x3400);
	read__bpa(MENU_BPA, BPA_Buffer, ___181e74h);
	decode2__bpk(D(___1a1e60h), BPA_Buffer);

	D(___1a1e54h) = allocMemSafe(0x2800);
	read__bpa(MENU_BPA, BPA_Buffer, ___181e84h);
	decode2__bpk(D(___1a1e54h), BPA_Buffer);

	D(___1a1e64h) = allocMemSafe(0x2800);
	read__bpa(MENU_BPA, BPA_Buffer, ___181e94h);
	decode2__bpk(D(___1a1e64h), BPA_Buffer);

	D(___1a1e58h) = allocMemSafe(0x2400);
	read__bpa(MENU_BPA, BPA_Buffer, ___181ea4h);
	decode2__bpk(D(___1a1e58h), BPA_Buffer);

	D(___1a1e5ch) = allocMemSafe(0x1b000);
	read__bpa(MENU_BPA, BPA_Buffer, ___181eb4h);
	decode2__bpk(D(___1a1e5ch), BPA_Buffer);

	D(___1a1e98h) = allocMemSafe(0x2400);
	D(___1a1each) = allocMemSafe(0x2400);
	D(___1a1e94h) = allocMemSafe(0x2400);
	D(___1a1e9ch) = allocMemSafe(0x2400);
	D(___1a1e70h) = allocMemSafe(0x2400);
	read__bpa(MENU_BPA, BPA_Buffer, ___181ec4h);
	decode4__bpk(0x2400, 0, D(___1a1e98h), BPA_Buffer);
	decode4__bpk(0x2400, 0x2400, D(___1a1each), BPA_Buffer);
	decode4__bpk(0x2400, 0x4800, D(___1a1e94h), BPA_Buffer);
	decode4__bpk(0x2400, 0x6c00, D(___1a1e9ch), BPA_Buffer);
	decode4__bpk(0x2400, 0x9000, D(___1a1e70h), BPA_Buffer);

	D(___1a0180h) = allocMemSafe(0x1800);
	D(___1a0184h) = allocMemSafe(0x1800);
	D(___1a0188h) = allocMemSafe(0x1800);
	D(___1a018ch) = allocMemSafe(0x1800);
	D(___1a0190h) = allocMemSafe(0x1800);
	D(___1a0194h) = allocMemSafe(0x1800);
	read__bpa(MENU_BPA, BPA_Buffer, ___181ed0h);
	decode4__bpk(0x1800, 0, D(___1a0180h), BPA_Buffer);
	decode4__bpk(0x1800, 0x1800, D(___1a0184h), BPA_Buffer);
	decode4__bpk(0x1800, 0x3000, D(___1a0188h), BPA_Buffer);
	decode4__bpk(0x1800, 0x4800, D(___1a018ch), BPA_Buffer);
	decode4__bpk(0x1800, 0x6000, D(___1a0190h), BPA_Buffer);
	decode4__bpk(0x1800, 0x7800, D(___1a0194h), BPA_Buffer);

	D(___1a1eb0h) = allocMemSafe(0x900);
	read__bpa(MENU_BPA, BPA_Buffer, ___181ee0h);
	decode2__bpk(D(___1a1eb0h), BPA_Buffer);

	D(___1a1e78h) = allocMemSafe(0x1000);
	read__bpa(MENU_BPA, BPA_Buffer, ___181eech);
	decode2__bpk(D(___1a1e78h), BPA_Buffer);

	D(___1a1eb8h) = allocMemSafe(0x12000);
	read__bpa(MENU_BPA, BPA_Buffer, ___181efch);
	decode2__bpk(D(___1a1eb8h), BPA_Buffer);

	D(___1a1ea8h) = allocMemSafe(0x2400);
	read__bpa(MENU_BPA, BPA_Buffer, ___181f08h);
	decode2__bpk(D(___1a1ea8h), BPA_Buffer);

	D(___1a1ea4h) = allocMemSafe(0x1020);
	read__bpa(MENU_BPA, BPA_Buffer, ___181f14h);
	decode2__bpk(D(___1a1ea4h), BPA_Buffer);

	D(___1a1eb4h) = allocMemSafe(0xf0);
	read__bpa(MENU_BPA, BPA_Buffer, ___181f24h);
	decode2__bpk(D(___1a1eb4h), BPA_Buffer);

	D(___1a1ebch) = allocMemSafe(0xf0);
	read__bpa(MENU_BPA, BPA_Buffer, ___181f34h);
	decode2__bpk(D(___1a1ebch), BPA_Buffer);

	D(___1a1e88h) = allocMemSafe(0x1260);
	read__bpa(MENU_BPA, BPA_Buffer, ___181f40h);
	decode2__bpk(D(___1a1e88h), BPA_Buffer);
}
