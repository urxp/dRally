%include "macros.inc"

    extern  __setEFGfmt

%include "layout.inc"

global _fltused_
_fltused_   equ 1

section @xi

db  0,20h
dd  __setEFGfmt
