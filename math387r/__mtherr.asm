%include "macros.inc"

    extern  matherr

%include "layout.inc"

section @text

__GDECL(__matherr)
		jmp     matherr