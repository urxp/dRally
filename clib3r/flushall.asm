%include "macros.inc"

    extern  ___OpenStreams
    extern  __flush__clib3r

%include "layout.inc"

section @text


__GDECL(flushall)
		mov     eax, 0ffffffffh
__GDECL(__flushall)
		push    ebx
		push    ecx
		push    edx
		mov     ecx, eax
		mov     edx, [___OpenStreams]
		xor     ebx, ebx
		jmp     ___6bdd3h
___6bdbdh:
		mov     eax, [edx+4]
		test    [eax+0ch], ecx
		je      ___6bdd1h
		inc     ebx
		test    byte [eax+0dh], 10h
		je      ___6bdd1h
		call    __flush__clib3r
___6bdd1h:
		mov     edx, [edx]
___6bdd3h:
		test    edx, edx
		jne     ___6bdbdh
		mov     eax, ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
