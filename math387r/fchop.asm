%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__CHP)
		push    eax
		wait    
		fnstcw  word [esp]
		wait    
		push    dword [esp]
		mov     byte [esp+1], 1fh
		fldcw   word [esp]
		frndint 
		fldcw   word [esp+4]
		wait    
		lea     esp, [esp+8]
		retn    
