cpu 386

    extern	isatty
    extern	__set_errno
    extern	__set_errno_dos
    extern	___umaskval
    extern	__IOMode
    extern	__fmode
    extern	__SetIOMode

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global open
open:
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
		call    near sopen
		add     esp, byte 10h
		pop     edx
		pop     ebx
		retn    
global sopen
sopen:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 0ch
		mov     esi, [esp+24h]
dr@660bfh:
		movzx   edi, byte [esi]
		cmp     edi, byte 20h
		jne     short dr@660cah
		inc     esi
		jmp     short dr@660bfh
dr@660cah:
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
		jl      short dr@660fdh
		xor     edi, edi
		mov     di, [esp]
dr@660fdh:
		mov     dl, [esp+28h]
		test    dl, 3
		je      near dr@66180h
		cmp     edi, byte 0ffffffffh
		je      near dr@66180h
		mov     eax, edi
		call    near isatty
		test    eax, eax
		jne     short dr@66180h
		test    byte [esp+29h], 4
		je      short dr@66148h
		test    dl, 20h
		je      short dr@66148h
		mov     ebx, edi
		mov     ah, 3eh
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     eax, 7
		call    near __set_errno
		mov     eax, 0ffffffffh
		jmp     near dr@66293h
dr@66148h:
		test    byte [esp+28h], 40h
		je      short dr@66180h
		lea     edx, [esp+8]
		mov     ebx, edi
		xor     ecx, ecx
		mov     ah, 40h
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     [esp], eax
		test    eax, eax
		jge     short dr@66180h
		mov     ebx, edi
		mov     ah, 3eh
		int     21h
		rcl     eax, 1
		ror     eax, 1
dr@66170h:
		xor     eax, eax
		mov     ax, [esp]
		call    near __set_errno_dos
		jmp     near dr@66293h
;26:00066180
dr@66180h:
		cmp     edi, byte 0ffffffffh
		jne     near dr@66222h
		test    byte [esp+28h], 20h
		je      short dr@66170h
		xor     eax, eax
		mov     ax, [esp]
		cmp     eax, byte 2
		jne     short dr@66170h
		lea     eax, [esp+30h]
		add     eax, byte 4
		mov     eax, [eax-4]
		test    eax, eax
		jne     short dr@661aeh
		mov     eax, 180h
dr@661aeh:
		mov     edx, [___umaskval]
		not     edx
		and     eax, edx
		xor     ecx, ecx
		test    al, 80h
		jne     short dr@661c3h
		mov     ecx, 1
dr@661c3h:
		and     ecx, 0ffh
		mov     edx, esi
		mov     ah, 3ch
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     [esp], eax
		test    eax, eax
		jl      short dr@66170h
		xor     edi, edi
		mov     edx, [esp+2ch]
		mov     di, [esp]
		test    edx, edx
		je      short dr@66222h
		mov     ebx, edi
		mov     ah, 3eh
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     [esp], eax
		test    eax, eax
		jl      near dr@66170h
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
		jl      near dr@66170h
		xor     edi, edi
		mov     di, [esp]
dr@66222h:
		mov     eax, edi
		call    near __IOMode
		and     al, 3ch
		mov     edx, eax
		mov     eax, edi
		call    near isatty
		test    eax, eax
		je      short dr@6623bh
		or      dh, 20h
dr@6623bh:
		and     byte [esp+4], 7fh
		cmp     dword [esp+4], byte 2
		jne     short dr@6624ah
		or      dl, 3
dr@6624ah:
		cmp     dword [esp+4], byte 0
		jne     short dr@66254h
		or      dl, 1
dr@66254h:
		cmp     dword [esp+4], byte 1
		jne     short dr@6625eh
		or      dl, 2
dr@6625eh:
		test    byte [esp+28h], 10h
		je      short dr@66268h
		or      dl, 80h
dr@66268h:
		mov     eax, edx
		mov     bl, [esp+29h]
		or      al, 40h
		test    bl, 3
		je      short dr@6627ch
		test    bl, 2
		je      short dr@6628ah
		jmp     short dr@66288h
dr@6627ch:
		cmp     dword [__fmode], 200h
		jne     short dr@6628ah
dr@66288h:
		mov     edx, eax
dr@6628ah:
		mov     eax, edi
		call    near __SetIOMode
		mov     eax, edi
dr@66293h:
		add     esp, byte 0ch
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
global __set_binary
__set_binary:
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 4
		mov     esi, eax
		call    near __IOMode
		or      al, 40h
		mov     ebx, eax
		mov     edx, eax
		mov     eax, esi
		call    near __SetIOMode
		test    bh, 20h
		je      short dr@662f7h
		mov     ebx, esi
		mov     al, 0
		mov     ah, 44h
		int     21h
		rcl     edx, 1
		ror     edx, 1
		mov     [esp], edx
		test    edx, edx
		jge     short dr@662dch
dr@662cfh:
		xor     eax, eax
		mov     ax, [esp]
		call    near __set_errno_dos
		jmp     short dr@662f9h
dr@662dch:
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
		jl      short dr@662cfh
dr@662f7h:
		xor     eax, eax
dr@662f9h:
		add     esp, byte 4
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn