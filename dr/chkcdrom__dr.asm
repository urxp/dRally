%include "macros.inc"

    extern  __CHK
    extern  cdrom_ini
    extern  __CEXT_V(string__DR_IDF)
    extern  getFileSize__dr
    extern  malloc__clib3r
    extern  free__clib3r
    extern  __CEXT_V(rb_m)
    extern  __CEXT_F(fopen__clib3r)
    extern  __CEXT_F(fread__clib3r)
    extern  __CEXT_F(fseek__clib3r)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(chkcdrom__dr))
		push    12ch
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 110h
		mov     esi, cdrom_ini
		mov     edi, esp
		push    edi
___3e4beh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3e4d6h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e4beh
___3e4d6h:
		pop     edi
		mov     esi, __CEXT_V(string__DR_IDF)		;; "DR.IDF"
		mov     edi, esp
		mov     edx, 1
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3e4ech:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3e504h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e4ech
___3e504h:
		pop     edi
		mov     eax, esp
		mov     [esp+10ch], edx
		call 	getFileSize__dr
		cmp     eax, 186cf392h
		jge     ___3e521h
		xor     edx, edx
		jmp     ___3e6efh
___3e521h:
		mov     eax, 10000h
		call    malloc__clib3r
		mov     edi, eax
		mov     esi, eax
		mov     eax, esp
		call    getFileSize__dr
		cmp     eax, 18033688h
		jge     ___3e555h
___3e53dh:
		mov     eax, edi
		call    free__clib3r
		xor     edx, edx
		mov     eax, edx
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___3e555h:
		mov     edx, __CEXT_V(rb_m)
		mov     eax, esp
		call    __CEXT_F(fopen__clib3r)
		mov     ebp, eax
		mov     [esp+104h], eax
		test    eax, eax
		je      ___3e53dh
		mov     ebx, 1
		mov     edx, 4
		mov     ecx, eax
		lea     eax, [esp+100h]
		call    __CEXT_F(fread__clib3r)
		mov     eax, [esp+100h]
		mov     ebx, 1
		sub     eax, 2b7916f1h
		mov     edx, 20000h
		mov     [esp+108h], eax
		mov     eax, ebp
		mov     ecx, ebp
		call    __CEXT_F(fseek__clib3r)
		mov     ebx, 1
		mov     edx, 10000h
		mov     eax, edi
		call    __CEXT_F(fread__clib3r)
		mov     dl, [edi+7cd1h]
		sub     dl, [edi+1403h]
		mov     dh, [edi+9ab2h]
		xor     ebp, ebp
		cmp     dl, dh
		jne     ___3e5dah
		mov     ebp, 1
___3e5dah:
		mov     bl, [esi+613bh]
		mov     dl, [esi+7cd1h]
		add     dl, bl
		cmp     dl, [esi+0f6ceh]
		jne     ___3e5f1h
		inc     ebp
___3e5f1h:
		mov     cl, [esi+2d3eh]
		mov     dl, [esi+1403h]
		add     dl, cl
		cmp     dl, [esi+0db97h]
		jne     ___3e608h
		inc     ebp
___3e608h:
		mov     al, [esi+7cd1h]
		mov     dl, [esi+2d3eh]
		sub     dl, al
		cmp     dl, [esi+0afc8h]
		jne     ___3e61fh
		inc     ebp
___3e61fh:
		cmp     ebp, 4
		jne     ___3e62dh
		xor     ebx, ebx
		mov     [esp+10ch], ebx
___3e62dh:
		mov     edx, [esp+108h]
		mov     ebx, 1
		sub     edx, 4
		mov     eax, [esp+104h]
		shl     edx, 10h
		call    __CEXT_F(fseek__clib3r)
		mov     dl, [esi+7cd1h]
		mov     dh, [esi+1403h]
		mov     bl, [esi+9ab2h]
		sub     dl, dh
		xor     edi, edi
		cmp     dl, bl
		jne     ___3e66ah
		mov     edi, 1
___3e66ah:
		mov     bh, [esi+613bh]
		mov     dl, [esi+7cd1h]
		mov     cl, [esi+0f6ceh]
		add     dl, bh
		cmp     dl, cl
		jne     ___3e683h
		inc     edi
___3e683h:
		mov     ch, [esi+2d3eh]
		mov     dl, [esi+1403h]
		mov     al, [esi+0db97h]
		add     dl, ch
		cmp     dl, al
		jne     ___3e69ch
		inc     edi
___3e69ch:
		mov     ah, [esi+7cd1h]
		mov     dl, [esi+2d3eh]
		sub     dl, ah
		cmp     dl, [esi+0afc8h]
		jne     ___3e6b3h
		inc     edi
___3e6b3h:
		cmp     edi, 4
		jne     ___3e6c1h
		xor     ecx, ecx
		mov     [esp+10ch], ecx
___3e6c1h:
		cmp     dword [esp+10ch], 1
		jne     ___3e6e3h
		mov     eax, esi
		call    free__clib3r
		xor     edx, edx
		mov     eax, edx
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___3e6e3h:
		mov     eax, esi
		mov     edx, 1
		call    free__clib3r
___3e6efh:
		mov     eax, edx
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
