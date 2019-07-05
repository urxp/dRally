#include "x86.h"

    extern byte UndergroundMarketOptions[];
    extern byte Roster[];
    extern byte NetworkConnectionEstablished[];
    extern byte MyID[];

    #pragma aux __STOSD__clib3r parm [eax][edx][ecx]
    void __STOSD__clib3r(byte *, dword, dword);

void optionsUndergroundMarket(void){

    dword   eax, ebx, ecx, edx, esi, edi, ebp;
//    byte    __esp[0x18];
//    byte *  esp = __esp + 0x18;
    byte *  esp = (byte (*)[0x18]){0} + 0x18;

    PUSH(0);

//		push    18h
//		call    __CHK
//		push    ebx
    PUSH(ebx);
//		push    ecx
    PUSH(ecx);
//		push    edx
    PUSH(edx);
//		push    esi
    PUSH(esi);
//		push    edi
    PUSH(edi);
//		mov     esi, [__CEXT_V(MyID)]
    esi = D(MyID);
//		mov     ecx, 4
    ecx = 4;
//		mov     edx, 1
    edx = 1;
//		mov     eax, __CEXT_V(UndergroundMarketOptions)
    eax = UndergroundMarketOptions;
//		call    __CEXT_F(__STOSD__clib3r)
    __STOSD__clib3r(eax, edx, ecx);
//		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], byte 0
//		je      ___2ecb6h
    if(D(NetworkConnectionEstablished) == 0) goto ___2ecb6h;
//		mov     ecx, 4
    ecx = 4;
//		mov     edx, 1
    edx = 1;
//		mov     eax, __CEXT_V(UndergroundMarketOptions)
    eax = UndergroundMarketOptions;
//		xor     ebx, ebx
    ebx = 0;
//		call    __CEXT_F(__STOSD__clib3r)
    __STOSD__clib3r(eax, edx, ecx);
//		mov     [__CEXT_V(UndergroundMarketOptions)+0ch], ebx
    D(UndergroundMarketOptions+0xc) = ebx;
___2ecb6h:
//		mov     esi, [__CEXT_V(MyID)]
    esi = D(MyID);
//		xor     edx, edx
    edx = 0;
//		xor     eax, eax
    eax = 0;
//		xor     ebx, ebx
    ebx = 0;
___2ecc2h:
//		mov     ecx, [eax+__CEXT_V(Roster)+44h]
    ecx = D(eax+Roster+0x44);
//		cmp     ebx, ecx
//		jge     ___2ecd2h
    if((int)ebx >= (int)ecx) goto ___2ecd2h;
//		cmp     edx, esi
//		je      ___2ecd2h
    if(edx == esi) goto ___2ecd2h;
//		mov     ebx, ecx
    ebx = ecx;
___2ecd2h:
//		inc     edx
    edx++;
//		add     eax, byte 6ch
    eax += 0x6c;
//		cmp     edx, byte 14h
//		jl      ___2ecc2h
    if((int)edx < 0x14) goto ___2ecc2h;
//		mov     edi, [__CEXT_V(NetworkConnectionEstablished)]
    edi = D(NetworkConnectionEstablished);
//		test    edi, edi
//		jne     ___2ed04h
    if(edi != 0) goto ___2ed04h;
//		lea     eax, [esi*8+0]
    eax = 8*esi;
//		sub     eax, esi
    eax -= esi;
//		shl     eax, 2
    eax <<= 2;
//		sub     eax, esi
    eax -= esi;
//		cmp     ebx, [eax*4+__CEXT_V(Roster)+44h]
//		jge     ___2ed04h
    if((int)ebx >= (int)D(eax*4+Roster+0x44)) goto ___2ed04h;
//		mov     [__CEXT_V(UndergroundMarketOptions)+0ch], edi
    D(UndergroundMarketOptions+0xc) = edi;
//		jmp     ___2ed0eh
    goto ___2ed0eh;
___2ed04h:
//		mov     dword [__CEXT_V(UndergroundMarketOptions)+0ch], 1
    D(UndergroundMarketOptions+0xc) = 1;
___2ed0eh:
//		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], byte 0
//		je      ___2ed1fh
    if(D(NetworkConnectionEstablished) == 0) goto ___2ed1fh;
//		xor     ecx, ecx
    ecx = 0;
//		mov     [__CEXT_V(UndergroundMarketOptions)+0ch], ecx
    D(UndergroundMarketOptions+0xc) = ecx;
___2ed1fh:
//		mov     [__CEXT_V(MyID)], esi
    D(MyID) = esi;
//		pop     edi
    POP(edi);
//		pop     esi
    POP(esi);
//		pop     edx
    POP(edx);
//		pop     ecx
    POP(ecx);
//		pop     ebx
    POP(ebx);
//		retn    
    return;
}
