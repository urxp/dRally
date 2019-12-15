cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a4ec0h
	extern	___1a4ec1h
	extern	___1a33b4h
	extern	___1a4ec2h
	extern	___1a33b8h
	extern	___1a33bch

section .text

__GDECL(___45ad4h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		xor     ecx, ecx
		xor     esi, esi
		mov     ebp, 3f0000h
___45aedh:
		lea     edi, [esi+esi*2]
		xor     edx, edx
		mov     dl, [edi+___1a4ec0h]
		mov     ebx, ebp
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		xor     edx, edx
		add     ecx, byte 0ch
		mov     dl, [edi+___1a4ec1h]
		mov     ebx, ebp
		shl     edx, 10h
		mov     [ecx+___1a33b4h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		xor     edx, edx
		inc     esi
		mov     dl, [edi+___1a4ec2h]
		mov     ebx, ebp
		shl     edx, 10h
		mov     [ecx+___1a33b8h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     [ecx+___1a33bch], eax
		cmp     esi, 100h
		jl      short ___45aedh
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
