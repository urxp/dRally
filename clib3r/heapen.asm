cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _heapenable_
_heapenable_:
		push    edx
		mov     edx, eax
		mov     eax, [___heap_enabled]
		mov     [___heap_enabled], edx
		pop     edx
		retn      


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA

global ___heap_enabled
___heap_enabled:
    db	1, 0, 0, 0