cpu 386

	extern	___iob

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __get_std_stream
__get_std_stream:
		push    edx
		cmp     eax, byte 5
		jbe     short dr@7f3bdh
		xor     eax, eax
		pop     edx
		retn    
dr@7f3bdh:
		mov     edx, eax
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		add     eax, edx
		add     eax, eax
		add     eax, ___iob
		pop     edx
		retn