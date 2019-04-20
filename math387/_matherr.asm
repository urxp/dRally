cpu 386

    extern	__get_std_stream
    extern	fputs
    extern	fputc
    extern	__set_EDOM
    extern	__set_ERANGE
    extern	__matherr
    extern	__8087

DGROUP		GROUP	CONST,CONST2,_DATA,_BSS
SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _set_matherr
_set_matherr:
		mov     [__RWD_matherr], eax
		retn    
global __rterrmsg
__rterrmsg:
		push    ebx
		push    ecx
		push    esi
		mov     esi, eax
		mov     ecx, edx
		mov     eax, 2
		call    near __get_std_stream
		mov     ebx, eax
		mov     eax, esi
		mov     edx, ebx
		mov     eax, [eax*4+_Msgs]
		call    near fputs
		mov     eax, L$9
		mov     edx, ebx
		call    near fputs
		mov     edx, ebx
		mov     eax, ecx
		call    near fputs
		mov     eax, 0ah
		mov     edx, ebx
		call    near fputc
		pop     esi
		pop     ecx
		pop     ebx
		retn  
global _matherr  
_matherr:
		push    ebx
		push    edx
		mov     ebx, eax
		call    dword [__RWD_matherr]
		test    eax, eax
		jne     short dr@7f1bfh
		mov     edx, [ebx+4]
		mov     eax, [ebx]
		call    near __rterrmsg
		cmp     dword [ebx], byte 1
		jne     short dr@7f1bah
		call    near __set_EDOM
		jmp     short dr@7f1bfh
dr@7f1bah:
		call    near __set_ERANGE
dr@7f1bfh:
		fld     qword [ebx+18h]
		pop     edx
		pop     ebx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$3:
    db  "Domain error",0
L$4:
    db  "Argument singularity",0
L$5:
    db  "Overflow range error",0
L$6:
    db  "Underflow range error",0
L$7:
    db  "Total loss of significance",0
L$8:
    db  "Partial loss of significance",0
L$9:
    db  " in ",0


SEGMENT CONST2  PUBLIC USE32 ALIGN=4 CLASS=DATA
_Msgs:
    DB	0,0,0,0
    DD	L$3
    DD	L$4
    DD	L$5
    DD	L$6
    DD	L$7
    DD	L$8


_DATA		SEGMENT	DWORD PUBLIC USE32 'DATA'
global __RWD_matherr
__RWD_matherr:
    dd	__matherr