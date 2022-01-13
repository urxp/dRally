#include "drally.h"

	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185b58h[];
	extern __BYTE__ ___185a48h[];
	extern __BYTE__ ___185a44h[];
	extern __BYTE__ ___185a40h[];
	extern __BYTE__ ___185a3ch[];
	extern __BYTE__ ___185a5ch[];
	extern __DWORD__ ___243d44h;

void ___2415ch(void);

void ___2b7a0h(void){

	B(___185b58h+1) = 1;
	B(___185b58h+0xa) = 0;
	B(___185b58h+0xb) = 0;
	strcpy(___1866b8h+0x1c2, "Start A New Game");
	B(___185b58h+0xd) = 0;
	D(___185a48h) = 0;
	D(___185a44h) = 0;
	D(___185a40h) = 0;
	D(___185a3ch) = 0;
	strcpy(___1866b8h, "Start Racing");
	___2415ch();
	D(___185a5ch+0x34) = 0;
	___243d44h = 1;
}
