#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern byte ___185ba9h[];
	extern void * ___1a10cch;
	extern byte ___185c0bh[];
	extern void * ___1a1108h;
	extern byte kmap[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
byte ___5994ch(void);
byte ___59b3ch(void);
void ___2ab50h(void);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
int ___252e0h_cdecl(const char *);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

void ___2a608h_cdecl(const char * A1){

	___13248h_cdecl(0x6e, 0xd2, 0x1ac, 0x5a, 1);
	___12e78h_cdecl(___1a10cch, ___185ba9h, A1, 0x24044-___252e0h_cdecl(A1));
	___12e78h_cdecl(___1a1108h, ___185c0bh, "Press any key to continue.", 0x2a650);
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
