%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(restore__keyboard)
    extern  __CEXT_F(___5ec04h)
    extern  __CEXT_F(setmode3h__video)
    extern  __CEXT_V(___183e84h)
    extern  __CEXT_F(printf__clib3r)
    extern  __CEXT_V(___19bd60h)
    extern  __CEXT_F(___623d4h)
    extern  __CEXT_F(exit__clib3r)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(exitcb1__dr))
		push    14h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		call    __CEXT_F(restore__keyboard)
		call    __CEXT_F(___5ec04h)
		call    __CEXT_F(setmode3h__video)
		push    __CEXT_V(___183e84h)
		call    __CEXT_F(printf__clib3r)
		mov     edx, [__CEXT_V(___19bd60h)]
		add     esp, 4
		test    edx, edx
		je      ___4932ch
		call    __CEXT_F(___623d4h)
___4932ch:
		mov     eax, 70h
		call    __CEXT_F(exit__clib3r)
		pop     edx
		pop     ecx
		pop     ebx
		retn    