%include "macros.inc"

    extern  _environ
    extern  __Envseg
    extern  __Envptr
    extern  __CEXT_F(malloc__clib3r)
    extern  ___env_mask
    extern  __CEXT_F(memset__clib3r)
    extern  __CEXT_F(free__clib3r)

%include "layout.inc"

section @text

__GDECL(__setenvp)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    es
		push    fs
		cmp     dword [_environ], byte 0
		jne     ___6ec40h
		;mov     fs, [__Envseg]
		db	8eh,25h
		dd	__Envseg
		xor     ecx, ecx
		xor     dl, dl
		;mov     eax, fs
		db	8ch,0e0h
		mov     edi, [__Envptr]
		;mov     es, eax
		db	8eh,0c0h
		mov     eax, edi
___6eba0h:
		cmp     dl, [es:eax]
		je      ___6ebb8h
___6eba5h:
		mov     dh, [es:eax]
		lea     ebx, [eax+1]
		cmp     dl, dh
		je      ___6ebb3h
		mov     eax, ebx
		jmp     ___6eba5h
___6ebb3h:
		inc     ecx
		mov     eax, ebx
		jmp     ___6eba0h
___6ebb8h:
		sub     eax, edi
		jne     ___6ebc1h
		mov     eax, 1
___6ebc1h:
		call    __CEXT_F(malloc__clib3r)
		mov     edx, eax
		mov     ebx, eax
		test    eax, eax
		je      ___6ec40h
		mov     eax, ecx
		shl     eax, 2
		add     eax, byte 4
		add     eax, ecx
		call    __CEXT_F(malloc__clib3r)
		test    eax, eax
		je      ___6ec39h
		mov     [_environ], eax
		xor     esi, esi
		;mov     eax, fs
		db	8ch,0e0h
		xor     ecx, ecx
		;mov     es, eax
		db	8eh,0c0h
		mov     eax, edi
___6ebf4h:
		cmp     byte [es:eax], 0
		je      ___6ec14h
		mov     edx, [_environ]
		mov     [ecx+edx], ebx
___6ec03h:
		mov     dl, [es:eax]
		inc     eax
		mov     [ebx], dl
		inc     ebx
		test    dl, dl
		jne     ___6ec03h
		add     ecx, byte 4
		inc     esi
		jmp     ___6ebf4h
___6ec14h:
		mov     edx, [_environ]
		mov     dword [ecx+edx], 0
		add     ecx, byte 4
		add     edx, ecx
		mov     ebx, esi
		mov     [___env_mask], edx
		mov     eax, edx
		xor     edx, edx
		call    __CEXT_F(memset__clib3r)
		jmp     ___6ec40h
___6ec39h:
		mov     eax, edx
		call    __CEXT_F(free__clib3r)
___6ec40h:
		pop     fs
		pop     es
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
