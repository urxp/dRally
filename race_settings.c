#include "drally.h"
#include "drally_race.h"

    extern __BYTE__ ___196db0h[];
    extern __BYTE__ ___196db4h[];
    extern __BYTE__ ___196da0h[];
    extern __BYTE__ ___196da4h[];
    extern __BYTE__ ___196da8h[];

static void __setSettings(int v, int b){

    switch(v){
    case RACE_NOTWIDE:      D(___196da8h) = b;  break;
    case RACE_MSX:          D(___196da0h) = b;  break;
    case RACE_SFX:          D(___196da4h) = b;  break;
    case RACE_TEXTURES:     D(___196db0h) = b;  break;
    case RACE_SHADOWS:      D(___196db4h) = b;  break;
    default:                                    break;
    }
}

int dRally_Race_getSettings(int v){

    switch(v){
    case RACE_NOTWIDE:      return D(___196da8h);
    case RACE_MSX:          return D(___196da0h);
    case RACE_SFX:          return D(___196da4h);
    case RACE_TEXTURES:     return D(___196db0h);
    case RACE_SHADOWS:      return D(___196db4h);
    default:                return 0;
    }
}

void dRally_Race_setSettings(int v)     { __setSettings(v, 1); }
void dRally_Race_unsetSettings(int v)   { __setSettings(v, 0); }
void dRally_Race_toggleSettings(int v)  { __setSettings(v, !dRally_Race_getSettings(v)); }
