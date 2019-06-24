%include "macros.inc"

    extern  __chktty
    extern  __CEXT_F(malloc__clib3r)

%include "layout.inc"

section @text

__GDECL(__ioalloc__clib3r)
		push    ecx
		push    edx
		mov     edx, eax
		call    __chktty
		cmp     dword [edx+14h], byte 0
		jne     ___675a5h
		mov     ah, [edx+0dh]
		test    ah, 2
		je      ___67590h
		mov     dword [edx+14h], 86h
		jmp     ___675a5h
___67590h:
		test    ah, 4
		je      ___6759eh
		mov     dword [edx+14h], 1
		jmp     ___675a5h
___6759eh:
		mov     dword [edx+14h], 1000h
___675a5h:
		mov     eax, [edx+14h]
		call    __CEXT_F(malloc__clib3r)
		mov     [edx+8], eax
		test    eax, eax
		jne     ___675d4h
		mov     cl, [edx+0dh]
		mov     dword [edx+14h], 1
		and     cl, 0f8h
		lea     eax, [edx+18h]
		mov     [edx+0dh], cl
		mov     ch, cl
		mov     [edx+8], eax
		or      ch, 4
		mov     [edx+0dh], ch
		jmp     ___675d8h
___675d4h:
		or      byte [edx+0ch], 8
___675d8h:
		mov     eax, [edx+8]
		mov     dword [edx+4], 0
		mov     [edx], eax
		pop     edx
		pop     ecx
		retn    
