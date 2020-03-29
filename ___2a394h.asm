cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1edch
	extern	___19df50h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___1a1ecch
   ;extern 	VESA101_PRESENTSCREEN

section .text

__GDECL(___2a394h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 4
		mov     edx, 10h
		mov     esi, 0c0h
		mov     [esp], edx
___2a3b2h:
		xor     eax, eax
		mov     al, [esp]
		mov     edx, [___1a1edch]
		push    eax
		shl     edx, 10h
		mov     eax, [esi+___19df50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		mov     edx, [___1a1edch]
		push    eax
		shl     edx, 10h
		mov     eax, [esi+___19df50h+4]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		mov     edx, [___1a1edch]
		push    eax
		shl     edx, 10h
		mov     eax, [esi+___19df50h+8]
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
		cmp     ebx, byte 20h
		jl      near ___2a3b2h
	;call 	VESA101_PRESENTSCREEN
		cmp     dword [___1a1edch], byte 31h
		jne     short ___2a464h
		mov     dword [___1a1ecch], 1
___2a464h:
		cmp     dword [___1a1edch], byte 64h
		jne     short ___2a474h
		xor     eax, eax
		mov     [___1a1ecch], eax
___2a474h:
		cmp     dword [___1a1ecch], byte 0
		jne     short ___2a486h
		sub     dword [___1a1edch], byte 3
		jmp     short ___2a48dh
___2a486h:
		add     dword [___1a1edch], byte 3
___2a48dh:
		add     esp, byte 4
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
