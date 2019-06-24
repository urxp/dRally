%include "macros.inc"

    extern  __math1err

%include "layout.inc"

section @text

__GDECL(__log87_err)
		push    ebp
		mov     ebp, esp
		push    eax
		push    ebx
		push    edx
		mov     eax, [ebp+10h]
		and     eax, byte 1fh
		cmp     eax, byte 8
		je      ___7e35eh
		mov     edx, [ebp+0ch]
		mov     ebx, [ebp+8]
		test    edx, 7fffffffh
		jne     ___7e35eh
		test    ebx, ebx
		jne     ___7e35eh
		or      ax, 1080h
		jmp     ___7e362h
___7e35eh:
		or      ax, 1040h
___7e362h:
		lea     edx, [ebp+8]
		call    __math1err
		pop     edx
		pop     ebx
		pop     eax
		pop     ebp
		ret     0ch
