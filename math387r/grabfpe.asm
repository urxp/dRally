%include "macros.inc"

    extern  __GrabFP87

%include "layout.inc"

section @text

__GDECL(__grab_fpe)
		jmp     __GrabFP87