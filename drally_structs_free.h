#ifndef __DRALLY_STRUCTS_FREE_H
#define __DRALLY_STRUCTS_FREE_H

#include "drally.h"

#pragma pack(push,1)
typedef struct struct_35e_s {
    __BYTE__    __0[0x60];
    __DWORD__   ActionFlags[0x10];  // +060
    __DWORD__   ActionFlags_i;      // +0a0
    __BYTE__    __1[0x65];
    __BYTE__    Position;           // +109
    __BYTE__    __50[0x244];
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
