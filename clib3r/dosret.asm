cpu 386

    extern	__set_doserrno
    extern	__osmajor
    extern	__set_errno

;tmp
    extern  _xlat

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _dosret0
_dosret0:
		test    edx, edx
		jne     short _dosretax
		xor     eax, eax
dr@6dad1h:
		retn
global _dosretax
_dosretax:
		test    edx, edx
		je      short dr@6dad1h
global __set_errno_dos
__set_errno_dos:
		push    ebx
		push    edx
		mov     ebx, eax
		mov     dl, al
		xor     eax, eax
		mov     al, bl
		call    near __set_doserrno
		cmp     ebx, 100h
		jae     short dr@6db30h
		xor     eax, eax
		mov     al, [__osmajor]
		cmp     eax, byte 3
		jl      short dr@6db16h
		xor     ebx, ebx
		mov     bl, dl
		cmp     ebx, byte 50h
		jne     short dr@6db06h
		mov     dl, 0eh
		jmp     short dr@6db16h
dr@6db06h:
		cmp     ebx, byte 22h
		jl      short dr@6db0fh
		mov     dl, 13h
		jmp     short dr@6db16h
dr@6db0fh:
		cmp     ebx, byte 20h
		jl      short dr@6db16h
		mov     dl, 5
dr@6db16h:
		xor     eax, eax
		mov     al, dl
		cmp     eax, byte 13h
		jle     short dr@6db21h
		mov     dl, 13h
dr@6db21h:
		xor     ebx, ebx
		mov     bl, dl
        mov     eax, [ebx+_xlat-3]
		sar     eax, 18h
		jmp     short dr@6db3ah
dr@6db30h:
		mov     eax, ebx
		shr     eax, 8
		and     eax, 0ffh
dr@6db3ah:
		call    near __set_errno
		mov     eax, 0ffffffffh
		pop     edx
		pop     ebx
		retn

;SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
;_xlat:
;    db	0, 9, 1, 1, 0bh, 6, 4, 5
;    db	5, 5, 2, 3, 0ffh, 0ffh, 7, 8
;    db	6, 8, 1, 0ffh