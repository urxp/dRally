cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _toupper
_toupper:
global toupper
toupper:
		cmp     eax, byte 61h
		jl      short dr@6eb4eh
		cmp     eax, byte 7ah
		jg      short dr@6eb4eh
		sub     eax, byte 20h
dr@6eb4eh:
		retn