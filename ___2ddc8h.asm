cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e70h
	extern	___13248h
	extern	___194e90h
	extern	___13094h
	extern	___194eb8h
	extern	___194ee0h
	extern	___194f08h
	extern	___194f30h
	extern	___194f58h
	extern	___1865fch
	extern	___1a1ea0h
	extern	___1a1ee8h
	extern	___259e0h
	
section .text

__GDECL(___2ddc8h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e70h]
		add     ebx, 27a30h
		mov     edx, ecx
		shr     dl, 2
___2ddf2h:
		mov     ch, dl
___2ddf4h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2ddf4h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2ddf2h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     edx, 136aah
		mov     eax, ___194e90h
		call    near ___13094h
		mov     edx, 15eaah
		mov     eax, ___194eb8h
		call    near ___13094h
		mov     edx, 186aah
		mov     eax, ___194ee0h
		call    near ___13094h
		mov     edx, 1aeaah
		mov     eax, ___194f08h
		call    near ___13094h
		mov     edx, 1d6aah
		mov     eax, ___194f30h
		call    near ___13094h
		mov     edx, 1feaah
		mov     eax, ___194f58h
		call    near ___13094h
		push    ___1865fch
		mov     edx, 10dh
		mov     eax, 1b0h
		mov     ecx, [___1a1ea0h]
		mov     ebx, [___1a1ee8h]
		call    near ___259e0h
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
