%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__init_80x87)
		push    ax
		wait    
		fninit  
		fld1    
		fldz    
		fdivp   st1, st0
		fld     st0
		fchs    
		fcompp  
		fnstsw  ax
		mov     al, 2
		sahf    
		je      ___7b896h
		mov     al, 3
___7b896h:
		wait    
		fninit  
		fldcw   word [esp]
		xchg    ax, [esp]
		pop     ax
		retn    
