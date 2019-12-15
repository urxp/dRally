cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCPY
	extern	___1a116ch
	extern	___1a1f4eh
	extern	___1a1f4dh
	extern	___19695ch
	extern	___1a1b62h
	extern	___1969a2h
	extern	___1a1bf8h
	extern	___1a1f5fh
	extern	___1969e8h
	extern	___1a1c8eh
	extern	___1a1f60h
	extern	___196a2eh
	extern	___1a1d24h
	extern	___1a1f61h
	extern	___1a1f62h

section .text

__GDECL(___3e03ch)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     edx, ___1a116ch
		add     edx, 96h
		xor     ebp, ebp
		mov     [esp], edx
___3e05fh:
		mov     ebx, ___1a116ch
		mov     ecx, [esp]
		xor     edx, edx
___3e069h:
		mov     esi, ecx
		mov     edi, ebx
		inc     edx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ecx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___3e069h
		inc     ebp
		cmp     ebp, byte 6
		jl      short ___3e05fh
		mov     esi, ___19695ch
		mov     edi, ___1a1b62h
		mov     dl, 1
		call 	__STRCPY
		mov     ah, 1
		mov     esi, ___1969a2h
		mov     edi, ___1a1bf8h
		mov     [___1a1f5fh], ah
		call 	__STRCPY
		mov     esi, ___1969e8h
		mov     edi, ___1a1c8eh
		mov     [___1a1f60h], dl
		call 	__STRCPY
		mov     esi, ___196a2eh
		mov     edi, ___1a1d24h
		mov     [___1a1f61h], dl
		call 	__STRCPY
		mov     [___1a1f62h], dl
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
