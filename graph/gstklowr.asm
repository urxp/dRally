%include "macros.inc"

    extern  __STACKLOW

%include "layout.inc"

section @text

__GDECL(_GetStackLow_)
		mov     eax, [__STACKLOW]
		retn    
