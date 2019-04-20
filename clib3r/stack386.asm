cpu 386

	extern	__STACKLOW

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global stackavail_
stackavail_:
		mov     eax, esp
		sub     eax, [__STACKLOW]
		retn
