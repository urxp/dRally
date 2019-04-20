cpu 386

SEGMENT _TEXT	PUBLIC USE32 ALIGN=1 CLASS=CODE

global matherr_
matherr_:
		xor     eax, eax
		retn    