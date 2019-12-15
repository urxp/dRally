cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___19bd58h
	extern	___59db8h
	extern	___243888h
	extern	___243890h
	extern	___59edbh
	extern	___59eddh
	extern	___243884h
	extern	___24388ch
	extern	___59ed8h
	extern	___59ee0h
	extern	inp_
	extern	___59e2ch

section .text

__GDECL(___59cd8h)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		cmp     dword [___19bd58h], byte 0
		jle     near ___59db0h
		call    near ___59db8h
		mov     eax, [___243888h]
		mov     ebx, [___243890h]
		sub     eax, byte 32h
		cmp     eax, ebx
		jle     short ___59d11h
		mov     byte [___59edbh], 1
___59d11h:
		mov     eax, [___243888h]
		mov     ecx, [___243890h]
		add     eax, byte 32h
		cmp     eax, ecx
		jge     short ___59d2ah
		mov     byte [___59eddh], 1
___59d2ah:
		mov     eax, [___243884h]
		mov     esi, [___24388ch]
		sub     eax, byte 32h
		cmp     eax, esi
		jle     short ___59d43h
		mov     byte [___59ed8h], 1
___59d43h:
		mov     eax, [___243884h]
		mov     edi, [___24388ch]
		add     eax, byte 32h
		cmp     eax, edi
		jge     short ___59d5ch
		mov     byte [___59ee0h], 1
___59d5ch:
		mov     eax, 201h
		call    near inp_
		test    al, 10h
		jne     short ___59d71h
		mov     byte [___59e2ch], 1
___59d71h:
		mov     eax, 201h
		call    near inp_
		test    al, 20h
		jne     short ___59d86h
		mov     byte [___59e2ch], 1
___59d86h:
		mov     eax, 201h
		call    near inp_
		test    al, 40h
		jne     short ___59d9bh
		mov     byte [___59e2ch], 1
___59d9bh:
		mov     eax, 201h
		call    near inp_
		test    al, 80h
		jne     short ___59db0h
		mov     byte [___59e2ch], 1
___59db0h:
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
