cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global outp
outp:
		push    ebx
		mov     ebx, eax
		mov     al, dl
		mov     edx, ebx
		out     dx, al
		pop     ebx
		retn