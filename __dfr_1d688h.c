/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___1a1ffch_modem_init_string
	extern	___1a1138h__VESA101_BACKGROUND
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___13248h_cdecl
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___631d4h
	extern	___63228h
	extern	kmap
	extern	___63244h
	extern	___2ab50h
	extern	___13bd4h_cdecl
	extern	___59b3ch
	extern	___5994ch
	extern	___13c9ch_cdecl

section .text

__GDECL(___1d688h)
		push    40h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 20h
		mov     edx, 0c5h
		mov     esi, ___1a1ffch_modem_init_string
		mov     edi, esp
		xor     ah, ah
		mov     [esp+18h], edx
		mov     dl, 0dh
		mov     [esp+1dh], ah
		mov     [esp+1ch], dl
		call 	__STRCPY
		lea     esi, [esp+1ch]
		mov     edi, esp
		mov     ebp, 0b4h
		call 	__STRCAT
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101_BACKGROUND]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 113h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 41h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0c5h
		mov     eax, ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 20ddch
		mov     ebx, __dfr_180d2ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     eax, esp
		xor     esi, esi

	push 	edx
	push 	ecx
	push 	eax
		call    ___631d4h
	add 	esp, 4
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___63228h
	pop 	eax
	pop 	ecx
	pop 	edx

		xor     ebx, ebx
		mov     edi, __dfr_180d40h
		xor     ecx, ecx
___1d78dh:
		test    esi, esi
		jne     short ___1d7d4h
		cmp     cl, [kmap+1]
		jne     short ___1d7d4h
		mov     eax, edi

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     esi, eax
		test    eax, eax
		jne     short ___1d7b2h
		mov     eax, __dfr_180d44h

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     esi, eax
___1d7b2h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     edx, 0d8h
		mov     eax, 0c3h
		inc     ebx
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13bd4h_cdecl
	add 	esp, 8
	pop 	ecx

		cmp     ebx, 96h
		jl      short ___1d78dh
___1d7d4h:

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    esi, esi
		jne     short ___1d830h
		mov     edx, [esp+18h]
		mov     ebx, [esp+18h]
		lea     eax, [ebp+0fh]
		add     edx, byte 13h
		add     ebx, byte 1eh
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13c9ch_cdecl
	add 	esp, 8
	pop 	ecx

		lea     eax, [ebx*4+0]
		add     eax, ebx
		shl     eax, 7
		mov     edx, ___185c0bh
		lea     ecx, [eax+ebp*1]
		mov     ebx, __dfr_180d48h
		mov     eax, [___1a1108h]
		add     ecx, byte 28h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     ebx, ebx
___1d825h:
		inc     ebx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		cmp     ebx, byte 3ch
		jl      short ___1d825h
___1d830h:
		mov     eax, esi
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
__dfr_180d2ch:
	db	52h,65h,73h,65h,74h,74h,69h,6eh,67h,20h,6dh,6fh,64h,65h,6dh,2eh,2eh,2eh,0,0
__dfr_180d40h:
	db	4fh,4bh,0,0
__dfr_180d44h:
	db	30h,0,0,0
__dfr_180d48h:
	db	4eh,6fh,20h,6dh,6fh,64h,65h,6dh,20h,64h,65h,74h,65h,63h,74h,65h,64h,2eh,0,0
*/
