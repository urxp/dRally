%include "macros.inc"

    extern  __set_errno__clib3r
    extern  __ioalloc__clib3r
    extern  __flushall
    extern  getche
    extern  __qread

%include "layout.inc"

section @text

__GDECL(fgetc)
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     edx, eax
		test    byte [eax+0ch], 1
		jne     ___659eeh
		mov     eax, 4
		call    __set_errno__clib3r
		mov     bl, [edx+0ch]
		or      bl, 20h
		mov     eax, 0ffffffffh
		mov     [edx+0ch], bl
		jmp     ___65a0eh
___659eeh:
		mov     ebx, [edx+4]
		dec     ebx
		mov     [edx+4], ebx
		test    ebx, ebx
		jge     ___65a02h
		mov     eax, edx
		call    __filbuf
		jmp     ___65a0eh
___65a02h:
		mov     ebx, [edx]
		mov     al, [ebx]
		inc     ebx
		and     eax, 0ffh
		mov     [edx], ebx
___65a0eh:
		test    byte [edx+0ch], 40h
		jne     ___65a4ch
		cmp     eax, byte 0dh
		jne     ___65a39h
		mov     esi, [edx+4]
		dec     esi
		mov     [edx+4], esi
		test    esi, esi
		jge     ___65a2dh
		mov     eax, edx
		call    __filbuf
		jmp     ___65a39h
___65a2dh:
		mov     ebx, [edx]
		mov     al, [ebx]
		inc     ebx
		and     eax, 0ffh
		mov     [edx], ebx
___65a39h:
		cmp     eax, byte 1ah
		jne     ___65a4ch
		mov     cl, [edx+0ch]
		or      cl, 10h
		mov     eax, 0ffffffffh
		mov     [edx+0ch], cl
___65a4ch:
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__filbuf:
		push    ebx
		push    ecx
		push    edx
		mov     edx, eax
		call    __fill_buffer
		test    eax, eax
		jne     ___65a68h
		mov     eax, 0ffffffffh
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___65a68h:
		mov     ebx, [edx+4]
		mov     ecx, [edx]
		dec     ebx
		inc     ecx
		mov     [edx+4], ebx
		mov     [edx], ecx
		mov     al, [ecx-1]
		and     eax, 0ffh
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(__fill_buffer)
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ecx, eax
		cmp     dword [eax+8], byte 0
		jne     ___65a91h
		call    __ioalloc__clib3r
___65a91h:
		mov     ah, [ecx+0dh]
		test    ah, 20h
		je      ___65aa8h
		test    ah, 6
		je      ___65aa8h
		mov     eax, 2000h
		call    __flushall
___65aa8h:
		mov     edx, [ecx+8]
		mov     [ecx], edx
		mov     dh, [ecx+0ch]
		mov     eax, [ecx+0ch]
		and     dh, 0fbh
		and     eax, 2400h
		mov     [ecx+0ch], dh
		cmp     eax, dword 2400h
		jne     ___65ae8h
		mov     ebx, [ecx+10h]
		test    ebx, ebx
		jne     ___65ae8h
		mov     [ecx+4], ebx
		call    getche
		mov     edx, eax
		cmp     eax, byte 0ffffffffh
		je      ___65b05h
		mov     eax, [ecx]
		mov     [eax], dl
		mov     dword [ecx+4], 1
		jmp     ___65b05h
___65ae8h:
		test    byte [ecx+0dh], 4
		je      ___65af5h
		mov     ebx, 1
		jmp     ___65af8h
___65af5h:
		mov     ebx, [ecx+14h]
___65af8h:
		mov     edx, [ecx]
		mov     eax, [ecx+10h]
		call    __qread
		mov     [ecx+4], eax
___65b05h:
		mov     esi, [ecx+4]
		test    esi, esi
		jg      ___65b24h
		jne     ___65b14h
		or      byte [ecx+0ch], 10h
		jmp     ___65b24h
___65b14h:
		mov     bh, [ecx+0ch]
		mov     dword [ecx+4], 0
		or      bh, 20h
		mov     [ecx+0ch], bh
___65b24h:
		mov     eax, [ecx+4]
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
