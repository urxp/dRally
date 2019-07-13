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

typedef struct Driver {
    char    Name[0xc];      // +0
    dword   Damage;         // +ch
    dword   Engine;         // +10h
    dword   Tire;           // +14h
    dword   Armor;          // +18h
    dword   Car;            // +1ch
    dword   __20;
    dword   __24;
    dword   __28;
    dword   Color;
    dword   Money;          // +30h
    dword   __34;
    dword   __38;
    dword   CarPrice;       // +3ch
    dword   Face;           // +40h
    dword   Points;         // +44h
    dword   Standings;      // +48h
    dword   __4c;
    dword   __50;
    dword   __54;
    dword   __58;
    dword   __5c;
    dword   __60;
    dword   __64;
    dword   __68;
} Driver;

    extern dword MyID;
    extern Driver Roster[];
    extern int ___196ad8h;
    extern pal3 * p_pal_bgcop;
    extern pal3 * p_pal_copper;

	// 0.015625 (1/64)
    extern double ___1821e2h;

    extern byte ___1a1edch[];

    extern pal3dword Pal8to24_0[];
    extern pal3dword Pal8to24_1[];


    void ___11564h(float, float, float);
    void ___24010h(float, float, float);

    void loadMenuPalette(void);

    static dword idiv_quo(dword, dword, dword);
#if defined(__WATCOMC__)
    #pragma aux idiv_quo =      \
        "idiv   ebx"            \
        parm [eax] [edx] [ebx]
#endif

    static dword imul_edx(dword, dword);
    #pragma aux imul_edx =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [edx]

    static dword imul_eax(dword, dword);
    #pragma aux imul_eax =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [eax]


// 2b318h
void ___2b318h(void){

	dword 	n, i;
	dword 	eax, ebx, ecx, edx, esi, edi, ebp;

	loadMenuPalette();

	___11564h(
		(float)p_pal_copper[Roster[MyID].Color].R,
		(float)p_pal_copper[Roster[MyID].Color].G,
		(float)p_pal_copper[Roster[MyID].Color].B
	);

	___24010h(
		(float)p_pal_copper[Roster[MyID].Color].R,
		(float)p_pal_copper[Roster[MyID].Color].G,
		(float)p_pal_copper[Roster[MyID].Color].B
	);

	n = -1;

	while(++n < 0x20){
    /*
        Pal8to24_1[n+0xc0].R =
			((int)(p_pal_bgcop[___196ad8h].R * ___1821e2h * n) << 0x10) / 0x64;
        Pal8to24_1[n+0xc0].G =
			((int)(p_pal_bgcop[___196ad8h].G * ___1821e2h * n) << 0x10) / 0x64;
        Pal8to24_1[n+0xc0].B =
			((int)(p_pal_bgcop[___196ad8h].B * ___1821e2h * n) << 0x10) / 0x64;
    */
        Pal8to24_1[n+0xc0].R = n*0x100*p_pal_bgcop[___196ad8h].R / 0x19;
        Pal8to24_1[n+0xc0].G = n*0x100*p_pal_bgcop[___196ad8h].G / 0x19;
        Pal8to24_1[n+0xc0].B = n*0x100*p_pal_bgcop[___196ad8h].B / 0x19;
	}

	n = 0xf;

	while(++n < 0x20){

		i = (Pal8to24_0[n].R * D(___1a1edch) + 0x8000) & 0xffff0000;
		Pal8to24_1[n].R = i / 0x64;

		i = (Pal8to24_0[n].G * D(___1a1edch) + 0x8000) & 0xffff0000;
		Pal8to24_1[n].G = i / 0x64;

		i = (Pal8to24_0[n].B * D(___1a1edch) + 0x8000) & 0xffff0000;
		Pal8to24_1[n].B = i / 0x64;
	}

}
