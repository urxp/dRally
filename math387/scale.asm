cpu 386

    extern	__Rnd2Int
    extern	__CmpBigInt
    extern	__BigPow10Table
    extern	__chipbug
    extern	__fdiv_m64
    extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _Scale
_Scale:
		push    ebp
		mov     ebp, esp
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ecx, [ebp+10h]
		mov     ebx, [ebp+14h]
		cmp     eax, ecx
		je      short dr@7ded1h
		mov     edx, ecx
		sub     edx, eax
		push    edx
		mov     edx, [ebp+0ch]
		push    edx
		mov     esi, [ebp+8]
		push    esi
		call    near _Scale10V
		fstp    qword [ebp+8]
dr@7ded1h:
		lea     eax, [ebp+8]
		mov     edx, ebx
		call    near __Rnd2Int
		mov     edx, ebx
		mov     eax, ecx
		call    near __CmpBigInt
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		pop     ebp
		ret     10h
global _Scale10V
_Scale10V:
		push    eax
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 8
		mov     ecx, [esp+28h]
		fld     qword [esp+20h]
		fcomp   qword [L$16]
		fnstsw  ax
		sahf    
		jne     short dr@7df17h
		mov     eax, [L$18]
		mov     [esp+20h], eax
		mov     eax, [L$19]
		jmp     short dr@7df34h
dr@7df17h:
		fld     qword [esp+20h]
		fcomp   qword [L$17]
		fnstsw  ax
		sahf    
		jne     short dr@7df38h
		mov     eax, [L$20]
		mov     [esp+20h], eax
		mov     eax, [L$21]
dr@7df34h:
		mov     [esp+24h], eax
dr@7df38h:
		mov     eax, __BigPow10Table
		test    ecx, ecx
		jge     short dr@7df7bh
		mov     edx, ecx
		neg     edx
		cmp     edx, 134h
		jle     short dr@7df99h
		fld     qword [esp+20h]
		test    byte [__chipbug], 1
		je      short dr@7df6dh
		push    dword [__BigPow10Table+6]
		push    dword [__BigPow10Table+2]
		call    near __fdiv_m64
		jmp     short dr@7df73h
dr@7df6dh:
		fdiv    qword [__BigPow10Table+2]
dr@7df73h:
		sub     edx, 0d8h
		jmp     short dr@7df95h
dr@7df7bh:
		mov     edx, ecx
		cmp     ecx, 134h
		jle     short dr@7df99h
		fld     qword [esp+20h]
		fmul    qword [__BigPow10Table+2]
		lea     edx, [ecx+0ffffff28h]
dr@7df95h:
		fstp    qword [esp+20h]
dr@7df99h:
		xor     ebx, ebx
		mov     esi, 3ff00000h
		mov     [esp], ebx
		mov     [esp+4], esi
dr@7dfa7h:
		movsx   ebx, word [eax]
		cmp     edx, ebx
		jl      short dr@7dfb9h
		fld     qword [esp]
		fmul    qword [eax+2]
		sub     edx, ebx
		fstp    qword [esp]
dr@7dfb9h:
		test    edx, edx
		je      short dr@7dfcah
		movsx   ebx, word [eax]
		cmp     ebx, byte 1
		je      short dr@7dfa7h
		add     eax, byte 0ah
		jmp     short dr@7dfa7h
dr@7dfcah:
		test    ecx, ecx
		jge     short dr@7dfefh
		fld     qword [esp+20h]
		test    byte [__chipbug], 1
		je      short dr@7dfeah
		push    dword [esp+4]
		push    dword [esp+4]
		call    near __fdiv_m64
		jmp     short dr@7dff6h
dr@7dfeah:
		fdiv    qword [esp]
		jmp     short dr@7dff6h
dr@7dfefh:
		fld     qword [esp+20h]
		fmul    qword [esp]
dr@7dff6h:
		fstp    qword [esp+20h]
		fld     qword [esp+20h]
		add     esp, byte 8
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		pop     eax
		ret     0ch


SEGMENT CONST2  PUBLIC USE32 ALIGN=4 CLASS=DATA
L$16:
    db	0,0,0,0,0,0,0f0h,7fh
L$17:
    db	0,0,0,0,0,0,0f0h,0ffh
L$18:
    db	0ffh,0ffh,0ffh,0ffh
L$19:
    db	0ffh,0ffh,0efh,7fh
L$20:
    db	0ffh,0ffh,0ffh,0ffh
L$21:
    db	0ffh,0ffh,0efh,0ffh