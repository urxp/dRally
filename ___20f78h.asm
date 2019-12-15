cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___199f3ch
	extern	___2ab50h
	extern	___19bd58h
	extern	___59db8h
	extern	___243888h
	extern	___243890h
	extern	___199f3eh
	extern	___199f3fh
	extern	___243884h
	extern	___24388ch
	extern	___199f40h
	extern	___199f41h
	extern	inp_
	extern	___199f42h
	extern	___199f43h
	extern	___199f44h
	extern	___199f45h
	extern	___5994ch
	extern	___199f3dh

section .text

__GDECL(___20f78h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ah, 1
		mov     dl, 0ffh
		xor     ebx, ebx
		mov     [___199f3ch], ah
		mov     ecx, 201h
___20f99h:
		call    near ___2ab50h
		cmp     dword [___19bd58h], byte 0
		jle     near ___2105dh
		call    near ___59db8h
		cmp     ebx, byte 0fh
		jle     near ___2105dh
		mov     eax, [___243888h]
		mov     edi, [___243890h]
		sub     eax, byte 32h
		cmp     eax, edi
		jle     short ___20fd1h
		mov     dl, [___199f3eh]
___20fd1h:
		mov     eax, [___243888h]
		mov     ebp, [___243890h]
		add     eax, byte 32h
		cmp     eax, ebp
		jge     short ___20fe9h
		mov     dl, [___199f3fh]
___20fe9h:
		mov     eax, [___243884h]
		mov     esi, [___24388ch]
		sub     eax, byte 32h
		cmp     eax, esi
		jle     short ___21001h
		mov     dl, [___199f40h]
___21001h:
		mov     eax, [___243884h]
		mov     edi, [___24388ch]
		add     eax, byte 32h
		cmp     eax, edi
		jge     short ___21019h
		mov     dl, [___199f41h]
___21019h:
		mov     eax, ecx
		call    near inp_
		test    al, 10h
		jne     short ___2102ah
		mov     dl, [___199f42h]
___2102ah:
		mov     eax, ecx
		call    near inp_
		test    al, 20h
		jne     short ___2103bh
		mov     dl, [___199f43h]
___2103bh:
		mov     eax, ecx
		call    near inp_
		test    al, 40h
		jne     short ___2104ch
		mov     dl, [___199f44h]
___2104ch:
		mov     eax, ecx
		call    near inp_
		test    al, 80h
		jne     short ___2105dh
		mov     dl, [___199f45h]
___2105dh:
		call    near ___5994ch
		cmp     al, 1ch
		je      short ___2106eh
		cmp     al, 9ch
		je      short ___2106eh
		cmp     al, 1
		jne     short ___21074h
___2106eh:
		mov     dl, [___199f3dh]
___21074h:
		inc     ebx
		cmp     dl, 0ffh
		je      near ___20f99h
		xor     dh, dh
		mov     al, dl
		mov     [___199f3ch], dh
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
