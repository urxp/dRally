%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(exitcb0)
    extern  ___19bd54h
    extern  ___19bd20h
    extern  __CEXT_F(welcome__dr)
    extern  ___5eb70h
    extern  ___5ff98h
    extern  ___19bd4ch
    extern  install__timer
    extern  ___2432c8h
    extern  install__keyboard
    extern  startup__dr
    extern  restore__keyboard
    extern  ___19bd60h
    extern  ___623d4h
    extern  ___5ec04h
    extern  restrdos__dr
    extern  __CEXT_V(string__dr_bin)
    extern  __CEXT_V(string__MENU_BPA)
    extern  __CEXT_F(read__bpa)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(main))
		push    8
		call    __CHK
		push    ebx
		mov     [___19bd54h], eax
		xor     eax, eax
___1019eh:		
		mov     ebx, [edx]
		add     edx, 4
		mov     [eax*4+___19bd20h], ebx
		inc     eax
		cmp     eax, 0ah
		jl      ___1019eh
		call    __CEXT_F(welcome__dr)
		call    ___5eb70h
		cmp     dword [___19bd4ch], 0
		je      ___101cah
		mov     byte [___5ff98h], 1
___101cah:
		cmp     dword [___19bd4ch], 0
		je      ___101dch
		mov     eax, 46h
		xor     ebx, ebx
		jmp     ___101e6h
___101dch:
		mov     ebx, 1
		mov     eax, 46h
___101e6h:
		call    install__timer
		mov     dword [___2432c8h], __CEXT_F(exitcb0)
		call    install__keyboard
		call    startup__dr
		call    restore__keyboard
		cmp     dword [___19bd60h], 0
		je      ___10212h
		call    ___623d4h
___10212h:
		call    ___5ec04h
		call    restrdos__dr
		mov     ebx, __CEXT_V(string__dr_bin)
		mov     edx, 0b8000h
		mov     eax, __CEXT_V(string__MENU_BPA)
		call    __CEXT_F(read__bpa)
		pop     ebx
		retn
