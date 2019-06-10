%include "macros.inc"

    extern  lseek__clib3r

%include "layout.inc"

section @text

__GDECL(tell__clib3r)
		push    ebx
		push    edx
		mov     ebx, 1
		xor     edx, edx
		call    lseek__clib3r
		pop     edx
		pop     ebx
		retn
