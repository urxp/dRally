cpu 386

	extern	__STACKLOW

SEGMENT _TEXT	PUBLIC USE32 ALIGN=1 CLASS=CODE

global _GetStackLow_
_GetStackLow_:
		mov     eax, [__STACKLOW]
		retn    