cpu 386

    extern	__purgefp
    extern	___iob
    extern	___OpenStreams
    extern	__shutdown_stream

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __full_io_exit
__full_io_exit:
		xor     eax, eax
		call    near docloseall
		jmp     near __purgefp
global fcloseall
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
		jmp     short dr@6ed90h
dr@6ed65h:
		mov     ecx, [eax]
		mov     eax, [eax+4]
		mov     edx, 1
		test    byte [eax+0dh], 40h
		jne     short dr@6ed88h
		test    byte [eax+0dh], 8
		jne     short dr@6ed88h
		cmp     eax, esi
		jb      short dr@6ed8eh
		cmp     eax, ___iob+82h
		jae     short dr@6ed88h
		xor     edx, edx
dr@6ed88h:
		call    near __shutdown_stream
		inc     ebx
dr@6ed8eh:
		mov     eax, ecx
dr@6ed90h:
		test    eax, eax
		jne     short dr@6ed65h
		mov     eax, ebx
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn