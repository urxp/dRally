#include "x86.h"

    extern word ___60434h;
    extern word ___60442h;
    extern byte ___60441h;

// 606dfh
void ___606dfh(void){

	___60441h = 1;
	___60442h = ___60434h;
	___60434h = (___60434h * 0xaaaa) >> 0x10;
}
