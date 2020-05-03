cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___2438c4h
	extern	___243d08h
	extern	___1e8448h
	extern	___196dc8h
	extern	___1de920h
	extern	___243c6ch
	extern	___1e8048h
	extern	___1e7c48h
	extern	___1ded20h
	extern	___243c68h
	extern	___196dcch
	extern	___243c64h
	extern	___243c78h
	extern	___243c70h
	extern	___196d8ch
	extern	___243c74h
	extern	___196d94h
	extern	___196d98h
	extern	___240a48h
	extern	___5e769h

section .text

__GDECL(___4f170h)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		xor     edx, edx
		mov     ebx, [___2438c4h]
		mov     [___243d08h], edx
		test    ebx, ebx
		jle     near ___4f2f9h
___4f195h:
		mov     eax, [___243d08h]
		mov     edx, [eax*4+___1e8448h]
		mov     edi, [___196dc8h]
		mov     ebx, [edx*4+___1de920h]
		sub     ebx, edi
		mov     [___243c6ch], ebx
		mov     ebx, [eax*4+___1e8048h]
		mov     ecx, [ebx*4+___1de920h]
		mov     eax, [eax*4+___1e7c48h]
		sub     ecx, edi
		mov     edx, [edx*4+___1ded20h]
		mov     [___243c68h], ecx
		mov     ecx, [eax*4+___1de920h]
		mov     eax, [eax*4+___1ded20h]
		sub     ecx, edi
		mov     edi, [___196dcch]
		mov     [___243c64h], ecx
		sub     edx, edi
		sub     eax, edi
		mov     [___243c78h], edx
		mov     [___243c70h], eax
		mov     eax, [___243c6ch]
		mov     edx, [ebx*4+___1ded20h]
		mov     ebx, [___196d8ch]
		sub     edx, edi
		sub     eax, ebx
		mov     [___243c74h], edx
		cdq     
		xor     eax, edx
		sub     eax, edx
		mov     ecx, [___196d8ch]
		cmp     eax, ecx
		jl      short ___4f25eh
		mov     eax, [___243c68h]
		sub     eax, ecx
		cdq     
		xor     eax, edx
		sub     eax, edx
		mov     edi, [___196d8ch]
		cmp     eax, edi
		jl      short ___4f25eh
		mov     eax, [___243c64h]
		sub     eax, edi
		cdq     
		xor     eax, edx
		sub     eax, edx
		cmp     eax, [___196d8ch]
		jge     near ___4f2deh
___4f25eh:
		mov     eax, [___243c78h]
		sub     eax, [___196d94h]
		cdq     
		xor     eax, edx
		sub     eax, edx
		mov     ecx, [___196d94h]
		cmp     eax, ecx
		jl      short ___4f2a2h
		mov     eax, [___243c74h]
		sub     eax, ecx
		cdq     
		xor     eax, edx
		sub     eax, edx
		mov     edi, [___196d94h]
		cmp     eax, edi
		jl      short ___4f2a2h
		mov     eax, [___243c70h]
		sub     eax, edi
		cdq     
		xor     eax, edx
		sub     eax, edx
		cmp     eax, [___196d94h]
		jge     short ___4f2deh
___4f2a2h:
		mov     eax, [___243c6ch]
		mov     ebx, [___196d98h]
		add     eax, ebx
		push    eax
		mov     ecx, [___243c78h]
		mov     eax, [___243c68h]
		push    ecx
		add     eax, ebx
		push    eax
		mov     edi, [___243c74h]
		mov     eax, [___243c64h]
		push    edi
		add     eax, ebx
		push    eax
		mov     eax, [___243c70h]
		push    eax
		push    ___240a48h
		call    near ___5e769h
	add 	esp, 1ch
___4f2deh:
		mov     ecx, [___243d08h]
		inc     ecx
		mov     esi, [___2438c4h]
		mov     [___243d08h], ecx
		cmp     ecx, esi
		jl      near ___4f195h
___4f2f9h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
