cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c60h
	extern	___1e7086h
	extern	___196dc8h
	extern	___1e70a2h
	extern	___196dcch
	extern	___196d98h
	extern	___1e70a6h
	extern	___1de5e0h
	extern	___1de604h
	extern	___243298h
	extern	___1e6edch
	extern	___243d80h
	extern	___1de5dch

section .text

__GDECL(___50a48h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     ecx, [___243c60h]
		imul    eax, ecx, 35eh
		cmp     dword [eax+___1e7086h], byte 0
		je      near ___50b63h
		mov     ebx, [___196dc8h]
		mov     edx, [eax+___1e70a2h]
		mov     esi, [___196dcch]
		sub     edx, ebx
		mov     ebx, [___196d98h]
		mov     eax, [eax+___1e70a6h]
		add     ebx, edx
		sub     eax, esi
		mov     [esp], ebx
		test    ebx, ebx
		jl      near ___50b55h
		lea     edx, [ebx+8]
		cmp     edx, 140h
		jge     near ___50b55h
		test    eax, eax
		jl      near ___50b55h
		lea     edx, [eax+8]
		cmp     edx, 0c8h
		jge     near ___50b55h
		shl     eax, 9
		xor     ebp, ebp
		mov     [esp+4], eax
		mov     [esp+8], ebp
___50ad6h:
		mov     edi, [esp+4]
		mov     ebp, [esp+8]
		xor     ebx, ebx
___50ae0h:
		imul    eax, ecx, 94h
		mov     edx, [eax+___1de5e0h]
		mov     eax, [eax+edx*4+___1de604h]
		imul    edx, ecx, 35eh
		mov     eax, [eax*4+___243298h]
		add     eax, ebx
		lea     esi, [eax+ebp*1]
		mov     eax, [edx+___1e6edch]
		mov     edx, eax
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		shl     eax, 6
		add     eax, esi
		cmp     byte [eax], 0
		je      short ___50b31h
		mov     esi, [esp]
		mov     edx, [___243d80h]
		add     edx, esi
		add     edx, ebx
		mov     al, [eax]
		mov     [edx+edi*1+60h], al
___50b31h:
		inc     ebx
		cmp     ebx, byte 8
		jl      short ___50ae0h
		mov     ebp, [esp+4]
		mov     edi, [esp+8]
		add     ebp, 200h
		add     edi, byte 8
		mov     [esp+4], ebp
		mov     [esp+8], edi
		cmp     edi, byte 40h
		jne     short ___50ad6h
___50b55h:
		imul    eax, ecx, 35eh
		xor     edx, edx
		mov     [eax+___1e7086h], edx
___50b63h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		shl     eax, 2
		add     eax, ecx
		shl     eax, 2
		mov     ebx, [eax+___1de5e0h]
		mov     edx, [eax+___1de5dch]
		inc     ebx
		dec     edx
		mov     [eax+___1de5e0h], ebx
		cmp     edx, ebx
		jge     short ___50b94h
		xor     edi, edi
		mov     [eax+___1de5e0h], edi
___50b94h:
		mov     [___243c60h], ecx
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
