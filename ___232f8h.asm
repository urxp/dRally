cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a116ch
	extern	___1a1f4eh
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h
	extern	___1a10fch
	extern	___1a110ch

section .text

__GDECL(___232f8h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, 12c00h
___2330dh:
		mov     eax, [___1a1138h__VESA101h_DefaultScreenBufferB]
		add     eax, ebp
		lea     esi, [eax+0ch]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebp
		mov     ecx, 276h
		lea     edi, [eax+0ch]
		add     ebp, 280h
		call 	__MOVS
		cmp     ebp, 49700h
		jne     short ___2330dh
		mov     edi, ___1a116ch
		mov     esi, 1298ch
		xor     ebp, ebp
___23350h:
		cmp     byte [ebp+___1a1f4eh], 0
		jne     short ___2336ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		mov     ecx, esi
		mov     ebx, edi
		call    near ___12e78h
___2336ch:
		cmp     byte [ebp+___1a1f4eh], 1
		jne     short ___23388h
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]
		mov     ecx, esi
		mov     ebx, edi
		call    near ___12e78h
___23388h:
		cmp     byte [ebp+___1a1f4eh], 2
		jne     short ___233a4h
		mov     edx, ___185c0bh
		mov     eax, [___1a110ch]
		mov     ecx, esi
		mov     ebx, edi
		call    near ___12e78h
___233a4h:
		add     esi, 2580h
		inc     ebp
		add     edi, 96h
		cmp     ebp, byte 16h
		jl      short ___23350h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
