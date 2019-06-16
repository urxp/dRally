%include "macros.inc"

    extern  __CEXT_V(AllocEntries)
    extern  __CEXT_F(___58b20h)
    extern  __CEXT_V(REGS1_EBX)
    extern  __CEXT_V(REGS1_ECX)
    extern  __CEXT_V(REGS1)
    extern  __CEXT_V(REGS1_EAX)
    extern  __CEXT_V(REGS1_ESI)
    extern  __CEXT_V(REGS1_EDI)
    extern  __CEXT_F(int386__clib3r)
    extern  __CEXT_V(REGS1_EDX)
    extern  __CEXT_V(REGS1_CFLAG)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(freeMemory))
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, eax
		mov     esi, [__CEXT_V(AllocEntries)]
		xor     ecx, ecx
		mov     ebx, [esi+1]
		mov     eax, esi
		cmp     edx, ebx
		je      ___5ef27h
___5ef14h:
		cmp     ecx, 0e38h
		jae     ___5ef27h
		mov     edi, [eax+13h]
		add     eax, 12h
		inc     ecx
		cmp     edx, edi
		jne     ___5ef14h
___5ef27h:
		cmp     ecx, 0e38h
		je      ___5ef3eh
		lea     eax, [ecx*8+0]
		add     eax, ecx
		cmp     byte [esi+eax*2], 0
		jne     ___5ef48h
___5ef3eh:
		push    0eh
		call    __CEXT_F(___58b20h)
		add     esp, 4
___5ef48h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		lea     edi, [esi+eax]
		cmp     byte [edi+11h], 0
		je      ___5efa9h
		mov     eax, [edi+1]
		shr     eax, 10h
		mov     [__CEXT_V(REGS1_EBX)], ax
		mov     ax, [edi+1]
		mov     edx, 601h
		mov     [__CEXT_V(REGS1_ECX)], ax
		mov     eax, [edi+5]
		mov     ebx, __CEXT_V(REGS1)
		shr     eax, 10h
		mov     [__CEXT_V(REGS1_EAX)], dx
		mov     [__CEXT_V(REGS1_ESI)], ax
		mov     ax, [edi+5]
		mov     edx, ebx
		mov     [__CEXT_V(REGS1_EDI)], ax
		mov     eax, 31h
		call    __CEXT_F(int386__clib3r)
		mov     byte [edi+11h], 0
___5efa9h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, esi
		mov     dl, [eax]
		cmp     dl, 1
		jb      ___5f01eh
		jbe     ___5efc6h
		cmp     dl, 2
		je      ___5eff7h
		jmp     ___5f01eh
___5efc6h:
		mov     edi, 502h
		mov     ebx, __CEXT_V(REGS1)
		mov     dx, [eax+9]
		mov     eax, [eax+9]
		mov     [__CEXT_V(REGS1_EDI)], dx
		shr     eax, 10h
		mov     edx, ebx
		mov     [__CEXT_V(REGS1_ESI)], ax
		mov     eax, 31h
		mov     [__CEXT_V(REGS1_EAX)], di
		jmp     ___5f019h
___5eff7h:
		mov     ebx, 101h
		mov     ax, [eax+0dh]
		mov     [__CEXT_V(REGS1_EAX)], bx
		mov     [__CEXT_V(REGS1_EDX)], ax
		mov     ebx, __CEXT_V(REGS1)
		mov     eax, 31h
		mov     edx, ebx
___5f019h:
		call    __CEXT_F(int386__clib3r)
___5f01eh:
		cmp     dword [__CEXT_V(REGS1_CFLAG)], 0
		je      ___5f031h
		push    0eh
		call    __CEXT_F(___58b20h)
		add     esp, 4
___5f031h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		mov     byte [esi+eax*2], 0
		pop     edi
		pop     esi
___5f040h:
		pop     edx
		pop     ecx
		pop     ebx
		retn    	
