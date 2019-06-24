%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(segread__clib3r)
		push    edx
		mov     edx, eax
		;mov     eax, cs
		db	8ch,0c8h
		mov     [edx+2], ax
		;mov     eax, ds
		db	8ch,0d8h
		mov     [edx+6], ax
		;mov     eax, es
		db	8ch,0c0h
		mov     [edx], ax
		;mov     eax, ss
		db	8ch,0d0h
		mov     [edx+4], ax
		;mov     eax, fs
		db	8ch,0e0h
		mov     [edx+8], ax
		;mov     eax, gs
		db	8ch,0e8h
		mov     [edx+0ah], ax
		pop     edx
		retn    
