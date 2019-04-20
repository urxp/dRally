cpu 386

    extern	__LpCmdLine
    extern	malloc
    extern	__argv
    extern	__LpPgmName
    extern	__argc
    extern	____Argc
    extern	____Argv
    extern	___historical_splitparms

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __Init_Argv
__Init_Argv:
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
		call    near _SplitParms
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
		call    near malloc
		mov     ebp, eax
		test    eax, eax
		je      short dr@672cah
		mov     ebx, esp
		mov     esi, [__LpCmdLine]
		add     eax, ecx
		mov     edi, ebp
		mov     [__argv], eax
;26:00067280
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
		call    near _SplitParms
		mov     ecx, [__argv]
		mov     eax, [esp+8]
		add     ecx, esi
		mov     [__argc], eax
		mov     dword [ecx], 0
		jmp     short dr@672d4h
dr@672cah:
		mov     [__argv], eax
		mov     [__argc], eax
dr@672d4h:
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
;26:00067300
		mov     ebp, ebx
		xor     edx, edx
		mov     [esp+4], edx
dr@67308h:
		xor     ebx, ebx
		mov     bl, [eax]
		cmp     ebx, byte 20h
		je      short dr@67316h
		cmp     ebx, byte 9
		jne     short dr@67319h
dr@67316h:
		inc     eax
		jmp     short dr@67308h
dr@67319h:
		test    bl, bl
		je      near dr@673ebh
		xor     dl, dl
		cmp     ebx, byte 22h
		jne     short dr@6732bh
		mov     dl, 1
		inc     eax
dr@6732bh:
		mov     [esp], eax
		mov     ebx, eax
dr@67330h:
		xor     ecx, ecx
		mov     cl, [eax]
		cmp     ecx, byte 22h
		jne     short dr@67359h
		cmp     dl, 1
		je      near dr@673b8h
		test    esi, esi
		jne     short dr@67359h
		test    dl, dl
		jne     short dr@6734fh
		mov     dl, 2
dr@6734ch:
		inc     eax
		jmp     short dr@67330h
dr@6734fh:
		cmp     dl, 2
		jne     short dr@67359h
		inc     eax
		xor     dl, dl
		jmp     short dr@67330h
dr@67359h:
		xor     ecx, ecx
		mov     cl, [eax]
		cmp     ecx, byte 20h
		je      short dr@67367h
		cmp     ecx, byte 9
		jne     short dr@6736bh
dr@67367h:
		test    dl, dl
		je      short dr@673b8h
dr@6736bh:
		mov     dh, [eax]
		test    dh, dh
		je      short dr@673b8h
		xor     ecx, ecx
		mov     cl, dh
		cmp     ecx, byte 5ch
		jne     short dr@673a9h
		test    esi, esi
		jne     short dr@6738ah
		xor     ecx, ecx
;26:00067380
		mov     cl, [eax+1]
		cmp     ecx, byte 22h
dr@67386h:
		jne     short dr@673a9h
		jmp     short dr@673a8h
dr@6738ah:
		cmp     dl, 1
		jne     short dr@6739eh
		xor     ecx, ecx
		mov     cl, [eax+1]
		cmp     ecx, byte 22h
		je      short dr@673a8h
		cmp     ecx, byte 5ch
		jmp     short dr@67386h
dr@6739eh:
		xor     ecx, ecx
		mov     cl, [eax+1]
		cmp     ecx, byte 22h
		jne     short dr@673a9h
dr@673a8h:
		inc     eax
dr@673a9h:
		test    edi, edi
		je      short dr@6734ch
		mov     cl, [eax]
		inc     eax
		mov     [ebx], cl
		inc     ebx
		jmp     near dr@67330h
dr@673b8h:
		test    edi, edi
		je      short dr@673deh
		mov     ecx, [esp+4]
		mov     edx, [esp]
		mov     [edi+ecx*4], edx
		inc     ecx
		mov     [esp+4], ecx
		mov     cl, [eax]
		test    cl, cl
		jne     short dr@673d5h
		mov     [ebx], cl
		jmp     short dr@673ebh
dr@673d5h:
		inc     eax
		mov     byte [ebx], 0
		jmp     near dr@67308h
dr@673deh:
		inc     dword [esp+4]
		cmp     byte [eax], 0
		jne     near dr@67316h
dr@673ebh:
		mov     [ebp+0], eax
		mov     eax, [esp+4]
		mov     [___historical_splitparms], esi
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn