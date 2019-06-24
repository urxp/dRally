%include "macros.inc"

    extern  __ConfigBuffer
    extern  __ErrorStatus

%include "layout.inc"

section @text

__GDECL(_L1OutCode)
		push    ebx
		mov     ebx, eax
		xor     al, al
		cmp     bx, [__ConfigBuffer+1ah]
		jge     short ___7d6ebh
		mov     al, 8
		jmp     short ___7d6f6h
___7d6ebh:
		cmp     bx, [__ConfigBuffer+1ch]
		jle     short ___7d6f6h
		mov     al, 4
___7d6f6h:
		cmp     dx, [__ConfigBuffer+1eh]
		jge     short ___7d703h
		or      al, 1
		jmp     short ___7d70eh
___7d703h:
		cmp     dx, [__ConfigBuffer+20h]
		jle     short ___7d70eh
		or      al, 2
___7d70eh:
		test    al, al
		je      short ___7d71bh
		mov     word [__ErrorStatus], 2
___7d71bh:
		pop     ebx
		retn    
line_inter:
		push    esi
		push    edi
		enter   4, 0
		mov     esi, eax
		mov     edi, edx
		movsx   ebx, bx
		movsx   eax, word [eax]
		sub     ebx, eax
		mov     eax, ebx
		movsx   ecx, cx
		cdq     
		xor     eax, edx
		sub     eax, edx
		mov     ebx, eax
		mov     [ebp-4], eax
		movsx   eax, word [edi]
		movsx   edx, word [ebp+10h]
		sub     ecx, eax
		movsx   eax, word [esi]
		sub     edx, eax
		mov     eax, edx
		add     ecx, ecx
		cdq     
		xor     eax, edx
		sub     eax, edx
		imul    eax, ecx
		test    eax, eax
		jle     short ___7d760h
		add     eax, ebx
		jmp     short ___7d762h
___7d760h:
		sub     eax, ebx
___7d762h:
		mov     ebx, [ebp-4]
		cdq     
		add     ebx, ebx
		idiv    ebx
		mov     ebx, eax
		movsx   eax, word [edi]
		add     eax, ebx
		mov     [edi], ax
		mov     eax, [ebp+10h]
		mov     [esi], ax
		leave   
		pop     edi
		pop     esi
		ret     4
__GDECL(_L0LineClip)
		push    esi
		push    edi
		enter   10h, 0
		mov     edi, eax
		mov     esi, edx
		mov     [ebp-10h], ebx
		mov     [ebp-0ch], ecx
		movsx   edx, word [edx]
		movsx   eax, word [eax]
		call    near _L1OutCode
		mov     [ebp-8], al
		movsx   edx, word [ecx]
		movsx   eax, word [ebx]
___7d7a4h:
		call    near _L1OutCode
		mov     [ebp-4], al
___7d7ach:
		movzx   eax, byte [ebp-8]
		movzx   edx, byte [ebp-4]
		test    eax, edx
		jne     near ___7d902h
		mov     al, [ebp-8]
		cmp     al, [ebp-4]
		je      near ___7d902h
		test    al, al
		jne     near ___7d862h
		mov     al, [ebp-4]
		and     al, 1
		movzx   eax, al
		test    eax, eax
		je      short ___7d7f2h
		mov     edx, [ebp-10h]
		movsx   eax, word [__ConfigBuffer+1eh]
___7d7e6h:
		movsx   ecx, word [edi]
		push    eax
		movsx   ebx, word [esi]
		mov     eax, [ebp-0ch]
		jmp     short ___7d84ch
___7d7f2h:
		mov     al, [ebp-4]
		and     al, 2
		movzx   eax, al
		test    eax, eax
		je      short ___7d80ah
		mov     edx, [ebp-10h]
		movsx   eax, word [__ConfigBuffer+20h]
		jmp     short ___7d7e6h
___7d80ah:
		mov     al, [ebp-4]
		and     al, 4
		movzx   eax, al
		test    eax, eax
		je      short ___7d82ch
		mov     edx, [ebp-0ch]
		movsx   eax, word [__ConfigBuffer+1ch]
		movsx   ecx, word [esi]
		push    eax
		movsx   ebx, word [edi]
		mov     eax, [ebp-10h]
		jmp     short ___7d84ch
___7d82ch:
		mov     al, [ebp-4]
		and     al, 8
		movzx   eax, al
		test    eax, eax
		je      short ___7d851h
		mov     edx, [ebp-0ch]
		movsx   eax, word [__ConfigBuffer+1ah]
		movsx   ecx, word [esi]
		push    eax
		movsx   ebx, word [edi]
		mov     eax, [ebp-10h]
___7d84ch:
		call    near line_inter
___7d851h:
		mov     edx, [ebp-0ch]
		mov     eax, [ebp-10h]
		movsx   edx, word [edx]
		movsx   eax, word [eax]
		jmp     near ___7d7a4h
___7d862h:
		and     al, 1
		movzx   eax, al
		test    eax, eax
		je      short ___7d885h
		mov     ecx, [ebp-10h]
		mov     ebx, [ebp-0ch]
		movsx   eax, word [__ConfigBuffer+1eh]
___7d878h:
		mov     edx, edi
		push    eax
		movsx   ecx, word [ecx]
		movsx   ebx, word [ebx]
		mov     eax, esi
		jmp     short ___7d8eah
___7d885h:
		mov     al, [ebp-8]
		and     al, 2
		movzx   eax, al
		test    eax, eax
		je      short ___7d8a0h
		mov     ecx, [ebp-10h]
		mov     ebx, [ebp-0ch]
		movsx   eax, word [__ConfigBuffer+20h]
		jmp     short ___7d878h
___7d8a0h:
		mov     al, [ebp-8]
		and     al, 4
		movzx   eax, al
		test    eax, eax
		je      short ___7d8c6h
		mov     ecx, [ebp-0ch]
		mov     ebx, [ebp-10h]
		movsx   eax, word [__ConfigBuffer+1ch]
		mov     edx, esi
		push    eax
		movsx   ecx, word [ecx]
		movsx   ebx, word [ebx]
		mov     eax, edi
		jmp     short ___7d8eah
___7d8c6h:
		mov     al, [ebp-8]
		and     al, 8
		movzx   eax, al
		test    eax, eax
		je      short ___7d8efh
		mov     ecx, [ebp-0ch]
		mov     ebx, [ebp-10h]
		movsx   eax, word [__ConfigBuffer+1ah]
		mov     edx, esi
		push    eax
		movsx   ecx, word [ecx]
		movsx   ebx, word [ebx]
		mov     eax, edi
___7d8eah:
		call    near line_inter
___7d8efh:
		movsx   edx, word [esi]
		movsx   eax, word [edi]
		call    near _L1OutCode
		mov     [ebp-8], al
		jmp     near ___7d7ach
___7d902h:
		movzx   dx, byte [ebp-8]
		movzx   ax, byte [ebp-4]
___7d90ch:
		and     eax, edx
		leave   
		pop     edi
		pop     esi
		retn    
block_inter:
		push    ecx
		mov     bh, bl
		and     bh, 1
		movzx   ecx, bh
		test    ecx, ecx
		je      short ___7d92ah
		mov     ax, [__ConfigBuffer+1eh]
___7d925h:
		mov     [edx], ax
		pop     ecx
		retn    
___7d92ah:
		mov     bh, bl
		and     bh, 2
		movzx   ecx, bh
		test    ecx, ecx
		je      short ___7d93eh
		mov     ax, [__ConfigBuffer+20h]
		jmp     short ___7d925h
___7d93eh:
		mov     dl, bl
		and     dl, 4
		movzx   edx, dl
		test    edx, edx
		je      short ___7d956h
		mov     dx, [__ConfigBuffer+1ch]
		mov     [eax], dx
		pop     ecx
		retn    
___7d956h:
		mov     dl, bl
		and     dl, 8
		movzx   edx, dl
		test    edx, edx
		je      short ___7d96ch
		mov     dx, [__ConfigBuffer+1ah]
		mov     [eax], dx
___7d96ch:
		pop     ecx
		retn    
__GDECL(_L0BlockClip)
		push    esi
		push    edi
		enter   0ch, 0
		mov     esi, eax
		mov     edi, edx
		mov     [ebp-0ch], ebx
		movsx   edx, word [edx]
		movsx   eax, word [eax]
		call    near _L1OutCode
		mov     [ebp-4], al
		movsx   eax, word [ebx]
___7d98ch:
		movsx   edx, word [ecx]
		call    near _L1OutCode
		mov     [ebp-8], al
___7d997h:
		movzx   ebx, byte [ebp-4]
		movzx   eax, byte [ebp-8]
		test    ebx, eax
		jne     short ___7d9dch
		mov     dl, [ebp-4]
		cmp     dl, [ebp-8]
		je      short ___7d9dch
		test    dl, dl
		jne     short ___7d9c3h
		mov     ebx, eax
		mov     edx, ecx
		mov     eax, [ebp-0ch]
		call    near block_inter
		mov     eax, [ebp-0ch]
		movsx   eax, word [eax]
		jmp     short ___7d98ch
___7d9c3h:
		mov     edx, edi
		mov     eax, esi
		call    near block_inter
		movsx   edx, word [edi]
		movsx   eax, word [esi]
		call    near _L1OutCode
		mov     [ebp-4], al
		jmp     short ___7d997h
___7d9dch:
		movzx   dx, byte [ebp-4]
		movzx   ax, byte [ebp-8]
		jmp     near ___7d90ch
