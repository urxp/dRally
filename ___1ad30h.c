#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___19ded0h[];

char * itoa_watcom106(int value, char * buffer, int radix);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
int ___25138h_cdecl(const char *);
void ___12cb8h__VESA101_PRESENTSCREEN(void);

void ___1ad30h(__DWORD__ A1, __DWORD__ A2, __DWORD__ A3){

    __BYTE__    esp[0xbc];
    int         x, y, n;


    ___13248h_cdecl(A1, A2, 0x1c2, 0x10d, 1);
    ___12e78h_v3(___1a110ch___185c0bh, "Looking for netgames, press enter to join...", A1+0x14, A2+0xd);

    n = -1;
    while(++n < 4){

        itoa_watcom106(n+1, esp, 0xa);
        strcat(esp, ". ");

        x = (0x280*(A2+0x34*n+0x29)+A1+0x28)-___25138h_cdecl(esp);
        y = x/0x280;
        x = x%0x280;
        ___12e78h_v3((A3 != n)?___1a10fch___185c0bh:___1a1108h___185c0bh, esp, x, y);

        if((strlen(___19ded0h+0x20*n) > 0)&&(B(___19ded0h+0x20*n) != 0xff)){
                
            strcpy(esp, ___19ded0h+0x20*n);
            strcat(esp, "'s game");
            strcat(esp, (D(___19ded0h+0x20*n+0x1c) == 0)?" without ":" with ");
            strcat(esp, "weapons");
            ___12e78h_v3((A3 != n)?___1a10fch___185c0bh:___1a1108h___185c0bh, esp, (A1+0x20)%0x280, (A2+0x34*n+0x29)+(A1+0x20)/0x280);
            strcpy(esp, "Selected tracks: ");
            itoa_watcom106(B(___19ded0h+0x20*n+0x12), esp+0x50, 0xa);
            strcat(esp, esp+0x50);
            ___12e78h_v3(___1a10fch___185c0bh, esp, (A1+0x20)%0x280, (A2+0x34*n+0x39)+(A1+0x20)/0x280);
            strcpy(esp, "Starting money: $");
            strcat(esp, ___19ded0h+0x20*n+0xb);
            ___12e78h_v3(___1a10fch___185c0bh, esp, (A1+0x20)%0x280, (A2+0x34*n+0x49)+(A1+0x20)/0x280);
        }

        if(B(___19ded0h+0x20*n) == 0xff){

            ___12e78h_v3(___1a10fch___185c0bh, "--", (A1+0x20)%0x280, (A2+0x34*n+0x29)+(A1+0x20)/0x280);
            ___12e78h_v3(___1a10fch___185c0bh, "The netgame is already in use!", (A1+0x20)%0x280, (A2+0x34*n+0x39)+(A1+0x20)/0x280);
            ___12e78h_v3(___1a10fch___185c0bh, "--", (A1+0x20)%0x280, (A2+0x34*n+0x49)+(A1+0x20)/0x280);
        }
    }

    ___12cb8h__VESA101_PRESENTSCREEN();
}
