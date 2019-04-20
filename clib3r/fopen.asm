cpu 386

    extern	tolower
    extern	__set_errno
    extern	__fmode
    extern	sopen
    extern	__freefp
    extern	fseek
    extern	__chktty
    extern	__allocfp
    extern	___OpenStreams
    extern	__doclose
    extern	___ClosedStreams

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __open_flags
__open_flags:
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 4
		mov     ebx, eax
		xor     eax, eax
		mov     al, [ebx]
		xor     edx, edx
		call    near tolower
		mov     [esp], al
		and     eax, 0ffh
		cmp     eax, byte 72h
		je      short dr@63fach
		cmp     eax, byte 77h
		je      short dr@63fach
		cmp     eax, byte 61h
		je      short dr@63fach
		mov     eax, 9
		call    near __set_errno
		xor     eax, eax
		jmp     near dr@64039h
dr@63fach:
		xor     ecx, ecx
		mov     esi, edx
		mov     cl, [ebx+1]
		or      si, byte 3
		cmp     ecx, byte 2bh
		jne     short dr@63fe1h
		xor     eax, eax
		mov     edx, esi
		mov     al, [ebx+2]
		or      si, byte 40h
		cmp     eax, byte 62h
		je      short dr@63fddh
		cmp     eax, byte 74h
		je      short dr@6401bh
		cmp     dword [__fmode], 200h
dr@63fdbh:
		jne     short dr@6401bh
dr@63fddh:
		mov     edx, esi
		jmp     short dr@6401bh
dr@63fe1h:
		mov     eax, edx
		or      al, 40h
		cmp     ecx, byte 62h
		jne     short dr@63ffeh
		mov     edx, eax
		mov     bl, [ebx+2]
		and     ebx, 0ffh
		cmp     ebx, byte 2bh
		jne     short dr@6401bh
		or      al, 3
		jmp     short dr@64019h
dr@63ffeh:
		cmp     ecx, byte 74h
		jne     short dr@6400dh
		xor     eax, eax
		mov     al, [ebx+2]
		cmp     eax, byte 2bh
		jmp     short dr@63fdbh
dr@6400dh:
		cmp     dword [__fmode], 200h
		jne     short dr@6401bh
dr@64019h:
		mov     edx, eax
dr@6401bh:
		xor     eax, eax
		mov     al, [esp]
		cmp     eax, byte 77h
		jne     short dr@6402ah
		or      dl, 2
		jmp     short dr@64037h
dr@6402ah:
		cmp     eax, byte 61h
		jne     short dr@64034h
		or      dl, 82h
		jmp     short dr@64037h
dr@64034h:
		or      dl, 1
dr@64037h:
		mov     eax, edx
dr@64039h:
		add     esp, byte 4
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__doopen:
		push    esi
		mov     esi, eax
		mov     al, dl
		mov     edx, ecx
		mov     ecx, [esp+8]
		and     byte [ecx+0ch], 0fch
		or      [ecx+0ch], ebx
		and     eax, 0ffh
		call    near tolower
		and     eax, 0ffh
		cmp     eax, byte 72h
		jne     short dr@64084h
		xor     eax, eax
		test    bl, 2
		je      short dr@64073h
		mov     eax, 2
dr@64073h:
		test    bl, 40h
		je      short dr@6407dh
		or      ah, 2
		jmp     short dr@64080h
dr@6407dh:
		or      ah, 1
;26:00064080
dr@64080h:
		push    byte 0
		jmp     short dr@640afh
dr@64084h:
		test    bl, 1
		setnz   al
		and     eax, 0ffh
		add     eax, byte 21h
		test    bl, 80h
		je      short dr@6409bh
		or      al, 10h
		jmp     short dr@6409dh
dr@6409bh:
		or      al, 40h
dr@6409dh:
		test    bl, 40h
		je      short dr@640a7h
		or      ah, 2
		jmp     short dr@640aah
dr@640a7h:
		or      ah, 1
dr@640aah:
		push    180h
dr@640afh:
		push    edx
		push    eax
		push    esi
		call    near sopen
		add     esp, byte 10h
		mov     [ecx+10h], eax
		cmp     dword [ecx+10h], byte 0ffffffffh
		jne     short dr@640d0h
		mov     eax, ecx
		call    near __freefp
		xor     eax, eax
		pop     esi
		ret     4
dr@640d0h:
		mov     dword [ecx+4], 0
		mov     dword [ecx+8], 0
		mov     dword [ecx+14h], 0
		test    bl, 80h
		je      short dr@640f8h
		mov     ebx, 2
		mov     eax, ecx
		xor     edx, edx
		call    near fseek
dr@640f8h:
		mov     eax, ecx
		call    near __chktty
		mov     eax, ecx
		pop     esi
		ret     4
global _fsopen
_fsopen:
		push    ecx
		push    esi
		push    edi
		mov     esi, eax
		mov     ecx, ebx
		mov     eax, edx
		call    near __open_flags
		mov     ebx, eax
		test    eax, eax
		je      short dr@6413ah
		xor     eax, eax
		call    near __allocfp
		mov     edi, eax
		test    eax, eax
		je      short dr@64138h
		push    eax
		mov     dl, [edx]
		and     edx, 0ffh
		mov     eax, esi
		call    near __doopen
		mov     edi, eax
dr@64138h:
		mov     eax, edi
dr@6413ah:
		pop     edi
		pop     esi
		pop     ecx
		retn    
global fopen
fopen:
		push    ebx
		xor     ebx, ebx
		call    near _fsopen
		pop     ebx
		retn    
close_file:
		push    ebx
		push    ecx
		push    edx
		mov     ebx, eax
		mov     eax, [___OpenStreams]
dr@64152h:
		test    eax, eax
		je      short dr@64179h
		mov     edx, [eax+4]
		cmp     ebx, edx
		jne     short dr@64175h
		test    byte [edx+0ch], 3
		je      short dr@6416fh
		mov     edx, 1
		mov     eax, ebx
		call    near __doclose
dr@6416fh:
		mov     eax, ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@64175h:
		mov     eax, [eax]
		jmp     short dr@64152h
dr@64179h:
		mov     edx, ___ClosedStreams
dr@6417eh:
		mov     eax, [edx]
;26:00064180
		test    eax, eax
		je      short dr@641a0h
		cmp     ebx, [eax+4]
		jne     short dr@6419ch
		mov     ecx, [eax]
		mov     [edx], ecx
		mov     edx, [___OpenStreams]
		mov     [___OpenStreams], eax
		mov     [eax], edx
		jmp     short dr@6416fh
dr@6419ch:
		mov     edx, eax
		jmp     short dr@6417eh
dr@641a0h:
		mov     eax, 4
		call    near __set_errno
		xor     eax, eax
		pop     edx
		pop     ecx
		pop     ebx
		retn    
global freopen
freopen:
		push    ecx
		push    esi
		push    edi
		mov     edi, eax
		mov     eax, edx
		call    near __open_flags
		mov     esi, eax
		test    eax, eax
		je      short dr@641eeh
		mov     eax, ebx
		call    near close_file
		mov     ebx, eax
		test    eax, eax
		je      short dr@641ech
		and     dword [eax+0ch], 4000h
		push    eax
		mov     dl, [edx]
		and     edx, 0ffh
		mov     ebx, esi
		mov     eax, edi
		xor     ecx, ecx
		call    near __doopen
		mov     ebx, eax
dr@641ech:
		mov     eax, ebx
dr@641eeh:
		pop     edi
		pop     esi
		pop     ecx
		retn