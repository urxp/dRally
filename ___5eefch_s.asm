cpu 386
%include "macros.inc"

	extern	___24ccb0h
	extern	___58b20h
	extern	___24cc88h
	extern 	DPMI_UNLOCK_LINEAR_REGION
	extern 	DPMI_FREE_MEMORY_BLOCK
	extern 	DPMI_FREE_DOS_MEMORY_BLOCK

section .text

__GDECL(___5eefch)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub 	esp, 4
		mov     edx, eax
		mov     esi, [___24ccb0h]
		xor     ecx, ecx
		mov     ebx, [esi+1]
		mov     eax, esi
		cmp     edx, ebx
		je      short ___5ef27h
___5ef14h:
		cmp     ecx, 0e38h
		jae     short ___5ef27h
		mov     edi, [eax+13h]
		add     eax, byte 12h
		inc     ecx
		cmp     edx, edi
		jne     short ___5ef14h
___5ef27h:
		cmp     ecx, 0e38h
		je      short ___5ef3eh
		lea     eax, [ecx*8+0]
		add     eax, ecx
		cmp     byte [esi+eax*2], 0
		jne     short ___5ef48h
___5ef3eh:
		push    byte 0eh
		call    near ___58b20h
		add     esp, byte 4
___5ef48h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		lea     edi, [esi+eax*1]
		mov 	dword [esp], 1
		cmp     byte [edi+11h], 0
		je      short ___5efa9h
		mov 	eax, edi
		call 	DPMI_UNLOCK_LINEAR_REGION
		mov 	[esp], eax
		mov     byte [edi+11h], 0
___5efa9h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, esi
		mov     dl, [eax]
		cmp     dl, 1
		jb      short ___5f01eh
		jbe     short ___5efc6h
		cmp     dl, 2
		je      short ___5eff7h
		jmp     short ___5f01eh
___5efc6h:
		mov 	eax, [eax+9]
		call 	DPMI_FREE_MEMORY_BLOCK
		test 	eax, eax
		jne 	___5f031h 	
		push    byte 0eh
		call    near ___58b20h
		add     esp, byte 4
___5eff7h:
		mov     ax, [eax+0dh]
		call 	DPMI_FREE_DOS_MEMORY_BLOCK
		test 	eax, eax
		jne 	___5f031h
		push    byte 0eh
		call    near ___58b20h
		add     esp, byte 4
___5f01eh:
		mov 	eax, [esp]
		test 	eax, eax
		jne 	___5f031h
		push    byte 0eh
		call    near ___58b20h
		add     esp, byte 4
___5f031h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		mov     byte [esi+eax*2], 0
		add 	esp, 4
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
