cpu 386

	extern	__Extender

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _dos_getvect
_dos_getvect:
		push    ebx
		push    ecx
		xor     edx, edx
		mov     dl, [__Extender]
		cmp     edx, byte 2
		jl      short dr@7dd94h
		cmp     edx, byte 8
		jg      short dr@7dd94h
		mov     cl, al
		mov     eax, 2502h
		jmp     short dr@7dd9eh
dr@7dd94h:
		and     eax, 0ffh
		xor     cl, cl
		or      ah, 35h
dr@7dd9eh:
		push    es
		int     21h
		;mov     edx, es
		db	8ch,0c2h
		pop     es
		mov     eax, ebx
		pop     ecx
		pop     ebx
		retn