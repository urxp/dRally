cpu 386

	extern	___OpenStreams
	extern	__flush

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global flushall
flushall:
		mov     eax, 0ffffffffh
global __flushall
__flushall:
		push    ebx
		push    ecx
		push    edx
		mov     ecx, eax
		mov     edx, [___OpenStreams]
		xor     ebx, ebx
		jmp     short dr@6bdd3h
dr@6bdbdh:
		mov     eax, [edx+4]
		test    [eax+0ch], ecx
		je      short dr@6bdd1h
		inc     ebx
		test    byte [eax+0dh], 10h
		je      short dr@6bdd1h
		call    near __flush
dr@6bdd1h:
		mov     edx, [edx]
dr@6bdd3h:
		test    edx, edx
		jne     short dr@6bdbdh
		mov     eax, ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn