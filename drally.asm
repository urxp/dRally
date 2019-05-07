cpu 386

group  dgroup @data @bss @stack

section @text public use32 align=4 class=code
%include "@text.inc"
    align 200h
handler16@serial:
;;; only 190h [400] bytes of serial16.bin fmemcpied
;;; don't know how many bytes is actually allocated
    incbin "serial16.bin"
    align 200h
___100000h:
    db	50h,0b0h,20h,0e6h,20h,58h,0cfh
    db  50h,0b0h,20h,0e6h,20h,58h,0cfh

section @data public use32 align=4 class=data
%include "@data.inc"

section @bss public use32 align=4 class=bss
%include "@bss.inc"

section @stack stack use32 align=16 class=stack
    resb 1000h
