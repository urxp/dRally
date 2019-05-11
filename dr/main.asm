
    extern  __CHK
    extern  ___100dch
    extern  ___19bd54h
    extern  ___19bd20h
    extern  welcome__dr
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
    extern  restore__dos
    extern  ___1800f0h
    extern  ___1800f8h
    extern  read__bpa

%include "layout.inc"

section @text

global main_
main_:
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
		call    welcome__dr
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
		mov     dword [___2432c8h], ___100dch
		call    install__keyboard
		call    startup__dr
		call    restore__keyboard
		cmp     dword [___19bd60h], 0
		je      ___10212h
		call    ___623d4h
___10212h:
		call    ___5ec04h
		call    restore__dos
		mov     ebx, ___1800f0h
		mov     edx, 0b8000h
		mov     eax, ___1800f8h
		call    read__bpa
		pop     ebx
		retn
