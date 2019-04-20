cpu 386

	extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __CHP     
__CHP:
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