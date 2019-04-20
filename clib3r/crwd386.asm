cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE
__null_FPE_rtn:
    ret         

SEGMENT _DATA	PUBLIC USE32 ALIGN=4 CLASS=DATA
global	__dynend
__dynend:
    db	0, 0, 0, 0
global	__curbrk
__curbrk:
    db	0, 0, 0, 0
global	__LpCmdLine
__LpCmdLine:
    db	0, 0, 0, 0
global	__LpPgmName
__LpPgmName:
    db	0, 0, 0, 0
global	__psp
__psp:
    db	0, 0, 0, 0
global	__STACKLOW
__STACKLOW:
global	__x386_stacklow
__x386_stacklow:
    db	0, 0, 0, 0
global	__STACKTOP
__STACKTOP:
    db	0, 0, 0, 0
global	__ASTACKSIZ
__ASTACKSIZ:
    db	0, 0, 0, 0
global	__ASTACKPTR
__ASTACKPTR:
    db	0, 0, 0, 0
global	__cbyte
__cbyte:
    db	0, 0, 0, 0
global	__cbyte2
__cbyte2:
    db	0, 0, 0, 0
global	__child
__child:
    db	0, 0, 0, 0
global	__no87
__no87:
    db	0, 0
global	__Extender
__Extender:
    db	0
global	__ExtenderSubtype
__ExtenderSubtype:
    db	0
global	__X32VM
__X32VM:
    db	0
global	__Envptr
__Envptr:
    db	0, 0, 0, 0
global	__Envseg
__Envseg:
    db	0, 0
global	__osmajor
__osmajor:
    db	0
global	__osminor
__osminor:
    db	0
global	___FPE_handler
___FPE_handler:
global	__FPE_handler
__FPE_handler:
    dd	__null_FPE_rtn
