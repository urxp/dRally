%include "macros.inc"

    extern  __STACKLOW

%include "layout.inc"

section @text

__GDECL(stackavail_)
		mov     eax, esp
		sub     eax, [__STACKLOW]
		retn        
