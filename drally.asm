
    extern  main_
    extern  __CommonInit_
    extern  setbank__video
    extern  chkbankswitch__video
    extern  __GETDS
    extern  __exit_
    extern  __do_exit_with_msg__
    extern  startup__dr
    extern  install__serial
    extern  allocateDOSMemoryBlock__dpmi
    extern  footer__dr

%include "layout.inc"

section @text
%include "@text.inc"
___100000h:
    db	50h,0b0h,20h,0e6h,20h,58h,0cfh
    db  50h,0b0h,20h,0e6h,20h,58h,0cfh


section @data
%include "@data.inc"

section @bss
%include "@bss.inc"

section @stack
    resb 2000h
