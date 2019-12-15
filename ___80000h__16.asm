cpu 386
%include "macros.inc"

section .text

__GDECL(___80000h)
incbin "serial16.bin"
