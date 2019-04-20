cpu 386

	extern	strtod
	extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __cnvs2d
__cnvs2d:
		push    ebx
		mov     ebx, edx
		xor     edx, edx
		call    near strtod
		fstp    qword [ebx]
		pop     ebx
		retn