cpu 386

	extern verify_pentium_fdiv_bug_

SEGMENT _DATA	PUBLIC USE32 ALIGN=2 CLASS=DATA
global __chipbug
__chipbug:
global ___chipbug
___chipbug:
    db	0,0,0,0