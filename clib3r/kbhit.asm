%include "macros.inc"

    extern  __cbyte

%include "layout.inc"

section @text

__GDECL(kbhit_)
		cmp     dword [__cbyte], byte 0
		je      ___6664dh
		mov     eax, 1
		retn    
___6664dh:
		mov     ah, 0bh
		int     21h
		movsx   eax, al
		retn    
