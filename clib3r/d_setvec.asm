cpu 386

	extern	__Extender

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _dos_setvect
_dos_setvect:
		push    edx
		mov     edx, ebx
		xor     ebx, ebx
		mov     bl, [__Extender]
		cmp     ebx, byte 2
		jl      short dr@7cfeah
		cmp     ebx, byte 8
		jg      short dr@7cfeah
		push    ds
		;mov     ds, ecx
		db	8eh,0d9h
		mov     cl, al
		mov     al, 4
		mov     ah, 25h
		int     21h
		pop     ds
		pop     edx
		retn    
dr@7cfeah:
		push    ds
		;mov     ds, ecx
		db	8eh,0d9h
		mov     ah, 25h
		int     21h
		pop     ds
		pop     edx
		retn