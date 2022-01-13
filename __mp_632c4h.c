#include "drally.h"

__WORD__ swap16(__WORD__ val){

    return ((val>>8)&0xff)+((val&0xff)<<8);
}

//__WORD__ ___632c4h(__WORD__) __attribute((alias("swap16")));
