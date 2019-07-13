%include "macros.inc"

    extern  isatty
    extern  __set_errno__clib3r
    extern  ___umaskval
    extern  __fmode
    extern  __SetIOMode
    extern  __IOMode
    extern  __set_errno_dos

%include "layout.inc"

section @text

__GDECL(__CEXT_F(open__clib3r))
		push    ebx
		push    edx
		lea     eax, [esp+14h]
		add     eax, byte 4
		mov     eax, [eax-4]
		push    eax
		push    byte 0
		mov     edx, [esp+18h]
		push    edx
		mov     ebx, [esp+18h]
		push    ebx
		call    sopen
		add     esp, byte 10h
		pop     edx
		pop     ebx
		retn    
__GDECL(sopen)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 0ch
		mov     esi, [esp+24h]
___660bfh:
		movzx   edi, byte [esi]
		cmp     edi, byte 20h
		jne     ___660cah
		inc     esi
		jmp     ___660bfh
___660cah:
		mov     eax, [esp+28h]
		and     eax, 83h
		mov     [esp+4], eax
		mov     al, [esp+4]
		mov     ah, [esp+2ch]
		mov     edx, esi
		or      al, ah
		mov     edi, 0ffffffffh
		mov     ah, 3dh
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     [esp], eax
		test    eax, eax
		jl      ___660fdh
		xor     edi, edi
		mov     di, [esp]
___660fdh:
		mov     dl, [esp+28h]
		test    dl, 3
		je      ___66180h
		cmp     edi, byte 0ffffffffh
		je      ___66180h
		mov     eax, edi
		call    isatty
		test    eax, eax
		jne     ___66180h
		test    byte [esp+29h], 4
		je      ___66148h
		test    dl, 20h
		je      ___66148h
		mov     ebx, edi
		mov     ah, 3eh
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     eax, 7
		call    __set_errno__clib3r
		mov     eax, 0ffffffffh
		jmp     ___66293h
___66148h:
		test    byte [esp+28h], 40h
		je      ___66180h
		lea     edx, [esp+8]
		mov     ebx, edi
		xor     ecx, ecx
		mov     ah, 40h
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     [esp], eax
		test    eax, eax
		jge     ___66180h
		mov     ebx, edi
		mov     ah, 3eh
		int     21h
		rcl     eax, 1
		ror     eax, 1
___66170h:
		xor     eax, eax
		mov     ax, [esp]
		call    __set_errno_dos
		jmp     ___66293h
___66180h:
		cmp     edi, byte 0ffffffffh
		jne     ___66222h
		test    byte [esp+28h], 20h
		je      ___66170h
		xor     eax, eax
		mov     ax, [esp]
		cmp     eax, byte 2
		jne     ___66170h
		lea     eax, [esp+30h]
		add     eax, byte 4
		mov     eax, [eax-4]
		test    eax, eax
		jne     ___661aeh
		mov     eax, 180h
___661aeh:
		mov     edx, [___umaskval]
		not     edx
		and     eax, edx
		xor     ecx, ecx
		test    al, 80h
		jne     ___661c3h
		mov     ecx, 1
___661c3h:
		and     ecx, 0ffh
		mov     edx, esi
		mov     ah, 3ch
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     [esp], eax
		test    eax, eax
		jl      ___66170h
		xor     edi, edi
		mov     edx, [esp+2ch]
		mov     di, [esp]
		test    edx, edx
		je      ___66222h
		mov     ebx, edi
		mov     ah, 3eh
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     [esp], eax
		test    eax, eax
		jl      ___66170h
		mov     al, [esp+4]
		mov     ch, [esp+2ch]
		mov     edx, esi
		or      al, ch
		mov     ah, 3dh
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     [esp], eax
		test    eax, eax
		jl      ___66170h
		xor     edi, edi
		mov     di, [esp]
___66222h:
		mov     eax, edi
		call    __IOMode
		and     al, 3ch
		mov     edx, eax
		mov     eax, edi
		call    isatty
		test    eax, eax
		je      ___6623bh
		or      dh, 20h
___6623bh:
		and     byte [esp+4], 7fh
		cmp     dword [esp+4], byte 2
		jne     ___6624ah
		or      dl, 3
___6624ah:
		cmp     dword [esp+4], byte 0
		jne     ___66254h
		or      dl, 1
___66254h:
		cmp     dword [esp+4], byte 1
		jne     ___6625eh
		or      dl, 2
___6625eh:
		test    byte [esp+28h], 10h
		je      ___66268h
		or      dl, 80h
___66268h:
		mov     eax, edx
		mov     bl, [esp+29h]
		or      al, 40h
		test    bl, 3
		je      ___6627ch
		test    bl, 2
		je      ___6628ah
		jmp     ___66288h
___6627ch:
		cmp     dword [__fmode], 200h
		jne     ___6628ah
___66288h:
		mov     edx, eax
___6628ah:
		mov     eax, edi
		call    __SetIOMode
		mov     eax, edi
___66293h:
		add     esp, byte 0ch
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__set_binary:
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 4
		mov     esi, eax
		call    __IOMode
		or      al, 40h
		mov     ebx, eax
		mov     edx, eax
		mov     eax, esi
		call    __SetIOMode
		test    bh, 20h
		je      ___662f7h
		mov     ebx, esi
		mov     al, 0
		mov     ah, 44h
		int     21h
		rcl     edx, 1
		ror     edx, 1
		mov     [esp], edx
		test    edx, edx
		jge     ___662dch
___662cfh:
		xor     eax, eax
		mov     ax, [esp]
		call    __set_errno_dos
		jmp     ___662f9h
___662dch:
		mov     dl, [esp]
		mov     ebx, esi
		or      dl, 20h
		mov     dh, 0
		mov     al, 1
		mov     ah, 44h
		int     21h
		rcl     edx, 1
		ror     edx, 1
		mov     [esp], edx
		test    edx, edx
		jl      ___662cfh
___662f7h:
		xor     eax, eax
___662f9h:
		add     esp, byte 4
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
