%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(exitcb0)
    extern  __CEXT_V(CLArgc)
    extern  __CEXT_V(CLArgv)
    extern  __CEXT_F(welcome__dr)
    extern  __CEXT_F(___5eb70h)
    extern  __CEXT_V(___5ff98h)
    extern  __CEXT_V(___19bd4ch)
    extern  __CEXT_F(install__timer)
    extern  __CEXT_V(___2432c8h)
    extern  __CEXT_F(install__keyboard)
    extern  __CEXT_F(startup__dr)
    extern  __CEXT_F(restore__keyboard)
    extern  __CEXT_V(___19bd60h)
    extern  __CEXT_F(___623d4h)
    extern  __CEXT_F(___5ec04h)
    extern  __CEXT_F(restrdos__dr)
    extern  __CEXT_V(string__dr_bin)
    extern  __CEXT_V(string__MENU_BPA)
    extern  __CEXT_F(read__bpa)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(main))
		push    8
		call    __CHK
		push    ebx
		mov     [__CEXT_V(CLArgc)], eax
		xor     eax, eax
___1019eh:		
		mov     ebx, [edx]
		add     edx, 4
		mov     [eax*4+__CEXT_V(CLArgv)], ebx
		inc     eax
		cmp     eax, 0ah
		jl      ___1019eh
		call    __CEXT_F(welcome__dr)
		call    __CEXT_F(___5eb70h)
		cmp     dword [__CEXT_V(___19bd4ch)], 0
		je      ___101cah
		mov     byte [__CEXT_V(___5ff98h)], 1
___101cah:
		cmp     dword [__CEXT_V(___19bd4ch)], 0
		je      ___101dch
		mov     eax, 46h
		xor     ebx, ebx
		jmp     ___101e6h
___101dch:
		mov     ebx, 1
		mov     eax, 46h
___101e6h:
		call    __CEXT_F(install__timer)
		mov     dword [__CEXT_V(___2432c8h)], __CEXT_F(exitcb0)
		call    __CEXT_F(install__keyboard)
		call    __CEXT_F(startup__dr)
		call    __CEXT_F(restore__keyboard)
		cmp     dword [__CEXT_V(___19bd60h)], 0
		je      ___10212h
		call    __CEXT_F(___623d4h)
___10212h:
		call    __CEXT_F(___5ec04h)
		call    __CEXT_F(restrdos__dr)
		mov     ebx, __CEXT_V(string__dr_bin)
		mov     edx, 0b8000h
		mov     eax, __CEXT_V(string__MENU_BPA)
		call    __CEXT_F(read__bpa)
		pop     ebx
		retn
