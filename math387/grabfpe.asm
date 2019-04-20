cpu 386

	extern	__GrabFP87

SEGMENT _TEXT	PUBLIC USE32 ALIGN=1 CLASS=CODE

global __grab_fpe
__grab_fpe:
		jmp     near __GrabFP87