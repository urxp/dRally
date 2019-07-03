%include "macros.inc"

    extern  __log87_err
    extern  IF@LOG2

%include "layout.inc"

section @text

IF@LOG:
		mov     al, 0ah
___7de3eh:
		ftst    
		push    ebp
		mov     ebp, esp
		sub     esp, byte 10h
		wait    
		fnstsw  word [ebp-10h]
		wait    
		mov     ah, [ebp-0fh]
		sahf    
		ja      short ___7de63h
		mov     [ebp-8], eax
		fstp    qword [ebp-10h]
		mov     [ebp-4], edx
		call    near __log87_err
		mov     al, 1
		jmp     short ___7de7bh
___7de63h:
		cmp     al, 0bh
		jne     short ___7de6bh
		fldlg2  
		jmp     short ___7de75h
___7de6bh:
		cmp     al, 9
		jne     short ___7de73h
		fld1    
		jmp     short ___7de75h
___7de73h:
		fldln2  
___7de75h:
		fxch    st0, st1
		fyl2x   
		mov     al, 0
___7de7bh:
		mov     esp, ebp
		pop     ebp
		retn    
IF@LOG2:
		mov     al, 9
		jmp     short ___7de3eh
__GDECL(IF@LOG10)
		mov     al, 0bh
		jmp     short ___7de3eh
__GDECL(__CEXT_F(log))
		fld     qword [esp+4]
		call    near IF@LOG
		ret     8
__GDECL(__CEXT_F(log10))
		fld     qword [esp+4]
		call    near IF@LOG10
		ret     8
__GDECL(__CEXT_F(log2))
		fld     qword [esp+4]
		call    near IF@LOG2
		ret     8
