#include "drally.h"
#include "drally_fonts.h"
#include "drmemory.h"

	extern __BYTE__ ___19ded0h[];
	extern __POINTER__ ___24e4ach;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___185a54h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___196ab8h[];
	extern __BYTE__ ___1a2010h[];
	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
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

void ___1b140h(void){
#if defined(DR_MULTIPLAYER)
    __DWORD__   eax, ebx, ecx, edx, edi, esi;
    __POINTER__ ebp;
    __BYTE__    esp[0x28];


    edx = 0x50;
    eax = 0x64;
    ebx = 0x60;
    ebp = ___3f71ch__allocateMemory(eax);
    ecx = 0;
    D(esp+0x10) = edx;
    D(esp) = ecx;
    ecx = 4;
    edx = 0;
    D(esp+0xc) = ebx;
    __STOSB(esp+4, edx, ecx);
    L(edx) = 0;
    eax = 0;
___1b18eh:
    B(___19ded0h+eax) = L(edx);
    eax += 0x20;
    if(eax != 0x80) goto ___1b18eh;
    L(edx) = 0;
    eax = 0;
___1b1a6h:
    B(___19ded0h+eax+0xb) = L(edx);
    eax += 0x20;
    if(eax != 0x80) goto ___1b1a6h;
    esi = 9;
    ebx = 0;
___1b1bdh:
    eax = ebx;
    edx = esi;
    eax <<= 5;
___1b1c4h:
    L(ecx) = 0;
    B(___19ded0h+eax+0x13) = L(ecx);
    eax++;
    if(eax != edx) goto ___1b1c4h;
    ebx++;
    esi += 0x20;
    if((int)ebx < 4) goto ___1b1bdh;
    eax ^= edx;
___1b1dch:
    H(ecx) = 0;
    B(___19ded0h+eax+0x12) = H(ecx);
    eax += 0x20;
    if(eax != 0x80) goto ___1b1dch;
    eax = 0;
___1b1f0h:
    esi = 0;
    D(___19ded0h+eax+0x1c) = esi;
    eax += 0x20;
    if(eax != 0x80) goto ___1b1f0h;
    ecx = 0x6d;
    ebx = 0x27f;
    edx = 0x173;
    eax = 0;
    ___135fch(eax, edx, ebx, ecx);
    ___23230h();
    edx = 0;
    eax = 0;
    ___13710h(eax, edx);
    eax = 2;
    edx = 0;
    ecx = 0x64;
    ___13710h(eax, edx);
    edx = 0xe9;
    ebx = 0x88;
    eax = edx;
    ___13248h_cdecl(eax, edx, ebx, ecx, 1);
    ___12e78h_v3(___1a10cch___185ba9h, "Wait...", 250, 264);
    ___12cb8h__VESA101_PRESENTSCREEN();
    W(___24e4ach) = W(___24e4ach+2);
    edi = 0x12;
___1b279h:
    ___2ab50h();
    edx = 0xa;
    eax = ___23594h_cdecl(ebp, edx);
    if(eax == 0) goto ___1b3e7h;
    if(B(ebp+1) != 1) goto ___1b327h;

    eax = 0;
    while(1){

        ebx = B(ebp);
        ebx <<= 5;
        ecx = ebx+eax;
        B(___19ded0h+ecx) = B(ebp+eax+2);
        eax++;
        if((int)eax >= 0xb) break;
    }

    eax = 0;
    while(1){

        ebx = B(ebp);
        ebx <<= 5;
        B(___19ded0h+ebx+eax+0xb) = B(ebp+eax+0xd);
        eax++;
        if((int)eax >= 7) break;
    }

    eax = 0;
    while(1){

        ebx = B(ebp);
        ebx <<= 5;
        ecx = ebx+eax;
        B(___19ded0h+ecx+0x13) = B(ebp+eax+0x15);
        eax++;
        if((int)eax >= 9) break;
    }

    eax = 0;
    L(eax) = B(ebp);
    edx = eax;
    edx <<= 5;
    L(eax) = B(ebp+0x14);
    B(___19ded0h+edx+0x12) = L(eax);
    eax = 0;
    L(eax) = B(ebp);
    edx = 0;
    eax <<= 5;
    L(edx) = B(ebp+0x1e);
    D(___19ded0h+eax+0x1c) = edx;
    eax = 0;
    L(eax) = B(ebp);
    B(esp+eax+4) = 1;
___1b327h:
    if(B(ebp+1) != 0) goto ___1b3c7h;
    eax = 0;
___1b333h:
    edx = 0;
    L(edx) = B(ebp);
    ebx = edx;
    L(edx) = 0;
    ebx <<= 5;
    eax++;
    B(___19ded0h+ebx) = L(edx);
    if((int)eax < 4) goto ___1b333h;
    L(edx) = 0;
    eax = 0;
___1b357h:
    ebx = 0;
    L(ebx) = B(ebp);
    ebx <<= 5;
    eax++;
    B(___19ded0h+ebx+0xb) = L(edx);
    if((int)eax < 4) goto ___1b357h;
    ebx = 0;
___1b36dh:
    eax = 0;
___1b36fh:
    edx = 0;
    L(edx) = B(ebp);
    edx <<= 5;
    L(ecx) = 0;
    B(___19ded0h+edx+eax+0x13) = L(ecx);
    eax++;
    if((int)eax < 9) goto ___1b36fh;
    ebx++;
    if((int)ebx < 4) goto ___1b36dh;
    eax = 0;
___1b38eh:
    edx = 0;
    L(edx) = B(ebp);
    H(ecx) = 0;
    edx <<= 5;
    eax++;
    B(___19ded0h+edx+0x12) = H(ecx);
    if((int)eax < 4) goto ___1b38eh;
    eax = 0;
___1b3a6h:
    edx = 0;
    L(edx) = B(ebp);
    ebx = 0;
    edx <<= 5;
    eax++;
    D(___19ded0h+edx+0x1c) = ebx;
    if((int)eax < 4) goto ___1b3a6h;
    eax = 0;
    L(eax) = B(ebp);
    L(edx) = 0;
    B(esp+eax+4) = L(edx);
___1b3c7h:
    H(edx) = B(ebp+1);
    if(H(edx) != 2) goto ___1b3e7h;
    eax = 0;
    L(eax) = B(ebp);
    eax <<= 5;
    B(___19ded0h+eax) = 0xff;
    eax = 0;
    L(eax) = B(ebp);
    B(esp+eax+4) = H(edx);
___1b3e7h:
    edx = edi;
    eax = ___23594h_cdecl(ebp, edx);
    if(eax == 0) goto ___1b4b9h;
    if(B(ebp+1) != 1) goto ___1b417h;
    eax = 0;
    L(eax) = B(ebp);
    eax <<= 5;
    B(___19ded0h+eax) = 0xff;
    eax = 0;
    L(eax) = B(ebp);
    B(esp+eax+4) = 2;
___1b417h:
    if(B(ebp+1) != 0) goto ___1b4b9h;
    eax = 0;
___1b423h:
    edx = 0;
    L(edx) = B(ebp);
    ebx = edx;
    L(edx) = 0;
    eax <<= 5;
    eax++;
    B(___19ded0h+ebx) = L(edx);
    if((int)eax < 4) goto ___1b423h;
    eax = 0;
___1b441h:
    edx = 0;
    L(edx) = B(ebp);
    ebx = edx;
    L(edx) = 0;
    ebx <<= 5;
    eax++;
    B(___19ded0h+ebx+0xb) = L(edx);
    if((int)eax < 4) goto ___1b441h;
    ebx = 0;
___1b45fh:
    eax = 0;
___1b461h:
    edx = 0;
    L(edx) = B(ebp);
    edx <<= 5;
    L(ecx) = 0;
    B(___19ded0h+edx+eax+0x13) = L(ecx);
    eax++;
    if((int)eax < 9) goto ___1b461h;
    ebx++;
    if((int)ebx < 4) goto ___1b45fh;
    eax = 0;
___1b480h:
    edx = 0;
    L(edx) = B(ebp);
    H(ecx) = 0;
    edx <<= 5;
    eax++;
    B(___19ded0h+edx+0x12) = H(ecx);
    if((int)eax < 4) goto ___1b480h;
    eax = 0;
___1b498h:
    edx = 0;
    L(edx) = B(ebp+0);
    ecx = 0;
    edx <<= 5;
    eax++;
    D(___19ded0h+edx+0x1c) = ecx;
    if((int)eax < 4) goto ___1b498h;
    eax = 0;
    L(eax) = B(ebp);
    L(edx) = 0;
    B(esp+eax+4) = L(edx);
___1b4b9h:
    esi++;
    if((int)esi < 0x46) goto ___1b279h;
    ___5994ch();
    ___59b3ch();
    W(___24e4ach) = W(___24e4ach+2);
    H(edx) = 0;
    B(esp+0x20) = H(edx);
    edx = D(esp+0xc);
    edx += 0xd;
    eax = 4*edx;
    eax += edx;
    esi = D(esp+0x10);
    eax <<= 7;
    eax += esi;
    L(ebx) = 1;
    eax += 0x14;
    B(esp+0x24) = L(ebx);
    D(esp+0x18) = eax;
___1b505h:
	___2ab50h();
    esi = 1;
    edi = 0xa;
___1b514h:
    edx = edi;
    eax = ___23594h_cdecl(ebp, edx);

    if(eax == 0){

        esi = 0;
        goto ___1b6ceh;
    }
    if(B(ebp+1) != 1) goto ___1b5d3h;
    eax = 0;
    L(eax) = B(ebp);
    L(ecx) = B(esp+eax+4);
    if(L(ecx) == 0) goto ___1b545h;
    if(L(ecx) != 2) goto ___1b5d3h;
___1b545h:
    eax = 0;

    while(1){

        ebx = B(ebp);
        ebx <<= 5;
        B(___19ded0h+ebx+eax) = B(ebp+eax+2);
        eax++;
        if((int)eax >= 0xb) break;
    }

    eax = 0;

    while(1){

        ebx = B(ebp);
        ebx <<= 5;
        ecx = ebx+eax;
        B(___19ded0h+ecx+0xb) = B(ebp+eax+0xd);
        eax++;
        if((int)eax >= 7) break;
    }

    eax = 0;

    while(1){

        ebx = B(ebp);
        ebx <<= 5;
        ecx = ebx+eax;
        B(___19ded0h+ecx+0x13) = B(ebp+eax+0x15);
        eax++;
        if((int)eax >= 9) break;
    }

    eax = 0;
    L(eax) = B(ebp);
    eax <<= 5;
    L(edx) = B(ebp+0x14);
    B(___19ded0h+eax+0x12) = L(edx);
    eax = 0;
    L(eax) = B(ebp);
    edx = 0;
    eax <<= 5;
    L(edx) = B(ebp+0x1e);
    D(___19ded0h+eax+0x1c) = edx;
    eax = 0;
    L(edx) = 1;
    L(eax) = B(ebp);
    B(esp+0x24) = L(edx);
    B(esp+eax+4) = L(edx);
___1b5d3h:
    if(B(ebp+1) != 0) goto ___1b692h;
    eax = 0;
    L(eax) = B(ebp);
    H(ebx) = B(esp+eax+4);
    if(H(ebx) == 1) goto ___1b5f4h;
    if(H(ebx) != 2) goto ___1b692h;
___1b5f4h:
    eax = 0;
___1b5f6h:
    edx = 0;
    L(edx) = B(ebp);
    ebx = edx;
    L(edx) = 0;
    ebx <<= 5;
    eax++;
    B(___19ded0h+ebx) = L(edx);
    if((int)eax < 4) goto ___1b5f6h;
    eax = 0;
___1b614h:
    edx = 0;
    L(edx) = B(ebp);
    ebx = edx;
    L(edx) = 0;
    ebx <<= 5;
    eax++;
    B(___19ded0h+ebx+0xb) = L(edx);
    if((int)eax < 4) goto ___1b614h;
    ebx = 0;

    while(1){

        eax = 0;

        while(1){
    
            edx = 0;
            L(edx) = B(ebp);
            edx <<= 5;
            H(ecx) = 0;
            B(___19ded0h+edx+eax+0x13) = H(ecx);
            eax++;
            if((int)eax >= 9) break;
        }

        ebx++;
        if((int)ebx >= 4) break;
    }

    eax = 0;

    while(1){

        edx = 0;
        L(edx) = B(ebp);
        L(ebx) = 0;
        edx <<= 5;
        eax++;
        B(___19ded0h+edx+0x12) = L(ebx);
        if((int)eax >= 4) break;
    }

    eax = 0;

    while(1){

        edx = 0;
        L(edx) = B(ebp);
        ebx = 0;
        edx <<= 5;
        eax++;
        D(___19ded0h+edx+0x1c) = ebx;
        if((int)eax >= 4) break;
    }

    eax = 0;
    L(ecx) = 1;
    L(eax) = B(ebp);
    H(ebx) = 0;
    B(esp+0x24) = L(ecx);
    B(esp+eax+4) = H(ebx);
___1b692h:
    if(B(ebp+1) == 2){
 
        eax = 0;
        L(eax) = B(ebp);
        L(edx) = B(esp+eax+4);

        if((L(edx) == 1)||(L(edx) == 0)){

            eax = 0;
            L(eax) = B(ebp);
            eax <<= 5;
            B(___19ded0h+eax) = 0xff;
            eax = 0;
            L(ecx) = 1;
            L(eax) = B(ebp);
            H(ebx) = 2;
            B(esp+0x24) = L(ecx);
            B(esp+eax+4) = H(ebx);
        }
    }
    goto ___1b6ceh;


___1b6ceh:
    if(esi == 1) goto ___1b514h;
    esi = 1;
    L(ecx) = 2;
    edi = 0x12;

    while(1){
        
        edx = edi;
        eax = ___23594h_cdecl(ebp, edx);

        if(eax == 0){

            esi = 0;
        }
        else {

            H(ecx) = B(ebp+1);

            if(H(ecx) == 1){

                eax = B(ebp);
                L(edx) = B(esp+eax+4);

                if((L(edx) == H(ecx))||(L(edx) == 0)){

                    eax = B(ebp);
                    eax <<= 5;
                    B(___19ded0h+eax) = 0xff;
                    eax = 0;
                    H(ebx) = 1;
                    L(eax) = B(ebp);
                    B(esp+0x24) = H(ebx);
                    B(esp+eax+4) = L(ecx);
                }
            }

            if(B(ebp+1) == 0){
                
                eax = 0;
                L(eax) = B(ebp);
                L(edx) = B(esp+eax+4);

                if((L(edx) == 1)||(L(ecx) == L(edx))){
                    
                    eax = 0;

                    while(1){

                        edx = 0;
                        L(edx) = B(ebp);
                        ebx = edx;
                        L(edx) = 0;
                        ebx <<= 5;
                        eax++;
                        B(___19ded0h+ebx) = L(edx);
                        if((int)eax >= 4) break;
                    }

                    L(ebx) = 0;
                    eax = 0;

                    while(1){

                        edx = B(ebp);
                        edx <<= 5;
                        eax++;
                        B(___19ded0h+edx+0xb) = L(ebx);
                        if((int)eax >= 4) break;
                    }

                    ebx = 0;

                    while(1){

                        eax = 0;

                        while(1){

                            edx = 0;
                            L(edx) = B(ebp);
                            edx <<= 5;
                            H(ecx) = 0;
                            B(___19ded0h+edx+eax+0x13) = H(ecx);
                            eax++;
                            if((int)eax >= 9) break;
                        }

                        ebx++;
                        if((int)ebx >= 4) break;
                    }

                    eax = 0;

                    while(1){

                        edx = 0;
                        L(edx) = B(ebp);
                        L(ebx) = 0;
                        edx <<= 5;
                        eax++;
                        B(___19ded0h+edx+0x12) = L(ebx);
                        if((int)eax >= 4) break;
                    }

                    eax = 0;

                    while(1){

                        edx = 0;
                        L(edx) = B(ebp);
                        ebx = 0;
                        edx <<= 5;
                        eax++;
                        D(___19ded0h+edx+0x1c) = ebx;
                        if((int)eax >= 4) break;
                    }

                    eax = 0;
                    H(ecx) = 1;
                    L(eax) = B(ebp);
                    H(ebx) = 0;
                    B(esp+0x24) = H(ecx);
                    B(esp+eax+4) = H(ebx);
                }
            }
        }

        if(esi != 1) break;
    }

    D(esp+0x1c) = ___5994ch();

    switch(D(esp+0x1c)){
    case 0x1c:
    case 0x9c:
        esi = B(esp+0x20);
        esi = 0x20*esi;

        if((strlen(___19ded0h+esi) <= 0)||(B(___19ded0h+esi) == 0xff)){

            edx = 0x1d;
            ebx = 0x28000;
            eax = 1;
            ecx = ___24cc54h_sfx_volume;
            ebx = 0;
            dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
        }
        else {

            ebx = 0;
            dRally_Sound_pushEffect(1, 0x19, ebx, ___24cc54h_sfx_volume, 0x28000, 0x8000);
            D(___185a54h) = atoi(___19ded0h+esi+0xb);
            D(___185a14h_UseWeapons) = D(___19ded0h+esi+0x1c);
            eax = B(___19ded0h+esi+0x12);
            D(___196ab8h) = eax;
            eax = 0;

            while(1){

                edx = B(esp+0x20);
                edx <<= 5;
                B(___1a2010h+eax+1) = B(___19ded0h+eax+edx+0x13);
                eax++;
                if((int)eax >= 9) break;
            }

            ecx = 0x2a580;
            memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xf000, ___1a1138h__VESA101h_DefaultScreenBufferB+0xf000, ecx);
            ___13710h(0, 0);
            eax = 2;
            edx = 0;
            ___13710h(eax, edx);
            edx = 0xc5;
            eax = 0x97;
            eax = ___1aa28h(eax, edx, ebx);
            D(esp+8) = eax;

            if(eax == 1){

                D(esp+0x1c) = 1;
                D(esp) = 1;
            }
            else {
            
                memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xf000, ___1a1138h__VESA101h_DefaultScreenBufferB+0xf000, 0x2a580);
                ___13710h(0, 0);
                ___13710h(2, 0);
                ___13248h_cdecl(D(esp+0x10), D(esp+0xc), 0x1c2, 0x10d, 1);
                ___12e78h_v3(___1a1108h___185c0bh, "Looking for netgames, press enter to join...", D(esp+0x18)%0x280, D(esp+0x18)/0x280);
                B(esp+0x24) = 1;
            }

            if(D(esp+8) == 2){
            
                eax = 0;

                while(1){

                    edx = B(esp+0x20);
                    ebx = edx;
                    L(edx) = 0;
                    ebx <<= 5;
                    eax++;
                    B(___19ded0h+ebx) = L(edx);
                    if((int)eax >= 4) break;
                }

                eax = 0;

                while(1){

                    edx = B(esp+0x20);
                    ebx = edx;
                    L(edx) = 0;
                    ebx <<= 5;
                    eax++;
                    B(___19ded0h+ebx+0xb) = L(edx);
                    if((int)eax >= 4) break;
                }

                ebx = 0;

                while(1){

                    eax = 0;

                    while(1){

                        edx = B(esp+0x20);
                        edx <<= 5;
                        L(ecx) = 0;
                        B(___19ded0h+edx+eax+0x13) = L(ecx);
                        eax++;
                        if((int)eax >= 9) break;
                    }

                    ebx++;
                    if((int)ebx >= 4) break;
                }

                eax = 0;

                while(1){

                    edx = B(esp+0x20);
                    H(ecx) = 0;
                    edx <<= 5;
                    eax++;
                    B(___19ded0h+edx+0x12) = H(ecx);
                    if((int)eax >= 4) break;
                }

                eax = 0;

                while(1){

                    edx = B(esp+0x20);
                    ebx = edx;
                    ecx = 0;
                    ebx <<= 5;
                    eax++;
                    D(___19ded0h+ebx+0x1c) = ecx;
                    if((int)eax >= 4) break;
                }

                L(eax) = 0;
                B(esp+edx+4) = L(eax);
            }
        }
        break;
    case 0x48:
    case 0xc8: 
        L(ebx) = B(esp+0x20);

        if(L(ebx) <= 0){

            B(esp+0x20) = 3;
        }
        else {

            L(ecx) = L(ebx);
            L(ecx)--;
            B(esp+0x20) = L(ecx);
        }

        eax = 1;
        edx = 0x28000;
        ebx = 0;
        B(esp+0x24) = 1;   // !!!
        edx = 0x1a;
        ecx = ___24cc54h_sfx_volume;
        dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
        break;
    case 0x50:
    case 0xd0:
        L(eax) = B(esp+0x20);

        if(L(eax) >= 3){

            H(eax) = 0;
            B(esp+0x20) = H(eax);
        }
        else {

            L(edx) = L(eax);
            L(edx)++;
            B(esp+0x20) = L(edx);
        }

        eax = 1;
        ecx = 0x28000;
        ebx = 0;
        B(esp+0x24) = 1;   // !!!
        edx = 0x1a;
        ecx = ___24cc54h_sfx_volume;
        dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
        break;
    default:
        break;
    }

    if(D(esp+0x1c) == 1) goto ___1bb42h;

    if(B(esp+0x24) != 0){

        edx = D(esp+0xc);
        ebx = 0;
        eax = D(esp+0x10);
        L(ebx) = B(esp+0x20);
        ___1ad30h(eax, edx, ebx);
        L(edx) = 0;
        B(esp+0x24) = L(edx);
    }

    if(D(esp+0x1c) != 1) goto ___1b505h;

___1bb42h:
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

        eax = B(esp+0x20);
        eax++;
        D(___199f9ch) = eax;
        eax = ___61cd0h();
        if(eax == 0) ___1123ch();
        ___19bd60h = 1;
        D(___196adch) = D(___1a1098h);

        if(CONNECTION_TYPE == 2) ___60705h(___10754h);

        ___1c6bch_cdecl(D(___185a54h));
        shop_main();
        D(___185a24h) = 1;
    }
#endif // DR_MULTIPLAYER
    return;
}
