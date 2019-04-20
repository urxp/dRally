cpu 386

	extern	___NFiles
	extern	__close
	extern	__set_errno

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global close
close:
		test    eax, eax
		jl      short dr@6634eh
		cmp     eax, [___NFiles]
		jbe     near __close
dr@6634eh:
		mov     eax, 4
		call    near __set_errno
		mov     eax, 0ffffffffh
		retn