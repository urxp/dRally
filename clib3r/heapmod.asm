%include "macros.inc"
%include "layout.inc"

section @bss

__GDECL(___nheap_clean)
    resb    1
__GDECL(___fheap_clean)
    resb    1
