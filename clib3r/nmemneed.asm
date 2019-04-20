cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __nmemneed
__nmemneed:
		xor     eax, eax
		retn