cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___3d154h
	extern	___180144h
	extern	___1a54d0h
	extern	bpa_read_cdecl
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	bpk_decode2
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___3d1f0h
	extern	___5e0eah__VRETRACE_WAIT_FOR_START
	extern	___5994ch
	extern	___3d2bch

section .text

__GDECL(___3d9c0h)
		push    14h
		call    near __CHK
		push    ecx
		push    esi
		mov     esi, ebx
		call    near ___3d154h
		mov     eax, ___180144h
		mov     ebx, edx
		mov     edx, ___1a54d0h
	
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
		call    near ___3d1f0h
		mov     eax, esi
		shl     esi, 4
		sub     esi, eax
		xor     dl, dl
		shl     esi, 2
___3da0bh:
		test    esi, esi
		jle     short ___3da20h
		call    near ___5e0eah__VRETRACE_WAIT_FOR_START
		call    near ___5994ch
		dec     esi
		mov     dl, al
		test    al, al
		je      short ___3da0bh
___3da20h:
		call    near ___3d2bch
		cmp     dl, 1ch
		je      short ___3da38h
		cmp     dl, 39h
		je      short ___3da38h
		cmp     dl, 9ch
		je      short ___3da38h
		test    dl, dl
		jne     short ___3da3dh
___3da38h:
		xor     eax, eax
		pop     esi
		pop     ecx
		retn    
___3da3dh:
		mov     eax, 1
		pop     esi
		pop     ecx
		retn    
