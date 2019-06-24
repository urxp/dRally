%include "macros.inc"

    extern  __CHP

%include "layout.inc"

section @text

__GDECL(modf)
		push    eax
		fld     qword [esp+8]
		fld     st0
		call    __CHP
		fsub    st1, st0
		mov     eax, [esp+10h]
		fstp    qword [eax]
		pop     eax
		wait    
		ret     0ch
