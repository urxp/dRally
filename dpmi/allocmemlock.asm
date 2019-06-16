%include "macros.inc"

    extern  __CEXT_V(AllocEntries)
    extern  __CEXT_F(___58b20h)
    extern  __CEXT_V(REGS1)
    extern  __CEXT_V(REGS1_EAX)
    extern  __CEXT_V(REGS1_EBX)
    extern  __CEXT_V(REGS1_ECX)
    extern  __CEXT_F(int386__clib3r)
    extern  __CEXT_V(REGS1_CFLAG)
    extern  __CEXT_V(REGS1_ESI)
    extern  __CEXT_V(REGS1_EDI)
    extern  __CEXT_V(REGS1_EDX)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(allocMemoryLock))
		push    ebx
		push    ecx
		push    esi
		push    edi
		sub     esp, byte 4
		mov     esi, eax
		mov     [esp], dl
		mov     edi, [__CEXT_V(AllocEntries)]
		xor     ecx, ecx
		mov     dl, [edi]
		mov     eax, edi
		test    dl, dl
		je      ___5ed67h
___5ed54h:
		cmp     ecx, 0e38h
		jae     ___5ed67h
		mov     dh, [eax+12h]
		add     eax, byte 12h
		inc     ecx
		test    dh, dh
		jne     ___5ed54h
___5ed67h:
		cmp     ecx, 0e38h
		jne     ___5ed79h
		push    byte 0dh
		call    __CEXT_F(___58b20h)
		add     esp, byte 4
___5ed79h:
		cmp     esi, 100000h
		jb      ___5ed87h
		or      si, 0fffh
		inc     esi
___5ed87h:
		mov     edx, 501h
		mov     eax, esi
		mov     ebx, __CEXT_V(REGS1)
		shr     eax, 10h
		mov     [__CEXT_V(REGS1_EAX)], dx
		mov     [__CEXT_V(REGS1_EBX)], ax
		mov     edx, ebx
		mov     eax, 31h
		mov     [__CEXT_V(REGS1_ECX)], si
		call    __CEXT_F(int386__clib3r)
		cmp     dword [__CEXT_V(REGS1_CFLAG)], byte 0
		jne     ___5ee09h
		xor     eax, eax
		mov     ax, [__CEXT_V(REGS1_ESI)]
		mov     edx, eax
		xor     eax, eax
		shl     edx, 10h
		mov     ax, [__CEXT_V(REGS1_EDI)]
		lea     ebx, [edx+eax]
		mov     edx, ecx
		lea     eax, [ecx*8+0]
		add     eax, ecx
		xor     edx, ecx
		mov     [edi+eax*2+9], ebx
		mov     dx, [__CEXT_V(REGS1_EBX)]
		mov     ebx, edx
		xor     edx, edx
		shl     ebx, 10h
		mov     dx, [__CEXT_V(REGS1_ECX)]
		mov     byte [edi+eax*2], 1
		add     edx, ebx
		mov     [edi+eax*2+1], edx
		jmp     ___5ee7ah
___5ee09h:
		mov     ebx, 100h
		lea     eax, [esi+0fh]
		mov     [__CEXT_V(REGS1_EAX)], bx
		shr     eax, 4
		mov     ebx, __CEXT_V(REGS1)
		mov     [__CEXT_V(REGS1_EBX)], ax
		mov     eax, 31h
		mov     edx, ebx
		call    __CEXT_F(int386__clib3r)
		cmp     dword [__CEXT_V(REGS1_CFLAG)], byte 0
		je      ___5ee45h
		push    byte 0dh
		call    __CEXT_F(___58b20h)
		add     esp, byte 4
___5ee45h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		mov     dx, [__CEXT_V(REGS1_EAX)]
		mov     [edi+eax*2+0fh], dx
		xor     edx, edx
		mov     dx, [__CEXT_V(REGS1_EAX)]
		shl     edx, 4
		mov     [edi+eax*2+1], edx
		mov     dx, [__CEXT_V(REGS1_EDX)]
		mov     byte [edi+eax*2], 2
		mov     [edi+eax*2+0dh], dx
___5ee7ah:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, edi
		mov     bl, [esp]
		mov     [eax+5], esi
		test    bl, bl
		je      ___5eeddh
		mov     esi, 600h
		mov     edx, [eax+1]
		mov     ebx, __CEXT_V(REGS1)
		shr     edx, 10h
		mov     [__CEXT_V(REGS1_EAX)], si
		mov     [__CEXT_V(REGS1_EBX)], dx
		mov     edx, [eax+5]
		mov     si, [eax+1]
		shr     edx, 10h
		mov     ax, [eax+5]
		mov     [__CEXT_V(REGS1_ESI)], dx
		mov     [__CEXT_V(REGS1_EDI)], ax
		mov     eax, 31h
		mov     edx, ebx
		mov     [__CEXT_V(REGS1_ECX)], si
		call    __CEXT_F(int386__clib3r)
___5eeddh:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     edi, eax
		mov     al, [esp]
		mov     [edi+11h], al
		mov     eax, [edi+1]
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
