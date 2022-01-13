#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ kmap[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
void ___2ab50h(void);
int ___252e0h_cdecl(const char *);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

void ___2a608h_cdecl(const char * A1){

	int 	x, y;

	___13248h_cdecl(0x6e, 0xd2, 0x1ac, 0x5a, 1);
	x = 0x24044-___252e0h_cdecl(A1);
	y = x/0x280;
	x = x%0x280;
	___12e78h_v3(___1a10cch___185ba9h, A1, x, y);
	___12e78h_v3(___1a1108h___185c0bh, "Press any key to continue.", 208, 271);
	___12cb8h__VESA101_PRESENTSCREEN();
	___5994ch();
	___59b3ch();
	
	while(1){

		if(___5994ch()) break;
		___2ab50h();
	}

	B(kmap+0x3c) = 0;
	B(kmap+0x3d) = 0;
	___5994ch();
	___59b3ch();
}
