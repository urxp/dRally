%include "macros.inc"

    extern  __CEXT_V(REGS1_EBX)
    extern  __CEXT_V(REGS1_ECX)
    extern  __CEXT_V(REGS1_EDX)
    extern  __CEXT_V(REGS1)
    extern  __CEXT_V(REGS1_EAX)
    extern  __CEXT_V(REGS1_ESI)
    extern  __CEXT_V(REGS1_EDI)
    extern  __CEXT_F(int386__clib3r)
    extern  __CEXT_V(REGS1_CFLAG)
    extern  __CEXT_F(___58b20h)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(freedosmem__dpmi))
		push    ebx
		push    ecx
		push    edx
		mov     ecx, eax
		cmp     byte [eax+0ch], 0
		je      ___5f84eh
		mov     eax, [ecx]
		shr     eax, 10h
		mov     [__CEXT_V(REGS1_EBX)], ax
		mov     ax, [ecx]
		mov     edx, 601h
		mov     [__CEXT_V(REGS1_ECX)], ax
		mov     eax, [ecx+4]
		mov     ebx, __CEXT_V(REGS1)
		shr     eax, 10h
		mov     [__CEXT_V(REGS1_EAX)], dx
		mov     [__CEXT_V(REGS1_ESI)], ax
		mov     ax, [ecx+4]
		mov     edx, ebx
		mov     [__CEXT_V(REGS1_EDI)], ax
		mov     eax, 31h
		call    __CEXT_F(int386__clib3r)
___5f84eh:
		mov     ebx, 101h
		mov     ax, [ecx+8]
		mov     [__CEXT_V(REGS1_EAX)], bx
		mov     [__CEXT_V(REGS1_EDX)], ax
		mov     ebx, __CEXT_V(REGS1)
		mov     eax, 31h
		mov     edx, ebx
		call    __CEXT_F(int386__clib3r)
		cmp     dword [__CEXT_V(REGS1_CFLAG)], byte 0
		je      ___5f888h
		push    byte 2
		call    __CEXT_F(___58b20h)
		add     esp, byte 4
___5f888h:
		mov     dword [ecx], 0
		mov     word [ecx+8], 0
		mov     dword [ecx+4], 0
		mov     word [ecx+0ah], 0
		pop     edx
		pop     ecx
		pop     ebx
		retn    
