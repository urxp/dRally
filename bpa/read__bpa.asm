%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(strupr__clib3r)
    extern  __CEXT_V(BPA0Header)
    extern  __CEXT_F(strcmp__clib3r)
    extern  __CEXT_V(___18309ch)
    extern  __CEXT_V(___1830ach)
    extern  __CEXT_V(___1830b0h)
    extern  __CEXT_F(exitErrorMsg__dr)
    extern  __CEXT_V(___183098h)
    extern  __CEXT_F(fopen__clib3r)
    extern  __CEXT_F(fseek__clib3r)
    extern  __CEXT_F(fread__clib3r)
    extern  __CEXT_F(fclose__clib3r)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(read__bpa))
		push    88h
		call    __CHK
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, 74h
		mov     [esp+68h], eax
		mov     [esp+6ch], edx
		mov     [esp+64h], ebx
		lea     edi, [esp+50h]
		mov     esi, ebx
		mov     edx, __CEXT_V(___183098h)
		push    edi
___429b1h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___429c9h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___429b1h
___429c9h:
		pop     edi
		mov     eax, [esp+68h]
		mov     ebx, 1
		call    __CEXT_F(fopen__clib3r)
		mov     edx, 4
		mov     edi, eax
		mov     ecx, eax
		lea     eax, [esp+60h]
		call    __CEXT_F(fread__clib3r)
		mov     ebx, 1
		mov     edx, 10efh
		mov     eax, __CEXT_V(BPA0Header)
		mov     ecx, edi
		call    __CEXT_F(fread__clib3r)
		mov     eax, edi
		call    __CEXT_F(fclose__clib3r)
		xor     edx, edx
		lea     eax, [esp+50h]
		mov     [esp+70h], edx
		call    __CEXT_F(strupr__clib3r)
		mov     al, [esp+70h]
		mov     ah, 3
		mul     ah
		mov     bl, al
		neg     bl
		add     bl, 75h
		jmp     ___42a35h
___42a27h:
		add     [esp+esi+50h], bl
		lea     edx, [esi+1]
		sub     bl, 3
		mov     [esp+70h], edx
___42a35h:
		lea     edi, [esp+50h]
		mov     esi, [esp+70h]
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, esi
		ja      ___42a27h
		mov     eax, [esp+60h]
		xor     edi, edi
		mov     ebp, 0ffffffffh
		mov     [esp+70h], edi
		test    eax, eax
		jle     ___42a8fh
		mov     ebx, __CEXT_V(BPA0Header)
___42a63h:
		lea     edx, [esp+50h]
		mov     eax, ebx
		call    __CEXT_F(strcmp__clib3r)
		test    eax, eax
		jne     ___42a76h
		mov     ebp, [esp+70h]
___42a76h:
		cmp     ebp, 0ffffffffh
		jne     ___42a8fh
		mov     ecx, [esp+70h]
		mov     esi, [esp+60h]
		inc     ecx
		add     ebx, 11h
		mov     [esp+70h], ecx
		cmp     ecx, esi
		jl      ___42a63h
___42a8fh:
		cmp     ebp, 0ffffffffh
		jne     ___42b4ch
		mov     edi, esp
		mov     esi, __CEXT_V(___18309ch)
		movsd   
		movsd   
		movsd   
		movsd   
		mov     esi, [esp+68h]
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___42ab2h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___42acah
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___42ab2h
___42acah:
		pop     edi
		mov     esi, __CEXT_V(___1830ach)
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___42adbh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___42af3h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___42adbh
___42af3h:
		pop     edi
		mov     esi, [esp+64h]
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___42b03h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___42b1bh
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___42b03h
___42b1bh:
		pop     edi
		mov     esi, __CEXT_V(___1830b0h)
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___42b2ch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___42b44h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___42b2ch
___42b44h:
		pop     edi
		mov     eax, esp
		call    __CEXT_F(exitErrorMsg__dr)
___42b4ch:
		mov     edx, __CEXT_V(___183098h)
		mov     eax, [esp+68h]
		call    __CEXT_F(fopen__clib3r)
		xor     ebx, ebx
		mov     edx, 10f3h
		mov     edi, eax
		call    __CEXT_F(fseek__clib3r)
		xor     edx, edx
		mov     [esp+70h], edx
		test    ebp, ebp
		jle     ___42b93h
		mov     ebx, ebp
		shl     ebx, 4
		xor     eax, eax
		add     ebx, ebp
___42b7bh:
		mov     esi, [esp+70h]
		mov     ecx, [eax+__CEXT_V(BPA0Header)+0dh]
		add     eax, 11h
		inc     esi
		add     edx, ecx
		mov     [esp+70h], esi
		cmp     eax, ebx
		jl      ___42b7bh
___42b93h:
		mov     ebx, 1
		mov     eax, edi
		call    __CEXT_F(fseek__clib3r)
		mov     eax, ebp
		mov     ecx, edi
		shl     eax, 4
		mov     ebx, 1
		mov     edx, [eax+ebp+__CEXT_V(BPA0Header)+0dh]
		mov     eax, [esp+6ch]
		call    __CEXT_F(fread__clib3r)
		mov     eax, edi
		call    __CEXT_F(fclose__clib3r)
		add     esp, 74h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn
