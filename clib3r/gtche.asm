cpu 386

	extern	__cbyte

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global getche
getche:
		push    edx
		xor     edx, edx
		mov     eax, [__cbyte]
		mov     [__cbyte], edx
		test    eax, eax
		jne     short dr@6bdf8h
		mov     ah, 1
		int     21h
		and     eax, 0ffh
dr@6bdf8h:
		pop     edx
		retn