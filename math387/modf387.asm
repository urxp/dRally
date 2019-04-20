cpu 386

	extern	__CHP
	extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global modf
modf:
		push    eax
		fld     qword [esp+8]
		fld     st0
		call    near __CHP
		fsub    st1, st0
		mov     eax, [esp+10h]
		fstp    qword [eax]
		pop     eax
		wait    
		ret     0ch