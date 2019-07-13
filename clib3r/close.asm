%include "macros.inc"

    extern  ___NFiles
    extern  __close
    extern  __set_errno__clib3r

%include "layout.inc"

section @text

__GDECL(__CEXT_F(close__clib3r))
		test    eax, eax
		jl      ___6634eh
		cmp     eax, [___NFiles]
		jbe     __close
___6634eh:
		mov     eax, 4
		call    __set_errno__clib3r
		mov     eax, 0ffffffffh
		retn    
