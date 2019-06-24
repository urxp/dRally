%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__CEXT_F(strupr__clib3r))
		push    ebx
		push    ecx
		push    edx
		mov     ecx, eax
		mov     edx, eax
___64517h:
		mov     al, [edx]
		test    al, al
		je      ___6452fh
		sub     al, 61h
		xor     ebx, ebx
		mov     bl, al
		cmp     ebx, byte 19h
		jg      ___6452ch
		add     al, 41h
		mov     [edx], al
___6452ch:
		inc     edx
		jmp     ___64517h
___6452fh:
		mov     eax, ecx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
