%include "macros.inc"

    extern  __flush__clib3r
    extern  flushall

%include "layout.inc"

section @text

__GDECL(fflush__clib3r)
		test    eax, eax
		jne     __flush__clib3r
		call    flushall
		xor     eax, eax
		retn    
