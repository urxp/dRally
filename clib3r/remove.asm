cpu 386

	extern	unlink

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global remove
remove:
		jmp     near unlink