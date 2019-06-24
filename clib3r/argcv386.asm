%include "macros.inc"

    extern __Init_Argv

%include "layout.inc"

section @data

__GDECL(___argc)
__GDECL(__argc)
db  0,0,0,0
__GDECL(___argv)
__GDECL(__argv)
db  0,0,0,0


section @xi

db  0,20h
dd  __Init_Argv