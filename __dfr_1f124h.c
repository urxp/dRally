/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___146c4h_cdecl
	extern	___1f0dch
	extern	___13248h_cdecl
	extern	___185ba9h
	extern	___1a10cch
	extern	___12e78h_cdecl
	extern	___58c60h
	extern	___1a1e50h_com_port_standard
	extern	___199fa4h_com_port_addr
	extern	___199fa8h_com_port_irq
	extern	___59b3ch
	extern	___5994ch
	extern	___185c0bh
	extern	___1a1108h
	extern	itoa_watcom106
	extern	strupr_watcom106
	extern 	___17510h_cdecl
	extern	sscanf
	extern	___1858c8h
	extern	___1a1ffch_modem_init_string
	extern	___18394h_cdecl
	extern	___196a90h_modem_dialing
	extern	___1866b8h
	extern	___185a5ch

section .text

__GDECL(___1f124h_cdecl)
	mov 	eax, [esp+4]
	call 	___1f124h
	retn


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

	push 	edx
	push 	ecx
	push 	eax
		call    ___146c4h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
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

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 23cd6h
		mov     ebx, __dfr_1810a8h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		xor     ebp, ebp

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
		mov     [___1a1e50h_com_port_standard], edi
		mov     [___199fa4h_com_port_addr], ebp
		mov     [___199fa8h_com_port_irq], eax

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

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 23cd6h
		mov     ebx, __dfr_1810c4h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		xor     ebp, ebp

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
		mov     [___1a1e50h_com_port_standard], ebx
		mov     [___199fa4h_com_port_addr], ecx
		mov     [___199fa8h_com_port_irq], esi

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

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 23cd6h
		mov     ebx, __dfr_1810e0h
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
		mov     [___1a1e50h_com_port_standard], ebp
		mov     [___199fa4h_com_port_addr], eax
		mov     [___199fa8h_com_port_irq], edx

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

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 23cd6h
		mov     ebx, __dfr_1810fch
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
		mov     [___1a1e50h_com_port_standard], ecx
		mov     [___199fa4h_com_port_addr], esi
		mov     [___199fa8h_com_port_irq], ecx

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

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 2445ch
		mov     ebx, __dfr_181118h
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

		mov     ebx, 10h
		mov     edx, esp
		mov     eax, [___199fa4h_com_port_addr]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    strupr_watcom106
	add 	esp, 4
	pop 	ecx
	pop 	edx

		push    byte 0
		push    byte 1
		push    byte 1
		push    140h
		mov     ecx, __dfr_1854c8h
		mov     ebx, 0f8h
		push    byte 3
		mov     edx, 5ch
		lea     eax, [esp+14h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___17510h_cdecl
	add 	esp, 24h

		test    eax, eax
		je      near ___1f6c5h
		lea     eax, [esp+50h]
		push    eax
		push    __dfr_18114ch
		lea     eax, [esp+8]
		push    eax
		call    sscanf
		add     esp, byte 0ch
		mov     eax, [esp+50h]
		mov     [___199fa4h_com_port_addr], eax

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

		mov     eax, [___199fa4h_com_port_addr]
		call    near ___1f0dch
		test    eax, eax
		je      near ___1f6c5h
		push    byte 1
		mov     ecx, 42h
		mov     ebx, 1e4h
		mov     edx, 0e1h
		mov     eax, 52h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 2445ch
		mov     ebx, __dfr_181150h
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

		mov     ebx, 0ah
		mov     edx, esp
		mov     eax, [___199fa8h_com_port_irq]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    strupr_watcom106
	add 	esp, 4
	pop 	ecx
	pop 	edx

		push    byte 0
		push    byte 1
		push    byte 1
		push    140h
		mov     ecx, _dfr__1855c8h
		mov     ebx, 0f8h
		push    byte 2
		mov     edx, 5ch
		lea     eax, [esp+14h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___17510h_cdecl
	add 	esp, 24h

		test    eax, eax
		je      near ___1f6c5h
		push    ___199fa8h_com_port_irq
		push    __dfr_18117ch
		lea     eax, [esp+8]
		push    eax
		mov     ebx, 4
		call    sscanf
		add     esp, byte 0ch
		mov     ecx, 28f00h
		mov     [___1a1e50h_com_port_standard], ebx

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

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 23cd6h
		mov     ebx, __dfr_181180h
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

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 28f42h
		mov     ebx, __dfr_18119ch
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

		push    byte 1
		push    byte 1
		push    1dbh
		mov     ecx, ___1858c8h
		mov     ebx, 116h
		push    byte 14h
		mov     edx, 42h
		mov     eax, ___1a1ffch_modem_init_string
		
		push 	ecx
		push 	ebx
		push 	edx
		push 	eax
		call    ___18394h_cdecl
		add 	esp, 20h

		jmp     short ___1f6c5h
___1f690h:
		cmp     dword [___196a90h_modem_dialing], byte 0
		setz    al
		and     eax, 0ffh
		mov     [___196a90h_modem_dialing], eax
		je      short ___1f6b6h
		mov     edi, ___1866b8h+0d7ah
		mov     esi, __dfr_1811b8h
		movsd   
		movsd   
		movsd   
		movsb   
		jmp     short ___1f6c5h
___1f6b6h:
		mov     edi, ___1866b8h+0d7ah
		mov     esi, __dfr_1811c8h
		movsd   
		movsd   
		movsd   
		movsw   
___1f6c5h:
		cmp     ebp, byte 0ffffffffh
		jne     near ___1f140h
___1f6ceh:
		mov     eax, [___1a1e50h_com_port_standard]
		mov     [___185a5ch+0dch], eax
		add     esp, byte 54h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
__dfr_1810a8h:
	db	53h,74h,61h,6eh,64h,61h,72h,64h,20h,43h,4fh,4dh,31h,20h,61h,63h,74h,69h,76h,61h,74h,65h,64h,2eh,0,0,0,0
__dfr__1810c4h:
	db	53h,74h,61h,6eh,64h,61h,72h,64h,20h,43h,4fh,4dh,32h,20h,61h,63h,74h,69h,76h,61h,74h,65h,64h,2eh,0,0,0,0
__dfr_1810e0h:
	db	53h,74h,61h,6eh,64h,61h,72h,64h,20h,43h,4fh,4dh,33h,20h,61h,63h,74h,69h,76h,61h,74h,65h,64h,2eh,0,0,0,0
__dfr_1810fch:
	db	53h,74h,61h,6eh,64h,61h,72h,64h,20h,43h,4fh,4dh,34h,20h,61h,63h,74h,69h,76h,61h,74h,65h,64h,2eh,0,0,0,0
__dfr_181118h:
	db	45h,6eh,74h,65h,72h,20h,74h,68h,65h,20h,43h,75h,73h,74h,6fh,6dh,20h,43h,4fh,4dh,2dh,70h,6fh,72h,74h,20h,62h,61h,73h,65h,20h,61h,64h,64h,72h,65h,73h,73h,20h,28h,69h,6eh,20h,68h,65h,78h,29h,3fh,0,0,0,0
__dfr_18114ch:
	db 	"%x",0,0
__dfr_181150h:
	db	45h,6eh,74h,65h,72h,20h,74h,68h,65h,20h,43h,75h,73h,74h,6fh,6dh,20h,43h,4fh,4dh,2dh,70h,6fh,72h,74h,20h,49h,52h,51h,20h,28h,69h,6eh,20h,64h,65h,63h,69h,6dh,61h,6ch,29h,3fh,0
__dfr_18117ch:
	db	25h,69h,0,0
__dfr_181180h:
	db	43h,75h,73h,74h,6fh,6dh,20h,43h,4fh,4dh,2dh,70h,6fh,72h,74h,20h,61h,63h,74h,69h,76h,61h,74h,65h,64h,2eh,0,0
__dfr_18119ch:
	db	45h,6eh,74h,65h,72h,20h,6dh,6fh,64h,65h,6dh,20h,69h,6eh,69h,74h,69h,61h,6ch,20h,73h,74h,72h,69h,6eh,67h,3fh,0
__dfr_1811b8h:
	db	54h,6fh,6eh,65h,20h,44h,69h,61h,6ch,69h,6eh,67h,0,0,0,0
__dfr_1811c8h:
	db 	"Pulse Dialing",0,0,0
__dfr_1854c8h:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0
db	0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
__dfr_1855c8h:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
*/
