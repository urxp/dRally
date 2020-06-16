cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern	___196a78h
	extern	___185a1ch
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___135fch
	extern	___181cb4h
	extern	___185c0bh
	extern	___1a10fch
	extern	___1a116ch
	extern	___12e78h_cdecl
	extern	___1807e8h
	extern	___1a1108h
	extern	___1a1f4eh
	extern	___1a110ch
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2ab50h
	extern	___18072ch
	extern	___185c6ch
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	___59b3ch
	extern	___1a1f4dh
	extern	___181cd4h
	extern	strcmp_
	extern	___1a1dbah
	extern	___181ce0h
	extern	DPMI_GET_FREE_MEMORY_INFORMATION
	extern	itoa_
	extern	___1a1f63h
	extern	___232f8h
	extern	___181cf8h
	extern	___1a1ef8h
	extern	___1a01e0h
	extern	___181cfch
	extern	___23488h
	extern	___185bedh
	extern	___1a1efch
	extern	___180130h
	extern	___5994ch
	extern	___19bd60h
	extern	___196a84h
	extern	___23230h

section .text

__GDECL(___23758h)
		push    15ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 140h
		mov     edx, 1
		xor     ah, ah
		mov     ebx, [___196a78h]
		mov     [esp+13dh], ah
		mov     [___185a1ch], edx
		test    ebx, ebx
		setnz   al
		mov     ebx, 27fh
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		xor     ecx, ecx
		and     eax, 0ffh
		mov     [___196a78h], ecx
		mov     ecx, 4b000h
		mov     [esp+134h], eax
		call 	__MOVS
		mov     ecx, 3c500h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0d200h
		add     edi, 0d200h
		mov     edx, 6fh
		call 	__MOVS
		mov     ecx, 171h
		xor     eax, eax
		xor     ebp, ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___135fch
	add 	esp, 10h

		mov     ecx, 10923h
		mov     ebx, ___181cb4h
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]
		mov     esi, ___1a116ch

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 10959h
		mov     ebx, ___1807e8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		mov     edi, 1298ch

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___23843h:
		cmp     byte [ebp+___1a1f4eh], 0
		jne     short ___2385fh
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		mov     ecx, edi
		mov     ebx, esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___2385fh:
		cmp     byte [ebp+___1a1f4eh], 1
		jne     short ___2387bh
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]
		mov     ecx, edi
		mov     ebx, esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___2387bh:
		cmp     byte [ebp+___1a1f4eh], 2
		jne     short ___23897h
		mov     edx, ___185c0bh
		mov     eax, [___1a110ch]
		mov     ecx, edi
		mov     ebx, esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___23897h:
		add     edi, 2580h
		inc     ebp
		add     esi, 96h
		cmp     ebp, byte 16h
		jl      short ___23843h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     bh, bh
		xor     ebp, ebp
		mov     [esp], bh
		mov     [esp+138h], ebp
		mov     [esp+130h], ebp
___238c3h:
		call    near ___2ab50h
		mov     eax, [esp+130h]
		inc     eax
		mov     [esp+130h], eax
		cmp     eax, byte 0ah
		jle     short ___23920h
		mov     edx, 46500h
___238e1h:
		mov     eax, [___1a1138h__VESA101h_DefaultScreenBufferB]
		add     eax, edx
		add     eax, byte 0ch
		lea     esi, [eax+ebp*1]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edx
		add     eax, byte 0ch
		mov     ecx, 10h
		lea     edi, [eax+ebp*1]
		add     edx, 280h
		call 	__MOVS
		cmp     edx, 48d00h
		je      short ___2393ah
		jmp     short ___238e1h
___23920h:
		mov     ebx, ___18072ch
		mov     edx, ___185c0bh
		mov     eax, [___1a110ch]
		lea     ecx, [ebp+4650ch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___2393ah:
		cmp     dword [esp+130h], byte 14h
		jle     short ___2394dh
		xor     ecx, ecx
		mov     [esp+130h], ecx
___2394dh:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 0fh
		add     eax, 4650ch
		xor     ebx, ebx
		lea     edx, [eax+ebp*1]
		mov     bl, [___185c6ch]
		lea     eax, [ebp+4650ch]

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

		mov     [esp+13ch], al
		cmp     al, 0dh
		jb      short ___2398dh
		jbe     short ___239aah
		cmp     al, 1bh
		je      short ___2399ah
		jmp     near ___23c2dh
___2398dh:
		cmp     al, 8
		je      near ___23b7dh
		jmp     near ___23c2dh
___2399ah:
		mov     dword [esp+138h], 0ffffffffh
		jmp     near ___23f72h
___239aah:
		mov     edi, esp
		call 	__STRLEN
		test    ecx, ecx
		jbe     near ___23f72h
		mov     edx, 46500h
		xor     ebp, ebp
___239c5h:
		mov     ecx, 262h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, edx
		add     eax, edx
		add     esi, byte 0ch
		lea     edi, [eax+0ch]
		add     edx, 280h
		call 	__MOVS
		cmp     edx, 48d00h
		jne     short ___239c5h
		mov     ecx, ___1a116ch
		xor     edx, edx
		lea     ebx, [ecx+96h]
___23a0ah:
		mov     esi, ebx
		mov     edi, ecx
		inc     edx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___23a0ah
		mov     edx, ___181cd4h
		mov     eax, esp
		call    near strcmp_
		test    eax, eax
		jne     short ___23ac0h
		mov     edi, ___1a1dbah
		mov     esi, ___181ce0h
		mov     ebx, 0ah
		lea     edx, [esp+98h]
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		call    near DPMI_GET_FREE_MEMORY_INFORMATION
		call    near itoa_
		lea     esi, [esp+98h]
		mov     edi, ___1a1dbah
		xor     dl, dl
		call 	__STRCAT
		mov     [___1a1f63h], dl
		call    near ___232f8h
		mov     [esp], dl
		jmp     near ___23f6dh
___23ac0h:
		mov     ax, [___181cf8h]
		mov     [___1a1dbah], ax
		imul    esi, [___1a1ef8h], byte 6ch
		mov     edi, ___1a1dbah
		add     esi, ___1a01e0h
		call 	__STRCAT
		mov     esi, ___181cfch
		call 	__STRCAT
		mov     esi, esp
		call 	__STRCAT
		mov     al, 2
		mov     ebx, 1
		mov     [___1a1f63h], al
		call 	__STRLEN
		mov     eax, ___1a1dbah
		lea     edx, [ecx+1]
		call    near ___23488h
		call    near ___232f8h
		xor     ah, ah
		mov     [esp], ah
		jmp     near ___23f6dh
___23b7dh:
		mov     edi, esp
		call 	__STRLEN
		test    ecx, ecx
		jbe     near ___23f72h
		mov     edi, esp
		call 	__STRLEN
		xor     eax, eax
		mov     al, [esp+ecx*1-1]
		mov     al, [eax+___185bedh]
		and     eax, 0ffh
		mov     edx, 46500h
		sub     ebp, eax
		mov     ebx, 20h
___23bbah:
		mov     eax, [___1a1138h__VESA101h_DefaultScreenBufferB]
		add     eax, edx
		add     eax, byte 0ch
		lea     esi, [eax+ebp*1]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edx
		add     eax, byte 0ch
		mov     ecx, ebx
		lea     edi, [eax+ebp*1]
		add     edx, 280h
		call 	__MOVS
		cmp     edx, 48d00h
		jne     short ___23bbah
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, 4650ch
		mov     ecx, 10h
		lea     edx, [eax+ebp*1]
		mov     ebx, 20h
		lea     eax, [ebp+4650ch]
		mov     edi, esp

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		call 	__STRLEN
		xor     al, al
		mov     [esp+ecx*1-1], al
		jmp     near ___23f72h
___23c2dh:
		mov     eax, 243h
		sub     eax, [___1a1efch]
		cmp     ebp, eax
		jge     near ___23d2fh
		mov     cl, [esp+13ch]
		cmp     cl, 20h
		jb      near ___23f72h
		cmp     cl, 7eh
		ja      near ___23f72h
		lea     esi, [esp+13ch]
		mov     edi, esp
		mov     edx, 46500h
		call 	__STRCAT
		mov     ebx, 10h
___23c8eh:
		mov     eax, [___1a1138h__VESA101h_DefaultScreenBufferB]
		add     eax, edx
		add     eax, byte 0ch
		lea     esi, [eax+ebp*1]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edx
		add     eax, byte 0ch
		mov     ecx, ebx
		lea     edi, [eax+ebp*1]
		add     edx, 280h
		call 	__MOVS
		cmp     edx, 48d00h
		jne     short ___23c8eh
		lea     ebx, [esp+13ch]
		mov     edx, ___185c0bh
		lea     esi, [ebp+4650ch]
		mov     eax, [___1a110ch]
		mov     ecx, esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		xor     ebx, ebx
		mov     bl, [esp+13ch]
		mov     bl, [ebx+___185bedh]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, 4650ch
		mov     ecx, 0fh
		lea     edx, [eax+ebp*1]
		and     ebx, 0ffh
		mov     eax, esi

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		xor     eax, eax
		mov     al, [esp+13ch]
		mov     al, [eax+___185bedh]
		and     eax, 0ffh
		add     ebp, eax
		jmp     near ___23f72h
___23d2fh:
		mov     edi, esp
		call 	__STRLEN
		mov     edi, esp
		mov     ebp, ecx
		call 	__STRLEN
		mov     eax, ecx
		test    ecx, ecx
		jl      short ___23d5eh
___23d4fh:
		cmp     byte [esp+eax*1], 20h
		jne     short ___23d59h
		mov     ebp, eax
		jmp     short ___23d5eh
___23d59h:
		dec     eax
		test    eax, eax
		jge     short ___23d4fh
___23d5eh:
		mov     esi, esp
		lea     edi, [esp+98h]
		mov     edx, 46500h
		xor     bh, bh
		call 	__STRCPY
		mov     [esp+ebp*1], bh
___23d8bh:
		mov     ecx, 262h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, edx
		add     eax, edx
		add     esi, byte 0ch
		lea     edi, [eax+0ch]
		add     edx, 280h
		call 	__MOVS
		cmp     edx, 48d00h
		jne     short ___23d8bh
		mov     ecx, ___1a116ch
		xor     edx, edx
		lea     ebx, [ecx+96h]
___23dd0h:
		mov     esi, ebx
		mov     edi, ecx
		inc     edx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___23dd0h
		imul    esi, [___1a1ef8h], byte 6ch
		mov     edi, ___1a1dbah
		mov     ax, [___181cf8h]
		add     esi, ___1a01e0h
		mov     [___1a1dbah], ax
		call 	__STRCAT
		mov     esi, ___181cfch
		call 	__STRCAT
		mov     esi, esp
		call 	__STRCAT
		mov     cl, 2
		mov     ebx, 1
		mov     [___1a1f63h], cl
		call 	__STRLEN
		mov     eax, ___1a1dbah
		lea     edx, [ecx+1]
		call    near ___23488h
		call    near ___232f8h
		mov     al, [___180130h]
		lea     edi, [esp+98h]
		mov     [esp], al
		call 	__STRLEN
		cmp     ebp, ecx
		je      short ___23f03h
		lea     esi, [esp+98h]
		add     esi, ebp
		mov     edi, esp
		inc     esi
		call 	__STRCPY
___23f03h:
		lea     esi, [esp+13ch]
		mov     edi, esp
		mov     ebx, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     ecx, 4650ch
		mov     eax, [___1a110ch]
		xor     ebp, ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		xor     edx, edx
		jmp     short ___23f5dh
___23f4ah:
		xor     eax, eax
		mov     al, [esp+edx*1]
		mov     al, [eax+___185bedh]
		and     eax, 0ffh
		inc     edx
		add     ebp, eax
___23f5dh:
		mov     edi, esp
		call 	__STRLEN
		cmp     edx, ecx
		jb      short ___23f4ah
___23f6dh:

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___23f72h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		cmp     al, 3bh
		jne     short ___23f86h
		mov     dword [esp+138h], 0ffffffffh
___23f86h:
		cmp     dword [___19bd60h], byte 0
		je      short ___23fa3h
		cmp     dword [___196a84h], byte 0
		je      short ___23fa3h
		mov     dword [esp+138h], 0ffffffffh
___23fa3h:
		cmp     dword [esp+138h], byte 0
		je      near ___238c3h
		mov     ecx, 4b000h
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		xor     edx, edx
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     [___185a1ch], edx
		call 	__MOVS
		cmp     dword [___19bd60h], byte 0
		je      short ___23ff6h
		cmp     dword [___196a84h], byte 0
		jne     short ___23ff6h
	
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
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___23ff6h:
		mov     eax, [esp+134h]
		mov     [___196a78h], eax
		add     esp, 140h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
