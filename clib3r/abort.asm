%include "macros.inc"

    extern  __fatal_runtime_error

%include "layout.inc"

section @text

__GDECL(abort)
		call    dword [___abort]
__GDECL(__terminate)
		push    edx
		mov     edx, 0ffh
		mov     eax, ___18518ch
		call    __fatal_runtime_error
		pop     edx
		retn    


section @const

___18518ch:
db	"ABNORMAL TERMINATION",0dh,0ah,0


section @data

__GDECL(___abort)
dd	__terminate
