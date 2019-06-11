%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(fread__clib3r)
    extern  __CEXT_F(strupr__clib3r)
    extern  __CEXT_V(TmpBPAHeader)
    extern  __CEXT_F(strcmp__clib3r)
    extern  __CEXT_V(___180108h)
    extern  __CEXT_V(___180118h)
    extern  __CEXT_V(___18011ch)
    extern  __CEXT_F(exitErrorMsg__dr)
    extern  __CEXT_V(rb_m_0)
    extern  __CEXT_F(fopen__clib3r)
    extern  __CEXT_F(fseek__clib3r)
    extern  __CEXT_V(___19bd81h)
    extern  __CEXT_F(fclose__clib3r)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(getentrysize__bpa))
		push    88h
		call    __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, 70h
		mov     [esp+68h], eax
		mov     [esp+64h], edx
		lea     edi, [esp+50h]
		mov     esi, edx
		push    edi
___10261h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___10279h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___10261h
___10279h:
		pop     edi
		mov     edx, __CEXT_V(rb_m_0)
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
		mov     eax, __CEXT_V(TmpBPAHeader)
		mov     ecx, edi
		call    __CEXT_F(fread__clib3r)
		mov     eax, edi
		call    __CEXT_F(fclose__clib3r)
		xor     edx, edx
		lea     eax, [esp+50h]
		mov     [esp+6ch], edx
		call    __CEXT_F(strupr__clib3r)
		mov     al, [esp+6ch]
		mov     ah, 3
		mul     ah
		mov     bl, al
		neg     bl
		add     bl, 75h
		jmp     ___102eah
___102dch:
		add     [esp+esi+50h], bl
		lea     edx, [esi+1]
		sub     bl, 3
		mov     [esp+6ch], edx
___102eah:
		lea     edi, [esp+50h]
		mov     esi, [esp+6ch]
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, esi
		ja      ___102dch
		mov     eax, [esp+60h]
		xor     edi, edi
		mov     ebp, 0ffffffffh
		mov     [esp+6ch], edi
		test    eax, eax
		jle     ___10344h
		mov     ebx, __CEXT_V(TmpBPAHeader)
___10318h:
		lea     edx, [esp+50h]
		mov     eax, ebx
		call    __CEXT_F(strcmp__clib3r)
		test    eax, eax
		jne     ___1032bh
		mov     ebp, [esp+6ch]
___1032bh:
		cmp     ebp, 0ffffffffh
		jne     ___10344h
		mov     ecx, [esp+6ch]
		mov     esi, [esp+60h]
		inc     ecx
		add     ebx, 11h
		mov     [esp+6ch], ecx
		cmp     ecx, esi
		jl      ___10318h
___10344h:
		cmp     ebp, 0ffffffffh
		jne     ___10401h
		mov     edi, esp
		mov     esi, __CEXT_V(___180108h)
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
___10367h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___1037fh
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___10367h
___1037fh:
		pop     edi
		mov     esi, __CEXT_V(___180118h)
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___10390h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___103a8h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___10390h
___103a8h:
		pop     edi
		mov     esi, [esp+64h]
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___103b8h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___103d0h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___103b8h
___103d0h:
		pop     edi
		mov     esi, __CEXT_V(___18011ch)
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___103e1h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___103f9h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___103e1h
___103f9h:
		pop     edi
		mov     eax, esp
		call    __CEXT_F(exitErrorMsg__dr)
___10401h:
		mov     edx, __CEXT_V(rb_m_0)
		mov     eax, [esp+68h]
		call    __CEXT_F(fopen__clib3r)
		xor     ebx, ebx
		mov     edx, 10f3h
		mov     ecx, eax
		call    __CEXT_F(fseek__clib3r)
		xor     edx, edx
		mov     [esp+6ch], edx
		test    ebp, ebp
		jle     ___10448h
		mov     ebx, ebp
		shl     ebx, 4
		xor     eax, eax
		add     ebx, ebp
___10430h:
		mov     edi, [esp+6ch]
		mov     esi, [eax+__CEXT_V(___19bd81h)]
		add     eax, 11h
		inc     edi
		add     edx, esi
		mov     [esp+6ch], edi
		cmp     eax, ebx
		jl      ___10430h
___10448h:
		mov     ebx, 1
		mov     eax, ecx
		call    __CEXT_F(fseek__clib3r)
		mov     eax, ebp
		shl     eax, 4
		mov     edx, [eax+ebp+__CEXT_V(___19bd81h)]
		mov     eax, ecx
		call    __CEXT_F(fclose__clib3r)
		mov     eax, edx
		add     esp, 70h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn
