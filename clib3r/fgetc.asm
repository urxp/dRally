cpu 386

    extern	__set_errno
    extern	__ioalloc
    extern	__flushall
    extern	getche
    extern	__qread

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global fgetc
fgetc:
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     edx, eax
		test    byte [eax+0ch], 1
		jne     short dr@659eeh
		mov     eax, 4
		call    near __set_errno
		mov     bl, [edx+0ch]
		or      bl, 20h
		mov     eax, 0ffffffffh
		mov     [edx+0ch], bl
		jmp     short dr@65a0eh
dr@659eeh:
		mov     ebx, [edx+4]
		dec     ebx
		mov     [edx+4], ebx
		test    ebx, ebx
		jge     short dr@65a02h
		mov     eax, edx
		call    near __filbuf
		jmp     short dr@65a0eh
dr@65a02h:
		mov     ebx, [edx]
		mov     al, [ebx]
		inc     ebx
		and     eax, 0ffh
		mov     [edx], ebx
dr@65a0eh:
		test    byte [edx+0ch], 40h
		jne     short dr@65a4ch
		cmp     eax, byte 0dh
		jne     short dr@65a39h
		mov     esi, [edx+4]
		dec     esi
		mov     [edx+4], esi
		test    esi, esi
		jge     short dr@65a2dh
		mov     eax, edx
		call    near __filbuf
		jmp     short dr@65a39h
dr@65a2dh:
		mov     ebx, [edx]
		mov     al, [ebx]
		inc     ebx
		and     eax, 0ffh
		mov     [edx], ebx
dr@65a39h:
		cmp     eax, byte 1ah
		jne     short dr@65a4ch
		mov     cl, [edx+0ch]
		or      cl, 10h
		mov     eax, 0ffffffffh
		mov     [edx+0ch], cl
dr@65a4ch:
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn   
global __filbuf 
__filbuf:
		push    ebx
		push    ecx
		push    edx
		mov     edx, eax
		call    near __fill_buffer
		test    eax, eax
		jne     short dr@65a68h
		mov     eax, 0ffffffffh
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@65a68h:
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
global __fill_buffer
__fill_buffer:
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ecx, eax
		cmp     dword [eax+8], byte 0
		jne     short dr@65a91h
		call    near __ioalloc
dr@65a91h:
		mov     ah, [ecx+0dh]
		test    ah, 20h
		je      short dr@65aa8h
		test    ah, 6
		je      short dr@65aa8h
		mov     eax, 2000h
		call    near __flushall
dr@65aa8h:
		mov     edx, [ecx+8]
		mov     [ecx], edx
		mov     dh, [ecx+0ch]
		mov     eax, [ecx+0ch]
		and     dh, 0fbh
		and     eax, 2400h
		mov     [ecx+0ch], dh
		cmp     eax, dword 2400h
		jne     short dr@65ae8h
		mov     ebx, [ecx+10h]
		test    ebx, ebx
		jne     short dr@65ae8h
		mov     [ecx+4], ebx
		call    near getche
		mov     edx, eax
		cmp     eax, byte 0ffffffffh
		je      short dr@65b05h
		mov     eax, [ecx]
		mov     [eax], dl
		mov     dword [ecx+4], 1
		jmp     short dr@65b05h
dr@65ae8h:
		test    byte [ecx+0dh], 4
		je      short dr@65af5h
		mov     ebx, 1
		jmp     short dr@65af8h
dr@65af5h:
		mov     ebx, [ecx+14h]
dr@65af8h:
		mov     edx, [ecx]
		mov     eax, [ecx+10h]
		call    near __qread
		mov     [ecx+4], eax
dr@65b05h:
		mov     esi, [ecx+4]
		test    esi, esi
		jg      short dr@65b24h
		jne     short dr@65b14h
		or      byte [ecx+0ch], 10h
		jmp     short dr@65b24h
dr@65b14h:
		mov     bh, [ecx+0ch]
		mov     dword [ecx+4], 0
		or      bh, 20h
		mov     [ecx+0ch], bh
dr@65b24h:
		mov     eax, [ecx+4]
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn