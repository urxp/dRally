%include "macros.inc"

    extern  __sys_init_387_emulator
    extern  __sys_fini_387_emulator

%include "layout.inc"

section @text

__GDECL(__init_387_emulator)
		jmp     __sys_init_387_emulator
__GDECL(__fini_387_emulator)
		jmp     __sys_fini_387_emulator


section @xi

db  0,1
dd  __init_387_emulator

section @yi

db  0,1
dd  __fini_387_emulator
