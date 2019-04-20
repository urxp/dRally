cpu 386

	extern	__psp

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global getpid
getpid:
		mov     eax, [__psp]
		retn