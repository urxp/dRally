cpu 386

    extern  __CHK
    extern  printf_
    extern  getenv_

    extern  check_CmdLnArg
    
SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global print_StartUpText
print_StartUpText:
		push    0ch
		call    __CHK
		push    ebx
		push    $@@1
		call    printf_
		add     esp, 4
		push    $@@2
		call    printf_
		add     esp, 4
		mov     eax, $@@3
		call    check_CmdLnArg
		test    eax, eax
		je      @1
		mov     dword [w_arg], 1
@1:
		mov     eax, $@@4
		call    getenv_
		mov     [windir], eax
		test    eax, eax
		je      @2
		push    $@@5
		mov     ebx, 1
		call    printf_
		add     esp, 4
		mov     [w_arg], ebx
		pop     ebx
		retn    
@2:
		push    $@@6
		call    printf_
		add     esp, 4
		pop     ebx
		retn


SEGMENT _CONST      PUBLIC USE32 ALIGN=4 CLASS=DATA
$@@1:
db	0ah,"Death Rally *** Full Version 1.1",0ah
db  "Copyright (c) 1995, 1996 Remedy Entertainment, Ltd.",0ah,0
$@@2:
db	0ah,0
$@@3:
db	"/w",0
$@@4:
db	"WINDIR",0
$@@5:
db	"Windows 95 detected.",0ah,0
$@@6:
db	"Use ",22h,"/W",22h," parameter, if you are running under Windows 95 shell.",0ah,0


SEGMENT _BSS    PUBLIC USE32 ALIGN=4 CLASS=BSS
global w_arg:
w_arg:
    resb    4
windir:
    resb    4