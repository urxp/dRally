cpu 386
%include "macros.inc"

	extern	___58b20h
	extern 	DPMI_UNLOCK_LINEAR_REGION
	extern 	DPMI_FREE_DOS_MEMORY_BLOCK

section .text

__GDECL(___5f7fch_freeDosMem)
		push    ebx
		push    ecx
		push    edx
		push 	edi
		push 	esi
	mov 	eax, [esp+18h]
		mov     ecx, eax
		cmp     byte [eax+0ch], 0
		je      short ___5f84eh
		lea 	eax, [ecx-1]

	push 	edx
	push 	ecx
	mov 	edx, [eax+5]
	push 	edx
	mov 	edx, [eax+1]
	push 	edx
		call 	DPMI_UNLOCK_LINEAR_REGION
	add 	esp, 8
	pop 	ecx
	pop 	edx
	
___5f84eh:
		mov     ax, [ecx+8]
	push 	edx
	push 	ecx
	push 	eax
		call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		test 	eax, eax
		jne 	___5f888h
		push    byte 2
		call    near ___58b20h
		add     esp, byte 4
___5f888h:
		mov     dword [ecx], 0
		mov     word [ecx+8], 0
		mov     dword [ecx+4], 0
		mov     word [ecx+0ah], 0
		pop 	esi
		pop 	edi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
