cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___13248h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1e74h
	extern 	___18d172h
	extern 	___13094h_cdecl
	extern 	___18d1c2h
	extern 	___18d212h
	extern 	___18d262h
	extern 	___18d2b2h
	extern 	___18d302h
	extern 	___18d352h
	extern 	___18d3a2h
	extern 	___18d3f2h
	extern 	___18d442h
	extern 	___180694h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h_cdecl
	extern 	kmap
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___17324h

section .text

__GDECL(___1678ch)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    byte 1
		mov     ecx, 0e6h
		mov     ebx, 1f1h
		mov     edx, 83h
		mov     eax, 21h
		call    near ___13248h
		mov     ecx, 80h
		mov     edx, 68h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e74h]
		add     ebx, 1a42dh
___167d2h:
		mov     edi, edx
___167d4h:
		mov     al, [esi]
		or      al, al
		je      short ___167dch
		mov     [ebx], al
___167dch:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___167d4h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___167d2h
		mov     edx, 154a1h
		mov     eax, ___18d172h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 17ca1h
		mov     eax, ___18d1c2h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1a4a1h
		mov     eax, ___18d212h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1cca1h
		mov     eax, ___18d262h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1f4a1h
		mov     eax, ___18d2b2h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 21ca1h
		mov     eax, ___18d302h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 244a1h
		mov     eax, ___18d352h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 26ca1h
		mov     eax, ___18d3a2h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 294a1h
		mov     eax, ___18d3f2h
		mov     ecx, 316c0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 2bca1h
		mov     eax, ___18d442h
		mov     ebx, ___180694h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		xor     ah, ah
		mov     [kmap+1ch], ah

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
