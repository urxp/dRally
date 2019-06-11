%include "macros.inc"

    extern  __CHK
    extern  __CEXT_V(string__MUSICS_BPA)
    extern  __CEXT_F(getentrysize__bpa)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(___10474h))
		push    8
		call    __CHK
		push    edx
		mov     edx, eax
		mov     eax, __CEXT_V(string__MUSICS_BPA)
		call    __CEXT_F(getentrysize__bpa)
		pop     edx
		retn
