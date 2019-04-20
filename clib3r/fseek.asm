cpu 386

    extern	__flush
    extern	__set_errno
    extern	lseek
    extern	tell

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

__update_buffer:
		push    ebx
		push    ecx
		push    esi
		push    edi
		and     byte [edx+0ch], 0efh
		cmp     eax, [edx+4]
		jg      short dr@6460dh
		mov     ebx, [edx+8]
		mov     ecx, [edx]
		sub     ebx, ecx
		cmp     eax, ebx
		jl      short dr@6460dh
		mov     edi, [edx+4]
		lea     esi, [ecx+eax*1]
		sub     edi, eax
		mov     [edx], esi
		xor     eax, eax
		mov     [edx+4], edi
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
dr@6460dh:
		mov     eax, [edx+8]
		mov     dword [edx+4], 0
		mov     [edx], eax
		mov     eax, 1
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
global fseek
fseek:
		push    ecx
		push    esi
		push    edi
		mov     ecx, eax
		mov     esi, edx
		test    byte [eax+0ch], 6
		je      short dr@6468bh
		test    byte [ecx+0dh], 10h
		je      short dr@6465ch
		mov     eax, ecx
		call    near __flush
		test    eax, eax
		je      short dr@64670h
		test    ebx, ebx
		jne     short dr@64653h
		test    esi, esi
		jge     short dr@64653h
dr@64649h:
		mov     eax, 9
		call    near __set_errno
dr@64653h:
		mov     eax, 0ffffffffh
		pop     edi
		pop     esi
		pop     ecx
		retn    
dr@6465ch:
		cmp     ebx, byte 1
		jne     short dr@64664h
		sub     esi, [ecx+4]
dr@64664h:
		mov     eax, [ecx+8]
		mov     dword [ecx+4], 0
		mov     [ecx], eax
dr@64670h:
		and     byte [ecx+0ch], 0ebh
		mov     edx, esi
		mov     eax, [ecx+10h]
		call    near lseek
		cmp     eax, byte 0ffffffffh
		jne     near dr@64719h
		pop     edi
		pop     esi
		pop     ecx
		retn    
dr@6468bh:
		cmp     ebx, byte 1
		jb      short dr@64699h
		jbe     short dr@6469fh
		cmp     ebx, byte 2
		je      short dr@646f5h
		jmp     short dr@64649h
dr@64699h:
		test    ebx, ebx
		je      short dr@646c4h
		jmp     short dr@64649h
dr@6469fh:
		mov     edx, ecx
		mov     eax, esi
		mov     edi, [ecx+4]
		call    near __update_buffer
		test    eax, eax
		je      short dr@64719h
		mov     edx, esi
		mov     eax, [ecx+10h]
		sub     edx, edi
		call    near lseek
		cmp     eax, byte 0ffffffffh
		jne     short dr@64719h
		pop     edi
		pop     esi
		pop     ecx
		retn    
dr@646c4h:
		mov     eax, [ecx+10h]
		call    near tell
		mov     edx, [ecx+4]
		mov     edi, esi
		sub     eax, edx
		sub     edi, eax
		mov     edx, ecx
		mov     eax, edi
		call    near __update_buffer
		test    eax, eax
		je      short dr@64719h
		mov     edx, esi
		mov     eax, [ecx+10h]
		call    near lseek
		cmp     eax, byte 0ffffffffh
		jne     short dr@64719h
		pop     edi
		pop     esi
		pop     ecx
		retn    
dr@646f5h:
		mov     eax, [ecx+8]
		mov     dl, [ecx+0ch]
		mov     [ecx], eax
		and     dl, 0efh
		mov     eax, [ecx+10h]
		mov     [ecx+0ch], dl
		mov     edx, esi
		mov     dword [ecx+4], 0
		call    near lseek
		cmp     eax, byte 0ffffffffh
		je      short dr@6471bh
dr@64719h:
		xor     eax, eax
dr@6471bh:
		pop     edi
		pop     esi
		pop     ecx
		retn