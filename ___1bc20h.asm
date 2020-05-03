cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern 	___185a54h
	extern 	itoa_
	extern 	___3f71ch__allocateMemory
	extern 	___1a1138h__VESA101h_DefaultScreenBufferB
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___13710h
	extern 	___13248h
	extern 	___180aa8h
	extern 	___185c0bh
	extern 	___1a1108h
	extern 	___12e78h
	extern 	___180ac8h
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___196ab8h
	extern 	___1a2011h
	extern 	___1a116ch
	extern 	___185a14h
	extern 	___1a1f4eh
	extern 	___1a1f4dh
	extern 	___180864h
	extern 	___1a1ef8h
	extern 	___1a1dbah
	extern 	___1a01e0h
	extern 	___180adch
	extern 	___1a1f63h
	extern 	___23488h
	extern 	___23230h
	extern 	___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	extern 	___24e4ach
	extern 	memset_
	extern 	___196a84h
	extern 	___5994ch
	extern 	___2ab50h
	extern 	___13bd4h
	extern 	___23594h
	extern 	___13c9ch
	extern 	___180afch
	extern 	___180974h
	extern 	___3f77ch__freeMemory
	extern 	___196adch
	extern 	___19bd60h
	extern 	___1c6bch
	extern 	___2b8ach
	extern 	___185a24h
	extern 	___180980h

section .text

__GDECL(___1bc20h)
		push    40h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 20h
		mov     edx, 97h
		mov     ebx, 0c5h
		mov     eax, [___185a54h]
		mov     [esp+14h], edx
		mov     [esp+18h], ebx
		mov     ebx, 0ah
		lea     edx, [esp+0ch]
		call    near itoa_
		mov     eax, 12h
		mov     ecx, 28f00h
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ebp, eax
		mov     eax, 12h
		xor     edx, edx
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		mov     [esp+1ch], eax
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
		mov     ebx, 14eh

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 4
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
		mov     eax, 97h
		call    near ___13248h
		mov     ecx, 20dbfh
		mov     ebx, ___180aa8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 2383fh
		mov     ebx, ___180ac8h
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

		mov     ebx, ebp
		xor     edx, edx
___1bd16h:
		inc     ebx
		mov     al, [esp+edx*1+0ch]
		inc     edx
		mov     [ebx-1], al
		cmp     edx, byte 7
		jl      short ___1bd16h
		mov     al, [___196ab8h]
		mov     ebx, ebp
		xor     edx, edx
		mov     [ebp+7], al
___1bd30h:
		inc     ebx
		mov     al, [edx+___1a2011h]
		inc     edx
		mov     [ebx+7], al
		cmp     edx, byte 9
		jl      short ___1bd30h
		mov     ecx, ___1a116ch
		mov     al, [___185a14h]
		xor     edx, edx
		lea     ebx, [ecx+96h]
		mov     [ebp+11h], al
___1bd55h:
		mov     esi, ebx
		mov     edi, ecx
		inc     edx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1bd55h
		mov     eax, [___180864h]
		mov     edx, [___1a1ef8h]
		mov     [___1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, ___1a1dbah
		add     esi, eax
		call 	__STRCAT
		mov     esi, ___180adch
		mov     ebx, 6
		call 	__STRCAT
		xor     ah, ah
		mov     esi, [esp+14h]
		mov     [___1a1f63h], ah
		call 	__STRLEN
		mov     eax, ___1a1dbah
		lea     edx, [ecx+1]
		add     esi, byte 0fh
		call    near ___23488h

	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	pop		eax
	pop 	ecx
	pop		edx

		mov     ebx, 1000h
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		mov     ecx, [esp+18h]
		call    near memset_
		add     ecx, byte 13h
___1be57h:
		cmp     dword [___196a84h], byte 0
		jne     near ___1c058h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		movzx   edi, al
		call    near ___2ab50h
		call    near ___2ab50h
		mov     edx, ecx
		mov     eax, esi
		mov     ebx, 0bh
		call    near ___13bd4h
		mov     edx, 12h
		mov     eax, ebp
		call    near ___23488h
		mov     edx, 0ah
		mov     eax, [esp+1ch]
		call    near ___23594h
		test    eax, eax
		jne     short ___1beach
		cmp     edi, byte 1
		jne     short ___1be57h
		jmp     near ___1c058h
___1beach:
		mov     edx, ecx
		mov     eax, esi
		mov     ebx, ___1a116ch
		call    near ___13c9ch
		lea     ecx, [ebx+96h]
		xor     edx, edx
___1bec2h:
		mov     esi, ecx
		mov     edi, ebx
		inc     edx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ecx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1bec2h
		mov     eax, [___180864h]
		mov     edx, [___1a1ef8h]
		mov     [___1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, ___1a1dbah
		add     esi, eax
		mov     ebx, 0ah
		call 	__STRCAT
		mov     esi, ___180afch
		mov     edx, esp
		call 	__STRCAT
		mov     eax, [___196ab8h]
		mov     esi, esp
		call    near itoa_
		call 	__STRCAT
		mov     esi, ___180974h
		mov     ebx, 6
		xor     dh, dh
		call 	__STRCAT
		mov     [___1a1f63h], dh
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	pop		eax
	pop 	ecx
	pop		edx

		call 	__STRLEN
		mov     eax, ___1a1dbah
		lea     edx, [ecx+1]
		call    near ___23488h
		mov     eax, ebp
		call    near ___3f77ch__freeMemory
		mov     eax, [esp+1ch]
		mov     ebx, 1000h
		call    near ___3f77ch__freeMemory
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     eax, 2
		mov     ebp, 1
		mov     [___196adch], eax
		mov     eax, [___185a54h]
		mov     [___19bd60h], ebp
		call    near ___1c6bch

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b8ach
	pop		eax
	pop 	ecx
	pop 	edx

		mov     eax, ebp
		mov     [___185a24h], ebp
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1c058h:
		mov     ebx, ___1a116ch
		xor     edx, edx
		lea     ecx, [ebx+96h]
___1c065h:
		mov     esi, ecx
		mov     edi, ebx
		inc     edx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ecx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1c065h
		mov     eax, [___180864h]
		mov     edx, [___1a1ef8h]
		mov     [___1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, ___1a1dbah
		add     esi, eax
		mov     ebx, 6
		call 	__STRCAT
		mov     esi, ___180980h
		xor     dl, dl
		call 	__STRCAT
		mov     [___1a1f63h], dl
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax

	push 	edx
	push 	ecx
	push 	eax
		call    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	pop		eax
	pop 	ecx
	pop		edx

	pop		eax
	pop 	ecx
	pop		edx

		call 	__STRLEN
		mov     eax, ___1a1dbah
		lea     edx, [ecx+1]
		call    near ___23488h
		mov     ebx, 1000h
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     eax, ebp
		call    near ___3f77ch__freeMemory
		mov     eax, [esp+1ch]
		call    near ___3f77ch__freeMemory
		xor     eax, eax
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
