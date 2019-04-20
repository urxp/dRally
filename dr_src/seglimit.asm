cpu 386

    extern  exitWithErrMsg

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global setSegLimit
setSegLimit:
		push    eax
		push    ecx
		push    edx
		cmp     ebx, 100000h
		jbe     short dr@603d4h
		or      bx, 0fffh
dr@603d4h:
		mov     dx, bx
		shr     ebx, 10h
		mov     cx, bx
		mov     bx, ax
		mov     ax, 8
		int     31h
		jb      short dr@603ech
		pop     edx
		pop     ecx
		pop     eax
		retn    
dr@603ech:
		pop     edx
		pop     ecx
		pop     eax
		push    byte 0bh
		call    near exitWithErrMsg
		add     esp, byte 4