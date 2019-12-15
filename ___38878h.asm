cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___196bdch
	extern	___3881ch
	extern	___180998h
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	___1a10fch

section .text

__GDECL(___38878h)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     edx, [___196bdch]
		inc     edx
		mov     [___196bdch], edx
		cmp     edx, byte 0fh
		jne     short ___388d6h
		call    near ___3881ch
		mov     ecx, 102beh
		mov     ebx, ___180998h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 14h
		mov     ebx, 168h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 0fb08h
		add     edx, 0fb08h
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
___388d6h:
		cmp     dword [___196bdch], byte 1eh
		jne     short ___38925h
		call    near ___3881ch
		mov     ecx, 102beh
		mov     ebx, ___180998h
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]
		call    near ___12e78h
		mov     ecx, 14h
		mov     ebx, 168h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 0fb08h
		add     edx, 0fb08h
		xor     esi, esi
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     [___196bdch], esi
___38925h:
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
