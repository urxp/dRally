#ifndef __DRALLY_STRUCTS_FREE_H
#define __DRALLY_STRUCTS_FREE_H

#include "drally.h"

#pragma pack(push,1)
typedef struct struct_35e_s {
    __DWORD__   un0;                // +000
    __DWORD__   un1;                // +004
    __DWORD__   un2;                // +008
    __DWORD__   Rotation;           // +00c
    __BYTE__    __0[0x50];          // +010
    __DWORD__   ActionFlags[0x10];  // +060
    __DWORD__   ActionFlags_i;      // +0a0
    __DWORD__   un0a4;              // +0a4
    __DWORD__   un0a8;              // +0a8
    __DWORD__   un0ac;              // +0ac
    __DWORD__   un0b0;              // +0b0
    float       XLocation;          // +0b4
    float       YLocation;          // +0b8
    __BYTE__    __1[0x4d];          // +0bc
    __BYTE__    Position;           // +109
    __BYTE__    __50[0x244];        // +10a
    __DWORD__   DrugTimeToGo;       // +34e
    __BYTE__    __99[0xc];
} struct_35e_t;

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

#pragma pack(pop)


#endif // __DRALLY_STRUCTS_FREE_H
