cpu 386
%include "macros.inc"

	extern	bpk_decode4_cdecl

section .text

__GDECL(bpk_decode2)
		push	edx
		push	ecx
		push	eax
		push 	dword [esp+14h]
		push 	dword [esp+14h]
		push 	0
		push 	0
		call 	bpk_decode4_cdecl
		add 	esp, 10h
		pop		eax
		pop		ecx
		pop		edx
		retn 	8

__GDECL(bpk_decode4)
		push	edx
		push	ecx
		push	eax
		push 	dword [esp+1ch]
		push 	dword [esp+1ch]
		push 	dword [esp+1ch]
		push 	dword [esp+1ch]
		call 	bpk_decode4_cdecl
		add 	esp, 10h
		pop		eax
		pop		ecx
		pop		edx
		retn 	10h
