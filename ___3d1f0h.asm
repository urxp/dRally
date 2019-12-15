cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___58c60h
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR

section .text

__GDECL(___3d1f0h)
		push    30h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		xor     ebp, ebp
___3d205h:
		call    near ___58c60h
		mov     esi, ebp
		xor     edx, edx
		xor     edi, edi
		mov     [esp], edx
___3d213h:
		xor     eax, eax
		mov     al, [esp]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb58h]
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
		add     edi, byte 0ch
		mov     [esp], ebx
		cmp     ebx, 100h
		jl      near ___3d213h
		add     ebp, 40000h
		cmp     ebp, 640000h
		jne     near ___3d205h
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn   
