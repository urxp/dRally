%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(_heapenable_)
		push    edx
		mov     edx, eax
		mov     eax, [___heap_enabled]
		mov     [___heap_enabled], edx
		pop     edx
		retn   


section @data

__GDECL(___heap_enabled)
db	1,0,0,0
