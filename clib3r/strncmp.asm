cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global strncmp
strncmp:
		push    ecx
dr@7c4a8h:
		test    ebx, ebx
		jne     short dr@7c4b0h
dr@7c4ach:
		xor     eax, eax
		pop     ecx
		retn    
dr@7c4b0h:
		mov     cl, [eax]
		mov     ch, [edx]
		cmp     cl, ch
		je      short dr@7c4c6h
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, cl
		mov     al, ch
		sub     ebx, eax
		mov     eax, ebx
		pop     ecx
		retn    
dr@7c4c6h:
		cmp     byte [eax], 0
		je      short dr@7c4ach
		inc     eax
		inc     edx
		dec     ebx
		jmp     short dr@7c4a8h