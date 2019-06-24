%include "macros.inc"

    extern  __set_doserrno
    extern  __osmajor
    extern  __set_errno__clib3r

%include "layout.inc"

section @text

__GDECL(_dosret0)
		test    edx, edx
		jne     _dosretax
		xor     eax, eax
___6dad1h:
		retn    
__GDECL(_dosretax)
		test    edx, edx
		je      ___6dad1h
__GDECL(__set_errno_dos)
		push    ebx
		push    edx
		mov     ebx, eax
		mov     dl, al
		xor     eax, eax
		mov     al, bl
		call    __set_doserrno
		cmp     ebx, 100h
		jae     ___6db30h
		xor     eax, eax
		mov     al, [__osmajor]
		cmp     eax, byte 3
		jl      ___6db16h
		xor     ebx, ebx
		mov     bl, dl
		cmp     ebx, byte 50h
		jne     ___6db06h
		mov     dl, 0eh
		jmp     ___6db16h
___6db06h:
		cmp     ebx, byte 22h
		jl      ___6db0fh
		mov     dl, 13h
		jmp     ___6db16h
___6db0fh:
		cmp     ebx, byte 20h
		jl      ___6db16h
		mov     dl, 5
___6db16h:
		xor     eax, eax
		mov     al, dl
		cmp     eax, byte 13h
		jle     ___6db21h
		mov     dl, 13h
___6db21h:
		xor     ebx, ebx
		mov     bl, dl
		mov     eax, [ebx+_xlat-3]
		sar     eax, 18h
		jmp     ___6db3ah
___6db30h:
		mov     eax, ebx
		shr     eax, 8
		and     eax, 0ffh
___6db3ah:
		call    __set_errno__clib3r
		mov     eax, 0ffffffffh
		pop     edx
		pop     ebx
		retn    


section @data

_xlat:
db	0,9,1,1,0bh,6,4,5,5,5,2,3,0ffh,0ffh,7,8
db	6,8,1,0ffh
