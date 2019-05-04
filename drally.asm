cpu 386

group  dgroup obj_4 _bss stack

section obj_1 public use32 align=4 class=code
%include "obj_1.inc"

section obj_2 public use16 class=code
%include "obj_2.inc"

section obj_3 public use16 class=data
%include "obj_3.inc"

section obj_4 public use32 align=4 class=data
%include "obj_4.inc"

section _bss public use32 align=2 class=bss
%include "bss_4.inc"

section stack stack use32 align=16 class=stack
    resb 1000h
