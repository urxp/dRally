cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___196bd8h
	extern	___38708h
	extern	___18250ch
	extern	___185c0bh
	extern	___1a10fch
	extern	___12e78h_cdecl
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	___1a1108h

section .text

__GDECL(___38768h)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     edx, [___196bd8h]
		inc     edx
		mov     [___196bd8h], edx
		cmp     edx, byte 1eh
		jne     short ___387c6h
		call    near ___38708h
		mov     ecx, 46b6eh
		mov     ebx, ___18250ch
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 10h
		mov     ebx, 10eh
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 46b62h
		add     edx, 46b62h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
___387c6h:
		cmp     dword [___196bd8h], byte 3ch
		jne     short ___38815h
		call    near ___38708h
		mov     ecx, 46b6eh
		mov     ebx, ___18250ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 10h
		mov     ebx, 10eh
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 46b62h
		add     edx, 46b62h
		xor     esi, esi

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     [___196bd8h], esi
___38815h:
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
