cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___196d94h
	extern	___196d8ch
	extern	___243c98h
	extern	___1f3b08h
	extern	___1f44f4h
	extern	___1f3d68h
	extern	___1f4620h
	extern	___243d08h

section .text

__GDECL(___5326ch)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     edi, [___196d94h]
		mov     ebp, [___196d8ch]
		imul    esi, [___243c98h], 0c50h
		xor     ecx, ecx
		mov     eax, [esi+___1f3b08h]
		mov     ebx, esi
		test    eax, eax
		jle     short ___532f6h
___532a0h:
		mov     edx, [ebx+___1f44f4h]
		shl     edx, 8
		mov     eax, edx
		sar     edx, 1fh
		idiv    dword [ebx+___1f3d68h]
		add     eax, 80h
		sar     eax, 8
		mov     edx, [ebx+___1f4620h]
		add     eax, ebp
		shl     edx, 8
		mov     [ebx+___1f44f4h], eax
		mov     eax, edx
		sar     edx, 1fh
		idiv    dword [ebx+___1f3d68h]
		add     eax, 80h
		sar     eax, 8
		add     eax, edi
		mov     [ebx+___1f4620h], eax
		inc     ecx
		mov     edx, [esi+___1f3b08h]
		add     ebx, byte 4
		cmp     ecx, edx
		jl      short ___532a0h
___532f6h:
		mov     [___196d8ch], ebp
		mov     [___196d94h], edi
		mov     [___243d08h], ecx
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
