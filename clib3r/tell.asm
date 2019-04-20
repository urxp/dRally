cpu 386

	extern  lseek

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global tell
tell:
		push    ebx
		push    edx
		mov     ebx, 1
		xor     edx, edx
		call    near lseek
		pop     edx
		pop     ebx
		retn