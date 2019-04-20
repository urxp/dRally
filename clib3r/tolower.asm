cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _tolower
_tolower:
global tolower
tolower:
		cmp     eax, byte 41h
		jl      short dr@6740dh
		cmp     eax, byte 5ah
		jg      short dr@6740dh
		add     eax, byte 20h
dr@6740dh:
		retn