cpu 386
		
    extern	__cbyte

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global kbhit_      
kbhit_:
		cmp     dword [__cbyte], byte 0
		je      short dr@6664dh
		mov     eax, 1
		retn    
dr@6664dh:
		mov     ah, 0bh
		int     21h
		movsx   eax, al
		retn