%include "macros.inc"

    extern  ___OpenStreams
    extern  __freefp
    extern  getpid
    extern  __flush__clib3r
    extern  ftell__clib3r
    extern  lseek__clib3r
    extern  __close
    extern  __CEXT_F(free__clib3r);
    extern  remove

%include "layout.inc"

section @text

__GDECL(__CEXT_F(fclose__clib3r))
		push    ebx
		push    edx
		mov     ebx, eax
		mov     eax, [___OpenStreams]
___643d6h:
		test    eax, eax
		jne     ___643e2h
		mov     eax, 0ffffffffh
		pop     edx
		pop     ebx
		retn    
___643e2h:
		cmp     ebx, [eax+4]
		je      ___643ebh
		mov     eax, [eax]
		jmp     ___643d6h
___643ebh:
		mov     edx, 1
		mov     eax, ebx
		call    __shutdown_stream
		pop     edx
		pop     ebx
		retn    
__GDECL(__shutdown_stream)
		push    ebx
		mov     ebx, eax
		call    __doclose
		mov     edx, eax
		mov     eax, ebx
		call    __freefp
		mov     eax, edx
		pop     ebx
		retn    
__hex:
		add     eax, byte 30h
		cmp     eax, byte 39h
		jle     ___6441ah
		add     eax, byte 27h
___6441ah:
		retn    
__MkTmpFile:
		push    ebx
		push    ecx
		push    esi
		push    edi
		mov     ecx, eax
		mov     edi, edx
		call    getpid
		mov     ebx, eax
		lea     edx, [ecx+4]
		mov     byte [ecx], 74h
		mov     esi, ecx
___64432h:
		mov     eax, ebx
		and     eax, byte 0fh
		call    __hex
		mov     [edx], al
		dec     edx
		shr     ebx, 4
		cmp     edx, esi
		jne     ___64432h
		mov     eax, edi
		sar     eax, 4
		and     eax, byte 0fh
		mov     byte [ecx+5], 5fh
		call    __hex
		mov     [ecx+6], al
		mov     eax, edi
		and     eax, byte 0fh
		call    __hex
		mov     byte [ecx+8], 2eh
		mov     byte [ecx+9], 74h
		mov     byte [ecx+0ah], 6dh
		mov     byte [ecx+0bh], 70h
		mov     byte [ecx+0ch], 0
		mov     [ecx+7], al
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
__GDECL(__doclose)
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     ecx, eax
		mov     edi, edx
		cmp     dword [eax+0ch], byte 0
		jne     ___6449ch
		mov     eax, 0ffffffffh
		jmp     ___64507h
___6449ch:
		mov     ah, [eax+0dh]
		xor     esi, esi
		test    ah, 10h
		je      ___644afh
		mov     eax, ecx
		call    __flush__clib3r
		mov     esi, eax
___644afh:
		mov     eax, ecx
		call    ftell__clib3r
		cmp     eax, byte 0ffffffffh
		je      ___644c9h
		mov     edx, eax
		mov     ebp, [ecx+10h]
		xor     ebx, ebx
		mov     eax, ebp
		call    lseek__clib3r
___644c9h:
		test    edi, edi
		je      ___644d7h
		mov     eax, [ecx+10h]
		call    __close
		or      esi, eax
___644d7h:
		test    byte [ecx+0ch], 8
		je      ___644ech
		mov     eax, [ecx+8]
		call    __CEXT_F(free__clib3r)
		mov     dword [ecx+8], 0
___644ech:
		test    byte [ecx+0dh], 8
		je      ___64505h
		xor     edx, edx
		mov     eax, esp
		mov     dl, [ecx+19h]
		call    __MkTmpFile
		mov     eax, esp
		call    remove
___64505h:
		mov     eax, esi
___64507h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
