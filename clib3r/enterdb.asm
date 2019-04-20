cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __EnterWVIDEO
__EnterWVIDEO:
		cmp     byte [___WD_Present], 0
		je      short dr@6eb72h
		and     edx, 0ffffh
		push    edx
		push    eax
		int3    
		jmp     short dr@6eb69h

    db  "WVIDEO"

dr@6eb69h:
		mov     eax, 1
		add     esp, byte 8
		retn    
dr@6eb72h:
		xor     eax, eax
		retn


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
global ___WD_Present
___WD_Present:
    db	0