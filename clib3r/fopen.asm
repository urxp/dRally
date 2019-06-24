%include "macros.inc"

    extern  tolower
    extern  __fmode
    extern  sopen
    extern  __freefp
    extern  __CEXT_F(fseek__clib3r)
    extern  __chktty
    extern  __allocfp
    extern  __doclose
    extern  ___ClosedStreams
    extern  ___OpenStreams
    extern  __set_errno__clib3r

%include "layout.inc"

section @text

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
		call    tolower
		mov     [esp], al
		and     eax, 0ffh
		cmp     eax, byte 72h
		je      ___63fach
		cmp     eax, byte 77h
		je      ___63fach
		cmp     eax, byte 61h
		je      ___63fach
		mov     eax, 9
		call    __set_errno__clib3r
		xor     eax, eax
		jmp     ___64039h
___63fach:
		xor     ecx, ecx
		mov     esi, edx
		mov     cl, [ebx+1]
		or      si, byte 3
		cmp     ecx, byte 2bh
		jne     ___63fe1h
		xor     eax, eax
		mov     edx, esi
		mov     al, [ebx+2]
		or      si, byte 40h
		cmp     eax, byte 62h
		je      ___63fddh
		cmp     eax, byte 74h
		je      ___6401bh
		cmp     dword [__fmode], 200h
___63fdbh:
		jne     ___6401bh
___63fddh:
		mov     edx, esi
		jmp     ___6401bh
___63fe1h:
		mov     eax, edx
		or      al, 40h
		cmp     ecx, byte 62h
		jne     ___63ffeh
		mov     edx, eax
		mov     bl, [ebx+2]
		and     ebx, 0ffh
		cmp     ebx, byte 2bh
		jne     ___6401bh
		or      al, 3
		jmp     ___64019h
___63ffeh:
		cmp     ecx, byte 74h
		jne     ___6400dh
		xor     eax, eax
		mov     al, [ebx+2]
		cmp     eax, byte 2bh
		jmp     ___63fdbh
___6400dh:
		cmp     dword [__fmode], 200h
		jne     ___6401bh
___64019h:
		mov     edx, eax
___6401bh:
		xor     eax, eax
		mov     al, [esp]
		cmp     eax, byte 77h
		jne     ___6402ah
		or      dl, 2
		jmp     ___64037h
___6402ah:
		cmp     eax, byte 61h
		jne     ___64034h
		or      dl, 82h
		jmp     ___64037h
___64034h:
		or      dl, 1
___64037h:
		mov     eax, edx
___64039h:
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
		call    tolower
		and     eax, 0ffh
		cmp     eax, byte 72h
		jne     ___64084h
		xor     eax, eax
		test    bl, 2
		je      ___64073h
		mov     eax, 2
___64073h:
		test    bl, 40h
		je      ___6407dh
		or      ah, 2
		jmp     ___64080h
___6407dh:
		or      ah, 1
___64080h:
		push    byte 0
		jmp     ___640afh
___64084h:
		test    bl, 1
		setnz   al
		and     eax, 0ffh
		add     eax, byte 21h
		test    bl, 80h
		je      ___6409bh
		or      al, 10h
		jmp     ___6409dh
___6409bh:
		or      al, 40h
___6409dh:
		test    bl, 40h
		je      ___640a7h
		or      ah, 2
		jmp     ___640aah
___640a7h:
		or      ah, 1
___640aah:
		push    180h
___640afh:
		push    edx
		push    eax
		push    esi
		call    sopen
		add     esp, byte 10h
		mov     [ecx+10h], eax
		cmp     dword [ecx+10h], byte 0ffffffffh
		jne     ___640d0h
		mov     eax, ecx
		call    __freefp
		xor     eax, eax
		pop     esi
		ret     4
___640d0h:
		mov     dword [ecx+4], 0
		mov     dword [ecx+8], 0
		mov     dword [ecx+14h], 0
		test    bl, 80h
		je      ___640f8h
		mov     ebx, 2
		mov     eax, ecx
		xor     edx, edx
		call    __CEXT_F(fseek__clib3r)
___640f8h:
		mov     eax, ecx
		call    __chktty
		mov     eax, ecx
		pop     esi
		ret     4
_fsopen:
		push    ecx
		push    esi
		push    edi
		mov     esi, eax
		mov     ecx, ebx
		mov     eax, edx
		call    __open_flags
		mov     ebx, eax
		test    eax, eax
		je      ___6413ah
		xor     eax, eax
		call    __allocfp
		mov     edi, eax
		test    eax, eax
		je      ___64138h
		push    eax
		mov     dl, [edx]
		and     edx, 0ffh
		mov     eax, esi
		call    __doopen
		mov     edi, eax
___64138h:
		mov     eax, edi
___6413ah:
		pop     edi
		pop     esi
		pop     ecx
		retn    
__GDECL(__CEXT_F(fopen__clib3r))
		push    ebx
		xor     ebx, ebx
		call    _fsopen
		pop     ebx
		retn    
close_file:
		push    ebx
		push    ecx
		push    edx
		mov     ebx, eax
		mov     eax, [___OpenStreams]
___64152h:
		test    eax, eax
		je      ___64179h
		mov     edx, [eax+4]
		cmp     ebx, edx
		jne     ___64175h
		test    byte [edx+0ch], 3
		je      ___6416fh
		mov     edx, 1
		mov     eax, ebx
		call    __doclose
___6416fh:
		mov     eax, ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___64175h:
		mov     eax, [eax]
		jmp     ___64152h
___64179h:
		mov     edx, ___ClosedStreams
___6417eh:
		mov     eax, [edx]
		test    eax, eax
		je      ___641a0h
		cmp     ebx, [eax+4]
		jne     ___6419ch
		mov     ecx, [eax]
		mov     [edx], ecx
		mov     edx, [___OpenStreams]
		mov     [___OpenStreams], eax
		mov     [eax], edx
		jmp     ___6416fh
___6419ch:
		mov     edx, eax
		jmp     ___6417eh
___641a0h:
		mov     eax, 4
		call    __set_errno__clib3r
		xor     eax, eax
		pop     edx
		pop     ecx
		pop     ebx
		retn    
freopen:
		push    ecx
		push    esi
		push    edi
		mov     edi, eax
		mov     eax, edx
		call    __open_flags
		mov     esi, eax
		test    eax, eax
		je      ___641eeh
		mov     eax, ebx
		call    close_file
		mov     ebx, eax
		test    eax, eax
		je      ___641ech
		and     dword [eax+0ch], 4000h
		push    eax
		mov     dl, [edx]
		and     edx, 0ffh
		mov     ebx, esi
		mov     eax, edi
		xor     ecx, ecx
		call    __doopen
		mov     ebx, eax
___641ech:
		mov     eax, ebx
___641eeh:
		pop     edi
		pop     esi
		pop     ecx
		retn    
