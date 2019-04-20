cpu 386

	extern	__ioalloc

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global ungetc
ungetc:
		push    ebx
		push    esi
		push    ebp
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      near dr@6dc2dh
		test    byte [edx+0dh], 10h
		je      short dr@6dbcch
dr@6dbc5h:
		mov     ebx, 0ffffffffh
		jmp     short dr@6dc2dh
dr@6dbcch:
		test    byte [edx+0ch], 1
		je      short dr@6dbc5h
		cmp     dword [edx+8], byte 0
		jne     short dr@6dbdfh
		mov     eax, edx
		call    near __ioalloc
dr@6dbdfh:
		mov     esi, [edx+4]
		test    esi, esi
		jne     short dr@6dbfeh
		mov     eax, [edx+8]
		add     eax, [edx+14h]
		dec     eax
		mov     [edx], eax
		or      byte [edx+0ch], 4
		mov     eax, [edx]
		mov     dword [edx+4], 1
		jmp     short dr@6dc21h
dr@6dbfeh:
		mov     eax, [edx]
		cmp     eax, [edx+8]
		je      short dr@6dbc5h
		mov     eax, [edx]
		lea     ebp, [esi+1]
		dec     eax
		mov     [edx+4], ebp
		mov     [edx], eax
		mov     al, [eax]
		and     eax, 0ffh
		cmp     eax, ebx
		je      short dr@6dc1fh
		or      byte [edx+0ch], 4
dr@6dc1fh:
		mov     eax, [edx]
dr@6dc21h:
		mov     [eax], bl
		and     byte [edx+0ch], 0efh
		and     ebx, 0ffh
dr@6dc2dh:
		mov     eax, ebx
		pop     ebp
		pop     esi
		pop     ebx
		retn