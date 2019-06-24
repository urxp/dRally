%include "macros.inc"

    extern  __purgefp
    extern  ___iob
    extern  ___OpenStreams
    extern  __shutdown_stream

%include "layout.inc"

section @text


__GDECL(__full_io_exit)
		xor     eax, eax
		call    docloseall
		jmp     __purgefp
fcloseall:
		mov     eax, 5
docloseall:
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     edx, eax
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     esi, ___iob
		add     eax, eax
		xor     ebx, ebx
		add     esi, eax
		mov     eax, [___OpenStreams]
		jmp     ___6ed90h
___6ed65h:
		mov     ecx, [eax]
		mov     eax, [eax+4]
		mov     edx, 1
		test    byte [eax+0dh], 40h
		jne     ___6ed88h
		test    byte [eax+0dh], 8
		jne     ___6ed88h
		cmp     eax, esi
		jb      ___6ed8eh
		cmp     eax, ___iob+82h
		jae     ___6ed88h
		xor     edx, edx
___6ed88h:
		call    __shutdown_stream
		inc     ebx
___6ed8eh:
		mov     eax, ecx
___6ed90h:
		test    eax, eax
		jne     ___6ed65h
		mov     eax, ebx
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
