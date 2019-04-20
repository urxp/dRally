cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global strcmpi
strcmpi:
global _stricmp
_stricmp:
global stricmp
stricmp:
global stricmp_
stricmp_:
		push    ebx
		push    ecx
		mov     ebx, eax
dr@5ea58h:
		mov     al, [ebx]
		xor     ecx, ecx
		mov     ah, [edx]
		mov     cl, al
		cmp     ecx, byte 41h
		jl      short dr@5ea6ch
		cmp     ecx, byte 5ah
		jg      short dr@5ea6ch
		add     al, 20h
dr@5ea6ch:
		xor     ecx, ecx
		mov     cl, ah
		cmp     ecx, byte 41h
		jl      short dr@5ea7dh
		cmp     ecx, byte 5ah
		jg      short dr@5ea7dh
		add     ah, 20h
dr@5ea7dh:
		cmp     al, ah
		jne     short dr@5ea89h
		test    ah, ah
		je      short dr@5ea89h
		inc     ebx
		inc     edx
		jmp     short dr@5ea58h
dr@5ea89h:
		xor     edx, edx
		mov     dl, al
		mov     al, ah
		and     eax, 0ffh
		sub     edx, eax
		mov     eax, edx
		pop     ecx
		pop     ebx
		retn