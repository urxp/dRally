%include "macros.inc"

    extern  __IsTable
    extern  __CEXT_F(memset__clib3r)
    extern  ___EFG_scanf
    extern  __FDFS
    extern  tolower

%include "layout.inc"

section @text

cget:
		push    edx
		mov     edx, eax
		call    dword [edx]
		pop     edx
		retn    
uncget:
		push    ebx
		mov     ebx, edx
		call    dword [ebx+4]
		pop     ebx
		retn    
__GDECL(__scnf)
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     esi, eax
		mov     [esp], edx
		mov     edi, ebx
		mov     ah, [eax+10h]
		xor     edx, edx
		xor     ebp, ebp
		and     ah, 0fdh
		mov     [esp+4], edx
		mov     [esi+10h], ah
___6ca86h:
		mov     ebx, [esp]
		lea     ecx, [ebx+1]
		mov     [esp], ecx
		mov     bl, [ebx]
		and     ebx, 0ffh
		je      ___6cc8eh
		mov     al, bl
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 2
		and     eax, 0ffh
		je      ___6cac3h
		mov     eax, esi
		call    scan_white
		add     ebp, eax
		jmp     ___6cc4eh
___6cac3h:
		cmp     ebx, byte 25h
		je      ___6caedh
		mov     eax, esi
		call    cget
		cmp     eax, ebx
		je      ___6cc4dh
___6cad7h:
		test    byte [esi+10h], 2
		jne     ___6cc8eh
		mov     edx, esi
		call    uncget
		jmp     ___6cc8eh
___6caedh:
		mov     edx, esi
		mov     eax, ecx
		call    get_opt
		xor     ebx, ebx
		mov     [esp], eax
		mov     bl, [eax]
		test    ebx, ebx
		je      ___6cb05h
		inc     eax
		mov     [esp], eax
___6cb05h:
		cmp     ebx, byte 65h
		jb      ___6cb5fh
		cmp     ebx, byte 67h
		jbe     ___6cbebh
		cmp     ebx, byte 70h
		jb      ___6cb45h
		jbe     ___6cbdfh
		cmp     ebx, byte 75h
		jb      ___6cb37h
		jbe     ___6cbd2h
		cmp     ebx, byte 78h
		je      ___6cbdfh
		jmp     ___6cc4eh
___6cb37h:
		cmp     ebx, byte 73h
		je      ___6cbf6h
		jmp     ___6cc4eh
___6cb45h:
		cmp     ebx, byte 6eh
		jb      ___6cb55h
		jbe     ___6cc31h
		jmp     ___6cbc6h
___6cb55h:
		cmp     ebx, byte 69h
		je      ___6cbb9h
		jmp     ___6cc4eh
___6cb5fh:
		cmp     ebx, byte 58h
		jb      ___6cb85h
		jbe     ___6cbdfh
		cmp     ebx, byte 63h
		jb      ___6cb77h
		jbe     ___6cc0eh
		jmp     ___6cba4h
___6cb77h:
		cmp     ebx, byte 5bh
		je      ___6cc01h
		jmp     ___6cc4eh
___6cb85h:
		cmp     ebx, byte 45h
		jb      ___6cb96h
		jbe     ___6cbebh
		cmp     ebx, byte 47h
		je      ___6cbebh
		jmp     ___6cc4eh
___6cb96h:
		cmp     ebx, byte 25h
		je      ___6cc3eh
		jmp     ___6cc4eh
___6cba4h:
		mov     ecx, 1
		mov     ebx, 0ah
___6cbaeh:
		mov     edx, edi
		mov     eax, esi
___6cbb2h:
		call    scan_int
		jmp     ___6cc17h
___6cbb9h:
		mov     ecx, 1
		mov     edx, edi
		mov     eax, esi
		xor     ebx, ebx
		jmp     ___6cbb2h
___6cbc6h:
		mov     ecx, 1
		mov     ebx, 8
		jmp     ___6cbaeh
___6cbd2h:
		mov     ebx, 0ah
		mov     edx, edi
		mov     eax, esi
		xor     ecx, ecx
		jmp     ___6cbb2h
___6cbdfh:
		mov     ecx, 1
		mov     ebx, 10h
		jmp     ___6cbaeh
___6cbebh:
		mov     edx, edi
		mov     eax, esi
		call    scan_float
		jmp     ___6cc17h
___6cbf6h:
		mov     edx, edi
		mov     eax, esi
		call    scan_string
		jmp     ___6cc17h
___6cc01h:
		mov     ebx, esp
		mov     edx, edi
		mov     eax, esi
		call    scan_arb
		jmp     ___6cc17h
___6cc0eh:
		mov     edx, edi
		mov     eax, esi
		call    scan_char
___6cc17h:
		mov     ebx, eax
		test    ebx, ebx
		jle     ___6cc8eh
		mov     dl, [esi+10h]
		add     ebp, ebx
		test    dl, 1
		je      ___6cc4eh
		inc     dword [esp+4]
		jmp     ___6cc4eh
___6cc31h:
		mov     ebx, ebp
		mov     edx, edi
		mov     eax, esi
		call    report_scan
		jmp     ___6cc4eh
___6cc3eh:
		mov     eax, esi
		call    cget
		cmp     eax, ebx
		jne     ___6cad7h
___6cc4dh:
		inc     ebp
___6cc4eh:
		test    byte [esi+10h], 2
		je      ___6ca86h
		mov     eax, [esp]
		mov     al, [eax]
		and     eax, 0ffh
		cmp     eax, byte 25h
		jne     ___6cc8eh
		inc     dword [esp]
		mov     eax, [esp]
		mov     edx, esi
		call    get_opt
		mov     [esp], eax
		mov     al, [eax]
		and     eax, 0ffh
		cmp     eax, byte 6eh
		jne     ___6cc8eh
		mov     ebx, ebp
		mov     edx, edi
		mov     eax, esi
		call    report_scan
___6cc8eh:
		cmp     dword [esp+4], byte 0
		jne     ___6cca2h
		test    byte [esi+10h], 2
		je      ___6cca2h
		mov     eax, 0ffffffffh
		jmp     ___6cca6h
___6cca2h:
		mov     eax, [esp+4]
___6cca6h:
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
get_opt:
		push    ebx
		push    ecx
		push    esi
		sub     esp, byte 4
		mov     ebx, edx
		mov     dl, [edx+10h]
		or      dl, 1
		mov     [ebx+10h], dl
		mov     dh, dl
		mov     dword [ebx+0ch], 0ffffffffh
		and     dh, 3
		mov     [ebx+10h], dh
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 2ah
		jne     ___6cce1h
		mov     cl, [ebx+10h]
		and     cl, 0feh
		inc     eax
		mov     [ebx+10h], cl
___6cce1h:
		xor     edx, edx
		mov     dl, [eax]
		mov     [esp], edx
		mov     dl, [esp]
		inc     dl
		and     edx, 0ffh
		mov     dl, [edx+__IsTable]
		and     dl, 20h
		and     edx, 0ffh
		je      ___6cd33h
		xor     edx, edx
___6cd06h:
		imul    edx, edx, byte 0ah
		mov     esi, [esp]
		sub     esi, byte 30h
		inc     eax
		add     edx, esi
		movzx   esi, byte [eax]
		mov     [esp], esi
		mov     cl, [esp]
		inc     cl
		movzx   esi, cl
		mov     cl, [esi+__IsTable]
		and     cl, 20h
		movzx   esi, cl
		test    esi, esi
		jne     ___6cd06h
		mov     [ebx+0ch], edx
___6cd33h:
		xor     edx, edx
		mov     dl, [eax]
		lea     esi, [eax+1]
		cmp     edx, byte 4eh
		jne     ___6cd47h
		or      byte [ebx+10h], 8
		mov     eax, esi
		jmp     ___6cd57h
___6cd47h:
		cmp     edx, byte 46h
		jne     ___6cd57h
		mov     ch, [ebx+10h]
		or      ch, 4
		mov     eax, esi
		mov     [ebx+10h], ch
___6cd57h:
		mov     dl, [eax]
		lea     esi, [eax+1]
		cmp     dl, 68h
		jb      ___6cd71h
		jbe     ___6cd78h
		cmp     dl, 6ch
		jb      ___6cd9ch
		jbe     ___6cd85h
		cmp     dl, 77h
		je      ___6cd85h
		jmp     ___6cd9ch
___6cd71h:
		cmp     dl, 4ch
		je      ___6cd91h
		jmp     ___6cd9ch
___6cd78h:
		mov     dh, [ebx+10h]
		or      dh, 10h
		mov     eax, esi
		mov     [ebx+10h], dh
		jmp     ___6cd9ch
___6cd85h:
		mov     dl, [ebx+10h]
		or      dl, 20h
		inc     eax
		mov     [ebx+10h], dl
		jmp     ___6cd9ch
___6cd91h:
		mov     cl, [ebx+10h]
		or      cl, 40h
		mov     eax, esi
		mov     [ebx+10h], cl
___6cd9ch:
		add     esp, byte 4
		pop     esi
		pop     ecx
		pop     ebx
		retn    
scan_white:
		push    ebx
		push    edx
		push    esi
		mov     ebx, eax
		xor     esi, esi
___6cdaah:
		mov     eax, ebx
		call    cget
		mov     edx, eax
		inc     dl
		and     edx, 0ffh
		mov     dl, [edx+__IsTable]
		and     dl, 2
		and     edx, 0ffh
		je      ___6cdcfh
		inc     esi
		jmp     ___6cdaah
___6cdcfh:
		test    byte [ebx+10h], 2
		jne     ___6cddch
		mov     edx, ebx
		call    uncget
___6cddch:
		mov     eax, esi
		pop     esi
		pop     edx
		pop     ebx
		retn    
scan_char:
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    es
		sub     esp, byte 4
		mov     ebx, eax
		test    byte [eax+10h], 1
		je      ___6ce29h
		mov     cl, [ebx+10h]
		test    cl, 4
		je      ___6ce06h
		mov     edi, [edx]
		add     edi, byte 8
		mov     [edx], edi
		les     ecx, [edi-8]
		jmp     ___6ce29h
___6ce06h:
		test    cl, 8
		je      ___6ce1bh
		mov     esi, [edx]
		add     esi, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edx], esi
		;mov     es, eax
		db	8eh,0c0h
		mov     ecx, [esi-4]
		jmp     ___6ce29h
___6ce1bh:
		mov     ecx, [edx]
		add     ecx, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edx], ecx
		;mov     es, eax
		db	8eh,0c0h
		mov     ecx, [ecx-4]
___6ce29h:
		mov     edx, [ebx+0ch]
		xor     esi, esi
		cmp     edx, byte 0ffffffffh
		jne     ___6ce38h
		mov     edx, 1
___6ce38h:
		test    edx, edx
		jle     ___6ce6ch
		mov     eax, ebx
		call    cget
		mov     [esp], eax
		mov     al, [ebx+10h]
		test    al, 2
		jne     ___6ce6ch
		inc     esi
		dec     edx
		test    al, 1
		je      ___6ce38h
		test    al, 20h
		je      ___6ce63h
		mov     eax, [esp]
		mov     [es:ecx], ax
		add     ecx, byte 2
		jmp     ___6ce38h
___6ce63h:
		mov     al, [esp]
		mov     [es:ecx], al
		inc     ecx
		jmp     ___6ce38h
___6ce6ch:
		mov     eax, esi
		add     esp, byte 4
___6ce71h:
		pop     es
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
scan_string:
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    es
		sub     esp, byte 8
		mov     ebx, eax
		test    byte [eax+10h], 20h
		je      ___6ce8eh
		mov     byte [esp+4], 2
		jmp     ___6ce97h
___6ce8eh:
		test    byte [ebx+10h], 10h
		mov     byte [esp+4], 1
___6ce97h:
		mov     al, [ebx+10h]
		test    al, 1
		je      ___6ced0h
		test    al, 4
		je      ___6ceaeh
		mov     edi, [edx]
		add     edi, byte 8
		mov     [edx], edi
		les     ecx, [edi-8]
		jmp     ___6ced0h
___6ceaeh:
		test    al, 8
		je      ___6cec2h
		mov     esi, [edx]
		add     esi, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edx], esi
		;mov     es, eax
		db	8eh,0c0h
		mov     ecx, [esi-4]
		jmp     ___6ced0h
___6cec2h:
		mov     ecx, [edx]
		add     ecx, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edx], ecx
		;mov     es, eax
		db	8eh,0c0h
		mov     ecx, [ecx-4]
___6ced0h:
		xor     esi, esi
___6ced2h:
		mov     eax, ebx
		call    cget
		mov     [esp], eax
		mov     al, [esp]
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 2
		and     eax, 0ffh
		je      ___6cef8h
		inc     esi
		jmp     ___6ced2h
___6cef8h:
		test    byte [ebx+10h], 2
		je      ___6cf05h
		xor     esi, esi
		jmp     ___6cf6fh
___6cf05h:
		mov     eax, [ebx+0ch]
		lea     edx, [eax-1]
		mov     [ebx+0ch], edx
		test    eax, eax
		je      ___6cf65h
___6cf12h:
		mov     ah, [ebx+10h]
		inc     esi
		test    ah, 1
		je      ___6cf3dh
		xor     eax, eax
		mov     al, [esp+4]
		cmp     eax, byte 1
		jne     ___6cf2eh
		mov     al, [esp]
		mov     [es:ecx], al
		jmp     ___6cf35h
___6cf2eh:
		mov     eax, [esp]
		mov     [es:ecx], ax
___6cf35h:
		xor     eax, eax
		mov     al, [esp+4]
		add     ecx, eax
___6cf3dh:
		mov     eax, ebx
		call    cgetw
		mov     [esp], eax
		cmp     eax, byte 0ffffffffh
		je      ___6cf6fh
		mov     al, [esp]
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 2
		and     eax, 0ffh
		je      ___6cf12h
___6cf65h:
		mov     eax, [esp]
		mov     edx, ebx
		call    uncget
___6cf6fh:
		test    byte [ebx+10h], 1
		je      ___6cf90h
		test    esi, esi
		jle     ___6cf90h
		xor     eax, eax
		mov     al, [esp+4]
		cmp     eax, byte 1
		jne     ___6cf8ah
		mov     byte [es:ecx], 0
		jmp     ___6cf90h
___6cf8ah:
		mov     word [es:ecx], 0
___6cf90h:
		mov     eax, esi
		add     esp, byte 8
		jmp     ___6ce71h
report_scan:
		push    ecx
		push    esi
		push    edi
		push    es
		mov     cl, [eax+10h]
		test    cl, 1
		je      ___6cff3h
		test    cl, 4
		je      ___6cfb7h
		mov     edi, [edx]
		add     edi, byte 8
		mov     [edx], edi
		les     edx, [edi-8]
		jmp     ___6cfdch
___6cfb7h:
		test    cl, 8
		je      ___6cfcch
		mov     esi, [edx]
		add     esi, byte 4
		;mov     ecx, ds
		db	8ch,0d9h
		mov     [edx], esi
		;mov     es, ecx
		db	8eh,0c1h
		mov     edx, [esi-4]
		jmp     ___6cfdch
___6cfcch:
		mov     ecx, [edx]
		add     ecx, byte 4
		mov     [edx], ecx
		mov     edx, ecx
		;mov     ecx, ds
		db	8ch,0d9h
		;mov     es, ecx
		db	8eh,0c1h
		mov     edx, [edx-4]
___6cfdch:
		mov     ch, [eax+10h]
		test    ch, 10h
		je      ___6cfedh
		mov     [es:edx], bx
		pop     es
		pop     edi
		pop     esi
		pop     ecx
		retn    
___6cfedh:
		test    ch, 20h
		mov     [es:edx], ebx
___6cff3h:
		pop     es
		pop     edi
		pop     esi
		pop     ecx
		retn    
makelist:
		push    ebx
		push    ecx
		push    esi
		mov     ecx, eax
		mov     esi, edx
		mov     ebx, 20h
		mov     eax, esi
		xor     edx, edx
		call    __CEXT_F(memset__clib3r)
		xor     eax, eax
		mov     al, [ecx]
		inc     ecx
		test    eax, eax
		je      ___6d035h
___6d016h:
		mov     edx, eax
		and     eax, byte 7
		sar     edx, 3
		mov     al, [eax+_lst_mask]
		or      [edx+esi], al
		xor     eax, eax
		mov     al, [ecx]
		test    eax, eax
		je      ___6d035h
		inc     ecx
		cmp     eax, byte 5dh
		jne     ___6d016h
___6d035h:
		mov     eax, ecx
		pop     esi
		pop     ecx
		pop     ebx
		retn    
scan_arb:
		push    ecx
		push    esi
		push    edi
		push    es
		push    ebp
		sub     esp, byte 2ch
		mov     ecx, eax
		mov     edi, edx
		mov     eax, [ebx]
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 5eh
		setz    dl
		and     edx, 0ffh
		mov     [esp+24h], edx
		je      ___6d062h
		inc     eax
		mov     [ebx], eax
___6d062h:
		mov     edx, esp
		mov     eax, [ebx]
		call    makelist
		mov     [ebx], eax
		mov     ah, [ecx+10h]
		test    ah, 1
		je      ___6d0a9h
		test    ah, 4
		je      ___6d086h
		mov     esi, [edi]
		add     esi, byte 8
		mov     [edi], esi
		les     esi, [esi-8]
		jmp     ___6d0a9h
___6d086h:
		test    ah, 8
		je      ___6d09bh
		mov     ebx, [edi]
		add     ebx, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edi], ebx
		;mov     es, eax
		db	8eh,0c0h
		mov     esi, [ebx-4]
		jmp     ___6d0a9h
___6d09bh:
		mov     edx, [edi]
		add     edx, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edi], edx
		;mov     es, eax
		db	8eh,0c0h
		mov     esi, [edx-4]
___6d0a9h:
		mov     edx, [ecx+0ch]
		xor     edi, edi
___6d0aeh:
		test    edx, edx
		jbe     ___6d11ch
		mov     eax, ecx
		call    cget
		mov     bl, [ecx+10h]
		mov     [esp+28h], eax
		test    bl, 2
		jne     ___6d11ch
		mov     ebx, eax
		sar     ebx, 3
		mov     bl, [esp+ebx]
		and     ebx, 0ffh
		mov     [esp+20h], ebx
		mov     ebx, eax
		and     ebx, byte 7
		mov     bl, [ebx+_lst_mask]
		mov     ebp, [esp+20h]
		and     ebx, 0ffh
		test    ebx, ebp
		setz    bl
		mov     ebp, [esp+24h]
		and     ebx, 0ffh
		cmp     ebx, ebp
		je      ___6d108h
		mov     edx, ecx
		call    uncget
		jmp     ___6d11ch
___6d108h:
		inc     edi
		mov     bh, [ecx+10h]
		dec     edx
		test    bh, 1
		je      ___6d0aeh
		mov     al, [esp+28h]
		mov     [es:esi], al
		inc     esi
		jmp     ___6d0aeh
___6d11ch:
		test    byte [ecx+10h], 1
		je      ___6d12ah
		test    edi, edi
		jle     ___6d12ah
		mov     byte [es:esi], 0
___6d12ah:
		mov     eax, edi
		add     esp, byte 2ch
		pop     ebp
		pop     es
		pop     edi
		pop     esi
		pop     ecx
		retn    
scan_float:
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    es
		push    ebp
		sub     esp, byte 6ch
		mov     esi, eax
		mov     [esp+5ch], edx
		xor     edi, edi
		mov     ebx, esp
		mov     [esp+60h], edi
___6d14ch:
		mov     eax, esi
		call    cget
		mov     dl, al
		inc     dl
		movzx   ebp, dl
		mov     dl, [ebp+__IsTable]
		mov     ecx, eax
		and     dl, 2
		and     edx, 0ffh
		je      ___6d173h
		inc     dword [esp+60h]
		jmp     ___6d14ch
___6d173h:
		test    byte [esi+10h], 2
		jne     ___6d386h
		mov     edx, [esi+0ch]
		lea     ebp, [edx-1]
		mov     [esi+0ch], ebp
		test    edx, edx
		je      ___6d37dh
		cmp     eax, byte 2bh
		je      ___6d198h
		cmp     eax, byte 2dh
		jne     ___6d1b6h
___6d198h:
		mov     ebp, [esp+60h]
		mov     eax, esi
		mov     [ebx], cl
		call    cgetw
		inc     ebx
		inc     ebp
		mov     ecx, eax
		mov     [esp+60h], ebp
		cmp     eax, byte 0ffffffffh
		je      ___6d386h
___6d1b6h:
		mov     al, cl
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		jne     ___6d1d7h
		cmp     ecx, byte 2eh
		jne     ___6d37dh
___6d1d7h:
		xor     eax, eax
		mov     [esp+68h], eax
		mov     al, cl
		xor     ebp, ebp
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		je      ___6d23fh
		mov     ebp, 1
___6d1fch:
		mov     [ebx], cl
		mov     dh, [esi+10h]
		inc     ebx
		test    dh, 10h
		je      ___6d216h
		imul    eax, [esp+6ah], byte 0ah
		add     ecx, eax
		sub     ecx, byte 30h
		mov     [esp+6ah], cx
___6d216h:
		mov     eax, esi
		inc     edi
		call    cgetw
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6d386h
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		jne     ___6d1fch
___6d23fh:
		cmp     ecx, byte 2eh
		jne     ___6d2efh
		mov     eax, esi
		mov     [ebx], cl
		call    cgetw
		inc     ebx
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6d386h
		test    ebp, ebp
		jne     ___6d27bh
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		je      ___6d37dh
___6d27bh:
		inc     edi
___6d27ch:
		mov     al, cl
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		je      ___6d2a6h
		inc     edi
		mov     eax, esi
		mov     [ebx], cl
		call    cgetw
		inc     ebx
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		jne     ___6d27ch
___6d2a6h:
		test    byte [esi+10h], 10h
		je      ___6d2e6h
		xor     edx, edx
		mov     ebp, ebx
		mov     [esp+58h], edx
___6d2b4h:
		dec     ebp
		xor     eax, eax
		mov     al, [ebp+0]
		cmp     eax, byte 2eh
		je      ___6d2ddh
		sub     al, 30h
		mov     dword [esp+64h], 0ah
		mov     [esp+5ah], al
		xor     edx, edx
		mov     eax, [esp+58h]
		div     dword [esp+64h]
		mov     [esp+58h], eax
		jmp     ___6d2b4h
___6d2ddh:
		mov     eax, [esp+58h]
		mov     [esp+68h], ax
___6d2e6h:
		cmp     ecx, byte 0ffffffffh
		je      ___6d386h
___6d2efh:
		test    byte [esi+10h], 10h
		jne     ___6d37dh
		cmp     ecx, byte 65h
		je      ___6d307h
		cmp     ecx, byte 45h
		jne     ___6d37dh
___6d307h:
		inc     edi
		mov     eax, esi
		mov     [ebx], cl
		call    cgetw
		inc     ebx
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6d386h
		cmp     eax, byte 2bh
		je      ___6d327h
		cmp     eax, byte 2dh
		jne     ___6d339h
___6d327h:
		inc     edi
		mov     eax, esi
		mov     [ebx], cl
		call    cgetw
		inc     ebx
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6d386h
___6d339h:
		mov     al, cl
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		jne     ___6d355h
		xor     edi, edi
		jmp     ___6d37dh
___6d355h:
		inc     edi
		mov     eax, esi
		mov     [ebx], cl
		call    cgetw
		inc     ebx
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6d386h
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		jne     ___6d355h
___6d37dh:
		mov     edx, esi
		mov     eax, ecx
		call    uncget
___6d386h:
		test    edi, edi
		jle     ___6d441h
		mov     ecx, [esp+60h]
		mov     dl, [esi+10h]
		add     edi, ecx
		test    dl, 1
		je      ___6d441h
		mov     byte [ebx], 0
		test    byte [esi+10h], 10h
		je      ___6d3b9h
		xor     eax, eax
		mov     al, [esp]
		cmp     eax, byte 2dh
		jne     ___6d3c5h
		neg     dword [esp+68h]
		jmp     ___6d3c5h
___6d3b9h:
		lea     edx, [esp+50h]
		mov     eax, esp
		call    dword [___EFG_scanf]
___6d3c5h:
		mov     bl, [esi+10h]
		test    bl, 4
		je      ___6d3ddh
		mov     eax, [esp+5ch]
		mov     ecx, [eax]
		add     ecx, byte 8
		mov     [eax], ecx
		les     ebx, [ecx-8]
		jmp     ___6d408h
___6d3ddh:
		test    bl, 8
		je      ___6d3f6h
		mov     eax, [esp+5ch]
		mov     ebx, [eax]
		add     ebx, byte 4
		mov     [eax], ebx
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		mov     ebx, [ebx-4]
		jmp     ___6d408h
___6d3f6h:
		mov     eax, [esp+5ch]
		mov     edx, [eax]
		add     edx, byte 4
		mov     [eax], edx
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		mov     ebx, [edx-4]
___6d408h:
		mov     cl, [esi+10h]
		test    cl, 10h
		je      ___6d416h
		mov     eax, [esp+68h]
		jmp     ___6d43eh
___6d416h:
		test    cl, 20h
		jne     ___6d420h
		test    cl, 40h
		je      ___6d431h
___6d420h:
		mov     eax, [esp+50h]
		mov     [es:ebx], eax
		mov     eax, [esp+54h]
		mov     [es:ebx+4], eax
		jmp     ___6d441h
___6d431h:
		mov     eax, [esp+50h]
		mov     edx, [esp+54h]
		call    __FDFS
___6d43eh:
		mov     [es:ebx], eax
___6d441h:
		mov     eax, edi
		add     esp, byte 6ch
		pop     ebp
		jmp     ___6ce71h
scan_int:
		push    esi
		push    edi
		push    es
		push    ebp
		sub     esp, byte 10h
		mov     esi, eax
		mov     [esp+0ch], edx
		mov     [esp+4], ecx
		mov     edx, ebx
		xor     edi, edi
		xor     ecx, ecx
		mov     [esp], edi
___6d466h:
		mov     eax, esi
		call    cget
		mov     ebx, eax
		inc     al
		movzx   ebp, al
		mov     al, [ebp+__IsTable]
		and     al, 2
		and     eax, 0ffh
		je      ___6d488h
		inc     dword [esp]
		jmp     ___6d466h
___6d488h:
		test    byte [esi+10h], 2
		jne     ___6d5c4h
		mov     eax, [esi+0ch]
		lea     ebp, [eax-1]
		mov     [esi+0ch], ebp
		test    eax, eax
		je      ___6d5bbh
		mov     eax, 2bh
		mov     ebp, [esp+4]
		mov     [esp+8], eax
		test    ebp, ebp
		je      ___6d4d7h
		cmp     ebx, byte 2bh
		je      ___6d4beh
		cmp     ebx, byte 2dh
		jne     ___6d4d7h
___6d4beh:
		inc     dword [esp]
		mov     eax, esi
		mov     [esp+8], ebx
		call    cgetw
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6d5c4h
___6d4d7h:
		test    edx, edx
		jne     ___6d533h
		cmp     ebx, byte 30h
		jne     ___6d52ch
		mov     eax, esi
		mov     ecx, 1
		call    cgetw
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6d5c4h
		cmp     eax, byte 78h
		je      ___6d501h
		cmp     eax, byte 58h
		jne     ___6d525h
___6d501h:
		mov     eax, esi
		mov     ebp, [esp]
		call    cgetw
		xor     ecx, ecx
		add     ebp, byte 2
		mov     ebx, eax
		mov     [esp], ebp
		cmp     eax, byte 0ffffffffh
		je      ___6d5c4h
		mov     edx, 10h
		jmp     ___6d577h
___6d525h:
		mov     edx, 8
		jmp     ___6d577h
___6d52ch:
		mov     edx, 0ah
		jmp     ___6d577h
___6d533h:
		cmp     edx, byte 10h
		jne     ___6d577h
		cmp     ebx, byte 30h
		jne     ___6d577h
		mov     eax, esi
		mov     ecx, 1
		call    cgetw
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6d5c4h
		cmp     eax, byte 78h
		je      ___6d55eh
		cmp     eax, byte 58h
		jne     ___6d577h
___6d55eh:
		mov     eax, esi
		mov     ebx, [esp]
		call    cgetw
		add     ebx, byte 2
		xor     ecx, ecx
		mov     [esp], ebx
___6d570h:
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6d5c4h
___6d577h:
		mov     eax, ebx
		call    radix_value
		cmp     eax, edx
		jge     ___6d591h
		imul    edi, edx
		add     edi, eax
		mov     eax, esi
		inc     ecx
		call    cgetw
		jmp     ___6d570h
___6d591h:
		cmp     ebx, byte 3ah
		jne     ___6d5bbh
		test    byte [esi+10h], 80h
		je      ___6d5bbh
___6d59ch:
		mov     eax, esi
		inc     ecx
		call    cgetw
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      ___6d5c4h
		call    radix_value
		cmp     eax, edx
		jge     ___6d5bbh
		imul    edi, edx
		add     edi, eax
		jmp     ___6d59ch
___6d5bbh:
		mov     edx, esi
		mov     eax, ebx
		call    uncget
___6d5c4h:
		cmp     dword [esp+8], byte 2dh
		jne     ___6d5cdh
		neg     edi
___6d5cdh:
		test    ecx, ecx
		jle     ___6d632h
		mov     edx, [esp]
		mov     ah, [esi+10h]
		add     ecx, edx
		test    ah, 1
		je      ___6d632h
		test    ah, 4
		je      ___6d5f3h
		mov     eax, [esp+0ch]
		mov     edx, [eax]
		add     edx, byte 8
		mov     [eax], edx
		les     eax, [edx-8]
		jmp     ___6d61eh
___6d5f3h:
		test    ah, 8
		je      ___6d60ch
		mov     eax, [esp+0ch]
		mov     ebp, [eax]
		add     ebp, byte 4
		;mov     edx, ds
		db	8ch,0dah
		mov     [eax], ebp
		;mov     es, edx
		db	8eh,0c2h
		mov     eax, [ebp-4]
		jmp     ___6d61eh
___6d60ch:
		mov     eax, [esp+0ch]
		mov     ebx, [eax]
		add     ebx, byte 4
		;mov     edx, ds
		db	8ch,0dah
		mov     [eax], ebx
		;mov     es, edx
		db	8eh,0c2h
		mov     eax, [ebx-4]
___6d61eh:
		mov     bl, [esi+10h]
		test    bl, 10h
		je      ___6d62ch
		mov     [es:eax], di
		jmp     ___6d632h
___6d62ch:
		test    bl, 20h
		mov     [es:eax], edi
___6d632h:
		mov     eax, ecx
		add     esp, byte 10h
		pop     ebp
		pop     es
		pop     edi
		pop     esi
		retn    
radix_value:
		cmp     eax, byte 30h
		jl      ___6d64ah
		cmp     eax, byte 39h
		jg      ___6d64ah
		sub     eax, byte 30h
		retn    
___6d64ah:
		call    tolower
		cmp     eax, byte 61h
		jl      ___6d65dh
		cmp     eax, byte 66h
		jg      ___6d65dh
		sub     eax, byte 57h
		retn    
___6d65dh:
		mov     eax, 10h
		retn    
cgetw:
		push    ebx
		push    edx
		mov     edx, eax
		mov     eax, [eax+0ch]
		lea     ebx, [eax-1]
		mov     [edx+0ch], ebx
		test    eax, eax
		je      ___6d681h
		mov     eax, edx
		call    cget
		test    byte [edx+10h], 2
		je      ___6d686h
___6d681h:
		mov     eax, 0ffffffffh
___6d686h:
		pop     edx
		pop     ebx
		retn    


section @const2

_lst_mask:
db	1,2,4,8,10h,20h,40h,80h
