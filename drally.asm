%include "macros.inc"

    extern  __CEXT_F(main)
    extern  __CommonInit__clib3r
    extern  __CEXT_F(setbank__video)
    extern  __CEXT_F(chkbankswitch__video)
    extern  __GETDS
    extern  __exit_
    extern  __do_exit_with_msg__
    extern  startup__dr
    extern  install__serial
    extern  allocateDOSMemoryBlock__dpmi
    extern  footer__dr
    extern  __CEXT_F(read__bpa)
    extern  __CEXT_F(getentrysize__bpa)

    extern  ___68d4ch
    extern  ___68d58h
    extern  ___68e94h
    extern  ___68d94h
    extern  ___68ec4h
    extern  ___68d40h
    extern  ___690e8h
    extern  ___68d48h
    extern  ___691deh
    extern  ___691b8h
    extern  ___68d3ch
    extern  ___68d5eh
    extern  ___68d38h
    extern  ___68d5ch
    extern  ___68d34h
    extern  ___68d5dh
    extern  ___68d44h
    extern  ___68d30h

    extern  printf__clib3r
    extern  strncmp__clib3r
    extern  getenv__clib3r
    extern  int386__clib3r
    extern  int386x__clib3r
    extern  fwrite__clib3r
    extern  ftell__clib3r
    extern  tell__clib3r

    extern  __CEXT_F(chkarg__dr)
    extern  __CEXT_F(___71da4h)
    extern  __CEXT_F(getentrysize__musics_bpa)

%include "layout.inc"

section @text
%include "@text.asm"
___100000h:
    db	50h,0b0h,20h,0e6h,20h,58h,0cfh
    db  50h,0b0h,20h,0e6h,20h,58h,0cfh

section @data
%include "@data.asm"

section @bss
%include "@bss.asm"

section @stack
    resb 2000h
