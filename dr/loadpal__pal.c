#include "x86.h"

#pragma pack(1)

typedef struct pal3 {
    byte    __0;
    byte    __1;
    byte    __2;
} pal3;

typedef struct pal3dword {
    dword   __0;
    dword   __1;
    dword   __2;
} pal3dword;

    extern const char MENU_BPA[];   // "MENU.BPA"
    extern pal3dword Pal8to24_1[];

    void read__bpa(const char *, void *, const char *);


// 3d154h
void loadPalette(const char * pal_file){

	dword 	n;
	pal3 	pal[0x100];


	read__bpa(MENU_BPA, pal, pal_file);

    n = -1;
    while(++n < 0x100){

        Pal8to24_1[n].__0 = (pal[n].__0 << 0x10) / 0x64;
        Pal8to24_1[n].__1 = (pal[n].__1 << 0x10) / 0x64;
        Pal8to24_1[n].__2 = (pal[n].__2 << 0x10) / 0x64;
    }
}
