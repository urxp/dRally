cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___183358h
	extern	___1a54d0h
	extern	___1831f4h
	extern	bpa_read_cdecl
	extern	___243d4ch
	extern	bpk_decode2
	extern	___183364h
	extern	___1830c4h
	extern	___243d48h

section .text

__GDECL(___43e20h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ebx, ___183358h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edx, [___243d4ch]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___183364h
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebx, [___243d48h]
		push    ebx
		call    near bpk_decode2
		pop     edx
		pop     ecx
		pop     ebx
		retn    
