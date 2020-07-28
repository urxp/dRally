cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___196ab8h
	extern	itoa_watcom106
	extern	___13248h
	extern	___1a1160h
	extern	___196abch
	extern	___18d5a0h
	extern	___13094h_cdecl
	extern	___18e0e0h
	extern	___18e108h
	extern	___18e130h
	extern	___18e158h
	extern	___18e180h
	extern	___18e1a8h
	extern	___18e1d0h
	extern	___18e1f8h
	extern	___18233ch

section .text

__GDECL(___2fca4h)
		push    80h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 64h
		mov     ebx, 0ah
		lea     edx, [esp+50h]
		mov     eax, [___196ab8h]
		mov     ecx, 6dh

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		push    byte 1
		mov     ebx, 12ch
		mov     edx, 72h
		mov     eax, 0d0h
		call    near ___13248h
		mov     edx, [___1a1160h]
		cmp     edx, byte 12h
		jge     near ___2fda0h
		mov     eax, edx
		xor     edx, edx
		mov     dl, [eax+___196abch]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 5
		mov     edx, 136dah
		add     eax, ___18d5a0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1160h]
		mov     dl, [edx+___196abch]
		and     edx, 0ffh
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 5
		add     eax, ___18d5a0h
		mov     edx, 15edah
		add     eax, byte 28h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1160h]
		mov     dl, [edx+___196abch]
		and     edx, 0ffh
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 5
		add     eax, ___18d5a0h
		mov     edx, 186dah
		add     eax, byte 50h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     eax, [___1a1160h]
		xor     edx, edx
		mov     dl, [eax+___196abch]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 5
		add     eax, ___18d5a0h
		mov     edx, 1aedah
		add     eax, byte 78h
		jmp     ___2fe12h
___2fda0h:
		jne     short ___2fddbh
		mov     edx, 136dah
		mov     eax, ___18e0e0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 15edah
		mov     eax, ___18e108h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 186dah
		mov     eax, ___18e130h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1aedah
		mov     eax, ___18e158h
		jmp     short ___2fe12h
___2fddbh:
		mov     edx, 136dah
		mov     eax, ___18e180h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 15edah
		mov     eax, ___18e1a8h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 186dah
		mov     eax, ___18e1d0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1aedah
		mov     eax, ___18e1f8h
___2fe12h:

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     ecx, 6
		mov     edi, esp
		mov     esi, ___18233ch
		rep movsd   
		movsb   
		lea     esi, [esp+50h]
		mov     edi, esp
		mov     edx, 1d6dah
		call 	__STRCAT
		mov     eax, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		add     esp, byte 64h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
