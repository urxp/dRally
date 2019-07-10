%include "macros.inc"

    extern  __CHK

    extern  __CEXT_V(Pal8to24_1)
    
    extern  __CEXT_F(waitSync__dr)
    extern  __CEXT_F(writeColor__video)

%include "layout.inc"

section @text

;; 3d2bch
__GDECL(__CEXT_F(fadeoutScreen))
		push    30h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     ebp, 640000h
___3d2d4h:
		call    __CEXT_F(waitSync__dr)
		mov     esi, ebp
		xor     edx, edx
		xor     edi, edi
		mov     [esp], edx
___3d2e2h:
		xor     eax, eax
		mov     al, [esp]
		push    eax
		mov     edx, esi
		mov     eax, [edi+__CEXT_V(Pal8to24_1)]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+__CEXT_V(Pal8to24_1)+4]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+__CEXT_V(Pal8to24_1)+8]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    __CEXT_F(writeColor__video)
		mov     ebx, [esp]
		inc     ebx
		add     edi, byte 0ch
		mov     [esp], ebx
		cmp     ebx, 100h
		jl      ___3d2e2h
		sub     ebp, 40000h
		cmp     ebp, 0fffc0000h
		jne     ___3d2d4h
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
