cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___196d8ch
	extern	___196d94h
	extern	___243c88h
	extern	___196dc8h
	extern	___1f44e4h
	extern	___1f44ech
	extern	___196dcch
	extern	___1f44e8h
	extern	___1f44f0h
	extern	___1f474ch
	extern	___19bd66h
	extern	___1f3e98h
	extern	___1f3e94h
	extern	___1f3ea0h
	extern	___1f3e9ch
	extern	___243c98h

section .text

__GDECL(___4f030h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     esi, [___196d8ch]
		mov     edi, [___196d94h]
		mov     edx, [___243c88h]
		xor     ecx, ecx
		test    edx, edx
		jle     near ___4f154h
		imul    ebp, edx, 0c50h
		mov     eax, edi
		shl     eax, 8
		mov     [esp+4], eax
		mov     eax, esi
		shl     eax, 8
		mov     [esp], eax
		xor     eax, eax
___4f078h:
		mov     ebx, [___196dc8h]
		mov     edx, [eax+___1f44e4h]
		sub     edx, ebx
		sub     edx, esi
		mov     [eax+___1f44ech], edx
		mov     ebx, [___196dcch]
		mov     edx, [eax+___1f44e8h]
		sub     edx, ebx
		sub     edx, edi
		mov     [eax+___1f44f0h], edx
		xor     edx, edx
		mov     [eax+___1f474ch], edx
		cmp     byte [___19bd66h], 30h
		je      near ___4f146h
		mov     edx, [esp]
		add     edx, [eax+___1f3e98h]
		mov     ebx, [eax+___1f44ech]
		shl     ebx, 8
		cmp     ebx, edx
		jle     short ___4f0d9h
		mov     dword [eax+___1f474ch], 1
___4f0d9h:
		mov     edx, esi
		neg     edx
		mov     ebx, [eax+___1f3e94h]
		shl     edx, 8
		add     edx, ebx
		mov     ebx, [eax+___1f44ech]
		shl     ebx, 8
		cmp     ebx, edx
		jge     short ___4f0ffh
		mov     dword [eax+___1f474ch], 1
___4f0ffh:
		mov     ebx, [esp+4]
		add     ebx, [eax+___1f3ea0h]
		mov     edx, [eax+___1f44f0h]
		shl     edx, 8
		cmp     edx, ebx
		jle     short ___4f120h
		mov     dword [eax+___1f474ch], 1
___4f120h:
		mov     edx, edi
		neg     edx
		mov     ebx, [eax+___1f3e9ch]
		shl     edx, 8
		add     edx, ebx
		mov     ebx, [eax+___1f44f0h]
		shl     ebx, 8
		cmp     ebx, edx
		jge     short ___4f146h
		mov     dword [eax+___1f474ch], 1
___4f146h:
		add     eax, 0c50h
		inc     ecx
		cmp     eax, ebp
		jl      near ___4f078h
___4f154h:
		mov     [___196d94h], edi
		mov     [___196d8ch], esi
		mov     [___243c98h], ecx
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
