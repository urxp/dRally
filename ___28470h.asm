cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___2ab50h
	extern	___1a1ee4h
	extern	___185cbch
	extern	___1a01b8h
	extern	___1a1ed0h
	extern	___259e0h

section .text

__GDECL(___28470h)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     ebx, [___1a1ee4h]
		mov     edx, 8dh
		shl     ebx, 8
		mov     ecx, [___1a1ee4h]
		add     ebx, ___185cbch
		mov     eax, 10h
		push    ebx
		mov     ecx, [ecx*4+___1a01b8h]
		mov     ebx, [___1a1ed0h]
		call    near ___259e0h
		mov     edx, [___1a1ed0h]
		inc     edx
		mov     [___1a1ed0h], edx
		cmp     edx, byte 3fh
		jle     short ___284d6h
		xor     ecx, ecx
		mov     [___1a1ed0h], ecx
___284d6h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     ebx, [___1a1ee4h]
		mov     edx, 8dh
		shl     ebx, 8
		mov     ecx, [___1a1ee4h]
		add     ebx, ___185cbch
		mov     eax, 10h
		push    ebx
		mov     ecx, [ecx*4+___1a01b8h]
		mov     ebx, [___1a1ed0h]
		call    near ___259e0h
		mov     esi, [___1a1ed0h]
		inc     esi
		mov     [___1a1ed0h], esi
		cmp     esi, byte 3fh
		jle     short ___2852ch
		xor     ebp, ebp
		mov     [___1a1ed0h], ebp
___2852ch:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     ebx, [___1a1ee4h]
		mov     edx, 8dh
		shl     ebx, 8
		mov     ecx, [___1a1ee4h]
		add     ebx, ___185cbch
		mov     eax, 10h
		push    ebx
		mov     ecx, [ecx*4+___1a01b8h]
		mov     ebx, [___1a1ed0h]
		call    near ___259e0h
		mov     eax, [___1a1ed0h]
		inc     eax
		mov     [___1a1ed0h], eax
		cmp     eax, byte 3fh
		jle     short ___28580h
		xor     ebx, ebx
		mov     [___1a1ed0h], ebx
___28580h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     ebx, [___1a1ee4h]
		mov     edx, 8dh
		shl     ebx, 8
		mov     ecx, [___1a1ee4h]
		add     ebx, ___185cbch
		mov     eax, 10h
		push    ebx
		mov     ecx, [ecx*4+___1a01b8h]
		mov     ebx, [___1a1ed0h]
		call    near ___259e0h
		mov     ecx, [___1a1ed0h]
		inc     ecx
		mov     [___1a1ed0h], ecx
		cmp     ecx, byte 3fh
		jle     short ___285d6h
		xor     edi, edi
		mov     [___1a1ed0h], edi
___285d6h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
