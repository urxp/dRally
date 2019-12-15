cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___61278h
	extern	___24e4ach
	extern	___24e4c0h
	extern	___24cee0h
	extern	___24cee4h
	extern	___24cee8h
	extern	___24ceech
	extern	memset_

section .text

__GDECL(___4495ch)
		push    0ch
		call    near __CHK
		push    ebx
		push    edx
		call    near ___61278h
		mov     eax, [___24e4ach]
		mov     word [eax], 0
		mov     dx, [eax]
		mov     [eax+2], dx
		mov     edx, [___24e4c0h]
		mov     word [edx], 0
		mov     bx, [edx]
		mov     [edx+2], bx
		mov     edx, [___24cee0h]
		mov     word [edx], 0
		mov     word [edx+2], 0
		mov     edx, [___24cee4h]
		mov     word [edx], 0
		mov     word [edx+2], 0
		mov     edx, [___24cee8h]
		mov     word [edx], 0
		mov     word [edx+2], 0
		mov     edx, [___24ceech]
		add     eax, byte 4
		mov     word [edx], 0
		mov     ebx, 1000h
		mov     word [edx+2], 0
		xor     edx, edx
		call    near memset_
		mov     ebx, 1000h
		mov     eax, [___24cee0h]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     ebx, 1000h
		mov     eax, [___24cee4h]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     ebx, 1000h
		mov     eax, [___24cee8h]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     ebx, 1000h
		mov     eax, [___24ceech]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     ebx, 1000h
		mov     eax, [___24e4c0h]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		pop     edx
		pop     ebx
		retn    
