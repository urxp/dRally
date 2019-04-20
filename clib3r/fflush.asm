cpu 386

	extern	__flush
	extern	flushall

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global fflush
fflush:
		test    eax, eax
		jne     near __flush
		call    near flushall
		xor     eax, eax
		retn