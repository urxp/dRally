/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern	___19bd60h
	extern	___1d4e8h
	extern	___1d83ch
	extern	___199fa4h_com_port_addr
	extern	___61b88h
	extern	___1ca00h
	extern	___13710h
	extern	___3ab5ch_cdecl
	extern	___1a1138h__VESA101_BACKGROUND
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13248h_cdecl
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___1a201ah_modem_dial_number
	extern 	___17510h_cdecl
	extern	___1a1ef8h
	extern	CONNECTION_TYPE
	extern	___199fach
	extern	___1a01e0h
	extern	___2415ch
	extern	___2b5f0h
	extern	___61cd0h
	extern	___1123ch
	extern	___1d688h
	extern	___13bd4h_cdecl
	extern	___196a90h_modem_dialing
	extern	___631d4h
	extern	___63228h
	extern	kmap
	extern	memset
	extern	___63244h
	extern	___2ab50h
	extern	___60a84h
	extern	___5994ch
	extern	___199fa0h
	extern	___60b48h
	extern	___611c0h
	extern	___61278h
	extern	___1866b8h
	extern	___1caf4h
	extern	___623d4h
	extern	___59b3ch
	extern	___185b58h

section .text

__GDECL(___1d9f8h)
		push    0a0h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 70h
		mov     edx, 0beh
		mov     ebp, 92h
		mov     ebx, [___19bd60h]
		mov     [esp+50h], edx
		test    ebx, ebx
		je      short ___1da2dh
		call    near ___1d4e8h
		jmp     near ___1e08fh
___1da2dh:
		call    near ___1d83ch
		mov     eax, [___199fa4h_com_port_addr]
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___61b88h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1da4fh
		call    near ___1ca00h
		add     esp, byte 70h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1da4fh:
		mov     eax, 2
		xor     edx, edx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		xor     eax, eax

	push 	edx
	push 	ecx
	push 	eax
		call    ___3ab5ch_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		test    eax, eax
		je      near ___1e08fh
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101_BACKGROUND]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 1d9h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 4fh

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0fah
		mov     eax, 50h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 28f64h
		mov     ebx, __dfr_180f40h
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

		push    byte 0
		push    byte 1
		push    byte 0
		push    190h
		mov     ecx, __dfr_1856c8h
		mov     ebx, 116h
		push    byte 14h
		mov     edx, 64h
		mov     eax, ___1a201ah_modem_dial_number

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___17510h_cdecl
	add 	esp, 24h

		test    eax, eax
		je      near ___1e08fh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     ecx, 3
		shl     eax, 2
		mov     esi, 4b00h
		sub     eax, edx
		mov     [CONNECTION_TYPE], ecx
		mov     [___199fach], esi
		mov     ebx, [eax*4+___1a01e0h+2ch]

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     [eax*4+___1a01e0h+2ch], ebx
	
	push 	edx
	push 	ecx
		call    ___2b5f0h
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___61cd0h
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1db77h
		call    near ___1123ch
___1db77h:
		call    near ___1d688h
		test    eax, eax
		je      near ___1e08ah
		mov     ecx, 28f00h
		mov     ebx, 159h
		mov     esi, [___1a1138h__VESA101_BACKGROUND]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ecx, 52h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx
		mov     edi, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, [esp+54h]
		mov     eax, ebp
		mov     esi, __dfr_180f5ch

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		movsd   
		movsd   
		movsw   
		mov     edx, [esp+50h]
		mov     esi, ___1a201ah_modem_dial_number
		mov     edi, esp
		add     edx, byte 0dh
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ebp
		mov     ebx, esp
		lea     ecx, [eax+28h]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+50h]
		add     edx, byte 1eh
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ebp
		mov     ebx, __dfr_180f68h
		lea     ecx, [eax+28h]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+50h]
		add     edx, byte 2fh
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ebp
		mov     ebx, __dfr_180ac8h
		lea     ecx, [eax+28h]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		lea     edi, [esp+28h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+50h]
		lea     eax, [ebp+0fh]
		add     edx, byte 1ah
		mov     esi, __dfr_180f80h
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13bd4h_cdecl
	add 	esp, 8
	pop 	ecx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     dl, 0dh
		movsd   
		movsd   
		movsw   
		xor     ah, ah
		mov     edi, [___196a90h_modem_dialing]
		mov     [esp+6dh], ah
		mov     [esp+6ch], dl
		test    edi, edi
		je      short ___1dcd0h
		mov     esi, __dfr_180f8ch
		jmp     short ___1dcd5h
___1dcd0h:
		mov     esi, __dfr_180f90h
___1dcd5h:
		lea     edi, [esp+28h]
		call 	__STRCAT
		mov     esi, ___1a201ah_modem_dial_number
		lea     edi, [esp+28h]
		call 	__STRCAT
		lea     esi, [esp+6ch]
		lea     edi, [esp+28h]
		call 	__STRCAT
		lea     eax, [esp+28h]
		xor     ebx, ebx

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

		mov     dh, [kmap+1]
		mov     ecx, 0ffffffffh
		test    dh, dh
		jne     near ___1dfb7h
		mov     eax, [esp+50h]
		add     eax, byte 1ah
		mov     edx, [esp+50h]
		mov     [esp+5ch], eax
		lea     eax, [ebp+0fh]
		add     edx, byte 1eh
		mov     [esp+54h], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     [esp+40h], eax
		mov     [esp+4ch], eax
		mov     [esp+48h], eax
		add     eax, ebp
		add     eax, byte 28h
		mov     [esp+68h], eax
		mov     [esp+64h], eax
		mov     [esp+60h], eax
___1ddb5h:
		test    ebx, ebx
		jne     near ___1dfb7h
		test    ecx, ecx
		jne     short ___1de18h
		xor     esi, esi
		mov     edi, 0c4h
		mov     ecx, 0d8h
___1ddcdh:
		mov     edx, [esp+48h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edx
		add     eax, ebp
		mov     ebx, ecx
		add     eax, byte 28h
		mov     edx, edi
		add     eax, esi
		add     esi, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     esi, 2800h
		jne     short ___1ddcdh
		mov     ecx, [esp+60h]
		mov     ebx, __dfr_180f68h
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

		mov     ecx, 0ffffffffh
___1de18h:
		test    ecx, ecx
		jle     short ___1de1dh
		dec     ecx
___1de1dh:
		mov     eax, __dfr_180f94h

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		je      near ___1decah
		xor     ecx, ecx
		mov     esi, 0c4h
		mov     edi, 0d8h
___1de3bh:
		mov     ebx, [esp+4ch]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebx
		add     eax, ebp
		mov     edx, esi
		add     eax, byte 28h
		mov     ebx, edi
		add     eax, ecx
		add     ecx, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     ecx, 2800h
		jne     short ___1de3bh
		mov     ecx, [esp+64h]
		mov     ebx, __dfr_180f9ch
		mov     edx, ___185c0bh
		lea     edi, [esp+28h]
		mov     eax, [___1a1108h]
		mov     esi, __dfr_180fb0h

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

		movsw   
		movsb   
		lea     esi, [esp+6ch]
		lea     edi, [esp+28h]
		call 	__STRCAT
		lea     eax, [esp+28h]
		mov     ecx, 2dh

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

___1decah:
		mov     eax, __dfr_180fb4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		je      near ___1df77h
		xor     ecx, ecx
		mov     edi, 0c4h
		mov     esi, 0d8h
___1dee8h:
		mov     edx, [esp+40h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edx
		add     eax, ebp
		mov     ebx, esi
		add     eax, byte 28h
		mov     edx, edi
		add     eax, ecx
		add     ecx, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     ecx, 2800h
		jne     short ___1dee8h
		mov     ecx, [esp+68h]
		mov     ebx, __dfr_180fc0h
		mov     edx, ___185c0bh
		lea     edi, [esp+28h]
		mov     eax, [___1a1108h]
		mov     esi, __dfr_180fb0h

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

		movsw   
		movsb   
		lea     esi, [esp+6ch]
		lea     edi, [esp+28h]
		call 	__STRCAT
		lea     eax, [esp+28h]
		mov     ecx, 2dh

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

___1df77h:
		mov     eax, __dfr_180fdch

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ebx, eax
		test    eax, eax
		jne     short ___1df93h
		mov     eax, __dfr_180fe4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ebx, eax
___1df93h:

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
	
		mov     edx, [esp+5ch]
		mov     eax, [esp+54h]
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13bd4h_cdecl
	add 	esp, 8
	pop 	ecx

		cmp     byte [kmap+1], 0
		je      near ___1ddb5h
___1dfb7h:

	push 	eax
	push 	ecx
	push 	edx
		call    ___60a84h
	pop 	edx
	pop 	ecx
	pop 	eax

		mov     ah, [kmap+1]
		xor     edi, edi
		xor     esi, esi
		cmp     ah, 1
		jne     short ___1dfcfh
		mov     cl, ah
		jmp     short ___1dfd1h
___1dfcfh:
		xor     cl, cl
___1dfd1h:
		mov     eax, [esp+50h]
		add     eax, byte 1ah
		add     ebp, byte 0fh
		mov     [esp+58h], eax
___1dfdfh:
		cmp     cl, 1
		je      short ___1e03bh
		cmp     edi, 0ffh
		je      short ___1e03bh
		cmp     ebx, byte 1
		jne     short ___1e03bh

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     dword [esp+44h], 0ah
		mov     cl, al
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		idiv    dword [esp+44h]
		cmp     edx, ebx
		jne     short ___1e023h
		mov     eax, [___199fa0h]
		mov     edx, 2
		add     eax, byte 6

	push 	ecx
	push 	edx
	push 	eax
		call    ___60b48h
	add 	esp, 8
	pop 	ecx

		mov     edi, eax
___1e023h:

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
	
		mov     edx, [esp+58h]
		mov     eax, ebp
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13bd4h_cdecl
	add 	esp, 8
	pop 	ecx

		inc     esi
		jmp     short ___1dfdfh
___1e03bh:
		cmp     cl, 1
		je      short ___1e049h
		xor     edx, edx
		xor     eax, eax
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___611c0h
	add 	esp, 8
	pop 	ecx

___1e049h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___61278h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     cl, 1
		je      short ___1e071h
		mov     edi, ___1866b8h+44ch
		xor     dl, dl
		mov     esi, __dfr_180fech
		mov     [___185b58h+18h], dl

	push 	edx
	push 	ecx
		call    ___1caf4h
	pop 	ecx
	pop 	edx
	
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		jmp     short ___1e076h
___1e071h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___623d4h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e076h:

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

		add     esp, byte 70h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1e08ah:

	push 	edx
	push 	ecx
	push 	eax
		call    ___623d4h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e08fh:
		add     esp, byte 70h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
__dfr_180ac8h:
	db 	"Press ESC to abort",0,0
__dfr_180f40h:
	db	45h,6eh,74h,65h,72h,20h,74h,68h,65h,20h,6eh,75h,6dh,62h,65h,72h,20h,74h,6fh,20h,64h,69h,61h,6ch,3fh,0,0,0
__dfr_180f5ch:
	db	44h,69h,61h,6ch,69h,6eh,67h,3ah,20h,0,0,0
__dfr_180f68h:
	db	57h,61h,69h,74h,69h,6eh,67h,20h,66h,6fh,72h,20h,61h,6eh,73h,77h,65h,72h,2eh,2eh,2eh,0,0,0
__dfr_180f80h:
	db	41h,54h,45h,31h,58h,31h,56h,31h,44h,0,0,0
__dfr_180f8ch:
	db	54h,0,0,0
__dfr_180f90h:
	db	50h,0,0,0
__dfr__180f94h:
	db	42h,55h,53h,59h,0,0,0,0
__dfr_180f9ch:
	db	42h,75h,73h,79h,21h,20h,52h,65h,2dh,64h,69h,61h,6ch,69h,6eh,67h,2eh,2eh,2eh,0
__dfr_180fb0h:
	db	41h,2fh,0,0
__dfr_180fb4h:
	db	4eh,4fh,20h,43h,41h,52h,52h,49h,45h,52h,0,0
__dfr_180fc0h:
	db	4eh,6fh,20h,63h,61h,72h,72h,69h,65h,72h,21h,20h,52h,65h,2dh,64h,69h,61h,6ch,69h,6eh,67h,2eh,2eh,2eh,0,0,0
__dfr_180fdch:
	db	43h,4fh,4eh,4eh,45h,43h,54h,0
__dfr_180fe4h:
	db	43h,41h,52h,52h,49h,45h,52h,0
__dfr_180fech:
	db	44h,69h,73h,63h,6fh,6eh,6eh,65h,63h,74h,20h,4dh,6fh,64h,65h,6dh,0,0,0,0
__dfr_1856c8h:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0
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
