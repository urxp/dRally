cpu 386

    extern	__chktty
    extern	malloc

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __ioalloc
__ioalloc:
		push    ecx
		push    edx
		mov     edx, eax
		call    near __chktty
		cmp     dword [edx+14h], byte 0
		jne     short dr@675a5h
		mov     ah, [edx+0dh]
		test    ah, 2
		je      short dr@67590h
		mov     dword [edx+14h], 86h
		jmp     short dr@675a5h
dr@67590h:
		test    ah, 4
		je      short dr@6759eh
		mov     dword [edx+14h], 1
		jmp     short dr@675a5h
dr@6759eh:
		mov     dword [edx+14h], 1000h
dr@675a5h:
		mov     eax, [edx+14h]
		call    near malloc
		mov     [edx+8], eax
		test    eax, eax
		jne     short dr@675d4h
		mov     cl, [edx+0dh]
		mov     dword [edx+14h], 1
		and     cl, 0f8h
		lea     eax, [edx+18h]
		mov     [edx+0dh], cl
		mov     ch, cl
		mov     [edx+8], eax
		or      ch, 4
		mov     [edx+0dh], ch
		jmp     short dr@675d8h
dr@675d4h:
		or      byte [edx+0ch], 8
dr@675d8h:
		mov     eax, [edx+8]
		mov     dword [edx+4], 0
		mov     [edx], eax
		pop     edx
		pop     ecx
		retn