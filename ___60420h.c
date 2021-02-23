#include "drally.h"

    byte ___60441h = 0;
    byte ___60446h = 0;
    void_cb ___6044ch = (void *)0;
    int ___60458h = 0;
    int ___6045ch = 0;

void dRally_System_addExitCallback(void_cb);
void dRally_System_removeExitCallback(void_cb);

void ___605deh_cdecl(int A, int B){

	___60441h = 0;

    if(A != -1){

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

void ___60466h(int A, int B){

	___605deh_cdecl(A, B);
    dRally_System_addExitCallback(___6052fh);
}

void ___606dfh(void){

	___60441h = 1;
}

void ___60705h(void_cb A){

	___60446h = 0;
	___6044ch = A;
	___60446h = 1;
}
