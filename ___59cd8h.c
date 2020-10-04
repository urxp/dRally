#include "drally.h"

	extern byte ___19bd58h();
	extern byte ___243888h();
	extern byte ___243890h();
	extern byte kmap();
	extern byte ___243884h();
	extern byte ___24388ch();

byte inp_(dword port);
void ___59db8h(void);

void ___59cd8h(void){

    dword   eax, ebx, ecx, edx, edi, esi, ebp;


    if((int)D(___19bd58h) <= 0) goto ___59db0h;
    ___59db8h();
    eax = D(___243888h);
    ebx = D(___243890h);
    eax -= 0x32;
    if((int)eax <= (int)ebx) goto ___59d11h;
    B(kmap+0xcb) = 0x1;
___59d11h:
    eax = D(___243888h);
    ecx = D(___243890h);
    eax += 0x32;
    if((int)eax >= (int)ecx) goto ___59d2ah;
    B(kmap+0xcd) = 0x1;
___59d2ah:
    eax = D(___243884h);
    esi = D(___24388ch);
    eax -= 0x32;
    if((int)eax <= (int)esi) goto ___59d43h;
    B(kmap+0xc8) = 0x1;
___59d43h:
    eax = D(___243884h);
    edi = D(___24388ch);
    eax += 0x32;
    if((int)eax >= (int)edi) goto ___59d5ch;
    B(kmap+0xd0) = 0x1;
___59d5ch:
    eax = 0x201;
    L(eax) = inp_(eax);
    if((L(eax)&0x10) != 0) goto ___59d71h;
    B(kmap+0x1c) = 0x1;
___59d71h:
    eax = 0x201;
    L(eax) = inp_(eax);
    if((L(eax)&0x20) != 0) goto ___59d86h;
    B(kmap+0x1c) = 0x1;
___59d86h:
    eax = 0x201;
    L(eax) = inp_(eax);
    if((L(eax)&0x40) != 0) goto ___59d9bh;
    B(kmap+0x1c) = 0x1;
___59d9bh:
    eax = 0x201;
    L(eax) = inp_(eax);
    if((L(eax)&0x80) != 0) goto ___59db0h;
    B(kmap+0x1c) = 0x1;
___59db0h:
    return;
}
