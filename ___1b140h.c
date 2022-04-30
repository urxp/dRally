#include "drally.h"
#include "drally_fonts.h"
#include "drally_keyboard.h"
#include "drmemory.h"
#include "sfx.h"

#pragma pack(1)
typedef struct s20_s {
    char        str0[11];       // +00
    char        str11[7];       // +11
    __BYTE__    __12;           // +18
    __BYTE__    mem[9];         // +19
    __DWORD__   __1C;           // +28  weapons
} s20_t;


	extern __BYTE__ ___19ded0h[];
	extern __POINTER__ ___24e4ach;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __DWORD__ MP_MONEY;
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___196ab8h[];
	extern __BYTE__ ___1a2010h[];
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___199f9ch[];
	extern __DWORD__ ___19bd60h;
	extern __BYTE__ ___1a1098h[];
	extern __DWORD__ CONNECTION_TYPE;
	extern __BYTE__ ___196adch[];
	extern __BYTE__ ___185a24h[];

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
void __STOSB(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);
void ___13710h(__DWORD__, __DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2ab50h(void);
int ___23594h_cdecl(__POINTER__, int);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___10754h(void);
void ___60705h(void_cb);
void ___1c6bch_cdecl(__DWORD__);
void shop_main(void);
void ___61278h(void);
void ___623d4h(void);
__DWORD__ ___61cd0h(void);
void ___1123ch(void);
__DWORD__ ___1aa28h(__DWORD__ A1, __DWORD__ A2, __DWORD__ A3);
void ___1ad30h(__DWORD__ A1, __DWORD__ A2, __DWORD__ A3);

static void helper_zerox(int i){
/*
    B(___19ded0h+0x20*i) = 0;
    B(___19ded0h+0x20*i+0xb) = 0;
    memset(___19ded0h+0x20*i+0x13, 0, 9);
    B(___19ded0h+0x20*i+0x12) = 0;
    D(___19ded0h+0x20*i+0x1c) = 0;
*/
    memset(&((s20_t *)___19ded0h)[i], 0, sizeof(s20_t));
}

static void helper_zero(__POINTER__ p){

    int     n;

    n = -1;
    while(++n < 4) helper_zerox((p == NULL)?n:B(p));
}

static void helper_copy(__POINTER__ p){
/*
    int     n;

    n = -1;
    while(++n < 11) B(___19ded0h+0x20*B(p)+n) = B(p+n+2);

    n = -1;
    while(++n < 7) B(___19ded0h+0x20*B(p)+n+11) = B(p+n+13);

    n = -1;
    while(++n < 9) B(___19ded0h+0x20*B(p)+n+19) = B(p+n+21);

    B(___19ded0h+0x20*B(p)+18) = B(p+20);
    D(___19ded0h+0x20*B(p)+28) = B(p+30);
*/
    memcpy(&((s20_t *)___19ded0h)[B(p)], p+2, sizeof(s20_t));
}

static void helper_ff(__POINTER__ p){ B(___19ded0h+0x20*B(p)) = 0xff; }


void ___1b140h(void){
#if defined(DR_MULTIPLAYER)
    __DWORD__   eax, ebx, ecx, edx, edi, esi;
    __POINTER__ ebp;
    __BYTE__    esp[0x28];
    int         i, n;


    ebp = ___3f71ch__allocateMemory(0x64);
    D(esp+0x10) = 0x50;
    D(esp) = 0;
    D(esp+0xc) = 0x60;
    D(esp+4) = 0;

   helper_zero(NULL);
    ___135fch(0, 0x173, 0x27f, 0x6d);
    ___23230h();
    ___13710h(0, 0);
    ___13710h(2, 0);
    ___13248h_cdecl(0xe9, 0xe9, 0x88, 0x64, 1);
    ___12e78h_v3(___1a10cch___185ba9h, "Wait...", 250, 264);
    ___12cb8h__VESA101_PRESENTSCREEN();
    W(___24e4ach) = W(___24e4ach+2);

    i = -1;
    while(++i < 0x46){

        ___2ab50h();

        if(___23594h_cdecl(ebp, 0xa) != 0){

            switch(B(ebp+1)){
            case 0:
                helper_zero(ebp);
                B(esp+B(ebp)+4) = 0;
                break;
            case 1:
                helper_copy(ebp);
                B(esp+B(ebp)+4) = 1;
                break;
            case 2:
                helper_ff(ebp);
                B(esp+B(ebp)+4) = 2;
                break;
            default:
                break;
            }
        }

        if(___23594h_cdecl(ebp, 0x12) != 0){

            switch(B(ebp+1)){
            case 0:
                helper_zero(ebp);
                B(esp+B(ebp)+4) = 0;
                break;
            case 1:
                helper_ff(ebp);
                B(esp+B(ebp)+4) = 2;
                break;
            default:
                break;
            }
        }
    }

    ___5994ch();
    ___59b3ch();
    W(___24e4ach) = W(___24e4ach+2);
    B(esp+0x20) = 0;
    B(esp+0x24) = 1;
    D(esp+0x18) = 0x280*(D(esp+0xc)+0xd)+D(esp+0x10)+0x14;

    while(1){

        ___2ab50h();

        esi = 1;
        while(1){

            if(___23594h_cdecl(ebp, 0xa) == 0){

                esi = 0;
            }
            else {

                switch(B(ebp+1)){
                case 0:
                    if((B(esp+B(ebp)+4) == 1)||(B(esp+B(ebp)+4) == 2)){

                        helper_zero(ebp);
                        B(esp+0x24) = 1;
                        B(esp+B(ebp)+4) = 0;
                    }
                    break;
                case 1:
                    if((B(esp+B(ebp)+4) == 0)||(B(esp+B(ebp)+4) == 2)){

                        helper_copy(ebp);
                        B(esp+0x24) = 1;
                        B(esp+B(ebp)+4) = 1;
                    }
                    break;
                case 2:
                    if((B(esp+B(ebp)+4) == 0)||(B(esp+B(ebp)+4) == 1)){

                        helper_ff(ebp);
                        B(esp+0x24) = 1;
                        B(esp+B(ebp)+4) = 2;
                    }
                    break;
                default:
                    break;
                }
            }

            if(esi != 1) break;
        }

        esi = 1;
        while(1){
            
            if(___23594h_cdecl(ebp, 0x12) == 0){

                esi = 0;
            }
            else {

                switch(B(ebp+1)){
                case 0:
                    if((B(esp+B(ebp)+4) == 1)||(B(esp+B(ebp)+4) == 2)){
                        
                        helper_zero(ebp);
                        B(esp+0x24) = 1;
                        B(esp+B(ebp)+4) = 0;
                    }
                    break;
                case 1:
                    if((B(esp+B(ebp)+4) == 0)||(B(esp+B(ebp)+4) == 1)){

                        helper_ff(ebp);
                        B(esp+0x24) = 1;
                        B(esp+B(ebp)+4) = 2;
                    }
                    break;
                default:
                    break;
                }
            }

            if(esi != 1) break;
        }

        D(esp+0x1c) = ___5994ch();

        switch(D(esp+0x1c)){
        case DR_SCAN_ENTER:
        case DR_SCAN_KP_ENTER:
            if((strlen(___19ded0h+0x20*B(esp+0x20)) == 0)||(B(___19ded0h+0x20*B(esp+0x20)) == 0xff)){

                dRally_Sound_pushEffect(1, SFX_BUMMER, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
            }
            else {

                dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
                MP_MONEY = atoi(___19ded0h+0x20*B(esp+0x20)+0xb);
                D(___185a14h_UseWeapons) = D(___19ded0h+0x20*B(esp+0x20)+0x1c);
                D(___196ab8h) = B(___19ded0h+0x20*B(esp+0x20)+0x12);

                memcpy(___1a2010h+1, ___19ded0h+0x20*B(esp+0x20)+0x13, 9);
                memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xf000, ___1a1138h__VESA101_BACKGROUND+0xf000, 0x2a580);
                ___13710h(0, 0);
                ___13710h(2, 0);
                D(esp+8) = ___1aa28h(0x97, 0xc5, 0);

                if(D(esp+8) == 1){

                    D(esp+0x1c) = DR_SCAN_ESCAPE;
                    D(esp) = 1;
                }
                else {
                
                    memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xf000, ___1a1138h__VESA101_BACKGROUND+0xf000, 0x2a580);
                    ___13710h(0, 0);
                    ___13710h(2, 0);
                    ___13248h_cdecl(D(esp+0x10), D(esp+0xc), 0x1c2, 0x10d, 1);
                    ___12e78h_v3(___1a1108h___185c0bh, "Looking for netgames, press enter to join...", D(esp+0x18)%0x280, D(esp+0x18)/0x280);
                    B(esp+0x24) = 1;
                }

                if(D(esp+8) == 2){
                
                    helper_zero(esp+0x20);
                    B(esp+B(esp+0x20)+4) = 0;
                }
            }
            break;
        case DR_SCAN_KP_8:
        case DR_SCAN_UP: 
            if(B(esp+0x20) > 0){

                B(esp+0x20)--;
            }
            else {

                B(esp+0x20) = 3;
            }

            B(esp+0x24) = 1;   // !!!
            dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
            break;
        case DR_SCAN_KP_2:
        case DR_SCAN_DOWN:
            if(B(esp+0x20) < 3){

                B(esp+0x20)++;
            }
            else {

                B(esp+0x20) = 0;
            }

            B(esp+0x24) = 1;   // !!!
            dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
            break;
        default:
            break;
        }

        if(D(esp+0x1c) == DR_SCAN_ESCAPE) break;

        if(B(esp+0x24) != 0){

            ___1ad30h(D(esp+0x10), D(esp+0xc), B(esp+0x20));
            B(esp+0x24) = 0;
        }

        if(D(esp+0x1c) == DR_SCAN_ESCAPE) break;
    }

    W(___24e4ach) = W(___24e4ach+2);
    memset(___24e4ach+4, 0, 0x1000);
    ___5994ch();
    ___59b3ch();
    dRMemory_free(ebp);
    ___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
    ___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
    ___23230h();

    if(D(esp) != 0){
        
        ___61278h();
        ___623d4h();

        D(___199f9ch) = B(esp+0x20)+1;

        if(___61cd0h() == 0) ___1123ch();
        ___19bd60h = 1;
        D(___196adch) = D(___1a1098h);

        if(CONNECTION_TYPE == 2) ___60705h(&___10754h);

        ___1c6bch_cdecl(MP_MONEY);
        shop_main();
    	D(___185a24h) = 1;
    }
#endif // DR_MULTIPLAYER
    return;
}
