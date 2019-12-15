cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___196e70h
	extern	___1a33c0h
	extern	___1a33c4h
	extern	___1a33c8h
	extern	DISPLAY_SET_PALETTE_COLOR

section .text

__GDECL(___45c6ch)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 4
		mov     ebx, [___196e70h]
		xor     edx, edx
		xor     esi, esi
		inc     ebx
		mov     [esp], edx
		mov     [___196e70h], ebx
___45c91h:
		mov     edx, [___196e70h]
		mov     eax, [esi+___1a33c0h]
		shl     edx, 10h
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		mov     edx, [___196e70h]
		lea     ebx, [eax+8000h]
		shl     edx, 10h
		mov     eax, [esi+___1a33c4h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		mov     edx, [___196e70h]
		lea     ecx, [eax+8000h]
		shl     edx, 10h
		mov     eax, [esi+___1a33c8h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		lea     edx, [eax+8000h]
		xor     eax, eax
		mov     al, [esp]
		sar     ebx, 10h
		push    eax
		xor     eax, eax
		mov     al, bl
		sar     ecx, 10h
		push    eax
		xor     eax, eax
		mov     al, cl
		sar     edx, 10h
		push    eax
		xor     eax, eax
		mov     al, dl
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp]
		inc     ecx
		add     esi, byte 0ch
		mov     [esp], ecx
		cmp     ecx, 100h
		jl      near ___45c91h
		add     esp, byte 4
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
