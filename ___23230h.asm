cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a116ch
	extern	___1a1f5eh
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h
	extern	___1a10fch
	extern	___1a110ch

section .text

__GDECL(___23230h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, 3b600h
___23245h:
		mov     ecx, 280h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, ebp
		add     edi, ebp
		add     ebp, 280h
		call 	__MOVS
		cmp     ebp, 49480h
		jne     short ___23245h
		mov     edi, ___1a116ch
		mov     esi, 3b10ch
		xor     ebp, ebp
		add     edi, 960h
___2328ah:
		cmp     byte [ebp+___1a1f5eh], 0
		jne     short ___232a6h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		mov     ecx, esi
		mov     ebx, edi
		call    near ___12e78h
___232a6h:
		cmp     byte [ebp+___1a1f5eh], 1
		jne     short ___232c2h
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]
		mov     ecx, esi
		mov     ebx, edi
		call    near ___12e78h
___232c2h:
		cmp     byte [ebp+___1a1f5eh], 2
		jne     short ___232deh
		mov     edx, ___185c0bh
		mov     eax, [___1a110ch]
		mov     ecx, esi
		mov     ebx, edi
		call    near ___12e78h
___232deh:
		add     esi, 2580h
		inc     ebp
		add     edi, 96h
		cmp     ebp, byte 6
		jl      short ___2328ah
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
