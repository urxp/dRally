cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___19bd64h
	extern	___18320ch
	extern	___243078h
	extern	___243dd0h
	extern	bpa_read
	extern	___183218h
	extern	___242d78h
	extern	___183224h
	extern	___241c78h
	extern	___183230h
	extern	___240a48h
	extern	___1831f4h

section .text

__GDECL(___43744h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 10h
		mov     esi, ___19bd64h
		mov     edi, esp
		mov     ebx, esp
		call 	__STRCPY
		mov     esi, ___18320ch
		mov     edi, esp
		mov     edx, ___243078h
		call 	__STRCAT
		mov     eax, ___243dd0h
		mov     esi, ___19bd64h
		mov     edi, esp
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCPY
		mov     esi, ___183218h
		mov     edi, esp
		mov     ebx, esp
		mov     edx, ___242d78h
		call 	__STRCAT
		mov     eax, ___243dd0h
		mov     esi, ___19bd64h
		mov     edi, esp
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCPY
		mov     esi, ___183224h
		mov     edi, esp
		mov     ebx, esp
		mov     edx, ___241c78h
		call 	__STRCAT
		mov     eax, ___243dd0h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, ___183230h
		mov     edx, ___240a48h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		add     esp, byte 10h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
