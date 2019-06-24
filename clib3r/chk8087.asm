%include "macros.inc"

    extern  __real87
    extern  ___Save8087
    extern  ___Rest8087
    extern  __8087cw
    extern  __init_80x87
    extern  __8087
    extern  __no87

%include "layout.inc"

section @text

__save_8087:
		wait    
		fnsave  [eax]
		wait    
		retn    
__rest_8087:
		frstor  [eax]
		wait    
		retn    
__init_8087:
		push    ebx
		push    edx
		cmp     byte [__real87], 0
		je      ___6e645h
		mov     edx, __save_8087
		mov     ebx, __rest_8087
		mov     [___Save8087], edx
		mov     [___Rest8087], ebx
___6e645h:
		xor     eax, eax
		mov     ax, [__8087cw]
		call    __init_80x87
		pop     edx
		pop     ebx
		retn    
_fpreset:
		cmp     byte [__real87], 0
		jne     __init_8087
		retn    
__GDECL(__chk8087_)
		push    edx
		mov     ah, [__8087]
		test    ah, ah
		jne     ___6e6a7h
		mov     [__real87], ah
		xor     dl, dl
		sub     eax, eax
		push    eax
		fninit  
		fnstcw  word [esp]
		pop     eax
		mov     al, ah
		xor     dh, dh
		and     eax, 0ffh
		cmp     eax, byte 3
		jne     ___6e692h
		call    __init_8087
		mov     dl, al
		mov     dh, al
___6e692h:
		cmp     byte [__no87], 0
		jne     ___6e6a7h
		mov     [__8087], dl
		mov     [__real87], dh
___6e6a7h:
		pop     edx
		retn    
