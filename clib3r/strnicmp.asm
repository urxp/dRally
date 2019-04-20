cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _strnicmp
_strnicmp:
global strnicmp
strnicmp:
		push    ecx
		push    esi
		mov     ecx, eax
		mov     esi, ebx
dr@66f3eh:
		test    esi, esi
		jne     short dr@66f47h
dr@66f42h:
		xor     eax, eax
		pop     esi
		pop     ecx
		retn    
dr@66f47h:
		mov     al, [ecx]
		xor     ebx, ebx
		mov     ah, [edx]
		mov     bl, al
		cmp     ebx, byte 41h
		jl      short dr@66f5bh
		cmp     ebx, byte 5ah
		jg      short dr@66f5bh
		add     al, 20h
dr@66f5bh:
		xor     ebx, ebx
		mov     bl, ah
		cmp     ebx, byte 41h
		jl      short dr@66f6ch
		cmp     ebx, byte 5ah
		jg      short dr@66f6ch
		add     ah, 20h
dr@66f6ch:
		cmp     al, ah
		je      short dr@66f82h
		xor     edx, edx
		mov     dl, al
		mov     al, ah
		and     eax, 0ffh
		sub     edx, eax
		mov     eax, edx
		pop     esi
		pop     ecx
		retn    
dr@66f82h:
		test    ah, ah
		je      short dr@66f42h
		inc     ecx
		inc     edx
		dec     esi
		jmp     short dr@66f3eh