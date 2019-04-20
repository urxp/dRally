cpu 386

	extern	__setenvp_

SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
global _environ
_environ:
    db	0,0,0,0
global ___env_mask
___env_mask:
    db	0,0,0,0

SEGMENT XI		PUBLIC USE32 ALIGN=2 CLASS=DATA
    db	0,20h
    dd	__setenvp_