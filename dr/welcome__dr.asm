
    extern  __CHK
    extern  ___180004h
    extern  printf__clib3r
    extern  ___18005ch
    extern  ___180060h
    extern  chkarg__dr
    extern  ___180064h
    extern  getenv__clib3r
    extern  ___19bd48h
    extern  ___18006ch
    extern  ___19bd4ch
    extern  ___180084h

%include "layout.inc"

section @text

global welcome__dr
welcome__dr:
		push    0ch
		call    __CHK
		push    ebx
		push    ___180004h
		call    printf__clib3r
		add     esp, 4
		push    ___18005ch
		call    printf__clib3r
		add     esp, 4
		mov     eax, ___180060h
		call    chkarg__dr
		test    eax, eax
		je      ___1009dh
		mov     dword [___19bd4ch], 1
___1009dh:
		mov     eax, ___180064h
		call    getenv__clib3r
		mov     [___19bd48h], eax
		test    eax, eax
		je      ___100cah
		push    ___18006ch
		mov     ebx, 1
		call    printf__clib3r
		add     esp, 4
		mov     [___19bd4ch], ebx
		pop     ebx
		retn    
___100cah:
		push    ___180084h
		call    printf__clib3r
		add     esp, 4
		pop     ebx
		retn
