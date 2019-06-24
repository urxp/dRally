%include "macros.inc"

    extern  __ioalloc__clib3r

%include "layout.inc"

section @text

__GDECL(ungetc)
		push    ebx
		push    esi
		push    ebp
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6dc2dh
		test    byte [edx+0dh], 10h
		je      ___6dbcch
___6dbc5h:
		mov     ebx, 0ffffffffh
		jmp     ___6dc2dh
___6dbcch:
		test    byte [edx+0ch], 1
		je      ___6dbc5h
		cmp     dword [edx+8], byte 0
		jne     ___6dbdfh
		mov     eax, edx
		call    __ioalloc__clib3r
___6dbdfh:
		mov     esi, [edx+4]
		test    esi, esi
		jne     ___6dbfeh
		mov     eax, [edx+8]
		add     eax, [edx+14h]
		dec     eax
		mov     [edx], eax
		or      byte [edx+0ch], 4
		mov     eax, [edx]
		mov     dword [edx+4], 1
		jmp     ___6dc21h
___6dbfeh:
		mov     eax, [edx]
		cmp     eax, [edx+8]
		je      ___6dbc5h
		mov     eax, [edx]
		lea     ebp, [esi+1]
		dec     eax
		mov     [edx+4], ebp
		mov     [edx], eax
		mov     al, [eax]
		and     eax, 0ffh
		cmp     eax, ebx
		je      ___6dc1fh
		or      byte [edx+0ch], 4
___6dc1fh:
		mov     eax, [edx]
___6dc21h:
		mov     [eax], bl
		and     byte [edx+0ch], 0efh
		and     ebx, 0ffh
___6dc2dh:
		mov     eax, ebx
		pop     ebp
		pop     esi
		pop     ebx
		retn    
