%include "macros.inc"

    extern  __CEXT_F(malloc__clib3r)
    extern  __LpCmdLine
    extern  __LpPgmName
    extern  __argv
    extern  __argc
    extern  ____Argc
    extern  ____Argv
    extern  ___historical_splitparms

%include "layout.inc"

section @text

__GDECL(__Init_Argv)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     ebx, esp
		mov     eax, [__LpCmdLine]
		xor     edx, edx
		call    _SplitParms
		mov     ecx, [esp]
		inc     eax
		mov     edx, [__LpCmdLine]
		mov     [esp+8], eax
		sub     ecx, edx
		shl     eax, 2
		inc     ecx
		mov     [esp+4], eax
		add     eax, byte 4
		add     eax, ecx
		call    __CEXT_F(malloc__clib3r)
		mov     ebp, eax
		test    eax, eax
		je      ___672cah
		mov     ebx, esp
		mov     esi, [__LpCmdLine]
		add     eax, ecx
		mov     edi, ebp
		mov     [__argv], eax
		push    es
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		pop     es
		mov     ecx, [__argv]
		mov     eax, [__LpPgmName]
		lea     edx, [ecx+4]
		mov     [ecx], eax
		mov     eax, ebp
		mov     esi, [esp+4]
		call    _SplitParms
		mov     ecx, [__argv]
		mov     eax, [esp+8]
		add     ecx, esi
		mov     [__argc], eax
		mov     dword [ecx], 0
		jmp     ___672d4h
___672cah:
		mov     [__argv], eax
		mov     [__argc], eax
___672d4h:
		mov     eax, [esp+8]
		mov     [____Argc], eax
		mov     eax, [__argv]
		mov     [____Argv], eax
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
_SplitParms:
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     esi, [___historical_splitparms]
		mov     edi, edx
		mov     ebp, ebx
		xor     edx, edx
		mov     [esp+4], edx
___67308h:
		xor     ebx, ebx
		mov     bl, [eax]
		cmp     ebx, byte 20h
		je      ___67316h
		cmp     ebx, byte 9
		jne     ___67319h
___67316h:
		inc     eax
		jmp     ___67308h
___67319h:
		test    bl, bl
		je      ___673ebh
		xor     dl, dl
		cmp     ebx, byte 22h
		jne     ___6732bh
		mov     dl, 1
		inc     eax
___6732bh:
		mov     [esp], eax
		mov     ebx, eax
___67330h:
		xor     ecx, ecx
		mov     cl, [eax]
		cmp     ecx, byte 22h
		jne     ___67359h
		cmp     dl, 1
		je      ___673b8h
		test    esi, esi
		jne     ___67359h
		test    dl, dl
		jne     ___6734fh
		mov     dl, 2
___6734ch:
		inc     eax
		jmp     ___67330h
___6734fh:
		cmp     dl, 2
		jne     ___67359h
		inc     eax
		xor     dl, dl
		jmp     ___67330h
___67359h:
		xor     ecx, ecx
		mov     cl, [eax]
		cmp     ecx, byte 20h
		je      ___67367h
		cmp     ecx, byte 9
		jne     ___6736bh
___67367h:
		test    dl, dl
		je      ___673b8h
___6736bh:
		mov     dh, [eax]
		test    dh, dh
		je      ___673b8h
		xor     ecx, ecx
		mov     cl, dh
		cmp     ecx, byte 5ch
		jne     ___673a9h
		test    esi, esi
		jne     ___6738ah
		xor     ecx, ecx
		mov     cl, [eax+1]
		cmp     ecx, byte 22h
___67386h:
		jne     ___673a9h
		jmp     ___673a8h
___6738ah:
		cmp     dl, 1
		jne     ___6739eh
		xor     ecx, ecx
		mov     cl, [eax+1]
		cmp     ecx, byte 22h
		je      ___673a8h
		cmp     ecx, byte 5ch
		jmp     ___67386h
___6739eh:
		xor     ecx, ecx
		mov     cl, [eax+1]
		cmp     ecx, byte 22h
		jne     ___673a9h
___673a8h:
		inc     eax
___673a9h:
		test    edi, edi
		je      ___6734ch
		mov     cl, [eax]
		inc     eax
		mov     [ebx], cl
		inc     ebx
		jmp     ___67330h
___673b8h:
		test    edi, edi
		je      ___673deh
		mov     ecx, [esp+4]
		mov     edx, [esp]
		mov     [edi+ecx*4], edx
		inc     ecx
		mov     [esp+4], ecx
		mov     cl, [eax]
		test    cl, cl
		jne     ___673d5h
		mov     [ebx], cl
		jmp     ___673ebh
___673d5h:
		inc     eax
		mov     byte [ebx], 0
		jmp     ___67308h
___673deh:
		inc     dword [esp+4]
		cmp     byte [eax], 0
		jne     ___67316h
___673ebh:
		mov     [ebp+0], eax
		mov     eax, [esp+4]
		mov     [___historical_splitparms], esi
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
