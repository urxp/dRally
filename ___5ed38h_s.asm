cpu 386
%include "macros.inc"

	extern	___24ccb0h
	extern	___58b20h
	extern	___24cc88h
	extern 	DPMI_ALLOCATE_MEMORY_BLOCK
	extern 	DPMI_ALLOCATE_DOS_MEMORY_BLOCK
	extern 	DPMI_LOCK_LINEAR_REGION

section .text

__GDECL(___5ed38h)
		push    ebx
		push    ecx
		push    esi
		push    edi
		sub     esp, byte 4
		mov     esi, eax
		mov     [esp], dl
		mov     edi, [___24ccb0h]
		xor     ecx, ecx
		mov     dl, [edi]
		mov     eax, edi
		test    dl, dl
		je      short ___5ed67h
___5ed54h:
		cmp     ecx, 0e38h
		jae     short ___5ed67h
		mov     dh, [eax+12h]
		add     eax, byte 12h
		inc     ecx
		test    dh, dh
		jne     short ___5ed54h
___5ed67h:
		cmp     ecx, 0e38h
		jne     short ___5ed79h
		push    byte 0dh
		call    near ___58b20h
		add     esp, byte 4
___5ed79h:
		cmp     esi, 100000h
		jb      short ___5ed87h
		or      si, 0fffh
		inc     esi
___5ed87h:
		mov 	eax, esi
		call 	DPMI_ALLOCATE_MEMORY_BLOCK
		cmp 	eax, 0
		je		___5ee09h
		mov 	edx, eax
		mov 	bx, __SI(___24cc88h)
		shl 	ebx, 10h
		mov 	bx, __DI(___24cc88h)
		lea     eax, [ecx*8+0]
		add     eax, ecx
		mov     [edi+eax*2+9], ebx
		mov     byte [edi+eax*2], 1
		mov     [edi+eax*2+1], edx
		jmp     ___5ee7ah
___5ee09h:
		mov 	eax, esi
		call 	DPMI_ALLOCATE_DOS_MEMORY_BLOCK
		test	eax, eax
		jne      ___5ee45h
		push    byte 0dh
		call    near ___58b20h
		add     esp, byte 4
___5ee45h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		mov     dx, __AX(___24cc88h)
		mov     [edi+eax*2+0fh], dx
		xor     edx, edx
		mov     edx, __EAX(___24cc88h)
		shl     edx, 4
		mov     [edi+eax*2+1], edx
		mov     dx, __DX(___24cc88h)
		mov     byte [edi+eax*2], 2
		mov     [edi+eax*2+0dh], dx
___5ee7ah:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, edi
		mov     bl, [esp]
		mov     [eax+5], esi
		test    bl, bl
		je      short ___5eeddh
		call 	DPMI_LOCK_LINEAR_REGION
___5eeddh:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     edi, eax
		mov     al, [esp]
		mov     [edi+11h], al
		mov     eax, [edi+1]
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
