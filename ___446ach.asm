cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___24331ch
	extern	___24cee0h
	extern	___243d9dh
	extern	___196e60h

section .text

__GDECL(___446ach)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    ebp
		mov     ebp, [___24331ch]
		mov     ebx, [ebp*4+___24cee0h]
		xor     eax, eax
___446cah:
		xor     ecx, ecx
		mov     cx, [ebx+2]
		add     ecx, eax
		and     ecx, 0fffh
		inc     eax
		mov     dl, [ecx+ebx*1+4]
		mov     [eax+___243d9dh], dl
		cmp     eax, byte 13h
		jl      short ___446cah
		xor     eax, eax
___446eah:
		mov     ebx, [ebp*4+___24cee0h]
		mov     dx, [ebx+2]
		mov     esi, edx
		and     esi, 0fffh
		inc     edx
		mov     [ebx+2], dx
		and     esi, 0ffffh
		mov     ebx, [ebp*4+___24cee0h]
		inc     eax
		mov     byte [esi+ebx*1+4], 0
		cmp     eax, byte 13h
		jl      short ___446eah
		mov     dword [___196e60h], 1
		mov     [___24331ch], ebp
		pop     ebp
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
