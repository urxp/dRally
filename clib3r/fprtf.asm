%include "macros.inc"

    extern  __ioalloc__clib3r
    extern  file_putc
	extern 	fputc__clib3r
    extern  __prtf__clib3r
    extern  __flush__clib3r

%include "layout.inc"

section @text

file_putc:
		push    ebx
		mov     ebx, eax
		mov     eax, edx
		mov     edx, [ebx]
		call    fputc__clib3r
		inc     dword [ebx+10h]
		pop     ebx
		retn    
__GDECL(__fprtf__clib3r)
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     esi, eax
		mov     ebp, [eax+0ch]
		mov     ah, [eax+0ch]
		mov     ecx, [esi+8]
		and     ah, 0cfh
		and     ebp, 30h
		mov     [esi+0ch], ah
		test    ecx, ecx
		jne     ___66edbh
		mov     eax, esi
		call    __ioalloc__clib3r
___66edbh:
		mov     cl, [esi+0dh]
		xor     edi, edi
		test    cl, 4
		je      ___66ef6h
		mov     ch, cl
		and     ch, 0fah
		mov     al, ch
		or      al, 1
		mov     edi, 1
		mov     [esi+0dh], al
___66ef6h:
		mov     ecx, file_putc
		mov     eax, esi
		call    __prtf__clib3r
		mov     edx, eax
		test    edi, edi
		je      ___66f1dh
		mov     ah, [esi+0dh]
		and     ah, 0fah
		mov     bl, ah
		or      bl, 4
		mov     eax, esi
		mov     [esi+0dh], bl
		call    __flush__clib3r
___66f1dh:
		test    byte [esi+0ch], 20h
		je      ___66f28h
		mov     edx, 0ffffffffh
___66f28h:
		mov     edi, [esi+0ch]
		or      edi, ebp
		mov     eax, edx
		mov     [esi+0ch], edi
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
