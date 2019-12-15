cpu 386
%include "macros.inc"

	extern	___5ff99h
	extern	___24ccb0h
	extern	___5eefch
	extern	___24ccbeh
	extern	___58b20h
	extern	RESTORE_IRQ_MASKS
	extern 	DPMI_FREE_MEMORY_BLOCK
	extern 	DPMI_UNLOCK_LINEAR_REGION

section .text

__GDECL(___5ec04h)
		push    ebx
		push    ecx
		push    edx
		push    esi
		call    near ___5ff99h
		mov     ebx, [___24ccb0h]
___5ec13h:
		mov     edx, ebx
		mov     cl, [ebx]
		xor     eax, eax
		test    cl, cl
		jne     short ___5ec2fh
___5ec1dh:
		cmp     eax, dword 0e38h
		jae     short ___5ec2fh
		mov     ch, [edx+12h]
		add     edx, byte 12h
		inc     eax
		test    ch, ch
		je      short ___5ec1dh
___5ec2fh:
		cmp     eax, dword 0e38h
		jae     short ___5ec44h
		imul    eax, eax, byte 12h
		mov     eax, [ebx+eax*1+1]
		call    near ___5eefch
		jmp     short ___5ec13h
___5ec44h:
		mov     al, [___24ccbeh]
		mov     edx, ___24ccb0h
		test    al, al
		je      short ___5ec9ch
		lea 	eax, [___24ccb0h-1]
		call 	DPMI_UNLOCK_LINEAR_REGION
___5ec9ch:
		mov     eax, [edx+8]
		call 	DPMI_FREE_MEMORY_BLOCK
		test 	eax, eax
		jne      ___5ecdbh
		push    byte 5
		call    near ___58b20h
		add     esp, byte 4
___5ecdbh:
		mov     dword [edx+8], 0
		mov     word [edx+0ch], 0
		mov     dword [edx], 0
		mov     dword [edx+4], 0
		mov     byte [edx+0eh], 0
		call    near RESTORE_IRQ_MASKS
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
