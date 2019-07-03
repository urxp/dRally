%include "macros.inc"

    extern  __CHK
    extern  __CEXT_V(NetworkConnectionEstablished)
    extern  __CEXT_V(___24e4ach)
    extern  __CEXT_F(___6168ch)

%include "layout.inc"

section @text

;; 23594h
__GDECL(__CEXT_F(procChatData))
		push    20h
		call    __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     [esp+4], eax
		mov     ebx, edx
		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], byte 0
		je      ___2374bh
		call    __CEXT_F(___6168ch)
		mov     eax, ebx
		lea     esi, [eax*4+0]
		add     esi, eax
		xor     edx, edx
		add     esi, esi
___235cdh:
		mov     eax, [__CEXT_V(___24e4ach)]
		xor     ecx, ecx
		mov     cx, [eax]
		sub     ecx, edx
		lea     ebx, [ecx-3]
		and     ebx, 0fffh
		mov     bl, [ebx+eax+4]
		lea     edi, [ecx-1]
		and     edi, 0fffh
		movzx   edi, byte [edi+eax+4]
		mov     [esp], edi
		mov     ebp, [esp]
		lea     edi, [esi+3]
		and     ebx, 0ffh
		cmp     edi, ebp
		jne     ___2373eh
		lea     edi, [ecx-2]
		and     edi, 0fffh
		movzx   edi, byte [edi+eax+4]
		mov     [esp], edi
		mov     ebp, [esp]
		lea     edi, [esi+2]
		cmp     edi, ebp
		jne     ___2373eh
		sub     ecx, ebx
		lea     edi, [ecx-4]
		and     edi, 0fffh
		movzx   edi, byte [edi+eax+4]
		mov     [esp], edi
		mov     ebp, [esp]
		lea     edi, [esi+1]
		cmp     edi, ebp
		jne     ___2373eh
		sub     ecx, byte 5
		and     ecx, 0fffh
		mov     al, [ecx+eax+4]
		and     eax, 0ffh
		cmp     eax, esi
		jne     ___2373eh
		xor     eax, esi
		test    ebx, ebx
		jle     ___23696h
		mov     esi, [esp+4]
___2366fh:
		mov     ecx, [__CEXT_V(___24e4ach)]
		xor     edi, edi
		mov     di, [ecx]
		sub     edi, edx
		sub     edi, ebx
		add     edi, eax
		sub     edi, byte 3
		and     edi, 0fffh
		inc     esi
		mov     cl, [ecx+edi+4]
		inc     eax
		mov     [esi-1], cl
		cmp     eax, ebx
		jl      ___2366fh
___23696h:
		mov     eax, [__CEXT_V(___24e4ach)]
		xor     ecx, ecx
		mov     cx, [eax]
		sub     ecx, edx
		dec     ecx
		and     ecx, 0fffh
		mov     byte [ecx+eax+4], 0
		xor     ecx, ecx
		mov     cx, [eax]
		sub     ecx, edx
		sub     ecx, byte 2
		and     ecx, 0fffh
		mov     byte [ecx+eax+4], 0
		xor     ecx, ecx
		mov     cx, [eax]
		sub     ecx, edx
		sub     ecx, byte 3
		and     ecx, 0fffh
		mov     byte [ecx+eax+4], 0
		xor     ecx, ecx
		mov     cx, [eax]
		sub     ecx, edx
		sub     ecx, ebx
		sub     ecx, byte 4
		and     ecx, 0fffh
		mov     byte [ecx+eax+4], 0
		xor     ecx, ecx
		mov     cx, [eax]
		sub     ecx, edx
		sub     ecx, ebx
		sub     ecx, byte 5
		and     ecx, 0fffh
		mov     byte [ecx+eax+4], 0
		xor     eax, eax
		test    ebx, ebx
		jle     ___23730h
___2370ch:
		mov     ecx, [__CEXT_V(___24e4ach)]
		xor     esi, esi
		mov     si, [ecx]
		sub     esi, edx
		sub     esi, ebx
		add     esi, eax
		sub     esi, byte 3
		and     esi, 0fffh
		inc     eax
		mov     byte [ecx+esi+4], 0
		cmp     eax, ebx
		jl      ___2370ch
___23730h:
		mov     eax, 1
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
___2373eh:
		inc     edx
		cmp     edx, 3e8h
		jl      ___235cdh
___2374bh:
		xor     eax, eax
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
