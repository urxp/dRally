%include "macros.inc"

    extern  __CEXT_F(___5ff99h)
    extern  __CEXT_V(AllocEntries)
    extern  __CEXT_F(freeMemory)
    extern  __CEXT_V(___24ccb4h)
    extern  __CEXT_V(___24ccbeh)
    extern  __CEXT_V(REGS1_EBX)
    extern  __CEXT_V(REGS1_ECX)
    extern  __CEXT_V(REGS1_ESI)
    extern  __CEXT_V(REGS1_EDI)
    extern  __CEXT_V(REGS1_EAX)
    extern  __CEXT_F(int386_REGS1)
    extern  __CEXT_V(REGS1_CFLAG)
    extern  __CEXT_F(___58b20h)
    extern  __CEXT_F(___600b0h)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(freeAllocInfoTable))
		push    ebx
		push    ecx
		push    edx
		push    esi
		call    __CEXT_F(___5ff99h)
		mov     ebx, [__CEXT_V(AllocEntries)]
___5ec13h:
		mov     edx, ebx
		mov     cl, [ebx]
		xor     eax, eax
		test    cl, cl
		jne     ___5ec2fh
___5ec1dh:
		cmp     eax, 0e38h
		jae     ___5ec2fh
		mov     ch, [edx+12h]
		add     edx, 12h
		inc     eax
		test    ch, ch
		je      ___5ec1dh
___5ec2fh:
		cmp     eax, 0e38h
		jae     ___5ec44h
		imul    eax, eax, 12h
		mov     eax, [ebx+eax+1]
		call    __CEXT_F(freeMemory)
		jmp     ___5ec13h
___5ec44h:
		mov     al, [__CEXT_V(___24ccbeh)]
		mov     edx, __CEXT_V(AllocEntries)
		test    al, al
		je      ___5ec9ch
		mov     eax, [__CEXT_V(AllocEntries)]
		shr     eax, 10h
		mov     [__CEXT_V(REGS1_EBX)], ax
		mov     ax, [__CEXT_V(AllocEntries)]
		mov     [__CEXT_V(REGS1_ECX)], ax
		mov     eax, [__CEXT_V(___24ccb4h)]
		shr     eax, 10h
		mov     [__CEXT_V(REGS1_ESI)], ax
		mov     ax, [__CEXT_V(___24ccb4h)]
		mov     ebx, 601h
		mov     [__CEXT_V(REGS1_EDI)], ax
		mov     eax, 31h
		mov     [__CEXT_V(REGS1_EAX)], bx
		call    __CEXT_F(int386_REGS1)
___5ec9ch:
		mov     ax, [edx+8]
		mov     [__CEXT_V(REGS1_EDI)], ax
		mov     eax, [edx+8]
		shr     eax, 10h
		mov     ecx, 502h
		mov     [__CEXT_V(REGS1_ESI)], ax
		mov     eax, 31h
		mov     [__CEXT_V(REGS1_EAX)], cx
		call    __CEXT_F(int386_REGS1)
		cmp     dword [__CEXT_V(REGS1_CFLAG)], 0
		je      ___5ecdbh
		push    5
		call    __CEXT_F(___58b20h)
		add     esp, 4
___5ecdbh:
		mov     ax, [edx+0ch]
		mov     esi, 1
		mov     [__CEXT_V(REGS1_EBX)], ax
		mov     eax, 31h
		mov     [__CEXT_V(REGS1_EAX)], si
		call    __CEXT_F(int386_REGS1)
		cmp     dword [__CEXT_V(REGS1_CFLAG)], 0
		je      ___5ed0eh
		push    9
		call    __CEXT_F(___58b20h)
		add     esp, 4
___5ed0eh:
		mov     dword [edx+8], 0
		mov     word [edx+0ch], 0
		mov     dword [edx], 0
		mov     dword [edx+4], 0
		mov     byte [edx+0eh], 0
		call    __CEXT_F(___600b0h)
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
