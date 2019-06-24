%include "macros.inc"

    extern  __set_errno__clib3r
    extern  __ioalloc__clib3r
    extern  __flush__clib3r

%include "layout.inc"

section @text

__GDECL(fputc__clib3r)
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     ebx, eax
		test    byte [edx+0ch], 2
		jne     ___66010h
		mov     eax, 4
		call    __set_errno__clib3r
		or      byte [edx+0ch], 20h
___66006h:
		mov     eax, 0ffffffffh
		jmp     ___66089h
___66010h:
		cmp     dword [edx+8], byte 0
		jne     ___6601dh
		mov     eax, edx
		call    __ioalloc__clib3r
___6601dh:
		mov     ecx, 400h
		cmp     ebx, byte 0ah
		jne     ___6605ah
		mov     al, [edx+0ch]
		mov     ecx, 600h
		test    al, 40h
		jne     ___6605ah
		or      byte [edx+0dh], 10h
		mov     eax, [edx]
		mov     byte [eax], 0dh
		mov     esi, [edx]
		inc     esi
		mov     edi, [edx+4]
		mov     [edx], esi
		inc     edi
		mov     ebp, [edx+14h]
		mov     [edx+4], edi
		cmp     edi, ebp
		jne     ___6605ah
		mov     eax, edx
		call    __flush__clib3r
		test    eax, eax
		jne     ___66006h
___6605ah:
		or      byte [edx+0dh], 10h
		mov     eax, [edx]
		mov     [eax], bl
		mov     eax, [edx]
		inc     eax
		mov     esi, [edx+4]
		mov     [edx], eax
		inc     esi
		mov     edi, [edx+0ch]
		mov     [edx+4], esi
		test    ecx, edi
		jne     ___6607ah
		cmp     esi, [edx+14h]
		jne     ___66085h
___6607ah:
		mov     eax, edx
		call    __flush__clib3r
		test    eax, eax
		jne     ___66006h
___66085h:
		xor     eax, eax
		mov     al, bl
___66089h:
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
