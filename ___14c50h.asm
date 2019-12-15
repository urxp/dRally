cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___1a1ef8h
	extern 	___1a01f0h
	extern 	___1a0210h

section .text

__GDECL(___14c50h)
		push    10h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		lea     ebx, [eax*4+0]
		mov     edx, [ebx+___1a01f0h]
		test    edx, edx
		jle     short ___14c91h
		lea     ecx, [edx-1]
		xor     eax, eax
		mov     [ebx+___1a01f0h], ecx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___14c91h:
		mov     eax, [ebx+___1a0210h]
		mov     edx, eax
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     [ebx+___1a0210h], eax
		xor     eax, eax
		pop     edx
		pop     ecx
		pop     ebx
		retn    
