cpu 386
%include "macros.inc"

	extern	___24cc7ch
	extern	___24cc80h
	extern	___58b20h

section .text

__GDECL(___5f26ch)
		push    ebx
		push    ecx
		push    edx
		mov     ebx, [___24cc7ch]
		mov     edx, eax
		mov     ecx, [___24cc80h]
		add     eax, ebx
		cmp     eax, ecx
		jbe     short ___5f28dh
		push    byte 17h
		call    near ___58b20h
		add     esp, byte 4
___5f28dh:
		mov     eax, [___24cc7ch]
		lea     ebx, [eax+edx*1]
		mov     edx, ebx
		mov     ecx, 4
		and     edx, byte 3
		sub     ecx, edx
		mov     edx, ecx
		and     edx, byte 3
		add     ebx, edx
		mov     [___24cc7ch], ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
