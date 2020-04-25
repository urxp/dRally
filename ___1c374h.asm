cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	___1a1138h__VESA101h_DefaultScreenBufferB
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___185a14h
	extern 	___1866b8h
	extern 	___180b20h
	extern 	___180b2ch
	extern 	___13710h
	extern 	___185a24h
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___1a1100h__VESA101h_DefaultScreenBuffer
	extern 	___3a6a4h
	extern 	___146c4h
	extern 	___2fe64h
	extern 	___13248h
	extern 	___180b38h
	extern 	___185c0bh
	extern 	___1a1108h
	extern 	___12e78h
	extern 	___180728h
	extern 	___185ba9h
	extern 	___1a10e0h
	extern 	___185a54h
	extern 	itoa_
	extern 	___1855c8h
	extern 	___17510h
	extern 	atoi_
	extern 	___180b60h
	extern 	CONNECTION_TYPE
	extern 	___198a0h
	extern 	___1bc20h
	extern 	___185ae4h
	extern 	___185b7ch
	extern 	___185acch
	extern 	restoreDefaultScreenBuffer

section .text

___1c360h:
dd	___1c451h
dd	___1c474h
dd	___1c5d4h
dd	___1c632h
dd	___1c685h
__GDECL(___1c374h)
		push    3ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		cmp     eax, byte 0ffffffffh
		je      near ___1c46ah
___1c390h:
		mov     ecx, 2c380h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0d200h
		add     edi, 0d200h
		call 	__MOVS
		cmp     dword [___185a14h], byte 0
		je      short ___1c3d7h
		mov     edi, ___1866b8h+076ch
		mov     esi, ___180b20h
		movsd   
		movsd   
		movsw   
		movsb   
		jmp     short ___1c3e4h
___1c3d7h:
		mov     edi, ___1866b8h+076ch
		mov     esi, ___180b2ch
		movsd   
		movsd   
		movsd   
___1c3e4h:
		xor     edx, edx
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
		mov     eax, 4

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		cmp     dword [___185a24h], byte 0
		jne     short ___1c418h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     short ___1c434h
___1c418h:
		xor     ecx, ecx
		call 	restoreDefaultScreenBuffer
		call    near ___3a6a4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     [___185a24h], ecx
___1c434h:
		mov     eax, 4
		call    near ___146c4h
		mov     ebp, eax
		cmp     eax, byte 4
		ja      near ___1c461h
		jmp     near dword [cs:eax*4+___1c360h]
___1c451h:
		mov     ecx, 1
		call    near ___2fe64h
		mov     [___185a24h], ecx
___1c461h:
		cmp     ebp, byte 0ffffffffh
		jne     near ___1c390h
___1c46ah:
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1c474h:
		mov     eax, 4
		mov     ecx, 4fh
		xor     edx, edx
		mov     ebx, 1aeh

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 10eh
		mov     eax, 69h
		call    near ___13248h
		mov     ecx, 2c182h
		mov     ebx, ___180b38h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 2e982h
		mov     ebx, ___180728h
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
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
		mov     eax, [___185a54h]
		call    near itoa_
		push    byte 0
		push    byte 1
		push    byte 1
		push    96h
		mov     ecx, ___1855c8h
		mov     ebx, 12ah
		push    byte 5
		mov     edx, 96h
		lea     eax, [esp+14h]
		call    near ___17510h
		mov     eax, esp
		call    near atoi_
		mov     [___185a54h], eax
		cmp     eax, byte 64h
		jge     near ___1c461h
		mov     edi, 64h
___1c522h:
		push    byte 1
		mov     ecx, 4fh
		mov     ebx, 1aeh
		mov     edx, 10eh
		mov     eax, 69h
		call    near ___13248h
		mov     ecx, 2c182h
		mov     ebx, ___180b60h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 2e982h
		mov     ebx, ___180728h
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
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
		mov     eax, edi
		mov     [___185a54h], edi
		call    near itoa_
		push    byte 0
		push    byte 1
		push    byte 1
		push    96h
		mov     ecx, ___1855c8h
		mov     ebx, 12ah
		push    byte 5
		mov     edx, 96h
		lea     eax, [esp+14h]
		call    near ___17510h
		mov     eax, esp
		call    near atoi_
		mov     [___185a54h], eax
		cmp     eax, edi
		jl      near ___1c522h
		cmp     ebp, byte 0ffffffffh
		jne     near ___1c390h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1c5d4h:
		cmp     dword [___185a14h], byte 0
		je      short ___1c605h
		mov     edi, ___1866b8h+076ch
		xor     ebx, ebx
		mov     esi, ___180b2ch
		mov     [___185a14h], ebx
		movsd   
		movsd   
		movsd   
		cmp     ebp, byte 0ffffffffh
		jne     near ___1c390h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1c605h:
		mov     edx, 1
		mov     edi, ___1866b8h+076ch
		mov     esi, ___180b20h
		mov     [___185a14h], edx
		movsd   
		movsd   
		movsw   
		movsb   
		cmp     ebp, byte 0ffffffffh
		jne     near ___1c390h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1c632h:
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___1c660h
		call    near ___198a0h
		test    eax, eax
		je      near ___1c461h
		mov     ebp, 0ffffffffh
		cmp     ebp, byte 0ffffffffh
		jne     near ___1c390h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1c660h:
		call    near ___1bc20h
		test    eax, eax
		je      near ___1c461h
		mov     ebp, 0ffffffffh
		cmp     ebp, byte 0ffffffffh
		jne     near ___1c390h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1c685h:
		xor     esi, esi
		mov     ebp, 0ffffffffh
___1c68ch:
		mov     [___185ae4h], esi
___1c692h:
		mov     eax, [___185ae4h]
		cmp     byte [eax+___185b7ch], 0
		jne     near ___1c461h
		mov     edx, [___185acch]
		dec     edx
		cmp     eax, edx
		jge     short ___1c6b7h
		inc     eax
		mov     [___185ae4h], eax
		jmp     short ___1c692h
___1c6b7h:
		xor     esi, esi
		jmp     short ___1c68ch
