cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___24cef0h
	extern	__STOSB
	extern	___24cefah
	extern	___24cf04h
	extern	___24cf0eh
	extern	___24e4ach
	extern	___1a1168h
	extern	___1a1169h
	extern	___1a116ah
	extern	___1a116bh
	extern	___60a84h
	extern	___60a28h
	extern	___24e4b4h
	extern	___243cf4h
	extern	___60b60h
	extern	___611c0h
	extern	___24cee0h
	extern	___24cee4h
	extern	___24cee8h
	extern	___24ceech

section .text

__GDECL(___44194h)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		sub     esp, byte 10h
		mov     ecx, 0ah
		mov     eax, ___24cef0h
		xor     edx, edx
		call    near __STOSB
		mov     ecx, 0ah
		mov     eax, ___24cefah
		xor     edx, edx
		call    near __STOSB
		mov     ecx, 0ah
		mov     eax, ___24cf04h
		xor     edx, edx
		call    near __STOSB
		mov     ecx, 0ah
		mov     eax, ___24cf0eh
		xor     edx, edx
		call    near __STOSB
		mov     eax, [___24e4ach]
		xor     edx, edx
		mov     word [eax], 0
		mov     dl, [___1a1168h]
		mov     word [eax+2], 0
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, ___24cef0h
		add     eax, eax
		add     edx, eax
		mov     [esp], edx
		xor     edx, edx
		mov     dl, [___1a1169h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, ___24cef0h
		add     eax, eax
		add     edx, eax
		mov     [esp+4], edx
		xor     edx, edx
		mov     dl, [___1a116ah]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, ___24cef0h
		add     eax, eax
		add     edx, eax
		mov     [esp+8], edx
		xor     edx, edx
		mov     dl, [___1a116bh]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, ___24cef0h
		add     eax, eax
		add     edx, eax
		mov     [esp+0ch], edx
		call    near ___60a84h
___44274h:
		mov     eax, 2
		mov     ecx, 0ah
		call    near ___60a28h
		mov     eax, 1
		mov     ebx, [___24e4b4h]
		mov     edx, [___243cf4h]
		call    near ___60b60h
		cmp     eax, dword 0ffh
		jne     short ___44274h
		mov     edx, esp
		mov     eax, 0ah
		call    near ___611c0h
		mov     eax, [___24e4ach]
		mov     word [eax], 0
		mov     word [eax+2], 0
		mov     eax, [___24cee0h]
		mov     word [eax], 0
		mov     word [eax+2], 0
		mov     eax, [___24cee4h]
		mov     word [eax], 0
		mov     word [eax+2], 0
		mov     eax, [___24cee8h]
		mov     word [eax], 0
		mov     word [eax+2], 0
		mov     eax, [___24ceech]
		mov     word [eax], 0
		mov     word [eax+2], 0
		add     esp, byte 10h
		pop     edx
		pop     ecx
		pop     ebx
		retn    
