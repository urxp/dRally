
    extern  _environ
    extern  strnicmp__clib3r

%include "layout.inc"

section @text

global getenv__clib3r
getenv__clib3r:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, eax
		mov     esi, [_environ]
		test    esi, esi
		je      ___5eb15h
		test    eax, eax
		je      ___5eb15h
		mov     edi, eax
		push    es
		mov     eax, ds
		mov     es, eax
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		pop     es
		mov     edi, ecx
		jmp     ___5eb0fh
___5eae9h:
		mov     ebx, edi
		mov     edx, ebp
		mov     eax, ecx
		call    strnicmp__clib3r
		test    eax, eax
		jne     ___5eb0ch
		mov     al, [ecx+edi]
		and     eax, 0ffh
		cmp     eax, 3dh
		jne     ___5eb0ch
		lea     eax, [edi+1]
		add     eax, ecx
		jmp     ___5eb17h
___5eb0ch:
		add     esi, 4
___5eb0fh:
		mov     ecx, [esi]
		test    ecx, ecx
		jne     ___5eae9h
___5eb15h:
		xor     eax, eax
___5eb17h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
