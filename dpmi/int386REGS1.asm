%include "macros.inc"

    extern  __CEXT_V(REGS1)
    extern  __CEXT_F(int386__clib3r)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(int386_REGS1))
		push    ebx
		push    edx
		mov     ebx, __CEXT_V(REGS1)
		and     eax, 0ffh
		mov     edx, ebx
		call    __CEXT_F(int386__clib3r)
		pop     edx
		pop     ebx
		retn    
