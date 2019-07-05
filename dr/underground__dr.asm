%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(__STOSD__clib3r)
    extern  __CEXT_V(UndergroundMarketOptions)
    extern  __CEXT_V(Roster)
    extern  __CEXT_V(NetworkConnectionEstablished)
    extern  __CEXT_V(MyFaceId)

%include "layout.inc"

section @text

; 2ec68h
__GDECL(__CEXT_F(optionsUndergroudMarket))
		push    18h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     esi, [__CEXT_V(MyFaceId)]
		mov     ecx, 4
		mov     edx, 1
		mov     eax, __CEXT_V(UndergroundMarketOptions)
		call    __CEXT_F(__STOSD__clib3r)
		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], byte 0
		je      ___2ecb6h
		mov     ecx, 4
		mov     edx, 1
		mov     eax, __CEXT_V(UndergroundMarketOptions)
		xor     ebx, ebx
		call    __CEXT_F(__STOSD__clib3r)
		mov     [__CEXT_V(UndergroundMarketOptions)+0ch], ebx
___2ecb6h:
		mov     esi, [__CEXT_V(MyFaceId)]
		xor     edx, edx
		xor     eax, eax
		xor     ebx, ebx
___2ecc2h:
		mov     ecx, [eax+__CEXT_V(Roster)+44h]
		cmp     ebx, ecx
		jge     ___2ecd2h
		cmp     edx, esi
		je      ___2ecd2h
		mov     ebx, ecx
___2ecd2h:
		inc     edx
		add     eax, byte 6ch
		cmp     edx, byte 14h
		jl      ___2ecc2h
		mov     edi, [__CEXT_V(NetworkConnectionEstablished)]
		test    edi, edi
		jne     ___2ed04h
		lea     eax, [esi*8+0]
		sub     eax, esi
		shl     eax, 2
		sub     eax, esi
		cmp     ebx, [eax*4+__CEXT_V(Roster)+44h]
		jge     ___2ed04h
		mov     [__CEXT_V(UndergroundMarketOptions)+0ch], edi
		jmp     ___2ed0eh
___2ed04h:
		mov     dword [__CEXT_V(UndergroundMarketOptions)+0ch], 1
___2ed0eh:
		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], byte 0
		je      ___2ed1fh
		xor     ecx, ecx
		mov     [__CEXT_V(UndergroundMarketOptions)+0ch], ecx
___2ed1fh:
		mov     [__CEXT_V(MyFaceId)], esi
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
