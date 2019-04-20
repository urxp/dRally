cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global inp
inp:
		push    edx
		mov     edx, eax
		sub     eax, eax
		in      al, dx
		pop     edx
		retn