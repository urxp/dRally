%include "macros.inc"

    extern  __chipbug
    extern  __HugeValue
    extern  _matherr
	extern 	__8087

%include "layout.inc"

section @text

__GDECL(__math1err)
		push    ebx
		mov     ebx, edx
		call    __math2err
		pop     ebx
		retn    
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
		je      ___7ed2ah
		mov     esi, 1
		jmp     ___7ed64h
___7ed2ah:
		test    cl, 80h
		je      ___7ed36h
		mov     esi, 2
		jmp     ___7ed64h
___7ed36h:
		test    ch, 1
		je      ___7ed42h
		mov     esi, 3
		jmp     ___7ed64h
___7ed42h:
		test    ch, 8
		je      ___7ed4eh
		mov     esi, 4
		jmp     ___7ed64h
___7ed4eh:
		test    ch, 2
		je      ___7ed5ah
		mov     esi, 6
		jmp     ___7ed64h
___7ed5ah:
		test    ch, 4
		je      ___7ed64h
		mov     esi, 5
___7ed64h:
		mov     eax, ecx
		and     eax, byte 1fh
		mov     eax, [eax*4+_MathFuncNames-4]
		mov     [ebp-28h], esi
		mov     [ebp-24h], eax
		test    ch, 10h
		je      ___7ed88h
		fld     qword [__HugeValue]
		fchs    
		fstp    qword [ebp-10h]
		jmp     ___7edcah
___7ed88h:
		test    ch, 20h
		je      ___7ed97h
		xor     ecx, ecx
		mov     [ebp-10h], ecx
		mov     [ebp-0ch], ecx
		jmp     ___7edcah
___7ed97h:
		test    ch, 40h
		je      ___7edabh
		xor     edx, edx
		mov     ebx, 3ff00000h
		mov     [ebp-10h], edx
		mov     [ebp-0ch], ebx
		jmp     ___7edcah
___7edabh:
		test    ch, 80h
		je      ___7edbfh
		mov     eax, [__HugeValue]
		mov     [ebp-10h], eax
		mov     eax, [__HugeValue+4]
		jmp     ___7edc7h
___7edbfh:
		mov     eax, [ebx]
		mov     [ebp-10h], eax
		mov     eax, [ebx+4]
___7edc7h:
		mov     [ebp-0ch], eax
___7edcah:
		lea     eax, [ebp-28h]
		call    _matherr
		lea     esp, [ebp-8]
		pop     esi
		pop     ecx
		pop     ebp
		retn    


section @const

___1851a4h:
db	"acos",0
___1851a9h:
db	"asin",0
___1851aeh:
db	"sqrt",0
___1851b3h:
db	"exp",0
___1851b7h:
db	"cosh",0
___1851bch:
db	"sinh",0
___1851c1h:
db	"pow",0
___1851c5h:
db	"acosh",0
___1851cbh:
db	"log2",0
___1851d0h:
db	"log",0
___1851d4h:
db	"log10",0
___1851dah:
db	"atanh",0
___1851e0h:
db	"atan2",0
___1851e6h:
db	"ipow",0
___1851ebh:
db	"dpowi",0
___1851f1h:
db	"cos",0
___1851f5h:
db	"sin",0
___1851f9h:
db	"tan",0
___1851fdh:
db	"y0",0
___185200h:
db	"y1",0
___185203h:
db	"yn",0
___185206h:
db	"mod",0
___18520ah:
db	"cotan",0


section @data

_MathFuncNames:
dd	___1851a4h
dd	___1851a9h
dd	___1851aeh
dd	___1851b3h
dd	___1851b7h
dd	___1851bch
dd	___1851c1h
dd	___1851c5h
dd	___1851cbh
dd	___1851d0h
dd	___1851d4h
dd	___1851dah
dd	___1851e0h
dd	___1851e6h
dd	___1851ebh
dd	___1851f1h
dd	___1851f5h
dd	___1851f9h
dd	___1851fdh
dd	___185200h
dd	___185203h
dd	___185206h
dd	___18520ah
