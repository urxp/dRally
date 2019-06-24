%include "macros.inc"

    extern  ___iob
    extern  fgetc
    extern  ungetc
    extern  __scnf

%include "layout.inc"

section @text

cget_stdin:
		push    ebx
		push    ecx
		push    edx
		mov     edx, eax
		cmp     dword [___iob+4], byte 0
		jle     ___665c1h
		test    byte [___iob+0ch], 4
		jne     ___665c1h
		mov     ebx, [___iob]
		xor     eax, eax
		mov     al, [ebx]
		cmp     eax, byte 0dh
		je      ___665c1h
		cmp     eax, byte 1ah
		jne     ___665cdh
___665c1h:
		mov     eax, ___iob
		call    fgetc
		jmp     ___665e1h
___665cdh:
		mov     ecx, [___iob+4]
		inc     ebx
		dec     ecx
		mov     [___iob], ebx
		mov     [___iob+4], ecx
___665e1h:
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		jne     ___665ech
		or      byte [edx+10h], 2
___665ech:
		mov     eax, ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
uncget_stdin:
		mov     edx, ___iob
		jmp     ungetc
__GDECL(vscanf)
		push    ebx
		push    ecx
		sub     esp, byte 14h
		mov     ebx, cget_stdin
		mov     ecx, uncget_stdin
		mov     [esp], ebx
		mov     ebx, edx
		mov     edx, eax
		mov     eax, esp
		mov     [esp+4], ecx
		call    __scnf
		add     esp, byte 14h
		pop     ecx
		pop     ebx
		retn    
__GDECL(scanf)
		push    edx
		sub     esp, byte 4
		lea     eax, [esp+10h]
		mov     edx, esp
		mov     [esp], eax
		mov     eax, [esp+0ch]
		call    vscanf
		add     esp, byte 4
		pop     edx
		retn    
