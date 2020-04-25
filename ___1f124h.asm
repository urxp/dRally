cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___146c4h
	extern	___1f0dch
	extern	___13248h
	extern	___1810a8h
	extern	___185ba9h
	extern	___1a10cch
	extern	___12e78h
	extern	___58c60h
	extern	___1a1e50h
	extern	___199fa4h
	extern	___199fa8h
	extern	___59b3ch
	extern	___5994ch
	extern	___1810c4h
	extern	___1810e0h
	extern	___1810fch
	extern	___181118h
	extern	___185c0bh
	extern	___1a1108h
	extern	itoa_
	extern	strupr_
	extern	___1854c8h
	extern	___17510h
	extern	___18114ch
	extern	sscanf_
	extern	___181150h
	extern	___1855c8h
	extern	___18117ch
	extern	___181180h
	extern	___18119ch
	extern	___1858c8h
	extern	___1a1ffch
	extern	___18394h
	extern	___196a90h
	extern	___1866b8h
	extern	___1811b8h
	extern	___1811c8h
	extern	___185b38h

section .text

___1f104h:
dd	___1f1b3h
dd	___1f248h
dd	___1f2e1h
dd	___1f379h
dd	___1f40dh
dd	___1f625h
dd	___1f690h
dd	___1f61bh
__GDECL(___1f124h)
		push    84h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 54h
		cmp     eax, byte 0ffffffffh
		je      near ___1f6ceh
___1f140h:
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1
		mov     eax, 7

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     eax, 7
		call    near ___146c4h
		mov     ebp, eax
		cmp     eax, byte 7
		ja      near ___1f6c5h
		jmp     near dword [cs:eax*4+___1f104h]
___1f1b3h:
		mov     eax, 3f8h
		call    near ___1f0dch
		test    eax, eax
		je      near ___1f6c5h
		mov     eax, 7
		mov     ecx, 32h
		xor     edx, edx
		mov     ebx, 1fah

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0deh
		mov     eax, 4ch
		call    near ___13248h
		mov     ecx, 23cd6h
		mov     ebx, ___1810a8h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		xor     ebp, ebp
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___1f20ch:
		inc     ebp

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     ebp, byte 32h
		jl      short ___1f20ch
		mov     ebp, 3f8h
		xor     edi, edi
		mov     eax, 4
		mov     [___1a1e50h], edi
		mov     [___199fa4h], ebp
		mov     [___199fa8h], eax
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     ebp, 0ffffffffh
		jmp     near ___1f6c5h
___1f248h:
		mov     eax, 2f8h
		call    near ___1f0dch
		test    eax, eax
		je      near ___1f6c5h
		mov     eax, 7
		mov     ecx, 32h
		xor     edx, edx
		mov     ebx, 1fah

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0deh
		mov     eax, 4ch
		call    near ___13248h
		mov     ecx, 23cd6h
		mov     ebx, ___1810c4h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		xor     ebp, ebp
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___1f2a1h:
		inc     ebp

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     ebp, byte 32h
		jl      short ___1f2a1h
		mov     ebx, 1
		mov     ecx, 2f8h
		mov     esi, 3
		mov     ebp, 0ffffffffh
		mov     [___1a1e50h], ebx
		mov     [___199fa4h], ecx
		mov     [___199fa8h], esi
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		jmp     near ___1f6c5h
___1f2e1h:
		mov     eax, 3e8h
		call    near ___1f0dch
		test    eax, eax
		je      near ___1f6c5h
		mov     eax, 7
		mov     ecx, 32h
		xor     edx, edx
		mov     ebx, 1fah

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0deh
		mov     eax, 4ch
		call    near ___13248h
		mov     ecx, 23cd6h
		mov     ebx, ___1810e0h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     edx, edx
___1f33ah:
		inc     edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     edx, byte 32h
		jl      short ___1f33ah
		mov     ebp, 2
		mov     eax, 3e8h
		mov     edx, 4
		mov     [___1a1e50h], ebp
		mov     [___199fa4h], eax
		mov     [___199fa8h], edx
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     ebp, 0ffffffffh
		jmp     near ___1f6c5h
___1f379h:
		mov     eax, 2e8h
		call    near ___1f0dch
		test    eax, eax
		je      near ___1f6c5h
		mov     eax, 7
		mov     ecx, 32h
		xor     edx, edx
		mov     ebx, 1fah

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0deh
		mov     eax, 4ch
		call    near ___13248h
		mov     ecx, 23cd6h
		mov     ebx, ___1810fch
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     edx, edx
___1f3d2h:
		inc     edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     edx, byte 32h
		jl      short ___1f3d2h
		mov     ecx, 3
		mov     esi, 2e8h
		mov     ebp, 0ffffffffh
		mov     [___1a1e50h], ecx
		mov     [___199fa4h], esi
		mov     [___199fa8h], ecx
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		jmp     near ___1f6c5h
___1f40dh:
		mov     eax, 7
		mov     ecx, 42h
		xor     edx, edx
		mov     ebx, 1e4h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0e1h
		mov     eax, 52h
		call    near ___13248h
		mov     ecx, 2445ch
		mov     ebx, ___181118h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     ebx, 10h
		mov     edx, esp
		mov     eax, [___199fa4h]
		call    near itoa_
		mov     eax, esp
		call    near strupr_
		push    byte 0
		push    byte 1
		push    byte 1
		push    140h
		mov     ecx, ___1854c8h
		mov     ebx, 0f8h
		push    byte 3
		mov     edx, 5ch
		lea     eax, [esp+14h]
		call    near ___17510h
		test    eax, eax
		je      near ___1f6c5h
		lea     eax, [esp+50h]
		push    eax
		push    ___18114ch
		lea     eax, [esp+8]
		push    eax
		call    near sscanf_
		add     esp, byte 0ch
		mov     eax, [esp+50h]
		mov     [___199fa4h], eax
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     eax, [___199fa4h]
		call    near ___1f0dch
		test    eax, eax
		je      near ___1f6c5h
		push    byte 1
		mov     ecx, 42h
		mov     ebx, 1e4h
		mov     edx, 0e1h
		mov     eax, 52h
		call    near ___13248h
		mov     ecx, 2445ch
		mov     ebx, ___181150h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     ebx, 0ah
		mov     edx, esp
		mov     eax, [___199fa8h]
		call    near itoa_
		mov     eax, esp
		call    near strupr_
		push    byte 0
		push    byte 1
		push    byte 1
		push    140h
		mov     ecx, ___1855c8h
		mov     ebx, 0f8h
		push    byte 2
		mov     edx, 5ch
		lea     eax, [esp+14h]
		call    near ___17510h
		test    eax, eax
		je      near ___1f6c5h
		push    ___199fa8h
		push    ___18117ch
		lea     eax, [esp+8]
		push    eax
		mov     ebx, 4
		call    near sscanf_
		add     esp, byte 0ch
		mov     ecx, 28f00h
		mov     [___1a1e50h], ebx
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx
		mov     ebx, 1fah

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 7
		xor     edx, edx
		mov     ecx, 32h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0deh
		mov     eax, 4ch
		call    near ___13248h
		mov     ecx, 23cd6h
		mov     ebx, ___181180h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     edx, edx
___1f606h:
		inc     edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     edx, byte 32h
		jl      short ___1f606h
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

___1f61bh:
		mov     ebp, 0ffffffffh
		jmp     near ___1f6c5h
___1f625h:
		mov     eax, 7
		mov     ecx, 4fh
		xor     edx, edx
		mov     ebx, 220h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0fah
		mov     eax, 2eh
		call    near ___13248h
		mov     ecx, 28f42h
		mov     ebx, ___18119ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		push    byte 1
		push    byte 1
		push    1dbh
		mov     ecx, ___1858c8h
		mov     ebx, 116h
		push    byte 14h
		mov     edx, 42h
		mov     eax, ___1a1ffch
		call    near ___18394h
		jmp     short ___1f6c5h
___1f690h:
		cmp     dword [___196a90h], byte 0
		setz    al
		and     eax, 0ffh
		mov     [___196a90h], eax
		je      short ___1f6b6h
		mov     edi, ___1866b8h+0d7ah
		mov     esi, ___1811b8h
		movsd   
		movsd   
		movsd   
		movsb   
		jmp     short ___1f6c5h
___1f6b6h:
		mov     edi, ___1866b8h+0d7ah
		mov     esi, ___1811c8h
		movsd   
		movsd   
		movsd   
		movsw   
___1f6c5h:
		cmp     ebp, byte 0ffffffffh
		jne     near ___1f140h
___1f6ceh:
		mov     eax, [___1a1e50h]
		mov     [___185b38h], eax
		add     esp, byte 54h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
