cpu 386

	extern	__chk8087_
	extern	__no87


SEGMENT _DATA	PUBLIC USE32 ALIGN=4 CLASS=DATA
global __8087
__8087:
    db	0
global __real87
__real87:
    db	0

SEGMENT XI		PUBLIC USE32 ALIGN=2 CLASS=DATA'
    db	0,2
    dd	__chk8087_