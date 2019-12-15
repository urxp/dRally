cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ef0h
	extern	___1854b0h
	extern	___24cc54h
	extern	___654d4h
	extern	___2d294h
	extern	___281d0h
	extern	___27f80h
	extern	___12cb8h__VESA101_PRESENTSCREEN

section .text

__GDECL(___2deb0h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ecx, [___1a1ef0h]
		cmp     ecx, byte 1
		jne     short ___2df2fh
		push    8000h
		mov     eax, 1
		mov     edx, [___1854b0h]
		mov     ecx, [___24cc54h]
		push    edx
		xor     ebx, ebx
		mov     edx, 1ah
		call    near ___654d4h
		mov     ecx, 72h
		xor     ebx, ebx
		mov     edx, 0f3h
		mov     [___1a1ef0h], ebx
		call    near ___2d294h
		mov     ebx, 6ch
		mov     eax, 0ah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 73h
		mov     eax, 0ah
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___2df2fh:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
