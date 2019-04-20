cpu 386

    extern	_environ
	extern	strnicmp

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global getenv
getenv:
global getenv_
getenv_:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, eax
		mov     esi, [_environ]
		test    esi, esi
		je      short dr@5eb15h
		test    eax, eax
		je      short dr@5eb15h
		mov     edi, eax
		push    es
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		pop     es
		mov     edi, ecx
		jmp     short dr@5eb0fh
dr@5eae9h:
		mov     ebx, edi
		mov     edx, ebp
		mov     eax, ecx
		call    near strnicmp
		test    eax, eax
		jne     short dr@5eb0ch
		mov     al, [ecx+edi*1]
		and     eax, 0ffh
;25:0005eb00
		cmp     eax, byte 3dh
		jne     short dr@5eb0ch
		lea     eax, [edi+1]
		add     eax, ecx
		jmp     short dr@5eb17h
dr@5eb0ch:
		add     esi, byte 4
dr@5eb0fh:
		mov     ecx, [esi]
		test    ecx, ecx
		jne     short dr@5eae9h
dr@5eb15h:
		xor     eax, eax
dr@5eb17h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn