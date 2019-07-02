%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(writeConfig__dr)
    extern  __CEXT_F(___12200h)
    extern  __CEXT_F(___12a54h)
    extern  __CEXT_F(___24ec0h)
    extern  __CEXT_F(___2fc50h)
    extern  __CEXT_F(___64a28h)
    extern  __CEXT_V(NetworkConnectionEstablished)
    extern  __CEXT_F(___623d4h)
    extern  __CEXT_V(___1826f4h)
    extern  __CEXT_F(printf__clib3r)
    extern  __CEXT_F(exit__clib3r)
    extern  __CEXT_F(setmode3h__video)
    extern  __CEXT_F(freeAllocInfoTable)
    extern  __CEXT_F(restore__keyboard)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(exitcb2__dr))
		push    14h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		call    __CEXT_F(writeConfig__dr)
		call    __CEXT_F(___12200h)
		call    __CEXT_F(___12a54h)
		call    __CEXT_F(___24ec0h)
		call    __CEXT_F(___2fc50h)
		call    __CEXT_F(___64a28h)
		call    __CEXT_F(freeAllocInfoTable)
		call    __CEXT_F(restore__keyboard)
		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], 0
		je      ___3ab3bh
		call    __CEXT_F(___623d4h)
___3ab3bh:
		call    __CEXT_F(setmode3h__video)
		push    __CEXT_V(___1826f4h)
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		mov     eax, 70h
		call    __CEXT_F(exit__clib3r)
		pop     edx
		pop     ecx
		pop     ebx
		retn    