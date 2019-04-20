cpu 386

    extern	__log87_err
    extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE


global IF@DLOG
IF@DLOG:
global IF@LOG
IF@LOG:
		mov     al, 0ah
dr@7de3eh:
		ftst    
		push    ebp
		mov     ebp, esp
		sub     esp, byte 10h
		wait    
		fnstsw  word [ebp-10h]
		wait    
		mov     ah, [ebp-0fh]
		sahf    
		ja      short dr@7de63h
		mov     [ebp-8], eax
		fstp    qword [ebp-10h]
		mov     [ebp-4], edx
		call    near __log87_err
		mov     al, 1
		jmp     short dr@7de7bh
dr@7de63h:
		cmp     al, 0bh
		jne     short dr@7de6bh
		fldlg2  
		jmp     short dr@7de75h
dr@7de6bh:
		cmp     al, 9
		jne     short dr@7de73h
		fld1    
		jmp     short dr@7de75h
dr@7de73h:
		fldln2  
dr@7de75h:
		fxch    st0, st1
		fyl2x   
		mov     al, 0
dr@7de7bh:
		mov     esp, ebp
		pop     ebp
		retn 
global IF@DLOG2
IF@DLOG2:   
global IF@LOG2
IF@LOG2:
		mov     al, 9
		jmp     short dr@7de3eh
global IF@DLOG10
IF@DLOG10:
global IF@LOG10
IF@LOG10:
		mov     al, 0bh
		jmp     short dr@7de3eh
global log
log:
		fld     qword [esp+4]
		call    near IF@DLOG
		ret     8
global log10
log10:
		fld     qword [esp+4]
		call    near IF@DLOG10
		ret     8
global log2
log2:
		fld     qword [esp+4]
		call    near IF@DLOG2
		ret     8