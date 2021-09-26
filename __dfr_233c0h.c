#include "drally.h"

void ___233c0h(void){

/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a116ch
	extern	___1a1f4eh
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___1a10fch
	extern	___1a110ch

section .text

__GDECL(___233c0h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, 12c00h
___233d5h:
		mov     eax, [___1a1138h__VESA101h_DefaultScreenBufferB]
		add     eax, ebp
		lea     esi, [eax+0ch]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebp
		mov     ecx, 276h
		lea     edi, [eax+0ch]
		add     ebp, 280h
		call 	__MOVS
		cmp     ebp, 46a00h
		jne     short ___233d5h
		mov     edi, ___1a116ch
		mov     esi, 1298ch
		xor     ebp, ebp
___23418h:
		cmp     byte [ebp+___1a1f4eh], 0
		jne     short ___23434h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		mov     ecx, esi
		mov     ebx, edi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___23434h:
		cmp     byte [ebp+___1a1f4eh], 1
		jne     short ___23450h
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]
		mov     ecx, esi
		mov     ebx, edi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___23450h:
		cmp     byte [ebp+___1a1f4eh], 2
		jne     short ___2346ch
		mov     edx, ___185c0bh
		mov     eax, [___1a110ch]
		mov     ecx, esi
		mov     ebx, edi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___2346ch:
		add     esi, 2580h
		inc     ebp
		add     edi, 96h
		cmp     ebp, byte 16h
		jl      short ___23418h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
*/
}
