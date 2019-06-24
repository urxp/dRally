%include "macros.inc"
%include "layout.inc"

section @text

__null_FPE_rtn:
		retn    


section @data

__GDECL(__dynend)
    DB	0, 0, 0, 0
__GDECL(__curbrk)
    DB	0, 0, 0, 0
__GDECL(__LpCmdLine)
    DB	0, 0, 0, 0
__GDECL(__LpPgmName)
    DB	0, 0, 0, 0
__GDECL(__psp)
    DB	0, 0, 0, 0
__GDECL(__STACKLOW)
__GDECL(__x386_stacklow)
    DB	0, 0, 0, 0
__GDECL(__STACKTOP)
    DB	0, 0, 0, 0
__GDECL(__ASTACKSIZ)
    DB	0, 0, 0, 0
__GDECL(__ASTACKPTR)
    DB	0, 0, 0, 0
__GDECL(__cbyte)
    DB	0, 0, 0, 0
__GDECL(__cbyte2)
    DB	0, 0, 0, 0
__GDECL(__child)
    DB	0, 0, 0, 0
__GDECL(__no87)
    DB	0, 0
__GDECL(__Extender)
    DB	0
__GDECL(__ExtenderSubtype)
    DB	0
__GDECL(__X32VM)
    DB	0
__GDECL(__Envptr)
    DB	0, 0, 0, 0
__GDECL(__Envseg)
    DB	0, 0
__GDECL(__osmajor)
    DB	0
__GDECL(__osminor)
    DB	0
__GDECL(___FPE_handler)
__GDECL(__FPE_handler)
dd	__null_FPE_rtn
