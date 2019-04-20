cpu 386

    extern	_environ
    extern	__Envptr
    extern	_nmalloc
    extern	___env_mask
    extern	memset
    extern	_nfree
	
SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __setenvp_
__setenvp_:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    es
		push    fs
		cmp     dword [_environ], byte 0
		jne     near dr@6ec40h
		;mov     fs, [__Envptr+4]
		db	8eh,25h
		dd	__Envptr+4
		xor     ecx, ecx
		xor     dl, dl
		;mov     eax, fs
		db	8ch,0e0h
		mov     edi, [__Envptr]
		;mov     es, eax
		db	8eh,0c0h
		mov     eax, edi
dr@6eba0h:
		cmp     dl, [es:eax]
		je      short dr@6ebb8h
dr@6eba5h:
		mov     dh, [es:eax]
		lea     ebx, [eax+1]
		cmp     dl, dh
		je      short dr@6ebb3h
		mov     eax, ebx
		jmp     short dr@6eba5h
dr@6ebb3h:
		inc     ecx
		mov     eax, ebx
		jmp     short dr@6eba0h
dr@6ebb8h:
		sub     eax, edi
		jne     short dr@6ebc1h
		mov     eax, 1
dr@6ebc1h:
		call    near _nmalloc
		mov     edx, eax
		mov     ebx, eax
		test    eax, eax
		je      near dr@6ec40h
		mov     eax, ecx
		shl     eax, 2
		add     eax, byte 4
		add     eax, ecx
		call    near _nmalloc
		test    eax, eax
		je      short dr@6ec39h
		mov     [_environ], eax
		xor     esi, esi
		;mov     eax, fs
		db	8ch,0e0h
		xor     ecx, ecx
		;mov     es, eax
		db	8eh,0c0h
		mov     eax, edi
dr@6ebf4h:
		cmp     byte [es:eax], 0
		je      short dr@6ec14h
		mov     edx, [_environ]
;30:0006ec00
		mov     [ecx+edx*1], ebx
dr@6ec03h:
		mov     dl, [es:eax]
		inc     eax
		mov     [ebx], dl
		inc     ebx
		test    dl, dl
		jne     short dr@6ec03h
		add     ecx, byte 4
		inc     esi
		jmp     short dr@6ebf4h
dr@6ec14h:
		mov     edx, [_environ]
		mov     dword [ecx+edx*1], 0
		add     ecx, byte 4
		add     edx, ecx
		mov     ebx, esi
		mov     [___env_mask], edx
		mov     eax, edx
		xor     edx, edx
		call    near memset
		jmp     short dr@6ec40h
dr@6ec39h:
		mov     eax, edx
		call    near _nfree
dr@6ec40h:
		pop     fs
		pop     es
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn