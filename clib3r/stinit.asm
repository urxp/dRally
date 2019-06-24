%include "macros.inc"

    extern  __InitFiles
    extern  __full_io_exit

%include "layout.inc"

section @bss

__GDECL(___OpenStreams)
    resb    4


section @xi

db  0,20h
dd  __InitFiles


section @yi

db  0,20h
dd  __full_io_exit
