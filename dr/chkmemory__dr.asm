%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(getAvailableMemory)
    extern  __CEXT_V(___182940h)
    extern  __CEXT_F(printf__clib3r)
    extern  __CEXT_V(___182944h)
    extern  __CEXT_V(___182990h)
    extern  __CEXT_V(___1829e0h)
    extern  __CEXT_F(restore__keyboard)
    extern  __CEXT_F(freeAllocInfoTable)
    extern  __CEXT_F(exit__clib3r)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(chkmemory__dr))
		push    8
		call    __CHK
		call    __CEXT_F(getAvailableMemory)
		cmp     eax, dword 57b0cch
		jge     ___3e1c2h
		push    __CEXT_V(___182940h)
		call    __CEXT_F(printf__clib3r)
		add     esp, byte 4
		push    __CEXT_V(___182944h)
		call    __CEXT_F(printf__clib3r)
		add     esp, byte 4
		push    __CEXT_V(___182990h)
		call    __CEXT_F(printf__clib3r)
		add     esp, byte 4
		push    __CEXT_V(___1829e0h)
		call    __CEXT_F(printf__clib3r)
		add     esp, byte 4
		call    __CEXT_F(restore__keyboard)
		call    __CEXT_F(freeAllocInfoTable)
		mov     eax, 70h
		call    __CEXT_F(exit__clib3r)
___3e1c2h:
		retn   
