cpu 386

    extern	__ioalloc
    extern	fputc
    extern	__flush

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global fputs
fputs:
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     ecx, eax
		mov     ebx, edx
		cmp     dword [edx+8], byte 0
		jne     short dr@7f3e8h
		mov     eax, ebx
		call    near __ioalloc
dr@7f3e8h:
		mov     ah, [ebx+0dh]
		xor     edi, edi
		test    ah, 4
		je      short dr@7f404h
		mov     dl, ah
		and     dl, 0f9h
		mov     dh, dl
		or      dh, 2
		mov     edi, 1
		mov     [ebx+0dh], dh
dr@7f404h:
		mov     ebp, ecx
		xor     esi, esi
dr@7f408h:
		xor     eax, eax
		mov     al, [ecx]
		test    eax, eax
		je      short dr@7f41fh
		mov     edx, ebx
		inc     ecx
		call    near fputc
		cmp     eax, byte 0ffffffffh
		jne     short dr@7f408h
		mov     esi, eax
dr@7f41fh:
		test    edi, edi
		je      short dr@7f43dh
		mov     al, [ebx+0dh]
		and     al, 0f9h
		mov     ah, al
		or      ah, 4
		mov     [ebx+0dh], ah
		test    esi, esi
		jne     short dr@7f43dh
		mov     eax, ebx
		call    near __flush
		mov     esi, eax
dr@7f43dh:
		test    esi, esi
		jne     short dr@7f445h
		mov     esi, ecx
		sub     esi, ebp
dr@7f445h:
		mov     eax, esi
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn

