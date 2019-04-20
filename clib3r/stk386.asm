cpu 386

	extern	__STACKLOW
	extern	__fatal_runtime_error

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

L$1:
		mov     [L$3], ss
		retn    
global __CHK
__CHK:
		xchg    eax, [esp+4]
		call    near __STK
		mov     eax, [esp+4]
		ret     4
global __GRO
__GRO:
		ret     4
global __STK
__STK:
		cmp     eax, esp
		jae     short dr@5ea38h
		sub     eax, esp
		neg     eax
		cmp     eax, [__STACKLOW]
		jbe     short dr@5ea38h
		retn    
dr@5ea38h:
		mov     ax, ss
		cmp     ax, [L$3]
		je      short __STKOVERFLOW
		retn   
global __STKOVERFLOW 
__STKOVERFLOW:
		mov     eax, L$4
		mov     edx, 1
		call    near __fatal_runtime_error


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$3:
    db	0,0
L$4:
    db  "Stack Overflow!"
    db  0dh,0ah,0

SEGMENT XI	    PUBLIC USE32 ALIGN=2 CLASS=DATA
    db	0, 20h
    dd	L$1