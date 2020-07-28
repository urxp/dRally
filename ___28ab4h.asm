cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a1ef8h
	extern	___1a0210h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	memset
	extern	___181f64h
	extern	itoa_watcom106
	extern	___181f78h
	extern	___181f84h
	extern	___13094h_cdecl
	extern	___181fa4h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___1854a4h
	extern	___24cc54h
	extern	dRally_Sound_pushEffect
	extern	___185a38h

section .text

__GDECL(___28ab4h_cdecl)
	mov 	eax, [esp+4]
	call 	___28ab4h
	retn

__GDECL(___28ab4h)
		push    54h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 34h
		mov     esi, eax
		mov     ecx, [___1a1ef8h]
		lea     eax, [ecx*8+0]
		sub     eax, ecx
		shl     eax, 2
		sub     eax, ecx
		cmp     esi, [eax*4+___1a0210h]
		jle     near ___28c0fh
		mov     ecx, 15e00h
		mov     edi, 15bh
___28af3h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 0c4h
		add     eax, ecx
		mov     ebx, edi
		add     eax, 0aah
		add     ecx, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     ecx, 22600h
		jne     short ___28af3h
		mov     ecx, [___1a1ef8h]
		lea     eax, [ecx*8+0]
		sub     eax, ecx
		shl     eax, 2
		sub     eax, ecx
		lea     edx, [esp+20h]
		mov     ebx, [eax*4+___1a0210h]
		mov     eax, esi
		mov     edi, esp
		sub     eax, ebx
		mov     ebx, 0ah
		mov     esi, ___181f64h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		lea     esi, [esp+20h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___181f78h
		mov     edi, esp
		mov     edx, 186aah
		call 	__STRCAT
		mov     eax, ___181f84h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1aeaah
		mov     eax, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1d6aah
		mov     eax, ___181fa4h
		xor     ebx, ebx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		push    8000h
		mov     edx, 17h
		mov     ecx, [___1854a4h]
		mov     eax, 2
		push    ecx
		mov     ecx, [___24cc54h]
		mov     esi, 136h
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		mov     eax, 1
		mov     [___185a38h], esi
		add     esp, byte 34h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___28c0fh:
		xor     eax, eax
		add     esp, byte 34h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
