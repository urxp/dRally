%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(strstr)
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     esi, eax
		mov     ebx, edx
		cmp     byte [edx], 0
		jne     ___670a0h
___67099h:
		mov     eax, esi
		jmp     ___6713dh
___670a0h:
		cmp     byte [edx+1], 0
		jne     ___670c2h
		mov     dl, [ebx]
___670a8h:
		mov     al, [esi]
		cmp     al, dl
		je      ___670c0h
		cmp     al, 0
		je      ___670beh
		inc     esi
		mov     al, [esi]
		cmp     al, dl
		je      ___670c0h
		inc     esi
		cmp     al, 0
		jne     ___670a8h
___670beh:
		sub     esi, esi
___670c0h:
		jmp     ___67099h
___670c2h:
		mov     ecx, 0ffffffffh
		mov     edi, esi
		xor     al, al
		push    es
		jecxz   ___670d9h
		;mov     edx, ds
		db	8ch,0dah
		;mov     es, edx
		db	8eh,0c2h
		repne scasb   
		jne     ___670d9h
		dec     edi
		;test    ax, 0cf89h
		db	66h,0a9h
___670d9h:
		;mov     edi, ecx
		db	89h,0cfh
		pop     es
		mov     [esp], edi
		mov     edi, ebx
		push    es
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		pop     es
		mov     ebp, ecx
___670f3h:
		mov     ecx, [esp]
		sub     ecx, esi
		cmp     ecx, ebp
		jb      ___6713bh
		mov     edi, esi
		mov     al, [ebx]
		push    es
		jecxz   ___6710eh
		;mov     edx, ds
		db	8ch,0dah
		;mov     es, edx
		db	8eh,0c2h
		repne scasb   
		jne     ___6710eh
		dec     edi
		;test    ax, 0cf89h
		db	66h,0a9h
___6710eh:
		;mov     edi, ecx
		db	89h,0cfh
		pop     es
		mov     edx, edi
		test    edi, edi
		je      ___6713bh
		mov     ecx, ebp
		mov     edi, ebx
		mov     esi, edx
		push    es
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		xor     eax, eax
		repe cmpsb   
		je      ___6712dh
		sbb     eax, eax
		sbb     eax, byte 0ffffffffh
___6712dh:
		pop     es
		test    eax, eax
		jne     ___67136h
		mov     eax, edx
		jmp     ___6713dh
___67136h:
		lea     esi, [edx+1]
		jmp     ___670f3h
___6713bh:
		xor     eax, eax
___6713dh:
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
