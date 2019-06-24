%include "macros.inc"

    extern  __flush__clib3r
    extern  __set_errno__clib3r
    extern  lseek__clib3r
    extern  tell__clib3r

%include "layout.inc"

section @text

__update_buffer:
		push    ebx
		push    ecx
		push    esi
		push    edi
		and     byte [edx+0ch], 0efh
		cmp     eax, [edx+4]
		jg      ___6460dh
		mov     ebx, [edx+8]
		mov     ecx, [edx]
		sub     ebx, ecx
		cmp     eax, ebx
		jl      ___6460dh
		mov     edi, [edx+4]
		lea     esi, [ecx+eax]
		sub     edi, eax
		mov     [edx], esi
		xor     eax, eax
		mov     [edx+4], edi
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
___6460dh:
		mov     eax, [edx+8]
		mov     dword [edx+4], 0
		mov     [edx], eax
		mov     eax, 1
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
__GDECL(__CEXT_F(fseek__clib3r))
		push    ecx
		push    esi
		push    edi
		mov     ecx, eax
		mov     esi, edx
		test    byte [eax+0ch], 6
		je      ___6468bh
		test    byte [ecx+0dh], 10h
		je      ___6465ch
		mov     eax, ecx
		call    __flush__clib3r
		test    eax, eax
		je      ___64670h
		test    ebx, ebx
		jne     ___64653h
		test    esi, esi
		jge     ___64653h
___64649h:
		mov     eax, 9
		call    __set_errno__clib3r
___64653h:
		mov     eax, 0ffffffffh
		pop     edi
		pop     esi
		pop     ecx
		retn    
___6465ch:
		cmp     ebx, byte 1
		jne     ___64664h
		sub     esi, [ecx+4]
___64664h:
		mov     eax, [ecx+8]
		mov     dword [ecx+4], 0
		mov     [ecx], eax
___64670h:
		and     byte [ecx+0ch], 0ebh
		mov     edx, esi
		mov     eax, [ecx+10h]
		call    lseek__clib3r
		cmp     eax, byte 0ffffffffh
		jne     ___64719h
		pop     edi
		pop     esi
		pop     ecx
		retn    
___6468bh:
		cmp     ebx, byte 1
		jb      ___64699h
		jbe     ___6469fh
		cmp     ebx, byte 2
		je      ___646f5h
		jmp     ___64649h
___64699h:
		test    ebx, ebx
		je      ___646c4h
		jmp     ___64649h
___6469fh:
		mov     edx, ecx
		mov     eax, esi
		mov     edi, [ecx+4]
		call    __update_buffer
		test    eax, eax
		je      ___64719h
		mov     edx, esi
		mov     eax, [ecx+10h]
		sub     edx, edi
		call    lseek__clib3r
		cmp     eax, byte 0ffffffffh
		jne     ___64719h
		pop     edi
		pop     esi
		pop     ecx
		retn    
___646c4h:
		mov     eax, [ecx+10h]
		call    tell__clib3r
		mov     edx, [ecx+4]
		mov     edi, esi
		sub     eax, edx
		sub     edi, eax
		mov     edx, ecx
		mov     eax, edi
		call    __update_buffer
		test    eax, eax
		je      ___64719h
		mov     edx, esi
		mov     eax, [ecx+10h]
		call    lseek__clib3r
		cmp     eax, byte 0ffffffffh
		jne     ___64719h
		pop     edi
		pop     esi
		pop     ecx
		retn    
___646f5h:
		mov     eax, [ecx+8]
		mov     dl, [ecx+0ch]
		mov     [ecx], eax
		and     dl, 0efh
		mov     eax, [ecx+10h]
		mov     [ecx+0ch], dl
		mov     edx, esi
		mov     dword [ecx+4], 0
		call    lseek__clib3r
		cmp     eax, byte 0ffffffffh
		je      ___6471bh
___64719h:
		xor     eax, eax
___6471bh:
		pop     edi
		pop     esi
		pop     ecx
		retn    
