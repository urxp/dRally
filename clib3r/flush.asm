%include "macros.inc"

    extern  __qwrite__clib3r
    extern  __set_errno__clib3r
    extern  lseek__clib3r

%include "layout.inc"

section @text

__GDECL(__flush__clib3r)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ecx, eax
		mov     ah, [eax+0dh]
		xor     ebp, ebp
		test    ah, 10h
		je      ___67698h
		mov     bh, [ecx+0dh]
		and     bh, 0efh
		mov     al, [ecx+0ch]
		mov     [ecx+0dh], bh
		test    al, 2
		je      ___676d0h
		mov     ebx, [ecx+8]
		test    ebx, ebx
		je      ___676d0h
		mov     edi, ebx
		mov     esi, [ecx+4]
___67646h:
		test    esi, esi
		je      ___676d0h
		test    ebp, ebp
		jne     ___676d0h
		mov     ebx, esi
		mov     edx, edi
		mov     eax, [ecx+10h]
		call    __qwrite__clib3r
		mov     edx, eax
		cmp     eax, byte 0ffffffffh
		jne     ___67676h
		mov     bl, [ecx+0ch]
		or      bl, 20h
		mov     ebp, eax
		mov     [ecx+0ch], bl
		jmp     ___67692h
___67676h:
		test    eax, eax
		jne     ___67692h
		mov     eax, 0ch
		call    __set_errno__clib3r
		mov     ah, [ecx+0ch]
		or      ah, 20h
		mov     ebp, 0ffffffffh
		mov     [ecx+0ch], ah
___67692h:
		add     edi, edx
		sub     esi, edx
		jmp     ___67646h
___67698h:
		cmp     dword [ecx+8], byte 0
		je      ___676d0h
		and     byte [ecx+0ch], 0efh
		test    byte [ecx+0dh], 20h
		jne     ___676d0h
		mov     eax, [ecx+4]
		test    eax, eax
		je      ___676c0h
		mov     edx, eax
		mov     ebx, 1
		neg     edx
		mov     eax, [ecx+10h]
		call    lseek__clib3r
___676c0h:
		cmp     eax, byte 0ffffffffh
		jne     ___676d0h
		mov     bl, [ecx+0ch]
		or      bl, 20h
		mov     ebp, eax
		mov     [ecx+0ch], bl
___676d0h:
		mov     eax, [ecx+8]
		mov     dword [ecx+4], 0
		mov     [ecx], eax
		mov     eax, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn        
