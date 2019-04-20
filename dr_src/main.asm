cpu 386

    extern  w_arg

    extern  __CHK
    extern  print_StartUpText
    extern  ExitCB0
    extern  dr@10110h
    extern  dr@3e720h
    extern  dr@42988h
    extern  install_Int09h
    extern  restore_Int09h
    extern  dr@5eb70h
    extern  dr@5ec04h
    extern  IsWindows
    extern  install_IRQ0Handler
    extern  dr@623d4h
    extern  dr@1800f0h
    extern  dr@1800f8h
    extern  dr@19bd60h
    extern  ForcedExitCB

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global main_
main_:
		push    8
		call    __CHK
		push    ebx
		mov     [CmdArgs#], eax
		xor     eax, eax
@1:
		inc     eax
		mov     ebx, [edx]
		add     edx, 4
		mov     [eax*4+CmdArgs-4], ebx
		cmp     eax, 0ah
		jl      @1
		call    print_StartUpText
		call    dr@5eb70h
		cmp     dword [w_arg], 0
		je      @2
		mov     byte [IsWindows], 1
@2:
		cmp     dword [w_arg], 0
		je      @3
		mov     eax, 46h
		xor     ebx, ebx
		jmp     @4
@3:
		mov     ebx, 1
		mov     eax, 46h
@4:
		call    install_IRQ0Handler
		mov     dword [ForcedExitCB], ExitCB0
		call    install_Int09h                      
		call    dr@3e720h                  ; start
		call    restore_Int09h
		cmp     dword [dr@19bd60h], 0
		je      @5
		call    dr@623d4h
@5:
		call    dr@5ec04h
		call    dr@10110h                  ; back to DOS
		mov     ebx, dr@1800f0h
		mov     edx, 0b8000h
		mov     eax, dr@1800f8h
		call    dr@42988h                  ; show banner
		pop     ebx
		retn


SEGMENT _BSS    PUBLIC USE32 ALIGN=4 CLASS=BSS
global CmdArgs#
CmdArgs#:
    resb    4
global CmdArgs
CmdArgs:
    resb    28h