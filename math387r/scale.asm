%include "macros.inc"

    extern  __Rnd2Int
    extern  __CmpBigInt
    extern  __BigPow10Table
    extern  __chipbug
    extern  __fdiv_m64

%include "layout.inc"

section @text

__GDECL(_Scale)
		push    ebp
		mov     ebp, esp
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ecx, [ebp+10h]
		mov     ebx, [ebp+14h]
		cmp     eax, ecx
		je      ___7ded1h
		mov     edx, ecx
		sub     edx, eax
		push    edx
		mov     edx, [ebp+0ch]
		push    edx
		mov     esi, [ebp+8]
		push    esi
		call    _Scale10V
		fstp    qword [ebp+8]
___7ded1h:
		lea     eax, [ebp+8]
		mov     edx, ebx
		call    __Rnd2Int
		mov     edx, ebx
		mov     eax, ecx
		call    __CmpBigInt
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		pop     ebp
		ret     10h
__GDECL(_Scale10V)
		push    eax
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 8
		mov     ecx, [esp+28h]
		fld     qword [esp+20h]
		fcomp   qword [___1853b0h]
		fnstsw  ax
		sahf    
		jne     ___7df17h
		mov     eax, [___1853c0h]
		mov     [esp+20h], eax
		mov     eax, [___1853c4h]
		jmp     ___7df34h
___7df17h:
		fld     qword [esp+20h]
		fcomp   qword [___1853b8h]
		fnstsw  ax
		sahf    
		jne     ___7df38h
		mov     eax, [___1853c8h]
		mov     [esp+20h], eax
		mov     eax, [___1853cch]
___7df34h:
		mov     [esp+24h], eax
___7df38h:
		mov     eax, __BigPow10Table
		test    ecx, ecx
		jge     ___7df7bh
		mov     edx, ecx
		neg     edx
		cmp     edx, 134h
		jle     ___7df99h
		fld     qword [esp+20h]
		test    byte [__chipbug], 1
		je      ___7df6dh
		push    dword [__BigPow10Table+6]
		push    dword [__BigPow10Table+2]
		call    __fdiv_m64
		jmp     ___7df73h
___7df6dh:
		fdiv    qword [__BigPow10Table+2]
___7df73h:
		sub     edx, 0d8h
		jmp     ___7df95h
___7df7bh:
		mov     edx, ecx
		cmp     ecx, 134h
		jle     ___7df99h
		fld     qword [esp+20h]
		fmul    qword [__BigPow10Table+2]
		lea     edx, [ecx+0ffffff28h]
___7df95h:
		fstp    qword [esp+20h]
___7df99h:
		xor     ebx, ebx
		mov     esi, 3ff00000h
		mov     [esp], ebx
		mov     [esp+4], esi
___7dfa7h:
		movsx   ebx, word [eax]
		cmp     edx, ebx
		jl      ___7dfb9h
		fld     qword [esp]
		fmul    qword [eax+2]
		sub     edx, ebx
		fstp    qword [esp]
___7dfb9h:
		test    edx, edx
		je      ___7dfcah
		movsx   ebx, word [eax]
		cmp     ebx, byte 1
		je      ___7dfa7h
		add     eax, byte 0ah
		jmp     ___7dfa7h
___7dfcah:
		test    ecx, ecx
		jge     ___7dfefh
		fld     qword [esp+20h]
		test    byte [__chipbug], 1
		je      ___7dfeah
		push    dword [esp+4]
		push    dword [esp+4]
		call    __fdiv_m64
		jmp     ___7dff6h
___7dfeah:
		fdiv    qword [esp]
		jmp     ___7dff6h
___7dfefh:
		fld     qword [esp+20h]
		fmul    qword [esp]
___7dff6h:
		fstp    qword [esp+20h]
		fld     qword [esp+20h]
		add     esp, byte 8
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		pop     eax
		ret     0ch


section @const2

___1853b0h:
db	0,0,0,0,0,0,0f0h,7fh
___1853b8h:
db	0,0,0,0,0,0,0f0h,0ffh
___1853c0h:
db	0ffh,0ffh,0ffh,0ffh
___1853c4h:
db	0ffh,0ffh,0efh,7fh
___1853c8h:
db	0ffh,0ffh,0ffh,0ffh
___1853cch:
db	0ffh,0ffh,0efh,0ffh
