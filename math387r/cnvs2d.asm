%include "macros.inc"

    extern  strtod

%include "layout.inc"

section @text

__GDECL(__cnvs2d)
		push    ebx
		mov     ebx, edx
		xor     edx, edx
		call    strtod
		fstp    qword [ebx]
		pop     ebx
		retn    
