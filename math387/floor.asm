cpu 386

	extern	modf
	extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global floor
floor:
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
		call    near modf
		fldz    
		fcompp  
		fnstsw  ax
		sahf    
		jbe     short dr@6d6b8h
		fld     qword [ebp-14h]
		fadd    qword [L$2]
		fstp    qword [ebp-14h]
dr@6d6b8h:
		fld     qword [ebp-14h]
		lea     esp, [ebp-0ch]
		pop     edx
		pop     ebx
		pop     eax
		pop     ebp
		ret     8 


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$2:
    db	0,0,0,0,0,0,0f0h,0bfh