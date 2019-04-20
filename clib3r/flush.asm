cpu 386

    extern	__qwrite
    extern	__set_errno
    extern	lseek

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __flush
__flush:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ecx, eax
		mov     ah, [eax+0dh]
		xor     ebp, ebp
		test    ah, 10h
		je      near dr@67698h
		mov     bh, [ecx+0dh]
		and     bh, 0efh
		mov     al, [ecx+0ch]
		mov     [ecx+0dh], bh
		test    al, 2
		je      near dr@676d0h
		mov     ebx, [ecx+8]
		test    ebx, ebx
		je      near dr@676d0h
		mov     edi, ebx
		mov     esi, [ecx+4]
dr@67646h:
		test    esi, esi
		je      near dr@676d0h
		test    ebp, ebp
		jne     near dr@676d0h
		mov     ebx, esi
		mov     edx, edi
		mov     eax, [ecx+10h]
		call    near __qwrite
		mov     edx, eax
		cmp     eax, byte 0ffffffffh
		jne     short dr@67676h
		mov     bl, [ecx+0ch]
		or      bl, 20h
		mov     ebp, eax
		mov     [ecx+0ch], bl
		jmp     short dr@67692h
dr@67676h:
		test    eax, eax
		jne     short dr@67692h
		mov     eax, 0ch
		call    near __set_errno
		mov     ah, [ecx+0ch]
		or      ah, 20h
		mov     ebp, 0ffffffffh
		mov     [ecx+0ch], ah
dr@67692h:
		add     edi, edx
		sub     esi, edx
		jmp     short dr@67646h
dr@67698h:
		cmp     dword [ecx+8], byte 0
		je      short dr@676d0h
		and     byte [ecx+0ch], 0efh
		test    byte [ecx+0dh], 20h
		jne     short dr@676d0h
		mov     eax, [ecx+4]
		test    eax, eax
		je      short dr@676c0h
		mov     edx, eax
		mov     ebx, 1
		neg     edx
		mov     eax, [ecx+10h]
		call    near lseek
dr@676c0h:
		cmp     eax, byte 0ffffffffh
		jne     short dr@676d0h
		mov     bl, [ecx+0ch]
		or      bl, 20h
		mov     ebp, eax
		mov     [ecx+0ch], bl
dr@676d0h:
		mov     eax, [ecx+8]
		mov     dword [ecx+4], 0
		mov     [ecx], eax
		mov     eax, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn