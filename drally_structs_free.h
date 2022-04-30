#ifndef __DRALLY_STRUCTS_FREE_H
#define __DRALLY_STRUCTS_FREE_H

#include "drally.h"

#pragma pack(push,1)
typedef struct struct_35e_s {
    __DWORD__   __0;                // +000
    __DWORD__   __4;                // +004
    __DWORD__   __8;                // +008
    __DWORD__   ImgIndex;           // +00c
    __DWORD__   ImgOffset;          // +010
    __DWORD__   __14;               // +014
    __DWORD__   __18;               // +018
    __DWORD__   __1c;               // +01c
    __DWORD__   Ctrls[0x10];        // +020
    __DWORD__   ActionFlags[0x10];  // +060
    __DWORD__   ActionFlags_i;      // +0a0
    __DWORD__   __a4;               // +0a4
    float       __a8;               // +0a8
    float       Direction;          // +0ac
    float       __b0;               // +0b0
    float       XLocation;          // +0b4
    float       YLocation;          // +0b8
    float       __bc;               // +0bc
    float       __c0;               // +0c0
    float       __c4;               // +0c4
    float       __c8;               // +0c8
    float       __cc;               // +0cc
    float       __d0;               // +0d0
    float       __d4;               // +0d4
    float       __d8;               // +0d8
    float       __dc;               // +0dc
    float       __e0;               // +0e0
    float       __e4;               // +0e4
    float       __e8;               // +0e8
    float       __ec;               // +0ec
    float       __f0;               // +0f0
    float       __f4;               // +0f4
    float       __f8;               // +0f8
    float       __fc;               // +0fc
    float       __100;              // +100
    float       __104;              // +104
    __BYTE__    Lap;                // +108
    __BYTE__    Position;           // +109
    __DWORD__   Finished;              // +10a
    float       X1__10e;              // +10e
    float       Y1__112;              // +112
    float       X1__116;              // +116
    float       Y1__11a;              // +11a
    float       X2__11e;              // +11e
    float       Y2__122;              // +122
    float       X2__126;              // +126
    float       Y2__12a;              // +12a
    float       X3__12e;              // +12e
    float       Y3__132;              // +132
    float       X3__136;              // +136
    float       Y3__13a;              // +13a
    float       X4__13e;              // +13e
    float       Y4__142;              // +142
    float       X4__146;              // +146
    float       Y4__14a;              // +14a
    float       __14e;              // +14e
    float       __152;              // +152
    float       __156;              // +156
    float       __15a;              // +15a
    float       __15e;              // +15e
    float       __162;              // +162
    float       __166;              // +166
    __DWORD__   __16a;              // +16a
    __DWORD__   __16e;              // +16e
    __DWORD__   __172;              // +172
    __DWORD__   __176;              // +176
    __DWORD__   __17a;              // +17a
    __DWORD__   __17e;              // +17e
    __DWORD__   __182;              // +182
    __DWORD__   __186;              // +186
    __DWORD__   __18a;              // +18a
    __DWORD__   __18e;              // +18e
    __DWORD__   __192;              // +192
    __DWORD__   __196;              // +196
    __DWORD__   __19a;              // +19a
    __DWORD__   __19e;              // +19e
    __DWORD__   MineTimer;          // +1a2
    __DWORD__   __1a6;              // +1a6
    __DWORD__   __1aa;              // +1aa
    __DWORD__   __1ae;              // +1ae
    __DWORD__   __1b2;              // +1b2
    __DWORD__   __1b6;              // +1b6
    __DWORD__   __1ba;              // +1ba
    __DWORD__   __1be;              // +1be
    __DWORD__   __1c2;              // +1c2
    __DWORD__   __1c6;              // +1c6
    __DWORD__   __1ca;              // +1ca
    __DWORD__   __1ce;              // +1ce
    __DWORD__   __1d2;              // +1d2
    __DWORD__   __1d6;              // +1d6
    __DWORD__   __1da;              // +1da
    __DWORD__   __1de;              // +1de
    __DWORD__   __1e2[15];          // +1e2
    __DWORD__   __21e[15];          // +21e
    __DWORD__   __25a[15];          // +25a
    __DWORD__   __296[15];          // +296
    __DWORD__   __2d2[15];          // +2d2
    __DWORD__   __30e[15];          // +30e
    __DWORD__   __34a;              // +34a
    __DWORD__   Drug;               // +34e
    __DWORD__   __352;              // +352
    __DWORD__   __356;              // +356
    __DWORD__   __35a;              // +35a
} struct_35e_t;

typedef struct struct_94_s {
    __DWORD__   __0;                // +00
    float       __4;                // +04
    __BYTE__    __8[8];             // +08
    float       __10;               // +10
    float       __14;               // +14
    __DWORD__   __18;               // +18
    __DWORD__   __1c;               // +1C               
    __BYTE__    __20[8];            // +20
    __DWORD__   __28;               // +28
    __DWORD__   __2C;               // +2C
    __DWORD__   __30;               // +30
    __DWORD__   __34;               // +34
    __DWORD__   __38;               // +38
    __DWORD__   __3c;               // +3c
    __DWORD__   __40;               // +40
    __BYTE__    __44[0xc];          // +44
    __DWORD__   __50;               // +50
    __DWORD__   __54;               // +54
    __DWORD__   __58;               // +58
    __DWORD__   __5c;               // +5c
    __DWORD__   __60;               // +60
    __BYTE__    __64[0x20];         // +64
    __DWORD__   __84[4];            // +84
} struct_94_t;

typedef struct struct_54_s {
    __BYTE__    __0[0xc];           // +00
    __DWORD__   __c;                // +0c
    __DWORD__   __10;               // +10
    __DWORD__   __14;               // +14
    __BYTE__    __18[0xc];          // +18
    __DWORD__   __24;               // +24
    __BYTE__    __28[0x18];         // +28
    __DWORD__   __40;               // +40
    __DWORD__   __44;               // +44
    __BYTE__    __48[4];            // +48
    __DWORD__   __4c;               // +4c
    __DWORD__   __50;               // +50
} struct_54_t;

typedef struct kb_control_s  {
    __DWORD__   turbo_boost;        // +00
    __DWORD__   horn;               // +04
    __DWORD__   steer_left;         // +08
    __DWORD__   steer_right;        // +0c
    __DWORD__   brake;              // +10
    __DWORD__   drop_mine;          // +14
    __DWORD__   accelerate;         // +18
    __DWORD__   machine_gun;        // +1c
} kb_control_t;

typedef __BYTE__ img40x40[40][40];
typedef img40x40 car_spins_t[96];

typedef char char40[40];
typedef char char12[12];
typedef struct cardata_s {
    char12      		name;                           // +000
    __DWORD__   		price;                          // +00C
    char40      		txt_info[6];                    // +010
    char40      		txt_winfo[6];                   // +100
    char40      		txt_bought[6];                  // +1F0
    char40      		txt_engine_upgrades[4][6];      // +2E0
    __DWORD__   		n_engine_upgrades;              // +6A0
    __DWORD__   		n_tire_upgrades;                // +6A4
    __DWORD__   		n_armor_upgrades;               // +6A8
    __DWORD__   		price_engine_upgrades[4];       // +6AC
    __DWORD__   		price_tire_upgrades[4];         // +6BC
    __DWORD__   		price_armor_upgrades[4];        // +6CC
    __SIGNED_DWORD__   	price_repair;                   // +6DC
} cardata_t;

#pragma pack(pop)


#endif // __DRALLY_STRUCTS_FREE_H
