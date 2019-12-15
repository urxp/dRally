cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1f4750h
	extern	___1f4754h
	extern	___4844dh

section .text

__GDECL(___53378h)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     [esp], eax
		mov     [esp+4], edx
___53391h:
		mov     ecx, [esp+4]
		mov     ebx, [esp]
		lea     edx, [ebx+ecx*1]
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		imul    eax, eax, 0c50h
		mov     esi, [eax+___1f4750h]
___533b0h:
		imul    eax, ebx, 0c50h
		cmp     esi, [eax+___1f4750h]
		jle     short ___533c1h
		inc     ebx
		jmp     short ___533b0h
___533c1h:
		imul    eax, ecx, 0c50h
___533c7h:
		mov     ebp, [eax+___1f4750h]
		lea     edx, [ecx-1]
		cmp     esi, ebp
		jge     short ___533ddh
		mov     ecx, edx
		sub     eax, 0c50h
		jmp     short ___533c7h
___533ddh:
		cmp     ebx, ecx
		jg      short ___53414h
		imul    ecx, ebx, 0c50h
		mov     edi, [ecx+___1f4750h]
		mov     [ecx+___1f4750h], ebp
		mov     [eax+___1f4750h], edi
		inc     ebx
		mov     ebp, [eax+___1f4754h]
		mov     edi, [ecx+___1f4754h]
		mov     [ecx+___1f4754h], ebp
		mov     ecx, edx
		mov     [eax+___1f4754h], edi
___53414h:
		cmp     ebx, ecx
		jl      short ___533b0h
		mov     eax, [esp]
		cmp     ecx, eax
		jle     short ___53426h
		mov     edx, ecx
		call    near ___53378h
___53426h:
		cmp     ebx, [esp+4]
		jge     near ___4844dh
		mov     [esp], ebx
		jmp     near ___53391h
