#include "drally.h"

    byte ___60441h = 0;
    byte ___60446h = 0;
    void (*___6044ch)(void) = 0;
    dword ___60458h = 0;
    dword ___6045ch = 0;

void dRally_System_addExitCallback(void (*)(void));
void dRally_System_removeExitCallback(void (*)(void));

void ___605deh_cdecl(dword A, dword B){

	___60441h = 0;

    if(A != 0xffffffff){

		___60458h = A;
		___6045ch = B;
    }
}

void ___60719h(void){

	___60446h = 0;
	___6044ch = 0;
}

static void ___6052fh(void){

	dRally_System_removeExitCallback(___6052fh);
	___60719h();
}

void ___60466h(dword A, dword B){

	___605deh_cdecl(A, B);
    dRally_System_addExitCallback(___6052fh);
}

void ___606dfh(void){

	___60441h = 1;
}

void ___60705h(void (*A)(void)){

	___60446h = 0;
	___6044ch = A;
	___60446h = 1;
}
