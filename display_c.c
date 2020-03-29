#include "drally.h"

#define BANK_SIZE 0x10000

byte VGA3_ACTIVESCREEN[0x8000];
byte VGA13_ACTIVESCREEN[0xfa00];
byte VESA101_ACTIVESCREEN[0x4b000];


void * A000 = VESA101_ACTIVESCREEN;
void * B800 = VGA3_ACTIVESCREEN;

void ___12bd4h__VESA101_SETBANK(dword bank_n){

    A000 = VESA101_ACTIVESCREEN + bank_n*BANK_SIZE;
}

extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void ___12cb8h__VESA101_PRESENTSCREEN(void){

    ___12bd4h__VESA101_SETBANK(0);
    memcpy(A000, ___1a112ch__VESA101_ACTIVESCREEN_PTR, BANK_SIZE);
    ___12bd4h__VESA101_SETBANK(1);
    memcpy(A000, ___1a112ch__VESA101_ACTIVESCREEN_PTR+BANK_SIZE, BANK_SIZE);
    ___12bd4h__VESA101_SETBANK(2);
    memcpy(A000, ___1a112ch__VESA101_ACTIVESCREEN_PTR+2*BANK_SIZE, BANK_SIZE);
    ___12bd4h__VESA101_SETBANK(3);
    memcpy(A000, ___1a112ch__VESA101_ACTIVESCREEN_PTR+3*BANK_SIZE, BANK_SIZE);
    ___12bd4h__VESA101_SETBANK(4);
    memcpy(A000, ___1a112ch__VESA101_ACTIVESCREEN_PTR+4*BANK_SIZE, 0xb000);
}

void ___12d6ch__VESA101_PRESENTBOTTOMSCREEN(void){

    ___12bd4h__VESA101_SETBANK(3);
    memcpy(A000, ___1a112ch__VESA101_ACTIVESCREEN_PTR+3*BANK_SIZE, BANK_SIZE);
    ___12bd4h__VESA101_SETBANK(4);
    memcpy(A000, ___1a112ch__VESA101_ACTIVESCREEN_PTR+4*BANK_SIZE, 0xb000);
}

void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h){

    dword   __h, __w, bank_n;

    bank_n = offset>>0x10;
    ___12bd4h__VESA101_SETBANK(bank_n);

    __h = -1;
    while(++__h < h){

        if(((offset%BANK_SIZE)+w) > BANK_SIZE){

            __w = -1;
            while(++__w < w){

                if(((offset+__w)>>0x10) != bank_n) ___12bd4h__VESA101_SETBANK(++bank_n);
                B(A000+((offset+__w)%BANK_SIZE)) = B(src+__w);
            }
        }
        else {
                
            if((offset>>0x10) != bank_n) ___12bd4h__VESA101_SETBANK(++bank_n);
            memcpy(A000+offset%BANK_SIZE, src, w);
        }

        offset += 0x280;
        src += 0x280;
    }
}

dword ___12c38h__VESA101_CHECKBANKS(void){

    //___12bd4h__VESA101_SETBANK(0);
    //B(A000) = 0;
    ___12bd4h__VESA101_SETBANK(1);
    B(A000) = 0;
    ___12bd4h__VESA101_SETBANK(0);
    B(A000) = 1;
    ___12bd4h__VESA101_SETBANK(1);

    if(B(A000) == 1) return 1;

    ___12bd4h__VESA101_SETBANK(0);
    B(A000) = 0;
    //___12bd4h__VESA101_SETBANK(1);
    //B(A000) = 0;

    return 0;
}
