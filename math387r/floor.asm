%include "macros.inc"

    extern  modf

%include "layout.inc"

section @text

__GDECL(floor)
		push    ebp
		mov     ebp, esp
		push    eax
		push    ebx
		push    edx
		sub     esp, byte 8
		lea     eax, [ebp-14h]
		push    eax
		mov     edx, [ebp+0ch]
		push    edx
		mov     ebx, [ebp+8]
		push    ebx
		call    modf
		fldz    
		fcompp  
		fnstsw  ax
		sahf    
		jbe     ___6d6b8h
		fld     qword [ebp-14h]
		fadd    qword [___1850dch]
		fstp    qword [ebp-14h]
___6d6b8h:
		fld     qword [ebp-14h]
		lea     esp, [ebp-0ch]
		pop     edx
		pop     ebx
		pop     eax
		pop     ebp
		ret     8


section @const

___1850dch:
db	0,0,0,0,0,0,0f0h,0bfh
