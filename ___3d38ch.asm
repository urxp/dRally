cpu 386
%include "macros.inc"

	extern	__CHK
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___182818h
	extern	___182824h
	extern	___1a54d0h
	extern	___3d154h
	extern	___180144h
	extern	bpa_read_cdecl
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	bpk_decode2
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___3d1f0h
	extern	___58c60h
	extern	___5994ch
	extern	___3d2bch
	extern	___182830h
	extern	___18283ch
	extern	___182848h
	extern	___182854h

section .text

__GDECL(___3d38ch)
		push    30h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		xor     edx, edx
		mov     [esp], edx
___3d3a4h:
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
		jl      short ___3d3a4h
		mov     eax, ___182818h
		mov     ebx, ___182824h
		mov     edx, ___1a54d0h
		call    near ___3d154h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		xor     edi, edi
		push    esi
		mov     [esp+8], edi
		call    near bpk_decode2
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___3d1f0h
___3d403h:
		mov     ebp, [esp]
		call    near ___58c60h
		inc     ebp
		call    near ___5994ch
		mov     [esp], ebp
		test    al, al
		jne     short ___3d420h
		cmp     ebp, 0b4h
		jl      short ___3d403h
___3d420h:
		call    near ___3d2bch
		mov     eax, ___182830h
		mov     ebx, ___18283ch
		mov     edx, ___1a54d0h
		call    near ___3d154h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		push    edx
		call    near bpk_decode2
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		xor     ebx, ebx
		call    near ___3d1f0h
		mov     [esp], ebx
___3d463h:
		mov     ecx, [esp]
		call    near ___58c60h
		inc     ecx
		call    near ___5994ch
		mov     [esp], ecx
		test    al, al
		jne     short ___3d480h
		cmp     ecx, 0b4h
		jl      short ___3d463h
___3d480h:
		call    near ___3d2bch
		mov     eax, ___182848h
		mov     ebx, ___182854h
		mov     edx, ___1a54d0h
		call    near ___3d154h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		xor     ebp, ebp
		push    edi
		mov     [esp+8], ebp
		call    near bpk_decode2
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___3d1f0h
___3d4c4h:
		call    near ___58c60h
		inc     dword [esp]
		call    near ___5994ch
		test    al, al
		jne     short ___3d4deh
		cmp     dword [esp], 0b4h
		jl      short ___3d4c4h
___3d4deh:
		call    near ___3d2bch
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
