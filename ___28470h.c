#include "drally.h"

	extern byte ___1a1ee4h[];
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern void * ___1a01b8h[6];
	extern byte ___1a1ed0h[];

void ___2ab50h(void);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, void * aEncoded, int * aOffsets);

// SHOP PREV/NEXT CAR FRAME ARROW ANIMATION
void ___28470h(void){

	___2ab50h();
	___2ab50h();
	___259e0h_cdecl(0x10, 0x8d, D(___1a1ed0h), ___1a01b8h[D(___1a1ee4h)], CARENCS[D(___1a1ee4h)]);
	D(___1a1ed0h)++;
	if((int)D(___1a1ed0h) > 0x3f) D(___1a1ed0h) = 0;

	___2ab50h();
	___2ab50h();
	___259e0h_cdecl(0x10, 0x8d, D(___1a1ed0h), ___1a01b8h[D(___1a1ee4h)], CARENCS[D(___1a1ee4h)]);
	D(___1a1ed0h)++;
	if((int)D(___1a1ed0h) > 0x3f) D(___1a1ed0h) = 0;

	___2ab50h();
	___2ab50h();
	___259e0h_cdecl(0x10, 0x8d, D(___1a1ed0h), ___1a01b8h[D(___1a1ee4h)], CARENCS[D(___1a1ee4h)]);
	D(___1a1ed0h)++;
	if((int)D(___1a1ed0h) > 0x3f) D(___1a1ed0h) = 0;
	
	___2ab50h();
	___2ab50h();
	___259e0h_cdecl(0x10, 0x8d, D(___1a1ed0h), ___1a01b8h[D(___1a1ee4h)], CARENCS[D(___1a1ee4h)]);
	D(___1a1ed0h)++;
	if((int)D(___1a1ed0h) > 0x3f) D(___1a1ed0h) = 0;
}
