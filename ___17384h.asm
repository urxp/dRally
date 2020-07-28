cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___2ab50h
	extern 	___196ae0h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	memset
	extern 	___185ba9h
	extern 	___1a10e0h
	extern 	___18072ch
	extern 	___12e78h_cdecl
	extern 	___1398ch__VESA101_PRESENTRECTANGLE
	extern 	___196ae4h
	extern 	___185cbch
	extern 	___1a01b8h
	extern 	___1a1ed0h
	extern 	___259e0h

section .text

__GDECL(___17384h)
		push    1ch
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     edi, eax
		mov     [esp+4], edx
		mov     esi, ebx
		mov     [esp], ecx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     edx, [___196ae0h]
		inc     edx
		mov     [___196ae0h], edx
		cmp     edx, byte 0ah
		jle     short ___173f7h
		mov     edx, [esp+4]
		add     edx, byte 2
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ecx, eax
		lea     ebp, [eax+4b00h]
___173d1h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ecx
		mov     ebx, 14h
		add     eax, edi
		mov     edx, 0c4h
		add     eax, esi
		add     ecx, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     ecx, ebp
		je      short ___17420h
		jmp     short ___173d1h
___173f7h:
		mov     edx, [esp+4]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     ecx, [eax+edi*1]
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
		add     ecx, ebx
		mov     ebx, ___18072ch

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___17420h:
		cmp     dword [___196ae0h], byte 14h
		jle     short ___17431h
		xor     ebp, ebp
		mov     [___196ae0h], ebp
___17431h:
		mov     ecx, [esp+4]
		lea     eax, [ecx*4+0]
		add     eax, ecx
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		mov     ebx, 14h
		add     edx, eax
		mov     ecx, 20h
		add     edx, edi
		add     eax, edi
		add     edx, esi
		add     eax, esi

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		cmp     dword [___196ae4h], byte 0
		jne     near ___174fdh
		cmp     dword [esp], byte 0
		je      short ___174eah
		push    ___185cbch
		mov     esi, [esp+20h]
		mov     eax, [esp+1ch]
		mov     ecx, [___1a01b8h]
		mov     ebx, [___1a1ed0h]
		add     esi, byte 50h
		add     eax, 1a0h
		mov     edx, esi
		call    near ___259e0h
		lea     eax, [esi*4+0]
		add     eax, esi
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		mov     ecx, [esp+18h]
		add     edx, eax
		mov     ebx, 60h
		add     edx, ecx
		add     eax, ecx
		mov     ecx, 40h
		add     edx, 1a0h
		add     eax, 1a0h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     edi, [___1a1ed0h]
		inc     edi
		mov     [___1a1ed0h], edi
		cmp     edi, byte 3fh
		jle     short ___174eah
		xor     eax, eax
		mov     [___1a1ed0h], eax
___174eah:
		mov     dword [___196ae4h], 1
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		ret     8
___174fdh:
		xor     edx, edx
		mov     [___196ae4h], edx
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		ret     8
