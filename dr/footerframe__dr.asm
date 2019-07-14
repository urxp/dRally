%include "macros.inc"

    extern  __CHK
    
    extern  __CEXT_V(p_bpk_menubg5)
    extern  __CEXT_V(VGABufferPtr_0)
    extern  __CEXT_V(p_bpk_chatlin1)

%include "layout.inc"

section @text

;; ~ 135f1h (+1 label)
__GDECL(__CEXT_F(frameFooter__dr))
		push    1ch
		call    __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     ebp, eax
		mov     [esp+4], edx
		mov     [esp], ecx
		test    ecx, ecx
		jle     ___1367eh
		lea     edi, [edx*4+0]
		lea     esi, [ecx*4+0]
		add     edi, edx
		add     esi, ecx
		shl     edi, 7
		shl     esi, 7
		lea     edx, [edi+0fffff600h]
		sub     esi, 0a00h
		add     edi, esi
		sub     ebx, byte 6
		mov     [esp+8], edi
___13646h:
		mov     esi, [__CEXT_V(p_bpk_menubg5)]
		mov     edi, [__CEXT_V(VGABufferPtr_0)]
		mov     ecx, ebx
		add     esi, edx
		add     edi, edx
		add     esi, ebp
		add     edi, ebp
		add     esi, byte 2
		add     edi, byte 2
		add     edx, 280h
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		cmp     edx, [esp+8]
		jl      ___13646h
___1367eh:
		mov     ebx, [esp+4]
		inc     ebx
		lea     edx, [ebx*4+0]
		mov     ecx, 0ah
		add     edx, ebx
		mov     ebx, [__CEXT_V(VGABufferPtr_0)]
		shl     edx, 7
		mov     esi, [__CEXT_V(p_bpk_chatlin1)]
		add     ebx, edx
		mov     edx, 280h
___136a7h:
		mov     edi, edx
___136a9h:
		mov     al, [esi]
		or      al, al
		je      ___136b1h
		mov     [ebx], al
___136b1h:
		inc     ebx
		inc     esi
		dec     edi
		jne     ___136a9h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     ___136a7h
		mov     eax, [esp+4]
		add     eax, [esp]
		sub     eax, byte 9
		lea     edx, [eax*4+0]
		mov     ecx, 0ah
		add     edx, eax
		mov     ebx, [__CEXT_V(VGABufferPtr_0)]
		shl     edx, 7
		mov     esi, [__CEXT_V(p_bpk_chatlin1)]
		add     ebx, edx
		mov     edx, 280h
___136efh:
		mov     edi, edx
___136f1h:
		mov     al, [esi]
		or      al, al
		je      ___136f9h
		mov     [ebx], al
___136f9h:
		inc     ebx
		inc     esi
		dec     edi
		jne     ___136f1h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     ___136efh
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		retn    
