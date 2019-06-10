%include "macros.inc"

    extern  __set_errno__clib3r
    extern  __ioalloc__clib3r
    extern  __qwrite__clib3r
    extern  __get_errno_ptr__clib3r
    extern  __flush__clib3r
    extern  fputc__clib3r
    extern  __flush__clib3r

%include "layout.inc"

section @text

__GDECL(fwrite__clib3r)
		push    esi
		push    edi
		push    ebp
		sub     esp, 0ch
		push    eax
		push    edx
		mov     ebp, ecx
		test    byte [ecx+0ch], 2
		jne     ___65b83h
		mov     eax, 4
		call    __set_errno__clib3r
		or      byte [ecx+0ch], 20h
		xor     eax, eax
		jmp     ___65d17h
___65b83h:
		imul    ebx, edx
		test    ebx, ebx
		jne     ___65b91h
		mov     eax, ebx
		jmp     ___65d17h
___65b91h:
		cmp     dword [ecx+8], 0
		jne     ___65b9eh
		mov     eax, ebp
		call    __ioalloc__clib3r
___65b9eh:
		mov     eax, [ebp+0ch]
		mov     dl, [ebp+0ch]
		xor     esi, esi
		and     eax, 30h
		and     dl, 0cfh
		mov     [esp+0ch], esi
		mov     [esp+8], eax
		mov     [ebp+0ch], dl
		test    dl, 40h
		je      ___65c99h
		mov     [esp+10h], ebx
___65bc4h:
		cmp     dword [ebp+4], 0
		jne     ___65c0ch
		mov     eax, [esp+10h]
		cmp     eax, [ebp+14h]
		jb      ___65c0ch
		mov     ebx, eax
		xor     bl, al
		and     bh, 0feh
		test    ebx, ebx
		jne     ___65be0h
		mov     ebx, eax
___65be0h:
		mov     edx, [esp+4]
		mov     eax, [ebp+10h]
		call    __qwrite__clib3r
		mov     edx, eax
		cmp     eax, 0ffffffffh
		je      ___65c06h
		test    eax, eax
		jne     ___65c6dh
		call    __get_errno_ptr__clib3r
		mov     dword [eax], 0ch
___65c06h:
		or      byte [ebp+0ch], 20h
		jmp     ___65c6dh
___65c0ch:
		mov     edx, [ebp+14h]
		mov     ebx, [ebp+4]
		mov     ecx, [esp+10h]
		sub     edx, ebx
		cmp     edx, ecx
		jbe     ___65c1eh
		mov     edx, ecx
___65c1eh:
		mov     esi, [esp+4]
		mov     ecx, edx
		mov     edi, [ebp+0]
		push    es
		mov     eax, ds
		mov     es, eax
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		pop     es
		mov     edi, [ebp+4]
		add     edi, edx
		mov     bh, [ebp+0dh]
		mov     [ebp+4], edi
		or      bh, 10h
		mov     esi, [ebp+0]
		mov     [ebp+0dh], bh
		add     esi, edx
		mov     eax, [ebp+4]
		mov     ebx, [ebp+14h]
		mov     [ebp+0], esi
		cmp     eax, ebx
		je      ___65c66h
		test    byte [ebp+0dh], 4
		je      ___65c6dh
___65c66h:
		mov     eax, ebp
		call    __flush__clib3r
___65c6dh:
		mov     ecx, [esp+4]
		mov     esi, [esp+0ch]
		mov     edi, [esp+10h]
		add     ecx, edx
		add     esi, edx
		mov     [esp+4], ecx
		mov     [esp+0ch], esi
		sub     edi, edx
		mov     [esp+10h], edi
		je      ___65cf4h
		test    byte [ebp+0ch], 20h
		je      ___65bc4h
		jmp     ___65cf4h
___65c99h:
		mov     cl, [ebp+0dh]
		xor     edi, edi
		test    cl, 4
		je      ___65cb4h
		mov     ch, cl
		and     ch, 0fah
		mov     al, ch
		or      al, 1
		mov     edi, 1
		mov     [ebp+0dh], al
___65cb4h:
		mov     edx, [esp+4]
		xor     eax, eax
		mov     al, [edx]
		inc     edx
		mov     [esp+4], edx
		mov     edx, ebp
		call    fputc__clib3r
		test    byte [ebp+0ch], 30h
		jne     ___65cdbh
		mov     ecx, [esp+0ch]
		inc     ecx
		mov     [esp+0ch], ecx
		cmp     ebx, ecx
		jne     ___65cb4h
___65cdbh:
		test    edi, edi
		je      ___65cf4h
		mov     dh, [ebp+0dh]
		and     dh, 0fah
		mov     bl, dh
		or      bl, 4
		mov     eax, ebp
		mov     [ebp+0dh], bl
		call    __flush__clib3r
___65cf4h:
		test    byte [ebp+0ch], 20h
		je      ___65d00h
		xor     edx, edx
		mov     [esp+0ch], edx
___65d00h:
		mov     eax, [esp+8]
		mov     ecx, [esp]
		mov     ebx, [ebp+0ch]
		xor     edx, edx
		or      ebx, eax
		mov     eax, [esp+0ch]
		mov     [ebp+0ch], ebx
		div     ecx
___65d17h:
		add     esp, 14h
		pop     ebp
		pop     edi
		pop     esi
		retn
