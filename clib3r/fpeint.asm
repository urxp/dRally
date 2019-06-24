%include "macros.inc"
%include "layout.inc"

section @data

__GDECL(___FPE_int)
db  2
__GDECL(___IRQ_num)
db  0dh
__GDECL(___IRQ_int)
db  75h
__GDECL(___MST_pic)
db  20h
__GDECL(___SLV_pic)
db  0a0h
