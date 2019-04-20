cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __init_80x87
__init_80x87:
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
		je      short dr@7b896h
		mov     al, 3
dr@7b896h:
		wait    
		fninit  
		fldcw   word [esp]
		xchg    ax, [esp]
		pop     ax
		retn 