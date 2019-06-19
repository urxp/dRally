%include "macros.inc"

    extern  __CEXT_F(extract__musics_bpa)
    extern  __CEXT_V(string__SCRM)
    extern  __CEXT_F(strncmp__clib3r)
    extern  __CEXT_F(___58b20h)
    extern  __CEXT_F(___58b20h)
    extern  __CEXT_V(___24e868h)
    extern  __CEXT_F(getentrysize__musics_bpa)

%include "layout.inc"

section @text

;; 71590h
__GDECL(__CEXT_F(loadS3M))
		push    esi
		push    edi
		push    ebp
		sub     esp, 4
		mov     ebp, eax
		mov     esi, edx
		mov     [esp], ebx
		mov     edi, ecx
		mov     edx, 1
		mov     eax, esi
		mov     ebx, 4
		call    __CEXT_F(extract__musics_bpa)
		mov     edx, __CEXT_V(string__SCRM)
		mov     ecx, eax
		add     eax, 2ch
		call    __CEXT_F(strncmp__clib3r)
		test    eax, eax
		je      ___715ceh
		push    esi
		push    28h
		call    __CEXT_F(___58b20h)
		add     esp, 8
___715ceh:
		test    ebp, ebp
		je      ___715e9h
		cmp     byte [ecx+60h], 0ffh
		jne     ___715e3h
		push    esi
		push    29h
		call    __CEXT_F(___58b20h)
		add     esp, 8
___715e3h:
		mov     [__CEXT_V(___24e868h)], ecx
___715e9h:
		mov     eax, esi
		mov     esi, [esp]
		call    __CEXT_F(getentrysize__musics_bpa)
		mov     [esi], eax
		xor     eax, eax
		mov     ax, [ecx+22h]
		mov     [edi], eax
		mov     eax, ecx
		add     esp, 4
		pop     ebp
		pop     edi
		pop     esi
		retn    
