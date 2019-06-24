%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__EnterWVIDEO)
		cmp     byte [___WD_Present], 0
		je      ___6eb72h
		and     edx, 0ffffh
		push    edx
		push    eax
		int3    
		jmp     ___6eb69h
db	57h,56h,49h,44h,45h,4fh
___6eb69h:
		mov     eax, 1
		add     esp, byte 8
		retn    
___6eb72h:
		xor     eax, eax
		retn    


section @data

__GDECL(___WD_Present)
db	0
