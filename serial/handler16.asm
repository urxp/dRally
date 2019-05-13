%include "layout.inc"

section @text

;;; only 190h [400] bytes of serial16.bin fmemcpied
;;; allocated 500 bytes of DOS memory (486 + 14 for data)
global handler16__serial
handler16__serial:
    incbin "serial16.bin"
    align 100h