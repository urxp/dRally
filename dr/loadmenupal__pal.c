#include "x86.h"

#pragma pack(1)

typedef struct pal3 {
    byte    R;
    byte    G;
    byte    B;
} pal3;

typedef struct pal3dword {
    dword   R;
    dword   G;
    dword   B;
} pal3dword;

    extern const char MENU_BPA[];   // "MENU.BPA"
    extern const char pal_menu[];   // "menu.pal"
    extern pal3dword Pal8to24_0[];
    extern pal3dword Pal8to24_1[];

    void read__bpa(const char *, void *, const char *);


// 12940h
void loadMenuPalette(void){

	dword 	n;
	pal3 	p_pal_menu[0x100];

	read__bpa(MENU_BPA, p_pal_menu, pal_menu);

	n = -1;
	while(++n < 0x100){

		Pal8to24_0[n].R = Pal8to24_1[n].R = 0x4000*p_pal_menu[n].R / 0x19;
		Pal8to24_0[n].G = Pal8to24_1[n].G = 0x4000*p_pal_menu[n].G / 0x19;
		Pal8to24_0[n].B = Pal8to24_1[n].B = 0x4000*p_pal_menu[n].B / 0x19;
	} 
}
