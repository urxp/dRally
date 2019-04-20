cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global putch
putch:
		push    ebx
		push    edx
		mov     ebx, eax
		mov     edx, eax
		mov     ah, 6
		int     21h
		mov     eax, ebx
		pop     edx
		pop     ebx
		retn