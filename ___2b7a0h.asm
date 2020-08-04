cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1866b8h
	extern	___1807ech
	extern	___185b58h
	extern	___1866b8h
	extern	___180814h
	extern	___185a48h
	extern	___185a44h
	extern	___185a40h
	extern	___185a3ch
	extern	___2415ch
	extern	___185a5ch
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
		mov     edi, ___1866b8h+1c2h
		mov     esi, ___1807ech
		xor     dl, dl
		mov     [___185b58h+1], ah
		mov     [___185b58h+0ah], dl
		mov     [___185b58h+0bh], dl
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		mov     [___185b58h+0dh], dl
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

		mov     [___185a5ch+34h], edx
		mov     [___243d44h], ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		retn    
