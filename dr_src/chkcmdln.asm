cpu 386

    extern  __CHK
    extern  stricmp_

    extern  CmdArgs#
    extern  CmdArgs

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global check_CmdLnArg
check_CmdLnArg:
		push    18h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     esi, eax
		mov     ebx, 1
		cmp     ebx, [CmdArgs#]
		jge     @3
		mov     ecx, 4
@1:
		mov     eax, esi
		mov     edx, [ecx+CmdArgs]
		call    stricmp_
		test    eax, eax
		jne     @2
		mov     eax, ebx
		jmp     @4
@2:
		mov     edi, [CmdArgs#]
		inc     ebx
		add     ecx, 4
		cmp     ebx, edi
		jl      @1
@3:
		xor     eax, eax
@4:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn