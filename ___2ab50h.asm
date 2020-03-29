cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___59e68h
	extern	___3a454h
	extern	___196a88h
	extern	___58c60h
	extern	___2a394h
	extern	___196ad8h
	extern	___1a10c8h
	extern	___1821dah
	extern	__CHP
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___19bd60h
	extern	___6168ch
	extern	___23594h
	extern	___1a116ch
	extern	___1a1f4fh
	extern	___1a1f4eh
	extern	___1a1dbah
	extern	___185a1ch
	extern	___1a1f63h
	extern	___196a74h
	extern	___23230h
	extern	___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	extern	___233c0h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___3f71ch__allocateMemory
	extern	___1a0f9ch
	extern	___180864h
	extern	___1a1ef8h
	extern	___1a01e0h
	extern	___182174h
	extern	___23488h
	extern	___3f77ch__freeMemory
	extern	___1e4f8h
	extern	___1e62ch
	extern	___182194h
	extern	CONNECTION_TYPE
	extern	___199fc8h
	extern	___1821c0h
    ;extern 	VESA101_PRESENTSCREEN

section .text

__GDECL(___2ab50h)
		push    454h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 428h
		cmp     byte [___59e68h], 0
		je      short ___2ab74h
		call    near ___3a454h
___2ab74h:
		inc     dword [___196a88h]

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		call    near ___2a394h
		mov     eax, [___196a88h]
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		cmp     edx, byte 1
		jne     near ___2acebh
		mov     ebx, [___196ad8h]
		sub     ebx, edx
		mov     [___196ad8h], ebx
		test    ebx, ebx
		jge     short ___2abbah
		mov     dword [___196ad8h], 1ffh
___2abbah:
		mov     edx, [___196ad8h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a10c8h]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx]
		mov     [esp+420h], eax
		fild    word [esp+420h]
		xor     eax, eax
		fld     qword [___1821dah]
		fxch    st0, st1
		fmul    st0, st1
		mov     al, [edx+1]
		mov     [esp+420h], eax
		fild    word [esp+420h]
		xor     eax, eax
		fmul    st0, st2
		mov     al, [edx+2]
		mov     [esp+420h], eax
		xor     edi, edi
		fild    word [esp+420h]
		fmulp   st3, st0
		mov     [esp+418h], edi
		fxch    st0, st1
		fstp    dword [esp+40ch]
		mov     al, [esp+418h]
		fstp    dword [esp+410h]
		add     al, 0c0h
		fstp    dword [esp+414h]
		mov     [esp+424h], al
___2ac47h:
		fild    dword [esp+418h]
		xor     eax, eax
		fld     dword [esp+40ch]
		mov     al, [esp+424h]
		fmul    st0, st1
		push    eax
		call    near __CHP
		fistp   dword [esp+420h]
		mov     al, [esp+420h]
		fld     dword [esp+414h]
		and     eax, 0ffh
		fmul    st0, st1
		push    eax
		call    near __CHP
		fistp   dword [esp+424h]
		mov     al, [esp+424h]
		fld     dword [esp+41ch]
		and     eax, 0ffh
		fmulp   st1, st0
		push    eax
		call    near __CHP
		fistp   dword [esp+428h]
		mov     al, [esp+428h]
		and     eax, 0ffh
		push    eax
		mov     ebp, [esp+428h]
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     dl, [esp+424h]
		inc     ebp
		inc     dl
		mov     [esp+418h], ebp
		mov     [esp+424h], dl
		cmp     ebp, byte 20h
		jl      near ___2ac47h
	;call 	VESA101_PRESENTSCREEN
___2acebh:
		cmp     dword [___19bd60h], byte 0
		je      near ___2b30bh
		call    near ___6168ch
		mov     edx, 1
		mov     eax, esp
		call    near ___23594h
		test    eax, eax
		je      near ___2adcch
		xor     ebx, ebx
		mov     [esp+418h], ebx
		mov     ebx, ___1a116ch
		lea     edx, [ebx+96h]
___2ad25h:
		mov     esi, edx
		mov     edi, ebx
		call 	__STRCPY
		mov     eax, [esp+418h]
		mov     cl, [eax+___1a1f4fh]
		add     ebx, 96h
		mov     [eax+___1a1f4eh], cl
		lea     ecx, [eax+1]
		add     edx, 96h
		mov     [esp+418h], ecx
		cmp     ecx, byte 15h
		jl      short ___2ad25h
		mov     esi, esp
		mov     edi, ___1a1dbah
		mov     dh, 1
		call 	__STRCPY
		mov     edi, [___185a1ch]
		mov     [___1a1f63h], dh
		test    edi, edi
		jne     short ___2adb9h
		cmp     dword [___196a74h], byte 1
		jne     short ___2adcch
	
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

		jmp     short ___2adcch
___2adb9h:
		cmp     dword [___196a74h], byte 1
		jne     short ___2adcch
		call    near ___233c0h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2adcch:
		mov     edx, 6
		mov     eax, esp
		call    near ___23594h
		test    eax, eax
		je      near ___2ae9bh
		xor     edx, edx
		mov     [esp+418h], edx
		mov     edx, ___1a116ch
		lea     ebx, [edx+96h]
___2adf4h:
		mov     esi, ebx
		mov     edi, edx
		call 	__STRCPY
		mov     eax, [esp+418h]
		mov     cl, [eax+___1a1f4fh]
		add     edx, 96h
		mov     [eax+___1a1f4eh], cl
		lea     ecx, [eax+1]
		add     ebx, 96h
		mov     [esp+418h], ecx
		cmp     ecx, byte 15h
		jl      short ___2adf4h
		mov     esi, esp
		mov     edi, ___1a1dbah
		call 	__STRCPY
		xor     bl, bl
		mov     edi, [___185a1ch]
		mov     [___1a1f63h], bl
		test    edi, edi
		jne     short ___2ae88h
		cmp     dword [___196a74h], byte 1
		jne     short ___2ae9bh
	
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

		jmp     short ___2ae9bh
___2ae88h:
		cmp     dword [___196a74h], byte 1
		jne     short ___2ae9bh
		call    near ___233c0h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2ae9bh:
		mov     edx, 7
		mov     eax, esp
		call    near ___23594h
		test    eax, eax
		je      near ___2af52h
		mov     eax, 64h
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     edi, eax
		mov     [___1a0f9ch], eax
		mov     eax, [___180864h]
		mov     edx, [___1a1ef8h]
		mov     [edi], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		add     esi, eax
		mov     ebx, 8
		call 	__STRCAT
		mov     esi, ___182174h
		mov     edi, [___1a0f9ch]
		mov     edx, 64h
		call 	__STRCAT
		mov     eax, [___1a0f9ch]
		call    near ___23488h
		mov     eax, [___1a0f9ch]
		call    near ___3f77ch__freeMemory
___2af52h:
		mov     edx, 14h
		mov     eax, esp
		call    near ___23594h
		test    eax, eax
		je      near ___2b031h
		xor     edx, edx
		mov     [esp+418h], edx
		mov     edx, ___1a116ch
		lea     ebx, [edx+96h]
___2af7ah:
		mov     esi, ebx
		mov     edi, edx
		call 	__STRCPY
		mov     eax, [esp+418h]
		mov     cl, [eax+___1a1f4fh]
		add     edx, 96h
		mov     [eax+___1a1f4eh], cl
		lea     ecx, [eax+1]
		add     ebx, 96h
		mov     [esp+418h], ecx
		cmp     ecx, byte 15h
		jl      short ___2af7ah
		mov     esi, esp
		mov     edi, ___1a1dbah
		call 	__STRCPY
		xor     bh, bh
		mov     edi, [___185a1ch]
		mov     [___1a1f63h], bh
		test    edi, edi
		jne     short ___2b00eh
		cmp     dword [___196a74h], byte 1
		jne     short ___2b021h
	
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

		jmp     short ___2b021h
___2b00eh:
		cmp     dword [___196a74h], byte 1
		jne     short ___2b021h
		call    near ___233c0h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2b021h:
		mov     edx, 13h
		call    near ___1e4f8h
		mov     [___1a1ef8h], edx
___2b031h:
		mov     edx, 9
		mov     eax, esp
		call    near ___23594h
		test    eax, eax
		je      near ___2b10ah
		xor     ebx, ebx
		mov     edx, ___1a116ch
		mov     [esp+418h], ebx
		lea     ebx, [edx+96h]
___2b059h:
		mov     esi, ebx
		mov     edi, edx
		call 	__STRCPY
		mov     eax, [esp+418h]
		mov     cl, [eax+___1a1f4fh]
		add     edx, 96h
		mov     [eax+___1a1f4eh], cl
		lea     ecx, [eax+1]
		add     ebx, 96h
		mov     [esp+418h], ecx
		cmp     ecx, byte 15h
		jl      short ___2b059h
		mov     esi, esp
		mov     edi, ___1a1dbah
		call 	__STRCPY
		xor     cl, cl
		mov     edi, [___185a1ch]
		mov     [___1a1f63h], cl
		test    edi, edi
		jne     short ___2b0edh
		cmp     dword [___196a74h], byte 1
		jne     short ___2b100h
	
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

		jmp     short ___2b100h
___2b0edh:
		cmp     dword [___196a74h], byte 1
		jne     short ___2b100h
		call    near ___233c0h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2b100h:
		mov     eax, 1
		call    near ___1e62ch
___2b10ah:
		mov     edx, 13h
		lea     eax, [esp+400h]
		call    near ___23594h
		test    eax, eax
		je      near ___2b236h
		xor     edx, edx
		mov     [esp+418h], edx
		mov     edx, ___1a116ch
		lea     ebx, [edx+96h]
___2b137h:
		mov     esi, ebx
		mov     edi, edx
		call 	__STRCPY
		mov     eax, [esp+418h]
		mov     cl, [eax+___1a1f4fh]
		add     edx, 96h
		mov     [eax+___1a1f4eh], cl
		lea     ecx, [eax+1]
		add     ebx, 96h
		mov     [esp+418h], ecx
		cmp     ecx, byte 15h
		jl      short ___2b137h
		xor     edx, edx
		mov     eax, [___180864h]
		mov     dl, [esp+400h]
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
		mov     esi, ___182194h
		call 	__STRCAT
		xor     ch, ch
		mov     edi, [___185a1ch]
		mov     [___1a1f63h], ch
		test    edi, edi
		jne     short ___2b223h
		cmp     dword [___196a74h], byte 1
		jne     short ___2b236h
	
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

		jmp     short ___2b236h
___2b223h:
		cmp     dword [___196a74h], byte 1
		jne     short ___2b236h
		call    near ___233c0h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2b236h:
		mov     edx, [CONNECTION_TYPE]
		cmp     edx, byte 3
		je      short ___2b24ah
		cmp     edx, byte 4
		jne     near ___2b30bh
___2b24ah:
		test    byte [___199fc8h], 80h
		jne     near ___2b30bh
		mov     edx, ___1a116ch
		xor     ecx, ecx
		lea     ebx, [edx+96h]
		mov     [esp+418h], ecx
___2b26bh:
		mov     esi, ebx
		mov     edi, edx
		call 	__STRCPY
		mov     eax, [esp+418h]
		add     edx, 96h
		add     ebx, 96h
		lea     esi, [eax+1]
		mov     cl, [eax+___1a1f4fh]
		mov     [esp+418h], esi
		mov     [eax+___1a1f4eh], cl
		cmp     esi, byte 15h
		jl      short ___2b26bh
		mov     ecx, 6
		mov     edi, ___1a1dbah
		mov     esi, ___1821c0h
		xor     ah, ah
		mov     ebp, [___185a1ch]
		mov     [___1a1f63h], ah
		rep movsd   
		movsw   
		test    ebp, ebp
		jne     short ___2b2f1h
		cmp     dword [___196a74h], byte 1
		jne     short ___2b304h
	
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

		jmp     short ___2b304h
___2b2f1h:
		cmp     dword [___196a74h], byte 1
		jne     short ___2b304h
		call    near ___233c0h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2b304h:
		xor     eax, eax
		call    near ___1e62ch
___2b30bh:
		add     esp, 428h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
