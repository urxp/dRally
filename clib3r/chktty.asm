%include "macros.inc"

    extern  isatty

%include "layout.inc"

section @text

__GDECL(__chktty)
		push    ebx
		push    ecx
		push    edx
		mov     edx, eax
		test    byte [eax+0dh], 20h
		jne     ___6756ch
		mov     eax, [edx+10h]
		call    isatty
		test    eax, eax
		je      ___6756ch
		mov     bl, [edx+0dh]
		or      bl, 20h
		mov     [edx+0dh], bl
		test    bl, 7
		jne     ___6756ch
		mov     cl, bl
		or      cl, 2
		mov     [edx+0dh], cl
___6756ch:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
