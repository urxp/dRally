cpu 386

    extern  exitWithErrMsg

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global setSegBaseAddress
setSegBaseAddress:
		push    eax
		push    ecx
		push    edx
		mov     dx, bx
		shr     ebx, 10h
		mov     cx, bx
		mov     bx, ax
		mov     ax, 7
		int     31h
		jb      @error
		pop     edx
		pop     ecx
		pop     eax
		retn    
@error:
		pop     edx
		pop     ecx
		pop     eax
		push    0ah
		call    exitWithErrMsg
		add     esp, 4