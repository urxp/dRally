cpu 386

	extern	__IsTable
	extern	memset
	extern	___EFG_scanf
	extern	__FDFS
	extern	tolower

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

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
global __scnf
__scnf:
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
dr@6ca86h:
		mov     ebx, [esp]
		lea     ecx, [ebx+1]
		mov     [esp], ecx
		mov     bl, [ebx]
		and     ebx, 0ffh
		je      near dr@6cc8eh
		mov     al, bl
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 2
		and     eax, 0ffh
		je      short dr@6cac3h
		mov     eax, esi
		call    near scan_white
		add     ebp, eax
		jmp     near dr@6cc4eh
dr@6cac3h:
		cmp     ebx, byte 25h
		je      short dr@6caedh
		mov     eax, esi
		call    near cget
		cmp     eax, ebx
		je      near dr@6cc4dh
dr@6cad7h:
		test    byte [esi+10h], 2
		jne     near dr@6cc8eh
		mov     edx, esi
		call    near uncget
		jmp     near dr@6cc8eh
dr@6caedh:
		mov     edx, esi
		mov     eax, ecx
		call    near get_opt
		xor     ebx, ebx
		mov     [esp], eax
		mov     bl, [eax]
		test    ebx, ebx
		je      short dr@6cb05h
		inc     eax
		mov     [esp], eax
dr@6cb05h:
		cmp     ebx, byte 65h
		jb      short dr@6cb5fh
		cmp     ebx, byte 67h
		jbe     near dr@6cbebh
		cmp     ebx, byte 70h
		jb      short dr@6cb45h
		jbe     near dr@6cbdfh
		cmp     ebx, byte 75h
		jb      short dr@6cb37h
		jbe     near dr@6cbd2h
		cmp     ebx, byte 78h
		je      near dr@6cbdfh
		jmp     near dr@6cc4eh
dr@6cb37h:
		cmp     ebx, byte 73h
		je      near dr@6cbf6h
		jmp     near dr@6cc4eh
dr@6cb45h:
		cmp     ebx, byte 6eh
		jb      short dr@6cb55h
		jbe     near dr@6cc31h
		jmp     near dr@6cbc6h
dr@6cb55h:
		cmp     ebx, byte 69h
		je      short dr@6cbb9h
		jmp     near dr@6cc4eh
dr@6cb5fh:
		cmp     ebx, byte 58h
		jb      short dr@6cb85h
		jbe     near dr@6cbdfh
		cmp     ebx, byte 63h
		jb      short dr@6cb77h
		jbe     near dr@6cc0eh
		jmp     short dr@6cba4h
dr@6cb77h:
		cmp     ebx, byte 5bh
		je      near dr@6cc01h
;30:0006cb80
		jmp     near dr@6cc4eh
dr@6cb85h:
		cmp     ebx, byte 45h
		jb      short dr@6cb96h
		jbe     short dr@6cbebh
		cmp     ebx, byte 47h
		je      short dr@6cbebh
		jmp     near dr@6cc4eh
dr@6cb96h:
		cmp     ebx, byte 25h
		je      near dr@6cc3eh
		jmp     near dr@6cc4eh
dr@6cba4h:
		mov     ecx, 1
		mov     ebx, 0ah
dr@6cbaeh:
		mov     edx, edi
		mov     eax, esi
dr@6cbb2h:
		call    near scan_int
		jmp     short dr@6cc17h
dr@6cbb9h:
		mov     ecx, 1
		mov     edx, edi
		mov     eax, esi
		xor     ebx, ebx
		jmp     short dr@6cbb2h
dr@6cbc6h:
		mov     ecx, 1
		mov     ebx, 8
		jmp     short dr@6cbaeh
dr@6cbd2h:
		mov     ebx, 0ah
		mov     edx, edi
		mov     eax, esi
		xor     ecx, ecx
		jmp     short dr@6cbb2h
dr@6cbdfh:
		mov     ecx, 1
		mov     ebx, 10h
		jmp     short dr@6cbaeh
dr@6cbebh:
		mov     edx, edi
		mov     eax, esi
		call    near scan_float
		jmp     short dr@6cc17h
dr@6cbf6h:
		mov     edx, edi
		mov     eax, esi
		call    near scan_string
		jmp     short dr@6cc17h
dr@6cc01h:
		mov     ebx, esp
		mov     edx, edi
		mov     eax, esi
		call    near scan_arb
		jmp     short dr@6cc17h
dr@6cc0eh:
		mov     edx, edi
		mov     eax, esi
		call    near scan_char
dr@6cc17h:
		mov     ebx, eax
		test    ebx, ebx
		jle     near dr@6cc8eh
		mov     dl, [esi+10h]
		add     ebp, ebx
		test    dl, 1
		je      short dr@6cc4eh
		inc     dword [esp+4]
		jmp     short dr@6cc4eh
dr@6cc31h:
		mov     ebx, ebp
		mov     edx, edi
		mov     eax, esi
		call    near report_scan
		jmp     short dr@6cc4eh
dr@6cc3eh:
		mov     eax, esi
		call    near cget
		cmp     eax, ebx
		jne     near dr@6cad7h
dr@6cc4dh:
		inc     ebp
dr@6cc4eh:
		test    byte [esi+10h], 2
		je      near dr@6ca86h
		mov     eax, [esp]
		mov     al, [eax]
		and     eax, 0ffh
		cmp     eax, byte 25h
		jne     short dr@6cc8eh
		inc     dword [esp]
		mov     eax, [esp]
		mov     edx, esi
		call    near get_opt
		mov     [esp], eax
		mov     al, [eax]
		and     eax, 0ffh
		cmp     eax, byte 6eh
		jne     short dr@6cc8eh
		mov     ebx, ebp
		mov     edx, edi
		mov     eax, esi
		call    near report_scan
dr@6cc8eh:
		cmp     dword [esp+4], byte 0
		jne     short dr@6cca2h
		test    byte [esi+10h], 2
		je      short dr@6cca2h
		mov     eax, 0ffffffffh
		jmp     short dr@6cca6h
dr@6cca2h:
		mov     eax, [esp+4]
dr@6cca6h:
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
		jne     short dr@6cce1h
		mov     cl, [ebx+10h]
		and     cl, 0feh
		inc     eax
		mov     [ebx+10h], cl
dr@6cce1h:
		xor     edx, edx
		mov     dl, [eax]
		mov     [esp], edx
		mov     dl, [esp]
		inc     dl
		and     edx, 0ffh
		mov     dl, [edx+__IsTable]
		and     dl, 20h
		and     edx, 0ffh
		je      short dr@6cd33h
		xor     edx, edx
dr@6cd06h:
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
		jne     short dr@6cd06h
		mov     [ebx+0ch], edx
dr@6cd33h:
		xor     edx, edx
		mov     dl, [eax]
		lea     esi, [eax+1]
		cmp     edx, byte 4eh
		jne     short dr@6cd47h
		or      byte [ebx+10h], 8
		mov     eax, esi
		jmp     short dr@6cd57h
dr@6cd47h:
		cmp     edx, byte 46h
		jne     short dr@6cd57h
		mov     ch, [ebx+10h]
		or      ch, 4
		mov     eax, esi
		mov     [ebx+10h], ch
dr@6cd57h:
		mov     dl, [eax]
		lea     esi, [eax+1]
		cmp     dl, 68h
		jb      short dr@6cd71h
		jbe     short dr@6cd78h
		cmp     dl, 6ch
		jb      short dr@6cd9ch
		jbe     short dr@6cd85h
		cmp     dl, 77h
		je      short dr@6cd85h
		jmp     short dr@6cd9ch
dr@6cd71h:
		cmp     dl, 4ch
		je      short dr@6cd91h
		jmp     short dr@6cd9ch
dr@6cd78h:
		mov     dh, [ebx+10h]
		or      dh, 10h
		mov     eax, esi
;30:0006cd80
		mov     [ebx+10h], dh
		jmp     short dr@6cd9ch
dr@6cd85h:
		mov     dl, [ebx+10h]
		or      dl, 20h
		inc     eax
		mov     [ebx+10h], dl
		jmp     short dr@6cd9ch
dr@6cd91h:
		mov     cl, [ebx+10h]
		or      cl, 40h
		mov     eax, esi
		mov     [ebx+10h], cl
dr@6cd9ch:
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
dr@6cdaah:
		mov     eax, ebx
		call    near cget
		mov     edx, eax
		inc     dl
		and     edx, 0ffh
		mov     dl, [edx+__IsTable]
		and     dl, 2
		and     edx, 0ffh
		je      short dr@6cdcfh
		inc     esi
		jmp     short dr@6cdaah
dr@6cdcfh:
		test    byte [ebx+10h], 2
		jne     short dr@6cddch
		mov     edx, ebx
		call    near uncget
dr@6cddch:
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
		je      short dr@6ce29h
		mov     cl, [ebx+10h]
		test    cl, 4
		je      short dr@6ce06h
		mov     edi, [edx]
		add     edi, byte 8
		mov     [edx], edi
		les     ecx, [edi-8]
		jmp     short dr@6ce29h
dr@6ce06h:
		test    cl, 8
		je      short dr@6ce1bh
		mov     esi, [edx]
		add     esi, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edx], esi
		;mov     es, eax
		db	8eh,0c0h
		mov     ecx, [esi-4]
		jmp     short dr@6ce29h
dr@6ce1bh:
		mov     ecx, [edx]
		add     ecx, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edx], ecx
		;mov     es, eax
		db	8eh,0c0h
		mov     ecx, [ecx-4]
dr@6ce29h:
		mov     edx, [ebx+0ch]
		xor     esi, esi
		cmp     edx, byte 0ffffffffh
		jne     short dr@6ce38h
		mov     edx, 1
dr@6ce38h:
		test    edx, edx
		jle     short dr@6ce6ch
		mov     eax, ebx
		call    near cget
		mov     [esp], eax
		mov     al, [ebx+10h]
		test    al, 2
		jne     short dr@6ce6ch
		inc     esi
		dec     edx
		test    al, 1
		je      short dr@6ce38h
		test    al, 20h
		je      short dr@6ce63h
		mov     eax, [esp]
		mov     [es:ecx], ax
		add     ecx, byte 2
		jmp     short dr@6ce38h
dr@6ce63h:
		mov     al, [esp]
		mov     [es:ecx], al
		inc     ecx
		jmp     short dr@6ce38h
dr@6ce6ch:
		mov     eax, esi
		add     esp, byte 4
dr@6ce71h:
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
		je      short dr@6ce8eh
		mov     byte [esp+4], 2
		jmp     short dr@6ce97h
dr@6ce8eh:
		test    byte [ebx+10h], 10h
		mov     byte [esp+4], 1
dr@6ce97h:
		mov     al, [ebx+10h]
		test    al, 1
		je      short dr@6ced0h
		test    al, 4
		je      short dr@6ceaeh
		mov     edi, [edx]
		add     edi, byte 8
		mov     [edx], edi
		les     ecx, [edi-8]
		jmp     short dr@6ced0h
dr@6ceaeh:
		test    al, 8
		je      short dr@6cec2h
		mov     esi, [edx]
		add     esi, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edx], esi
		;mov     es, eax
		db	8eh,0c0h
		mov     ecx, [esi-4]
		jmp     short dr@6ced0h
dr@6cec2h:
		mov     ecx, [edx]
		add     ecx, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edx], ecx
		;mov     es, eax
		db	8eh,0c0h
		mov     ecx, [ecx-4]
dr@6ced0h:
		xor     esi, esi
dr@6ced2h:
		mov     eax, ebx
		call    near cget
		mov     [esp], eax
		mov     al, [esp]
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 2
		and     eax, 0ffh
		je      short dr@6cef8h
		inc     esi
		jmp     short dr@6ced2h
dr@6cef8h:
		test    byte [ebx+10h], 2
		je      short dr@6cf05h
		xor     esi, esi
;30:0006cf00
		jmp     near dr@6cf6fh
dr@6cf05h:
		mov     eax, [ebx+0ch]
		lea     edx, [eax-1]
		mov     [ebx+0ch], edx
		test    eax, eax
		je      short dr@6cf65h
dr@6cf12h:
		mov     ah, [ebx+10h]
		inc     esi
		test    ah, 1
		je      short dr@6cf3dh
		xor     eax, eax
		mov     al, [esp+4]
		cmp     eax, byte 1
		jne     short dr@6cf2eh
		mov     al, [esp]
		mov     [es:ecx], al
		jmp     short dr@6cf35h
dr@6cf2eh:
		mov     eax, [esp]
		mov     [es:ecx], ax
dr@6cf35h:
		xor     eax, eax
		mov     al, [esp+4]
		add     ecx, eax
dr@6cf3dh:
		mov     eax, ebx
		call    near cgetw
		mov     [esp], eax
		cmp     eax, byte 0ffffffffh
		je      short dr@6cf6fh
		mov     al, [esp]
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 2
		and     eax, 0ffh
		je      short dr@6cf12h
dr@6cf65h:
		mov     eax, [esp]
		mov     edx, ebx
		call    near uncget
dr@6cf6fh:
		test    byte [ebx+10h], 1
		je      short dr@6cf90h
		test    esi, esi
		jle     short dr@6cf90h
		xor     eax, eax
		mov     al, [esp+4]
		cmp     eax, byte 1
		jne     short dr@6cf8ah
		mov     byte [es:ecx], 0
		jmp     short dr@6cf90h
dr@6cf8ah:
		mov     word [es:ecx], 0
dr@6cf90h:
		mov     eax, esi
		add     esp, byte 8
		jmp     near dr@6ce71h
report_scan:
		push    ecx
		push    esi
		push    edi
		push    es
		mov     cl, [eax+10h]
		test    cl, 1
		je      short dr@6cff3h
		test    cl, 4
		je      short dr@6cfb7h
		mov     edi, [edx]
		add     edi, byte 8
		mov     [edx], edi
		les     edx, [edi-8]
		jmp     short dr@6cfdch
dr@6cfb7h:
		test    cl, 8
		je      short dr@6cfcch
		mov     esi, [edx]
		add     esi, byte 4
		;mov     ecx, ds
		db	8ch,0d9h
		mov     [edx], esi
		;mov     es, ecx
		db	8eh,0c1h
		mov     edx, [esi-4]
		jmp     short dr@6cfdch
dr@6cfcch:
		mov     ecx, [edx]
		add     ecx, byte 4
		mov     [edx], ecx
		mov     edx, ecx
		;mov     ecx, ds
		db	8ch,0d9h
		;mov     es, ecx
		db	8eh,0c1h
		mov     edx, [edx-4]
dr@6cfdch:
		mov     ch, [eax+10h]
		test    ch, 10h
		je      short dr@6cfedh
		mov     [es:edx], bx
		pop     es
		pop     edi
		pop     esi
		pop     ecx
		retn    
dr@6cfedh:
		test    ch, 20h
		mov     [es:edx], ebx
dr@6cff3h:
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
		call    near memset
		xor     eax, eax
		mov     al, [ecx]
		inc     ecx
		test    eax, eax
		je      short dr@6d035h
dr@6d016h:
		mov     edx, eax
		and     eax, byte 7
		sar     edx, 3
		mov     al, [eax+_lst_mask]
		or      [edx+esi*1], al
		xor     eax, eax
		mov     al, [ecx]
		test    eax, eax
		je      short dr@6d035h
		inc     ecx
		cmp     eax, byte 5dh
		jne     short dr@6d016h
dr@6d035h:
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
		je      short dr@6d062h
		inc     eax
		mov     [ebx], eax
dr@6d062h:
		mov     edx, esp
		mov     eax, [ebx]
		call    near makelist
		mov     [ebx], eax
		mov     ah, [ecx+10h]
		test    ah, 1
		je      short dr@6d0a9h
		test    ah, 4
		je      short dr@6d086h
		mov     esi, [edi]
		add     esi, byte 8
		mov     [edi], esi
		les     esi, [esi-8]
		jmp     short dr@6d0a9h
dr@6d086h:
		test    ah, 8
		je      short dr@6d09bh
		mov     ebx, [edi]
		add     ebx, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edi], ebx
		;mov     es, eax
		db	8eh,0c0h
		mov     esi, [ebx-4]
		jmp     short dr@6d0a9h
dr@6d09bh:
		mov     edx, [edi]
		add     edx, byte 4
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edi], edx
		;mov     es, eax
		db	8eh,0c0h
		mov     esi, [edx-4]
dr@6d0a9h:
		mov     edx, [ecx+0ch]
		xor     edi, edi
dr@6d0aeh:
		test    edx, edx
		jbe     short dr@6d11ch
		mov     eax, ecx
		call    near cget
		mov     bl, [ecx+10h]
		mov     [esp+28h], eax
		test    bl, 2
		jne     short dr@6d11ch
		mov     ebx, eax
		sar     ebx, 3
		mov     bl, [esp+ebx*1]
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
		je      short dr@6d108h
		mov     edx, ecx
		call    near uncget
		jmp     short dr@6d11ch
dr@6d108h:
		inc     edi
		mov     bh, [ecx+10h]
		dec     edx
		test    bh, 1
		je      short dr@6d0aeh
		mov     al, [esp+28h]
		mov     [es:esi], al
		inc     esi
		jmp     short dr@6d0aeh
dr@6d11ch:
		test    byte [ecx+10h], 1
		je      short dr@6d12ah
		test    edi, edi
		jle     short dr@6d12ah
		mov     byte [es:esi], 0
dr@6d12ah:
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
dr@6d14ch:
		mov     eax, esi
		call    near cget
		mov     dl, al
		inc     dl
		movzx   ebp, dl
		mov     dl, [ebp+__IsTable]
		mov     ecx, eax
		and     dl, 2
		and     edx, 0ffh
		je      short dr@6d173h
		inc     dword [esp+60h]
		jmp     short dr@6d14ch
dr@6d173h:
		test    byte [esi+10h], 2
		jne     near dr@6d386h
		mov     edx, [esi+0ch]
;30:0006d180
		lea     ebp, [edx-1]
		mov     [esi+0ch], ebp
		test    edx, edx
		je      near dr@6d37dh
		cmp     eax, byte 2bh
		je      short dr@6d198h
		cmp     eax, byte 2dh
		jne     short dr@6d1b6h
dr@6d198h:
		mov     ebp, [esp+60h]
		mov     eax, esi
		mov     [ebx], cl
		call    near cgetw
		inc     ebx
		inc     ebp
		mov     ecx, eax
		mov     [esp+60h], ebp
		cmp     eax, byte 0ffffffffh
		je      near dr@6d386h
dr@6d1b6h:
		mov     al, cl
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		jne     short dr@6d1d7h
		cmp     ecx, byte 2eh
		jne     near dr@6d37dh
dr@6d1d7h:
		xor     eax, eax
		mov     [esp+68h], eax
		mov     al, cl
		xor     ebp, ebp
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		je      short dr@6d23fh
		mov     ebp, 1
dr@6d1fch:
		mov     [ebx], cl
		mov     dh, [esi+10h]
		inc     ebx
		test    dh, 10h
		je      short dr@6d216h
		imul    eax, [esp+6ah], byte 0ah
		add     ecx, eax
		sub     ecx, byte 30h
		mov     [esp+6ah], cx
dr@6d216h:
		mov     eax, esi
		inc     edi
		call    near cgetw
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		je      near dr@6d386h
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		jne     short dr@6d1fch
dr@6d23fh:
		cmp     ecx, byte 2eh
		jne     near dr@6d2efh
		mov     eax, esi
		mov     [ebx], cl
		call    near cgetw
		inc     ebx
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		je      near dr@6d386h
		test    ebp, ebp
		jne     short dr@6d27bh
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		je      near dr@6d37dh
dr@6d27bh:
		inc     edi
dr@6d27ch:
		mov     al, cl
		inc     al
;30:0006d280
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		je      short dr@6d2a6h
		inc     edi
		mov     eax, esi
		mov     [ebx], cl
		call    near cgetw
		inc     ebx
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		jne     short dr@6d27ch
dr@6d2a6h:
		test    byte [esi+10h], 10h
		je      short dr@6d2e6h
		xor     edx, edx
		mov     ebp, ebx
		mov     [esp+58h], edx
dr@6d2b4h:
		dec     ebp
		xor     eax, eax
		mov     al, [ebp+0]
		cmp     eax, byte 2eh
		je      short dr@6d2ddh
		sub     al, 30h
		mov     dword [esp+64h], 0ah
		mov     [esp+5ah], al
		xor     edx, edx
		mov     eax, [esp+58h]
		div     dword [esp+64h]
		mov     [esp+58h], eax
		jmp     short dr@6d2b4h
dr@6d2ddh:
		mov     eax, [esp+58h]
		mov     [esp+68h], ax
dr@6d2e6h:
		cmp     ecx, byte 0ffffffffh
		je      near dr@6d386h
dr@6d2efh:
		test    byte [esi+10h], 10h
		jne     near dr@6d37dh
		cmp     ecx, byte 65h
		je      short dr@6d307h
		cmp     ecx, byte 45h
		jne     near dr@6d37dh
dr@6d307h:
		inc     edi
		mov     eax, esi
		mov     [ebx], cl
		call    near cgetw
		inc     ebx
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		je      near dr@6d386h
		cmp     eax, byte 2bh
		je      short dr@6d327h
		cmp     eax, byte 2dh
		jne     short dr@6d339h
dr@6d327h:
		inc     edi
		mov     eax, esi
		mov     [ebx], cl
		call    near cgetw
		inc     ebx
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		je      short dr@6d386h
dr@6d339h:
		mov     al, cl
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		jne     short dr@6d355h
		xor     edi, edi
		jmp     short dr@6d37dh
dr@6d355h:
		inc     edi
		mov     eax, esi
		mov     [ebx], cl
		call    near cgetw
		inc     ebx
		mov     ecx, eax
		cmp     eax, byte 0ffffffffh
		je      short dr@6d386h
		inc     al
		and     eax, 0ffh
		mov     al, [eax+__IsTable]
		and     al, 20h
		and     eax, 0ffh
		jne     short dr@6d355h
dr@6d37dh:
		mov     edx, esi
		mov     eax, ecx
		call    near uncget
dr@6d386h:
		test    edi, edi
		jle     near dr@6d441h
		mov     ecx, [esp+60h]
		mov     dl, [esi+10h]
		add     edi, ecx
		test    dl, 1
		je      near dr@6d441h
		mov     byte [ebx], 0
		test    byte [esi+10h], 10h
		je      short dr@6d3b9h
		xor     eax, eax
		mov     al, [esp]
		cmp     eax, byte 2dh
		jne     short dr@6d3c5h
		neg     dword [esp+68h]
		jmp     short dr@6d3c5h
dr@6d3b9h:
		lea     edx, [esp+50h]
		mov     eax, esp
		call    dword [___EFG_scanf]
dr@6d3c5h:
		mov     bl, [esi+10h]
		test    bl, 4
		je      short dr@6d3ddh
		mov     eax, [esp+5ch]
		mov     ecx, [eax]
		add     ecx, byte 8
		mov     [eax], ecx
		les     ebx, [ecx-8]
		jmp     short dr@6d408h
dr@6d3ddh:
		test    bl, 8
		je      short dr@6d3f6h
		mov     eax, [esp+5ch]
		mov     ebx, [eax]
		add     ebx, byte 4
		mov     [eax], ebx
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		mov     ebx, [ebx-4]
		jmp     short dr@6d408h
dr@6d3f6h:
		mov     eax, [esp+5ch]
		mov     edx, [eax]
		add     edx, byte 4
		mov     [eax], edx
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		mov     ebx, [edx-4]
dr@6d408h:
		mov     cl, [esi+10h]
		test    cl, 10h
		je      short dr@6d416h
		mov     eax, [esp+68h]
		jmp     short dr@6d43eh
dr@6d416h:
		test    cl, 20h
		jne     short dr@6d420h
		test    cl, 40h
		je      short dr@6d431h
dr@6d420h:
		mov     eax, [esp+50h]
		mov     [es:ebx], eax
		mov     eax, [esp+54h]
		mov     [es:ebx+4], eax
		jmp     short dr@6d441h
dr@6d431h:
		mov     eax, [esp+50h]
		mov     edx, [esp+54h]
		call    near __FDFS
dr@6d43eh:
		mov     [es:ebx], eax
dr@6d441h:
		mov     eax, edi
		add     esp, byte 6ch
		pop     ebp
		jmp     near dr@6ce71h
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
dr@6d466h:
		mov     eax, esi
		call    near cget
		mov     ebx, eax
		inc     al
		movzx   ebp, al
		mov     al, [ebp+__IsTable]
		and     al, 2
		and     eax, 0ffh
		je      short dr@6d488h
		inc     dword [esp]
		jmp     short dr@6d466h
dr@6d488h:
		test    byte [esi+10h], 2
		jne     near dr@6d5c4h
		mov     eax, [esi+0ch]
		lea     ebp, [eax-1]
		mov     [esi+0ch], ebp
		test    eax, eax
		je      near dr@6d5bbh
		mov     eax, 2bh
		mov     ebp, [esp+4]
		mov     [esp+8], eax
		test    ebp, ebp
		je      short dr@6d4d7h
		cmp     ebx, byte 2bh
		je      short dr@6d4beh
		cmp     ebx, byte 2dh
		jne     short dr@6d4d7h
dr@6d4beh:
		inc     dword [esp]
		mov     eax, esi
		mov     [esp+8], ebx
		call    near cgetw
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      near dr@6d5c4h
dr@6d4d7h:
		test    edx, edx
		jne     short dr@6d533h
		cmp     ebx, byte 30h
		jne     short dr@6d52ch
		mov     eax, esi
		mov     ecx, 1
		call    near cgetw
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      near dr@6d5c4h
		cmp     eax, byte 78h
		je      short dr@6d501h
		cmp     eax, byte 58h
		jne     short dr@6d525h
dr@6d501h:
		mov     eax, esi
		mov     ebp, [esp]
		call    near cgetw
		xor     ecx, ecx
		add     ebp, byte 2
		mov     ebx, eax
		mov     [esp], ebp
		cmp     eax, byte 0ffffffffh
		je      near dr@6d5c4h
		mov     edx, 10h
		jmp     short dr@6d577h
dr@6d525h:
		mov     edx, 8
		jmp     short dr@6d577h
dr@6d52ch:
		mov     edx, 0ah
		jmp     short dr@6d577h
dr@6d533h:
		cmp     edx, byte 10h
		jne     short dr@6d577h
		cmp     ebx, byte 30h
		jne     short dr@6d577h
		mov     eax, esi
		mov     ecx, 1
		call    near cgetw
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      near dr@6d5c4h
		cmp     eax, byte 78h
		je      short dr@6d55eh
		cmp     eax, byte 58h
		jne     short dr@6d577h
dr@6d55eh:
		mov     eax, esi
		mov     ebx, [esp]
		call    near cgetw
		add     ebx, byte 2
		xor     ecx, ecx
		mov     [esp], ebx
dr@6d570h:
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      short dr@6d5c4h
dr@6d577h:
		mov     eax, ebx
		call    near radix_value
		cmp     eax, edx
;30:0006d580
		jge     short dr@6d591h
		imul    edi, edx
		add     edi, eax
		mov     eax, esi
		inc     ecx
		call    near cgetw
		jmp     short dr@6d570h
dr@6d591h:
		cmp     ebx, byte 3ah
		jne     short dr@6d5bbh
		test    byte [esi+10h], 80h
		je      short dr@6d5bbh
dr@6d59ch:
		mov     eax, esi
		inc     ecx
		call    near cgetw
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      short dr@6d5c4h
		call    near radix_value
		cmp     eax, edx
		jge     short dr@6d5bbh
		imul    edi, edx
		add     edi, eax
		jmp     short dr@6d59ch
dr@6d5bbh:
		mov     edx, esi
		mov     eax, ebx
		call    near uncget
dr@6d5c4h:
		cmp     dword [esp+8], byte 2dh
		jne     short dr@6d5cdh
		neg     edi
dr@6d5cdh:
		test    ecx, ecx
		jle     short dr@6d632h
		mov     edx, [esp]
		mov     ah, [esi+10h]
		add     ecx, edx
		test    ah, 1
		je      short dr@6d632h
		test    ah, 4
		je      short dr@6d5f3h
		mov     eax, [esp+0ch]
		mov     edx, [eax]
		add     edx, byte 8
		mov     [eax], edx
		les     eax, [edx-8]
		jmp     short dr@6d61eh
dr@6d5f3h:
		test    ah, 8
		je      short dr@6d60ch
		mov     eax, [esp+0ch]
		mov     ebp, [eax]
		add     ebp, byte 4
		;mov     edx, ds
		db	8ch,0dah
		mov     [eax], ebp
		;mov     es, edx
		db	8eh,0c2h
		mov     eax, [ebp-4]
		jmp     short dr@6d61eh
dr@6d60ch:
		mov     eax, [esp+0ch]
		mov     ebx, [eax]
		add     ebx, byte 4
		;mov     edx, ds
		db	8ch,0dah
		mov     [eax], ebx
		;mov     es, edx
		db	8eh,0c2h
		mov     eax, [ebx-4]
dr@6d61eh:
		mov     bl, [esi+10h]
		test    bl, 10h
		je      short dr@6d62ch
		mov     [es:eax], di
		jmp     short dr@6d632h
dr@6d62ch:
		test    bl, 20h
		mov     [es:eax], edi
dr@6d632h:
		mov     eax, ecx
		add     esp, byte 10h
		pop     ebp
		pop     es
		pop     edi
		pop     esi
		retn    
radix_value:
		cmp     eax, byte 30h
		jl      short dr@6d64ah
		cmp     eax, byte 39h
		jg      short dr@6d64ah
		sub     eax, byte 30h
		retn    
dr@6d64ah:
		call    near tolower
		cmp     eax, byte 61h
		jl      short dr@6d65dh
		cmp     eax, byte 66h
		jg      short dr@6d65dh
		sub     eax, byte 57h
		retn    
dr@6d65dh:
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
		je      short dr@6d681h
		mov     eax, edx
		call    near cget
		test    byte [edx+10h], 2
		je      short dr@6d686h
dr@6d681h:
		mov     eax, 0ffffffffh
dr@6d686h:
		pop     edx
		pop     ebx
		retn


SEGMENT CONST2  PUBLIC USE32 ALIGN=4 CLASS=DATA
_lst_mask:
    db	1,2,4,8,10h,20h,40h,80h