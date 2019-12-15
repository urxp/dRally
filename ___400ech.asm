cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1de598h
	extern	___182f07h
	extern	ceil_
	extern	___182f0fh
	extern	__CHP
	extern	___1de78ch
	extern	___1de5d4h
	extern	___1de7bch
	extern	___1de5d0h
	extern	___1de788h

section .text

__GDECL(___400ech)
		push    1ch
		call    near __CHK
		push    ebx
		push    edx
		push    ebp
		mov     ebp, esp
		sub     esp, byte 4
		and     esp, byte 0fffffff8h
		xor     ebx, ebx
		xor     edx, edx
___40105h:
		fild    dword [edx+___1de598h]
		fmul    qword [___182f07h]
		sub     esp, byte 8
		fstp    qword [esp]
		call    near ceil_
		fsubr   qword [___182f0fh]
		add     ebx, byte 54h
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		mov     [ebx+___1de78ch], eax
		mov     eax, [edx+___1de5d4h]
		mov     [ebx+___1de7bch], eax
		mov     eax, [edx+___1de5d0h]
		add     edx, 94h
		mov     [ebx+___1de788h], eax
		cmp     edx, 250h
		jne     short ___40105h
		mov     esp, ebp
		pop     ebp
		pop     edx
		pop     ebx
		retn    
