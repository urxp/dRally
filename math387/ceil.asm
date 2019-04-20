cpu 386

	extern	floor
	extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE
global ceil
ceil:
		push    ebp
		mov     ebp, esp
		push    eax
		fld     qword [ebp+8]
		sub     esp, byte 8
		fchs    
		fstp    qword [esp]
		call    near floor
		fchs    
		pop     eax
		pop     ebp
		ret     8