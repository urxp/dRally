%include "macros.inc"

    extern  __CEXT_F(extract__musics_bpa)
    extern  __CEXT_V(string__Extended_Module)
    extern  __CEXT_F(strncmp__clib3r)
    extern  __CEXT_F(___58b20h)
    extern  __CEXT_V(___24e9bch)
    extern  __CEXT_F(getentrysize__musics_bpa)

%include "layout.inc"

section @text

;; 7552ch
__GDECL(__CEXT_F(loadXM))
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     ebp, eax
		mov     esi, edx
		mov     [esp], ebx
		mov     [esp+4], ecx
		mov     edx, 1
		mov     eax, esi
		mov     ebx, 11h
		call    __CEXT_F(extract__musics_bpa)
		mov     edx, __CEXT_V(string__Extended_Module)
		mov     edi, eax
		call    __CEXT_F(strncmp__clib3r)
		test    eax, eax
		je      ___75569h
		push    esi
		push    byte 28h
		call    __CEXT_F(___58b20h)
		add     esp, byte 8
___75569h:
		cmp     byte [edi+25h], 1ah
		je      ___7557ah
		push    esi
		push    byte 28h
		call    __CEXT_F(___58b20h)
		add     esp, byte 8
___7557ah:
		cmp     word [edi+3ah], 104h
		jae     ___7558dh
		push    esi
		push    byte 28h
		call    __CEXT_F(___58b20h)
		add     esp, byte 8
___7558dh:
		test    ebp, ebp
		je      ___755c1h
		cmp     word [edi+40h], byte 0
		jne     ___755a3h
		push    esi
		push    byte 29h
		call    __CEXT_F(___58b20h)
		add     esp, byte 8
___755a3h:
		cmp     word [edi+46h], byte 0
		jne     ___755b5h
		push    esi
		push    byte 29h
		call    __CEXT_F(___58b20h)
		add     esp, byte 8
___755b5h:
		lea     eax, [edi+11h]
		mov     byte [edi+25h], 0
		mov     [__CEXT_V(___24e9bch)], eax
___755c1h:
		mov     eax, esi
		mov     edx, [esp]
		call    __CEXT_F(getentrysize__musics_bpa)
		mov     [edx], eax
		test    ebp, ebp
		je      ___75631h
		mov     eax, [esp+4]
		mov     dword [eax], 0
		lea     eax, [edi+3ch]
		add     eax, [edi+3ch]
		xor     edx, edx
		jmp     ___755f2h
___755e5h:
		xor     ebx, ebx
		mov     ecx, [eax]
		mov     bx, [eax+7]
		add     eax, ecx
		inc     edx
		add     eax, ebx
___755f2h:
		xor     ebx, ebx
		mov     bx, [edi+46h]
		cmp     edx, ebx
		jl      ___755e5h
		xor     esi, esi
		jmp     ___75603h
___75600h:
		inc     esi
		add     eax, ebx
___75603h:
		xor     edx, edx
		mov     dx, [edi+48h]
		cmp     esi, edx
		jge     ___7563dh
		xor     edx, edx
		mov     ebp, [esp+4]
		mov     dx, [eax+1bh]
		mov     ecx, [eax+1dh]
		add     [ebp+0], edx
		mov     ebp, [eax]
		xor     ebx, ebx
		add     eax, ebp
___75623h:
		dec     edx
		cmp     edx, byte 0ffffffffh
		je      ___75600h
		mov     ebp, [eax]
		add     eax, ecx
		add     ebx, ebp
		jmp     ___75623h
___75631h:
		xor     eax, eax
		mov     edx, [esp+4]
		mov     ax, [edi+48h]
		mov     [edx], eax
___7563dh:
		mov     eax, edi
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		retn    
