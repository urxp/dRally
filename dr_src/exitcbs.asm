cpu 386

    extern  __CHK
    extern  dr@3c16ch
    extern  dr@12200h
    extern  dr@12a54h
    extern  dr@24ec0h
    extern  dr@2fc50h
    extern  dr@64a28h
    extern  dr@5ec04h
    extern  restore_Int09h
    extern  dr@19bd60h
    extern  dr@623d4h
    extern  dr@5e0e3h
    extern  printf_
    extern  exit_


SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE
global ExitCB0
ExitCB0:
		push    14h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		call    restore_Int09h
		call    dr@5e0e3h
		push    @@1
		call    printf_
		add     esp, 4
		mov     eax, 70h
		call    near exit_
		pop     edx
		pop     ecx
		pop     ebx
		retn
global ExitCB1
ExitCB1:
		push    14h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		call    dr@3c16ch
		call    dr@12200h
		call    dr@12a54h
		call    dr@24ec0h
		call    dr@2fc50h
		call    dr@64a28h
		call    dr@5ec04h
		call    restore_Int09h
		cmp     dword [dr@19bd60h], 0
		je      .@1
		call    dr@623d4h
.@1:
		call    dr@5e0e3h
		push    @@1
		call    printf_
		add     esp, 4
		mov     eax, 70h
		call    exit_
		pop     edx
		pop     ecx
		pop     ebx
		retn
global ExitCB2
ExitCB2:
		push    14h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		call    restore_Int09h
		call    dr@5ec04h
		call    dr@5e0e3h
		push    @@2
		call    printf_
		mov     edx, [dr@19bd60h]
		add     esp, 4
		test    edx, edx
		je      .@1
		call    dr@623d4h
.@1:
		mov     eax, 70h
		call    exit_
		pop     edx
		pop     ecx
		pop     ebx
		retn    
global ExitCB3
ExitCB3:
		push    14h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		call    restore_Int09h
		call    dr@5ec04h
		call    dr@5e0e3h
		push    @@3
		call    printf_
		add     esp, 4
		push    @@4
		call    printf_
		mov     edx, [dr@19bd60h]
		add     esp, 4
		test    edx, edx
		je      .@1
		call    dr@623d4h
.@1:
		mov     eax, 70h
		call    exit_
		pop     edx
		pop     ecx
		pop     ebx
		retn

SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
@@1:
db	"DEATH RALLY Exit: CTRL+ALT+DEL pressed.",0ah,0
@@2:
db	"DEATH RALLY Exit: CTRL+ALT+DEL pressed!",0ah,0
@@3:
db  "DEATH RALLY Error: Hardware conflict.",0ah,0
@@4:
db  "Please consult DRHELP.EXE for more information on how to resolve this problem.",0ah,0