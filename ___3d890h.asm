cpu 386
%include "macros.inc"

	extern	__CHK
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___182890h
	extern	___1828a0h
	extern	___1a54d0h
	extern	___3d154h
	extern	___180144h
	extern	bpa_read
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	bpk_decode2
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___3d1f0h
	extern 	WAIT_5

section .text

__GDECL(___3d890h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 4
		xor     edx, edx
		mov     [esp], edx
___3d8a6h:
		xor     eax, eax
		mov     al, [esp]
		push    eax
		push    byte 0
		push    byte 0
		push    byte 0
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ebx, [esp]
		inc     ebx
		mov     [esp], ebx
		cmp     ebx, 100h
		jl      short ___3d8a6h
		mov     eax, ___182890h
		mov     ebx, ___1828a0h
		mov     edx, ___1a54d0h
		call    near ___3d154h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		push    esi
		call    near bpk_decode2
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___3d1f0h
		call 	WAIT_5
		add     esp, byte 4
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
