cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___180144h
	extern	bpa_read_cdecl
	extern	___19eb44h
	extern	___19eb48h
	extern	___19eb4ch

section .text

__GDECL(___3d154h)
		push    31ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 300h
		mov     edx, esp
		mov     ebx, eax
		xor     esi, esi
		mov     eax, ___180144h
		xor     ecx, ecx
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		mov     ebp, 640000h
___3d181h:
		lea     edi, [esi+esi*2]
		xor     edx, edx
		mov     dl, [esp+edi*1]
		mov     ebx, ebp
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		xor     edx, edx
		add     ecx, byte 0ch
		mov     dl, [esp+edi*1+1]
		mov     ebx, ebp
		shl     edx, 10h
		mov     [ecx+___19eb44h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		xor     edx, edx
		inc     esi
		mov     dl, [esp+edi*1+2]
		mov     ebx, ebp
		shl     edx, 10h
		mov     [ecx+___19eb48h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     [ecx+___19eb4ch], eax
		cmp     esi, 100h
		jl      short ___3d181h
		add     esp, 300h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
