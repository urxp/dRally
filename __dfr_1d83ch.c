/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___1a1138h__VESA101_BACKGROUND
	extern	___13710h
	extern	___13248h_cdecl
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___185ba9h
	extern	___1a10cch
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___5994ch
	extern	___59b3ch

section .text

__GDECL(___1d83ch)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ecx, 4b000h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		call 	__MOVS
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101_BACKGROUND]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 26ch

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 0c8h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0a3h
		mov     eax, 0ah

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 1ce9bh
		mov     ebx, __dfr_180d5ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 1f69bh
		mov     ebx, __dfr_180d9ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 21e9bh
		mov     ebx, __dfr_180dd8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 2469bh
		mov     ebx, __dfr_180e14h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 26e9bh
		mov     ebx, __dfr_180e54h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 2969bh
		mov     ebx, __dfr_180e8ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 2be9bh
		mov     ebx, __dfr_180ecch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 2e69bh
		mov     ebx, __dfr_180f08h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 327e1h
		mov     ebx, press_k
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]

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


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

___1d9b9h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    al, al
		je      short ___1d9b9h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

		mov     ecx, 4b000h
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		call 	__MOVS

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
press_k:
	db 	"Press any key to continue.",0,0
__dfr_180d5ch:
	db	50h,6ch,65h,61h,73h,65h,20h,6eh,6fh,74h,65h,3ah,20h,20h,44h,75h,65h,20h,74h,6fh,20h,74h,68h,65h,20h,69h,6eh,65h,66h,66h,69h,63h,69h,65h,6eh,63h,69h,65h,73h,20h,61h,6eh,64h,20h,69h,6eh,68h,65h,72h,65h,6eh,74h,20h,6ch,61h,74h,65h,6eh,63h,69h,65h,73h,0,0
__dfr_180d9ch:
	db	6fh,66h,20h,6dh,6fh,64h,65h,6dh,2dh,74h,6fh,2dh,6dh,6fh,64h,65h,6dh,20h,63h,6fh,6eh,6eh,65h,63h,74h,69h,6fh,6eh,73h,2ch,20h,61h,6eh,64h,20h,64h,75h,65h,20h,74h,6fh,20h,73h,6fh,6dh,65h,20h,6dh,6fh,64h,65h,6dh,73h,20h,6eh,6fh,74h,0,0,0
__dfr_180dd8h:
	db	62h,65h,69h,6eh,67h,20h,61h,73h,20h,67h,6fh,6fh,64h,20h,61h,73h,20h,6fh,74h,68h,65h,72h,73h,2ch,20h,79h,6fh,75h,20h,6dh,61h,79h,20h,65h,78h,70h,65h,72h,69h,65h,6eh,63h,65h,20h,6ah,65h,72h,6bh,79h,20h,6dh,6fh,76h,65h,6dh,65h,6eh,74h,73h,0
__dfr_180e14h:
	db	66h,6fh,72h,20h,79h,6fh,75h,72h,20h,6fh,70h,70h,6fh,6eh,65h,6eh,74h,27h,73h,20h,63h,61h,72h,2eh,20h,20h,44h,65h,70h,65h,6eh,64h,69h,6eh,67h,20h,6fh,6eh,20h,79h,6fh,75h,72h,20h,63h,69h,72h,63h,75h,6dh,73h,74h,61h,6eh,63h,65h,73h,20h,61h,6eh,64h,0,0,0
__dfr_180e54h:
	db	74h,68h,65h,20h,71h,75h,61h,6ch,69h,74h,79h,20h,6fh,66h,20h,79h,6fh,75h,72h,20h,70h,68h,6fh,6eh,65h,20h,63h,6fh,6eh,6eh,65h,63h,74h,69h,6fh,6eh,2ch,20h,74h,68h,65h,72h,65h,20h,6dh,61h,79h,20h,6eh,6fh,74h,20h,62h,65h,0,0
__dfr_180e8ch:
	db	61h,20h,73h,6fh,6ch,75h,74h,69h,6fh,6eh,20h,74h,6fh,20h,66h,69h,78h,20h,74h,68h,69h,73h,20h,70h,72h,6fh,62h,6ch,65h,6dh,2eh,20h,20h,41h,20h,70h,6fh,73h,73h,69h,62h,6ch,65h,20h,73h,6fh,6ch,75h,74h,69h,6fh,6eh,20h,69h,73h,20h,74h,6fh,20h,75h,73h,65h,0,0
__dfr_180ecch:
	db	61h,20h,63h,75h,73h,74h,6fh,6dh,20h,6dh,6fh,64h,65h,6dh,20h,73h,74h,72h,69h,6eh,67h,20h,74h,68h,61h,74h,20h,73h,65h,65h,6dh,73h,20h,74h,6fh,20h,77h,6fh,72h,6bh,20h,77h,69h,74h,68h,20h,61h,6eh,6fh,74h,68h,65h,72h,20h,67h,61h,6dh,65h,0,0
__dfr_180f08h:
	db	79h,6fh,75h,27h,76h,65h,20h,70h,6ch,61h,79h,65h,64h,20h,76h,69h,61h,20h,6dh,6fh,64h,65h,6dh,2ch,20h,73h,75h,63h,68h,20h,61h,73h,20h,44h,75h,6bh,65h,20h,4eh,75h,6bh,65h,6dh,20h,33h,44h,20h,6fh,72h,20h,44h,4fh,4fh,4dh,2eh,0
*/
