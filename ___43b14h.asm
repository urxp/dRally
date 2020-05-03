cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___183260h
	extern	___1a54d0h
	extern	___1831f4h
	extern	bpa_read
	extern	___243d8ch
	extern	bpk_decode2
	extern	___18326ch
	extern	___243d7ch
	extern	___183278h
	extern	___243298h
	extern	___183284h
	extern	___24329ch
	extern	___183290h
	extern	___2432a0h
	extern	___18329ch
	extern	___2432a4h
	extern	___1832a8h
	extern	___2432a8h
	extern	___1832b4h
	extern	___2432ach
	extern	___1832c0h
	extern	___243d88h
	extern	___196dach
	extern	___1832cch
	extern	___1832dch
	extern	___243d38h
	extern	___1832ech
	extern	___243d40h
	extern	___1832f8h
	extern	___243288h
	extern	___183304h
	extern	___24328ch
	extern	___183310h
	extern	___243290h
	extern	___18331ch
	extern	___243294h
	extern	___183328h
	extern	___243d68h
	extern	___183334h
	extern	___243d64h

section .text

__GDECL(___43b14h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebx, ___183260h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edx, [___243d8ch]
		push    edx
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___18326ch
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebx, [___243d7ch]
		push    ebx
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___183278h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ecx, [___243298h]
		push    ecx
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___183284h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     esi, [___24329ch]
		push    esi
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___183290h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edi, [___2432a0h]
		push    edi
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___18329ch
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebp, [___2432a4h]
		push    ebp
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___1832a8h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     eax, [___2432a8h]
		push    eax
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___1832b4h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edx, [___2432ach]
		push    edx
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___1832c0h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebx, [___243d88h]
		push    ebx
		call 	bpk_decode2
		add 	esp, 8
		cmp     dword [___196dach], byte 0
		je      short ___43c80h
		mov     ebx, ___1832cch
		jmp     short ___43c85h
___43c80h:
		mov     ebx, ___1832dch
___43c85h:
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     esi, [___243d38h]
		push    esi
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___1832ech
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edi, [___243d40h]
		push    edi
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___1832f8h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebp, [___243288h]
		push    ebp
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___183304h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     eax, [___24328ch]
		push    eax
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___183310h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edx, [___243290h]
		push    edx
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___18331ch
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebx, [___243294h]
		push    ebx
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___183328h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ecx, [___243d68h]
		push    ecx
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___183334h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     esi, [___243d64h]
		push    esi
		call 	bpk_decode2
		add 	esp, 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
