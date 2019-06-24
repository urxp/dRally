%include "macros.inc"

    extern  unlink

%include "layout.inc"

section @text

__GDECL(remove)
		jmp     unlink