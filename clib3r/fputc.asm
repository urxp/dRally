cpu 386

    extern	__set_errno
    extern	__ioalloc
    extern	__flush

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global fputc
fputc:
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     ebx, eax
		test    byte [edx+0ch], 2
		jne     short dr@66010h
		mov     eax, 4
		call    near __set_errno
		or      byte [edx+0ch], 20h
dr@66006h:
		mov     eax, 0ffffffffh
		jmp     near dr@66089h
dr@66010h:
		cmp     dword [edx+8], byte 0
		jne     short dr@6601dh
		mov     eax, edx
		call    near __ioalloc
dr@6601dh:
		mov     ecx, 400h
		cmp     ebx, byte 0ah
		jne     short dr@6605ah
		mov     al, [edx+0ch]
		mov     ecx, 600h
		test    al, 40h
		jne     short dr@6605ah
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
		jne     short dr@6605ah
		mov     eax, edx
		call    near __flush
		test    eax, eax
		jne     short dr@66006h
dr@6605ah:
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
		jne     short dr@6607ah
		cmp     esi, [edx+14h]
		jne     short dr@66085h
dr@6607ah:
		mov     eax, edx
		call    near __flush
		test    eax, eax
		jne     short dr@66006h
dr@66085h:
		xor     eax, eax
		mov     al, bl
dr@66089h:
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn