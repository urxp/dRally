#include "drally.h"
#include "drally_fonts.h"

#define COOXY(x,y) (0x280*(y)+(x))
#define COO80UV(u,v) (0x80*(v)+(u))

	extern __BYTE__ * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___1a1f64h[];
	extern __BYTE__ * ___1a1040h[];
	extern __BYTE__ * ___1a10d4h;

void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);
void ___25330h(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

void ___30df8h(void){

	__DWORD__ 	i, j;

	memcpy(&___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(0, 0x16f)], &___1a1138h__VESA101h_DefaultScreenBufferB[COOXY(0, 0x16f)], 0x10*0x280);
	___135fch(0, 0x173, 0x27f, 0x6d);
	___23230h();

	j = -1;
	while(++j < 0x70){

		i = -1;
		while(++i < 0x80){

			___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(0x20+i, 0x80+j)] = ___1a1040h[B(___1a1f64h)][COO80UV(i, j)];
			___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(0xc0+i, 0x80+j)] = ___1a1040h[B(___1a1f64h+1)][COO80UV(i, j)];
			___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(0x160+i, 0x80+j)] = ___1a1040h[B(___1a1f64h+2)][COO80UV(i, j)];
		}
	}

	___12e78h_v3(___1a1108h___185c0bh, "$750", 0x49, 0xe0);
	___12e78h_v3(___1a1108h___185c0bh, "$3000", 0xe2, 0xe0);
	___12e78h_v3(___1a1108h___185c0bh, "$12000", 0x17f, 0xe0);
	___13248h_cdecl(0x16, 0x100, 0x94, 0x69, 1);
	___13248h_cdecl(0xb6, 0x100, 0x94, 0x69, 1);
	___13248h_cdecl(0x156, 0x100, 0x94, 0x69, 1);

	j = -1;
	while(++j < 0x20){

		i = -1;
		while(++i < 0x280){

			if(___1a10d4h[COOXY(i, j)] != 0) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(i, 0x50+j)] = ___1a10d4h[COOXY(i, j)];
		}
	}

	___25330h();
}
