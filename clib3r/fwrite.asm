cpu 386

    extern	__set_errno
    extern	__ioalloc
    extern	__qwrite
    extern	__get_errno_ptr
    extern	__flush
    extern	fputc

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global fwrite
fwrite:
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		push    eax
		push    edx
		mov     ebp, ecx
		test    byte [ecx+0ch], 2
		jne     short dr@65b83h
		mov     eax, 4
		call    near __set_errno
		or      byte [ecx+0ch], 20h
		xor     eax, eax
		jmp     near dr@65d17h
dr@65b83h:
		imul    ebx, edx
		test    ebx, ebx
		jne     short dr@65b91h
		mov     eax, ebx
		jmp     near dr@65d17h
dr@65b91h:
		cmp     dword [ecx+8], byte 0
		jne     short dr@65b9eh
		mov     eax, ebp
		call    near __ioalloc
dr@65b9eh:
		mov     eax, [ebp+0ch]
		mov     dl, [ebp+0ch]
		xor     esi, esi
		and     eax, byte 30h
		and     dl, 0cfh
		mov     [esp+0ch], esi
		mov     [esp+8], eax
		mov     [ebp+0ch], dl
		test    dl, 40h
		je      near dr@65c99h
		mov     [esp+10h], ebx
dr@65bc4h:
		cmp     dword [ebp+4], byte 0
		jne     short dr@65c0ch
		mov     eax, [esp+10h]
		cmp     eax, [ebp+14h]
		jb      short dr@65c0ch
		mov     ebx, eax
		xor     bl, al
		and     bh, 0feh
		test    ebx, ebx
		jne     short dr@65be0h
		mov     ebx, eax
dr@65be0h:
		mov     edx, [esp+4]
		mov     eax, [ebp+10h]
		call    near __qwrite
		mov     edx, eax
		cmp     eax, byte 0ffffffffh
		je      short dr@65c06h
		test    eax, eax
		jne     near dr@65c6dh
		call    near __get_errno_ptr
;26:00065c00
		mov     dword [eax], 0ch
dr@65c06h:
		or      byte [ebp+0ch], 20h
		jmp     short dr@65c6dh
dr@65c0ch:
		mov     edx, [ebp+14h]
		mov     ebx, [ebp+4]
		mov     ecx, [esp+10h]
		sub     edx, ebx
		cmp     edx, ecx
		jbe     short dr@65c1eh
		mov     edx, ecx
dr@65c1eh:
		mov     esi, [esp+4]
		mov     ecx, edx
		mov     edi, [ebp+0]
		push    es
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
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
		je      short dr@65c66h
		test    byte [ebp+0dh], 4
		je      short dr@65c6dh
dr@65c66h:
		mov     eax, ebp
		call    near __flush
dr@65c6dh:
		mov     ecx, [esp+4]
		mov     esi, [esp+0ch]
		mov     edi, [esp+10h]
		add     ecx, edx
		add     esi, edx
		mov     [esp+4], ecx
		mov     [esp+0ch], esi
		sub     edi, edx
		mov     [esp+10h], edi
		je      short dr@65cf4h
		test    byte [ebp+0ch], 20h
		je      near dr@65bc4h
		jmp     short dr@65cf4h
dr@65c99h:
		mov     cl, [ebp+0dh]
		xor     edi, edi
		test    cl, 4
		je      short dr@65cb4h
		mov     ch, cl
		and     ch, 0fah
		mov     al, ch
		or      al, 1
		mov     edi, 1
		mov     [ebp+0dh], al
dr@65cb4h:
		mov     edx, [esp+4]
		xor     eax, eax
		mov     al, [edx]
		inc     edx
		mov     [esp+4], edx
		mov     edx, ebp
		call    near fputc
		test    byte [ebp+0ch], 30h
		jne     short dr@65cdbh
		mov     ecx, [esp+0ch]
		inc     ecx
		mov     [esp+0ch], ecx
		cmp     ebx, ecx
		jne     short dr@65cb4h
dr@65cdbh:
		test    edi, edi
		je      short dr@65cf4h
		mov     dh, [ebp+0dh]
		and     dh, 0fah
		mov     bl, dh
		or      bl, 4
		mov     eax, ebp
		mov     [ebp+0dh], bl
		call    near __flush
dr@65cf4h:
		test    byte [ebp+0ch], 20h
		je      short dr@65d00h
		xor     edx, edx
		mov     [esp+0ch], edx
;26:00065d00
dr@65d00h:
		mov     eax, [esp+8]
		mov     ecx, [esp]
		mov     ebx, [ebp+0ch]
		xor     edx, edx
		or      ebx, eax
		mov     eax, [esp+0ch]
		mov     [ebp+0ch], ebx
		div     ecx
dr@65d17h:
		add     esp, byte 14h
		pop     ebp
		pop     edi
		pop     esi
		retn