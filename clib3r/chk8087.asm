cpu 386

    extern	__real87
    extern	___Save8087
    extern	___Rest8087
    extern	__8087cw
    extern	__init_80x87
    extern	__8087
    extern	__no87

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

__save_8087:
		wait    
		fnsave  [eax]
		wait    
		retn    
__rest_8087:
		frstor  [eax]
		wait    
		retn 
global __init_8087   
__init_8087:
		push    ebx
		push    edx
		cmp     byte [__real87], 0
		je      short dr@6e645h
		mov     edx, __save_8087
		mov     ebx, __rest_8087
		mov     [___Save8087], edx
		mov     [___Rest8087], ebx
dr@6e645h:
		xor     eax, eax
		mov     ax, [__8087cw]
		call    near __init_80x87
		pop     edx
		pop     ebx
		retn    
global _fpreset
_fpreset:
		cmp     byte [__real87], 0
		jne     short __init_8087
		retn  
global __chk8087_  
__chk8087_:
		push    edx
		mov     ah, [__8087]
		test    ah, ah
		jne     short dr@6e6a7h
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
		jne     short dr@6e692h
		call    near __init_8087
		mov     dl, al
		mov     dh, al
dr@6e692h:
		cmp     byte [__no87], 0
		jne     short dr@6e6a7h
		mov     [__8087], dl
		mov     [__real87], dh
dr@6e6a7h:
		pop     edx
		retn