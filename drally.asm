%include "macros.inc"

    extern  __CEXT_F(main)
    extern  __CommonInit__clib3r
    extern  __CEXT_F(setbank__video)
    extern  __CEXT_F(chkbankswitch__video)
    extern  __GETDS
    extern  __exit_
    extern  __do_exit_with_msg__
    extern  __CEXT_F(startup__dr)
    extern  install__serial
    extern  __CEXT_F(allocDOSMemBlock__dpmi)
    extern  footer__dr
    extern  __CEXT_F(read__bpa)
    extern  __CEXT_F(getentrysize__bpa)

    extern  ___68d4ch
    extern  __CEXT_V(___68d58h)
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

    extern  __CEXT_F(printf__clib3r)
    extern  __CEXT_F(strncmp__clib3r)
    extern  __CEXT_F(getenv__clib3r)
    extern  __CEXT_F(int386__clib3r)
    extern  int386x__clib3r
    extern  fwrite__clib3r
    extern  ftell__clib3r
    extern  tell__clib3r

    extern  __CEXT_F(chkarg__dr)
    extern  __CEXT_F(exitcb1__dr)
    extern  __CEXT_F(___71da4h__audio)
    extern  __CEXT_F(extract__musics_bpa)
    extern  __CEXT_F(getentrysize__musics_bpa)
    extern  __CEXT_F(install__timer)
    extern  __CEXT_F(allocMemoryLock)
    extern  __CEXT_F(freeAllocInfoTable)
    extern  __CEXT_F(freeMemory)
    extern  __CEXT_F(freedosmem__dpmi)
    extern  __CEXT_F(allocdoslock__dpmi)
    extern  __CEXT_F(int386_REGS1)

    extern  __CEXT_F(decode2__bpk)
    extern  __CEXT_F(decode4__bpk)

    extern  __CEXT_F(___6ef2ch__audio)
    extern  __CEXT_F(___718ech)
    extern  __CEXT_F(___71b70h)
    extern  __CEXT_F(___7c69ch)
    extern  __CEXT_F(loadS3M)
    extern  __CEXT_F(loadXM)
    extern  __CEXT_F(___64864h__esp)

    extern  ___7c970h__dma
    extern  ___7c9e2h__dma




;; CLIB3R.LIB
    extern  __CHK
    extern  open__clib3r
    extern  close__clib3r
    extern  __CEXT_F(fopen__clib3r)
    extern  __CEXT_F(fclose__clib3r)
    extern  __CEXT_F(fread__clib3r)
    extern  __CEXT_F(fseek__clib3r)
    extern  __CEXT_F(malloc__clib3r)
    extern  __CEXT_F(free__clib3r)
    extern  __CEXT_F(__STOSB__clib3r)
    extern  __CEXT_F(__STOSD__clib3r)
    extern  filelength__clib3r
    extern  memset__clib3r
    extern  tolower
    extern  raise
    extern  fgetc
    extern  ungetc
    extern  fputc__clib3r
;    extern  __terminate
;    extern  _no_support_loaded_
    extern  itoa

;    extern  verify_pentium_fdiv_bug_
    extern  sscanf
    extern  scanf
    extern  strcat
    extern  strstr
    extern  strlwr
    extern  inp
    extern  outp
    extern  atoi
    extern  __CEXT_F(rand__clib3r)
    extern  srand__clib3r
    extern  _dos_gettime
    extern  kbhit_
    extern  ltoa
    extern  ultoa
    extern  __CEXT_F(strcpy__clib3r)
    extern  __CEXT_F(strlen__clib3r)
    extern  __CEXT_F(strcmp__clib3r)
    extern  __CEXT_F(strupr__clib3r)
    extern  __CEXT_F(exit__clib3r)
;    extern  _null_exit_rtn
    extern  toupper
    extern  putch
    extern  putchar


;; MATH387R.LIB
;    extern  _matherr
;    extern  __cnvs2d
;    extern  _Scale
;    extern  _Scale10V
;    extern  __Bin2String
;    extern  IF@LOG10
;    extern  __grab_fpe
    extern  ceil
;    extern  _FtoS
    extern  __CHP
;    extern  __matherr


;    extern  __setEFGfmt
;    extern  __init_387_emulator
;    extern  __chk8087_
;    extern  __setenvp
;    extern  __InitFiles
;    extern  __fini_387_emulator
;    extern  __full_io_exit


;; GRAPH.LIB
    
    extern  _settextposition

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
    resb 1000h
