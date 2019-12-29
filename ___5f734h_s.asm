cpu 386
%include "macros.inc"

	extern	___24cc88h
	extern	___58b20h
	extern 	DPMI_ALLOCATE_DOS_MEMORY_BLOCK
	extern 	DPMI_LOCK_LINEAR_REGION

section .text

__GDECL(___5f734h_allocDosMem)
		push    ecx
		push 	ebx
		push    esi
		push 	edi

	mov 	ebx, [esp+1ch]
	mov 	edx, [esp+18h]
	mov 	eax, [esp+14h]

		sub     esp, byte 4
		mov     ecx, eax
		mov     esi, edx
		mov     [esp], bl
		mov 	eax, esi
		call 	DPMI_ALLOCATE_DOS_MEMORY_BLOCK
		test 	eax, eax
		jne 	___5f77ch
		push    byte 1
		call    near ___58b20h
		add     esp, byte 4
___5f77ch:
		mov     ax, __AX(___24cc88h)
		mov     [ecx+0ah], ax
		xor     eax, eax
		mov     eax, __EAX(___24cc88h)
		shl     eax, 4
		mov     [ecx], eax
		mov     ax, __DX(___24cc88h)
		mov     [ecx+8], ax
		mov     [ecx+4], esi
		mov     al, [esp]
		mov     [ecx+0ch], al
		test    al, al
		je      short ___5f7f3h
		lea 	eax, [ecx-1]
		call 	DPMI_LOCK_LINEAR_REGION
___5f7f3h:
		add     esp, byte 4
		pop 	edi
		pop     esi
		pop 	ebx
		pop     ecx
		retn    
