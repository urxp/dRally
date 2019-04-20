cpu 386

    extern	__HugeValue
    extern	_matherr
    extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __math1err
__math1err:
		push    ebx
		mov     ebx, edx
		call    near __math2err
		pop     ebx
		retn    
global __math2err
__math2err:
		push    ebp
		mov     ebp, esp
		push    ecx
		push    esi
		sub     esp, byte 20h
		mov     ecx, eax
		mov     eax, [edx]
		mov     [ebp-20h], eax
		mov     eax, [edx+4]
		mov     [ebp-1ch], eax
		mov     eax, [ebx]
		mov     [ebp-18h], eax
		mov     eax, [ebx+4]
		mov     [ebp-14h], eax
		test    cl, 40h
		je      short dr@7ed2ah
		mov     esi, 1
		jmp     short dr@7ed64h
dr@7ed2ah:
		test    cl, 80h
		je      short dr@7ed36h
		mov     esi, 2
		jmp     short dr@7ed64h
dr@7ed36h:
		test    ch, 1
		je      short dr@7ed42h
		mov     esi, 3
		jmp     short dr@7ed64h
dr@7ed42h:
		test    ch, 8
		je      short dr@7ed4eh
		mov     esi, 4
		jmp     short dr@7ed64h
dr@7ed4eh:
		test    ch, 2
		je      short dr@7ed5ah
		mov     esi, 6
		jmp     short dr@7ed64h
dr@7ed5ah:
		test    ch, 4
		je      short dr@7ed64h
		mov     esi, 5
dr@7ed64h:
		mov     eax, ecx
		and     eax, byte 1fh
		mov     eax, [eax*4+_MathFuncNames-4]
		mov     [ebp-28h], esi
		mov     [ebp-24h], eax
		test    ch, 10h
		je      short dr@7ed88h
		fld     qword [__HugeValue]
		fchs    
		fstp    qword [ebp-10h]
		jmp     short dr@7edcah
dr@7ed88h:
		test    ch, 20h
		je      short dr@7ed97h
		xor     ecx, ecx
		mov     [ebp-10h], ecx
		mov     [ebp-0ch], ecx
		jmp     short dr@7edcah
dr@7ed97h:
		test    ch, 40h
		je      short dr@7edabh
		xor     edx, edx
		mov     ebx, 3ff00000h
		mov     [ebp-10h], edx
		mov     [ebp-0ch], ebx
		jmp     short dr@7edcah
dr@7edabh:
		test    ch, 80h
		je      short dr@7edbfh
		mov     eax, [__HugeValue]
		mov     [ebp-10h], eax
		mov     eax, [__HugeValue+4]
		jmp     short dr@7edc7h
dr@7edbfh:
		mov     eax, [ebx]
		mov     [ebp-10h], eax
		mov     eax, [ebx+4]
dr@7edc7h:
		mov     [ebp-0ch], eax
dr@7edcah:
		lea     eax, [ebp-28h]
		call    near _matherr
		lea     esp, [ebp-8]
		pop     esi
		pop     ecx
		pop     ebp
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$13:
    db  "acos",0
L$14:
    db  "asin",0
L$15:
    db  "sqrt",0
L$16:
    db  "exp",0
L$17:
    db  "cosh",0
L$18:
    db  "sinh",0
L$19:
    db  "pow",0
L$20:
    db  "acosh",0
L$21:
    db  "log2",0
L$22:
    db  "log",0
L$23:
    db  "log10",0
L$24:
    db  "atanh",0
L$25:
    db  "atan2",0
L$26:
    db  "ipow",0
L$27:
    db  "dpowi",0
L$28:
    db  "cos",0
L$29:
    db  "sin",0
L$30:
    db  "tan",0
L$31:
    db  "y0",0
L$32:
    db  "y1",0
L$33:
    db  "yn",0
L$34:
    db  "mod",0
L$35:
    db  "cotan",0


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
_MathFuncNames:
    dd	L$13
    dd	L$14
    dd	L$15
    dd	L$16
    dd	L$17
    dd	L$18
    dd	L$19
    dd	L$20
    dd	L$21
    dd	L$22
    dd	L$23
    dd	L$24
    dd	L$25
    dd	L$26
    dd	L$27
    dd  L$28
    dd	L$29
    dd	L$30
    dd	L$31
    dd	L$32
    dd	L$33
    dd	L$34
    dd	L$35