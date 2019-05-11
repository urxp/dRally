%include "layout.inc"

section @text

;;; only 190h [400] bytes of serial16.bin fmemcpied
;;; don't know how many bytes is actually allocated
global handler16__serial
handler16__serial:
    incbin "serial16.bin"
    align 100h