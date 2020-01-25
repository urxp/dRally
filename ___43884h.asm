cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___243d08h
	extern	___19bd64h
	extern	___18323ch
	extern	___242578h
	extern	___243dd0h
	extern	bpa_read_cdecl
	extern	___242978h
	extern	___241d74h
	extern	___183248h
	extern	___242178h

section .text

__GDECL(___43884h)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     ebp, [___243d08h]
		mov     esi, ___19bd64h
		mov     edi, esp
		mov     ebx, esp
		call 	__STRCPY
		mov     esi, ___18323ch
		mov     edi, esp
		mov     edx, ___242578h
		call 	__STRCAT
		mov     eax, ___243dd0h
		xor     ebp, ebp
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

___438fah:
		mov     edx, ebp
		inc     ebp
		mov     eax, [edx*4+___242978h]
		mov     [ebp*4+___241d74h], eax
		cmp     ebp, 100h
		jl      short ___438fah
		mov     esi, ___19bd64h
		mov     edi, esp
		mov     ebx, esp
		mov     [___243d08h], ebp
		call 	__STRCPY
		mov     esi, ___183248h
		mov     edi, esp
		mov     edx, ___242178h
		call 	__STRCAT
		mov     eax, ___243dd0h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		mov     ebp, [___243d08h]
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
