cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR

section .text

__GDECL(___2b5f0h)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 4
		xor     edx, edx
		xor     esi, esi
		mov     [esp], edx
		mov     edi, 640000h
___2b60eh:
		xor     eax, eax
		mov     al, [esp]
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ebx, [esp]
		inc     ebx
		add     esi, byte 0ch
		mov     [esp], ebx
		cmp     ebx, 100h
		jl      near ___2b60eh
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
