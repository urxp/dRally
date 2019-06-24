%include "macros.inc"

    extern  __setenvp

%include "layout.inc"

section @data

__GDECL(_environ)
db  0,0,0,0
__GDECL(___env_mask)
db  0,0,0,0


section @xi

db  0,20h
dd  __setenvp
