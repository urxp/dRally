cpu 386
%include "macros.inc"

	extern	___68d40h
	extern	___688c8h

section .text

__GDECL(___6bd2eh)
		pushad  
		mov     edi, [___68d40h]
		xor     ebx, ebx
		mov     ebp, 20000h
___6bd3ch:
		mov     eax, ebp
		imul    dword [___688c8h]
		shrd    eax, edx, 10h
		mov     ecx, eax
		mov     ebx, 0ffff0000h
___6bd4fh:
		mov     eax, ecx
		imul    ebx
		shrd    eax, edx, 10h
		stosd   
		add     ebx, 200h
		cmp     ebx, 10000h
		jl      short ___6bd4fh
		add     ebp, 20000h
		cmp     ebp, 1000000h
		jbe     short ___6bd3ch
		popad   
		retn  
