%include "macros.inc"

    extern floor

%include "layout.inc"

section @text

__GDECL(ceil)
		push    ebp
		mov     ebp, esp
		push    eax
		fld     qword [ebp+8]
		sub     esp, byte 8
		fchs    
		fstp    qword [esp]
		call    floor
		fchs    
		pop     eax
		pop     ebp
		ret     8
