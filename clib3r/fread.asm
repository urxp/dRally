cpu 386

    extern	__set_errno
    extern	__ioalloc
    extern	__qread
    extern	__fill_buffer

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global fread
fread:
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		push    eax
		push    edx
		mov     ebp, ecx
		test    byte [ecx+0ch], 1
		jne     short dr@6421ch
		mov     eax, 4
		call    near __set_errno
		mov     dh, [ecx+0ch]
		or      dh, 20h
		xor     eax, eax
		mov     [ecx+0ch], dh
		jmp     near dr@643c6h
dr@6421ch:
		imul    ebx, edx
		test    ebx, ebx
		jne     short dr@6422ah
		mov     eax, ebx
		jmp     near dr@643c6h
dr@6422ah:
		cmp     dword [ecx+8], byte 0
		jne     short dr@64237h
		mov     eax, ebp
		call    near __ioalloc
dr@64237h:
		xor     esi, esi
		mov     dl, [ebp+0ch]
		mov     [esp+8], esi
		test    dl, 40h
		je      near dr@64347h
		mov     [esp+0ch], ebx
dr@6424dh:
		mov     edx, [ebp+4]
		test    edx, edx
		je      short dr@642a8h
		mov     ebx, [esp+0ch]
		cmp     edx, ebx
		jbe     short dr@6425eh
		mov     edx, ebx
dr@6425eh:
		mov     edi, [esp+4]
		mov     ecx, edx
		mov     esi, [ebp+0]
		mov     ebx, [esp+8]
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
		mov     eax, [esp+0ch]
		mov     ecx, [ebp+0]
		lea     esi, [edi+edx*1]
		add     ebx, edx
		mov     [esp+4], esi
		mov     [esp+8], ebx
		mov     edi, [ebp+4]
		add     ecx, edx
		sub     eax, edx
		sub     edi, edx
		mov     [ebp+0], ecx
		mov     [esp+0ch], eax
		mov     [ebp+4], edi
dr@642a8h:
		mov     ecx, [esp+0ch]
		test    ecx, ecx
		je      near dr@643bbh
		cmp     ecx, [ebp+14h]
		jae     short dr@642c3h
		test    byte [ebp+0dh], 4
		je      near dr@64333h
dr@642c3h:
		mov     dword [ebp+4], 0
		mov     ebx, [esp+0ch]
		mov     eax, [ebp+8]
		mov     cl, [ebp+0dh]
		mov     [ebp+0], eax
		test    cl, 4
		jne     short dr@642e9h
		cmp     ebx, 200h
		jbe     short dr@642e9h
		xor     bl, bl
		and     bh, 0feh
dr@642e9h:
		mov     edx, [esp+4]
		mov     eax, [ebp+10h]
		call    near __qread
		cmp     eax, byte 0ffffffffh
		jne     short dr@64303h
		or      byte [ebp+0ch], 20h
		jmp     near dr@643bbh
dr@64303h:
		test    eax, eax
		jne     short dr@64310h
dr@64307h:
		or      byte [ebp+0ch], 10h
		jmp     near dr@643bbh
dr@64310h:
		mov     edx, [esp+4]
		mov     ebx, [esp+0ch]
		mov     ecx, [esp+8]
		add     edx, eax
		sub     ebx, eax
		add     ecx, eax
		mov     [esp+4], edx
		mov     [esp+0ch], ebx
		mov     [esp+8], ecx
		jmp     near dr@6424dh
dr@64333h:
		mov     eax, ebp
		call    near __fill_buffer
		test    eax, eax
		je      near dr@643bbh
		jmp     near dr@6424dh
dr@64347h:
		mov     edx, [esp+4]
		add     ebx, edx
dr@6434dh:
		cmp     dword [ebp+4], byte 0
		jne     short dr@6435eh
		mov     eax, ebp
		call    near __fill_buffer
		test    eax, eax
		je      short dr@643bbh
dr@6435eh:
		mov     ecx, [ebp+4]
		mov     eax, [ebp+0]
		dec     ecx
		lea     esi, [eax+1]
		mov     [ebp+4], ecx
		mov     [ebp+0], esi
		mov     al, [eax]
		and     eax, 0ffh
		cmp     eax, byte 0dh
		jne     short dr@643a2h
		cmp     dword [ebp+4], byte 0
		jne     short dr@6438bh
		mov     eax, ebp
		call    near __fill_buffer
		test    eax, eax
		je      short dr@643bbh
dr@6438bh:
		mov     edi, [ebp+4]
		mov     eax, [ebp+0]
		dec     edi
		lea     esi, [eax+1]
		mov     [ebp+4], edi
		mov     [ebp+0], esi
		mov     al, [eax]
		and     eax, 0ffh
dr@643a2h:
		cmp     eax, byte 1ah
		je      near dr@64307h
		mov     [edx], al
		mov     eax, [esp+8]
		inc     eax
		inc     edx
		mov     [esp+8], eax
		cmp     edx, ebx
		jne     short dr@6434dh
dr@643bbh:
		mov     eax, [esp+8]
		mov     esi, [esp]
		xor     edx, edx
		div     esi
dr@643c6h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		retn