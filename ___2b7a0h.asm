cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___18687ah
	extern	___1807ech
	extern	___185b59h
	extern	___185b62h
	extern	___185b63h
	extern	___185b65h
	extern	___1866b8h
	extern	___180814h
	extern	___185a48h
	extern	___185a44h
	extern	___185a40h
	extern	___185a3ch
	extern	___2415ch
	extern	___185a90h
	extern	___243d44h

section .text

__GDECL(___2b7a0h)
		push    14h
		call    near __CHK
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ah, 1
		mov     ebp, 1
		mov     edi, ___18687ah
		mov     esi, ___1807ech
		xor     dl, dl
		mov     [___185b59h], ah
		mov     [___185b62h], dl
		mov     [___185b63h], dl
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		mov     [___185b65h], dl
		mov     edi, ___1866b8h
		xor     edx, edx
		mov     esi, ___180814h
		mov     [___185a48h], edx
		mov     [___185a44h], edx
		mov     [___185a40h], edx
		mov     [___185a3ch], edx
		movsd   
		movsd   
		movsd   
		movsb   

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     [___185a90h], edx
		mov     [___243d44h], ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		retn    
