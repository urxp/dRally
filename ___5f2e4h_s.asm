cpu 386
%include "macros.inc"

	extern	___24cc88h
	extern	___58b20h
	extern 	DPMI_ALLOCATE_MEMORY_BLOCK
	extern 	DPMI_LOCK_LINEAR_REGION

section .text

__GDECL(___5f2e4h)
		push    ecx
		push    esi
		push    edi
		sub     esp, byte 4
		mov     ecx, eax
		mov     esi, edx
		mov     [esp], bl
		cmp     edx, 100000h
		jb      short ___5f2ffh
		or      si, 0fffh
		inc     esi
___5f2ffh:
		mov 	eax, esi
		call 	DPMI_ALLOCATE_MEMORY_BLOCK
		cmp 	eax, 0
		jne 	___5f341h
		push    byte 4
		call    near ___58b20h
		add     esp, byte 4
___5f341h:
		mov 	edx, eax
		mov 	bx, __SI(___24cc88h)
		shl 	ebx, 10h
		mov 	bx, __DI(___24cc88h)
		mov     [ecx+8], ebx
		mov     [ecx+4], esi
		mov     [ecx], edx
		mov     al, [esp]
		mov     [ecx+0eh], al
		test    al, al
		je      short ___5f4a4h
		lea 	eax, [ecx-1]
		call 	DPMI_LOCK_LINEAR_REGION
___5f4a4h:
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     ecx
		retn    
