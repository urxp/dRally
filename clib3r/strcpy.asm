%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__CEXT_F(strcpy__clib3r))
		push    ecx
		push    eax
___67038h:
		mov     cl, [edx]
		mov     [eax], cl
		cmp     cl, 0
		je      ___67052h
		mov     cl, [edx+1]
		add     edx, byte 2
		mov     [eax+1], cl
		add     eax, byte 2
		cmp     cl, 0
		jne     ___67038h
___67052h:
		pop     eax
		pop     ecx
		retn    
