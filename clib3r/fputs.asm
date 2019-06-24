%include "macros.inc"

    extern  __ioalloc__clib3r
    extern  fputc__clib3r
    extern  __flush__clib3r

%include "layout.inc"

section @text

__GDECL(fputs__clib3r)
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     ecx, eax
		mov     ebx, edx
		cmp     dword [edx+8], byte 0
		jne     ___7f3e8h
		mov     eax, ebx
		call    __ioalloc__clib3r
___7f3e8h:
		mov     ah, [ebx+0dh]
		xor     edi, edi
		test    ah, 4
		je      ___7f404h
		mov     dl, ah
		and     dl, 0f9h
		mov     dh, dl
		or      dh, 2
		mov     edi, 1
		mov     [ebx+0dh], dh
___7f404h:
		mov     ebp, ecx
		xor     esi, esi
___7f408h:
		xor     eax, eax
		mov     al, [ecx]
		test    eax, eax
		je      ___7f41fh
		mov     edx, ebx
		inc     ecx
		call    fputc__clib3r
		cmp     eax, byte 0ffffffffh
		jne     ___7f408h
		mov     esi, eax
___7f41fh:
		test    edi, edi
		je      ___7f43dh
		mov     al, [ebx+0dh]
		and     al, 0f9h
		mov     ah, al
		or      ah, 4
		mov     [ebx+0dh], ah
		test    esi, esi
		jne     ___7f43dh
		mov     eax, ebx
		call    __flush__clib3r
		mov     esi, eax
___7f43dh:
		test    esi, esi
		jne     ___7f445h
		mov     esi, ecx
		sub     esi, ebp
___7f445h:
		mov     eax, esi
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
