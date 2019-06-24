%include "macros.inc"

    extern  __Extender

%include "layout.inc"

section @text

__GDECL(_dos_setvect)
		push    edx
		mov     edx, ebx
		xor     ebx, ebx
		mov     bl, [__Extender]
		cmp     ebx, byte 2
		jl      ___7cfeah
		cmp     ebx, byte 8
		jg      ___7cfeah
		push    ds
		;mov     ds, ecx
		db	8eh,0d9h
		mov     cl, al
		mov     al, 4
		mov     ah, 25h
		int     21h
		pop     ds
		pop     edx
		retn    
___7cfeah:
		push    ds
		;mov     ds, ecx
		db	8eh,0d9h
		mov     ah, 25h
		int     21h
		pop     ds
		pop     edx
		retn    
