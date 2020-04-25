cpu 386
%include "macros.inc"

	extern	__CHK
	extern	kmap
	extern	___3a454h
	extern	___196a88h
	extern	___58c60h
	extern	___2a394h
	extern	___196ad8h
	extern	___1a10c8h
	extern	___18216bh
	extern	__CHP
	extern	DISPLAY_SET_PALETTE_COLOR
    ;extern 	VESA101_PRESENTSCREEN

section .text

__GDECL(___2aa08h)
		push    44h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    edi
		push    ebp
		sub     esp, byte 1ch
		cmp     byte [kmap+58h], 0
		je      short ___2aa28h
		call    near ___3a454h
___2aa28h:
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
		jne     near ___2ab46h
		mov     ebx, [___196ad8h]
		sub     ebx, edx
		mov     [___196ad8h], ebx
		test    ebx, ebx
		jge     short ___2aa6eh
		mov     dword [___196ad8h], 1ffh
___2aa6eh:
		mov     edx, [___196ad8h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a10c8h]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx]
		mov     [esp+14h], eax
		fild    word [esp+14h]
		xor     eax, eax
		fld     qword [___18216bh]
		fxch    st0, st1
		fmul    st0, st1
		mov     al, [edx+1]
		mov     [esp+14h], eax
		fild    word [esp+14h]
		xor     eax, eax
		fmul    st0, st2
		mov     al, [edx+2]
		mov     [esp+14h], eax
		xor     edi, edi
		fild    word [esp+14h]
		fmulp   st3, st0
		mov     [esp], edi
		fxch    st0, st1
		fstp    dword [esp+8]
		mov     al, [esp]
		fstp    dword [esp+0ch]
		add     al, 0c0h
		fstp    dword [esp+4]
		mov     [esp+18h], al
___2aad5h:
		fild    dword [esp]
		xor     eax, eax
		fld     dword [esp+8]
		mov     al, [esp+18h]
		fmul    st0, st1
		push    eax
		call    near __CHP
		fistp   dword [esp+14h]
		mov     al, [esp+14h]
		fld     dword [esp+10h]
		and     eax, 0ffh
		fmul    st0, st1
		push    eax
		call    near __CHP
		fistp   dword [esp+18h]
		mov     al, [esp+18h]
		fld     dword [esp+0ch]
		and     eax, 0ffh
		fmulp   st1, st0
		push    eax
		call    near __CHP
		fistp   dword [esp+1ch]
		mov     al, [esp+1ch]
		and     eax, 0ffh
		push    eax
		mov     ebp, [esp+10h]
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     dl, [esp+18h]
		inc     ebp
		inc     dl
		mov     [esp], ebp
		mov     [esp+18h], dl
		cmp     ebp, byte 20h
		jl      short ___2aad5h
	;call 	VESA101_PRESENTSCREEN
___2ab46h:
		add     esp, byte 1ch
		pop     ebp
		pop     edi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
