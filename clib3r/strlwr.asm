cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _strlwr
_strlwr:
global strlwr
strlwr:
		push    ebx
		push    ecx
		push    edx
		mov     ecx, eax
		mov     edx, eax
dr@66365h:
		mov     al, [edx]
		test    al, al
		je      short dr@6637dh
		sub     al, 41h
		xor     ebx, ebx
		mov     bl, al
		cmp     ebx, byte 19h
		jg      short dr@6637ah
		add     al, 61h
		mov     [edx], al
dr@6637ah:
		inc     edx
		jmp     short dr@66365h
dr@6637dh:
		mov     eax, ecx
		pop     edx
		pop     ecx
		pop     ebx
		retn 