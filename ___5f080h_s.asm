cpu 386
%include "macros.inc"

	extern	___24ccb0h
	extern	___58b20h
	extern 	DPMI_UNLOCK_LINEAR_REGION
	extern 	DPMI_LOCK_LINEAR_REGION
	extern 	DPMI_RESIZE_MEMORY_BLOCK
	extern 	DPMI_RESIZE_DOS_MEMORY_BLOCK

section .text

__GDECL(___5f080h)
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub 	esp, 4
		mov     ebx, eax
		mov     edi, edx
		mov     esi, [___24ccb0h]
		xor     ecx, ecx
		mov     edx, [esi+1]
		mov     eax, esi
		cmp     ebx, edx
		je      short ___5f0adh
___5f09ah:
		cmp     ecx, 0e38h
		jae     short ___5f0adh
		mov     ebp, [eax+13h]
		add     eax, byte 12h
		inc     ecx
		cmp     ebx, ebp
		jne     short ___5f09ah
___5f0adh:
		cmp     ecx, 0e38h
		je      short ___5f0c4h
		lea     eax, [ecx*8+0]
		add     eax, ecx
		cmp     byte [esi+eax*2], 0
		jne     short ___5f0ceh
___5f0c4h:
		push    byte 0fh
		call    near ___58b20h
		add     esp, byte 4
___5f0ceh:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, esi
		mov 	dword [esp], 1
		cmp     byte [eax+11h], 0
		je      short ___5f12dh
		call 	DPMI_UNLOCK_LINEAR_REGION
		mov 	[esp], eax
___5f12dh:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, esi
		mov     bl, [eax]
		cmp     bl, 1
		jb      ___5f1c2h
		jbe     short ___5f14eh
		cmp     bl, 2
		je      short ___5f191h
		jmp     ___5f1c2h
___5f14eh:
		mov 	edx, edi
		mov 	eax, [eax+9]
		call 	DPMI_RESIZE_MEMORY_BLOCK
		test 	eax, eax
		jne 	___5f1d5h
		push    byte 0fh
		call    near ___58b20h
		add     esp, byte 4
___5f191h:
		mov 	edx, edi
		mov	 	ax, [eax+0dh]
		call 	DPMI_RESIZE_DOS_MEMORY_BLOCK
		test 	eax, eax
		jne		___5f1d5h
		push    byte 0fh
		call    near ___58b20h
		add     esp, byte 4
___5f1c2h:
		mov 	eax, [esp]
		test 	eax, eax
		jne     ___5f1d5h
		push    byte 0fh
		call    near ___58b20h
		add     esp, byte 4
___5f1d5h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, esi
		mov     bl, [eax+11h]
		mov     [eax+5], edi
		test    bl, bl
		je      short ___5f234h
		call 	DPMI_LOCK_LINEAR_REGION
___5f234h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		mov     eax, [esi+eax*2+1]
		add 	esp, 4
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
