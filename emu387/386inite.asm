cpu 386

	extern	__sys_init_387_emulator
	extern	__sys_fini_387_emulator

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __init_387_emulator
__init_387_emulator:
		jmp     near __sys_init_387_emulator
global __fini_387_emulator
__fini_387_emulator:
		jmp     near __sys_fini_387_emulator 


SEGMENT XI		PUBLIC USE32 ALIGN=2 CLASS=DATA
    db	0,1
    dd	__init_387_emulator


SEGMENT YI		PUBLIC USE32 ALIGN=2 CLASS=DATA
    db	0,1
    dd	__fini_387_emulator