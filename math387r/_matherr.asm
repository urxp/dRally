%include "macros.inc"

    extern  __get_std_stream
;    extern  _Msgs
;    extern  ___18529dh
    extern  fputs__clib3r
    extern  fputc__clib3r
    extern  __set_EDOM
    extern  __set_ERANGE
	extern	__matherr


%include "layout.inc"

section @text

__GDECL(_set_matherr)
		mov     [__RWD_matherr], eax
		retn    
__GDECL(__rterrmsg)
		push    ebx
		push    ecx
		push    esi
		mov     esi, eax
		mov     ecx, edx
		mov     eax, 2
		call    __get_std_stream
		mov     ebx, eax
		mov     eax, esi
		mov     edx, ebx
		mov     eax, [eax*4+_Msgs]
		call    fputs__clib3r
		mov     eax, ___18529dh
		mov     edx, ebx
		call    fputs__clib3r
		mov     edx, ebx
		mov     eax, ecx
		call    fputs__clib3r
		mov     eax, 0ah
		mov     edx, ebx
		call    fputc__clib3r
		pop     esi
		pop     ecx
		pop     ebx
		retn    
__GDECL(_matherr)
		push    ebx
		push    edx
		mov     ebx, eax
		call    dword [__RWD_matherr]
		test    eax, eax
		jne     ___7f1bfh
		mov     edx, [ebx+4]
		mov     eax, [ebx]
		call    __rterrmsg
		cmp     dword [ebx], byte 1
		jne     ___7f1bah
		call    __set_EDOM
		jmp     ___7f1bfh
___7f1bah:
		call    __set_ERANGE
___7f1bfh:
		fld     qword [ebx+18h]
		pop     edx
		pop     ebx
		retn    

section @const

___185218h:
db	"Domain error",0
___185225h:
db	"Argument singularity",0
___18523ah:
db	"Overflow range error",0
___18524fh:
db	"Underflow range error",0
___185265h:
db	"Total loss of significance",0
___185280h:
db	"Partial loss of significance",0
___18529dh
db	" in ",0

section @const2

_Msgs:
db	0,0,0,0
dd	___185218h
dd	___185225h
dd	___18523ah
dd	___18524fh
dd	___185265h
dd	___185280h

section @data

__GDECL(__RWD_matherr)
dd	__matherr
