%include "macros.inc"

    extern  __psp

%include "layout.inc"

section @text

__GDECL(getpid)
		mov     eax, [__psp]
		retn    
