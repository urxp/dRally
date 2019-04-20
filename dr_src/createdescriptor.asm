cpu 386

    extern  exitWithErrMsg

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global create_Descriptor
create_Descriptor:
		push    ecx
		xor     eax, eax
		mov     cx, 1
		int     31h
		jb      @error
		pop     ecx
		retn    
@error:
		pop     ecx
		push    8
		call    exitWithErrMsg
		add     esp, 4