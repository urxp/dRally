%include "macros.inc"

    extern  __CEXT_V(REGS1)
    extern  __CEXT_V(REGS1_EAX)
    extern  __CEXT_V(REGS1_EBX)
    extern  __CEXT_F(int386__clib3r)
    extern  __CEXT_V(REGS1_CFLAG)
    extern  __CEXT_F(___58b20h)
    extern  __CEXT_V(REGS1_EDX)
    extern  __CEXT_V(REGS1_ECX)
    extern  __CEXT_V(REGS1_ESI)
    extern  __CEXT_V(REGS1_EDI)

%include "layout.inc"

section @text

;; 5f734h
__GDECL(__CEXT_F(allocdoslock__dpmi))
		push    ecx
		push    esi
		sub     esp, byte 4
		mov     ecx, eax
		mov     esi, edx
		mov     [esp], bl
		mov     edx, 100h
		lea     eax, [esi+0fh]
		mov     ebx, __CEXT_V(REGS1)
		shr     eax, 4
		mov     [__CEXT_V(REGS1_EAX)], dx
		mov     [__CEXT_V(REGS1_EBX)], ax
		mov     edx, ebx
		mov     eax, 31h
		call    __CEXT_F(int386__clib3r)
		cmp     dword [__CEXT_V(REGS1_CFLAG)], byte 0
		je      ___5f77ch
		push    byte 1
		call    __CEXT_F(___58b20h)
		add     esp, byte 4
___5f77ch:
		mov     ax, [__CEXT_V(REGS1_EAX)]
		mov     [ecx+0ah], ax
		xor     eax, eax
		mov     ax, [__CEXT_V(REGS1_EAX)]
		shl     eax, 4
		mov     [ecx], eax
		mov     ax, [__CEXT_V(REGS1_EDX)]
		mov     [ecx+8], ax
		mov     [ecx+4], esi
		mov     al, [esp]
		mov     [ecx+0ch], al
		test    al, al
		je      ___5f7f3h
		mov     ebx, 600h
		mov     eax, [ecx]
		mov     si, [ecx]
		mov     [__CEXT_V(REGS1_EAX)], bx
		shr     eax, 10h
		mov     [__CEXT_V(REGS1_ECX)], si
		mov     ebx, __CEXT_V(REGS1)
		mov     [__CEXT_V(REGS1_EBX)], ax
		mov     eax, [ecx+4]
		mov     edx, ebx
		shr     eax, 10h
		mov     cx, [ecx+4]
		mov     [__CEXT_V(REGS1_ESI)], ax
		mov     eax, 31h
		mov     [__CEXT_V(REGS1_EDI)], cx
		call    __CEXT_F(int386__clib3r)
___5f7f3h:
		add     esp, byte 4
		pop     esi
		pop     ecx
		retn    
