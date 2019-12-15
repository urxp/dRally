cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c9ch
	extern	___243d08h
	extern	___243c88h
	extern	___243c98h
	extern	___1f3b0ch
	extern	___1e8844h
	extern	___243c94h
	extern	___240b6ch
	extern	___240b70h
	extern	___1e8848h

section .text

__GDECL(___4adach)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     edx, [___243c9ch]
		mov     esi, [___243d08h]
		xor     ebx, ebx
		mov     ecx, [___243c88h]
		mov     [___243c98h], ebx
		test    ecx, ecx
		jle     short ___4ae3ah
		lea     eax, [ecx*4+0]
		sub     eax, ecx
		shl     eax, 3
		add     eax, ecx
		xor     edi, edi
		shl     eax, 4
		xor     ebp, ebp
		mov     [esp], eax
___4adf5h:
		mov     ecx, ebp
		mov     eax, edi
		mov     ebx, [ebp+___1f3b0ch]
		xor     esi, esi
		test    ebx, ebx
		jle     short ___4ae1ch
		mov     ebx, 0ffffffffh
___4ae0ah:
		add     eax, byte 4
		inc     esi
		mov     [eax+___1e8844h], ebx
		cmp     esi, [ecx+___1f3b0ch]
		jl      short ___4ae0ah
___4ae1ch:
		mov     ebx, [esp]
		mov     eax, [___243c98h]
		add     ebp, 0c50h
		inc     eax
		add     edi, 190h
		mov     [___243c98h], eax
		cmp     edi, ebx
		jl      short ___4adf5h
___4ae3ah:
		xor     ecx, ecx
		mov     edi, [___243c88h]
		mov     [___243c98h], ecx
		test    edi, edi
		jle     near ___4af26h
		mov     [esp+4], ecx
		mov     [esp+8], ecx
___4ae58h:
		mov     eax, [esp+4]
		mov     [esp+14h], eax
		mov     eax, [esp+8]
		mov     edi, [esp+4]
		xor     esi, esi
		mov     ebp, [eax+___1f3b0ch]
		mov     [esp+0ch], eax
		test    ebp, ebp
		jle     near ___4aeefh
		mov     [esp+10h], esi
___4ae80h:
		mov     eax, [___243c94h]
		xor     edx, edx
		test    eax, eax
		jle     short ___4aed2h
		mov     ebp, [esp+10h]
		xor     eax, eax
___4ae91h:
		mov     ebx, [___243c98h]
		cmp     ebx, [eax+___240b6ch]
		jne     short ___4aec4h
		cmp     esi, [eax+___240b70h]
		jne     short ___4aec4h
		mov     ebx, [esp+14h]
		add     ebx, ebp
		cmp     dword [ebx+___1e8848h], byte 0ffffffffh
		je      short ___4aebeh
		mov     [edi+___1e8844h], edx
		jmp     short ___4aec4h
___4aebeh:
		mov     [ebx+___1e8848h], edx
___4aec4h:
		mov     ecx, [___243c94h]
		inc     edx
		add     eax, byte 2ch
		cmp     edx, ecx
		jl      short ___4ae91h
___4aed2h:
		mov     eax, [esp+10h]
		mov     ebx, [esp+0ch]
		add     edi, byte 4
		inc     esi
		add     eax, byte 4
		mov     ecx, [ebx+___1f3b0ch]
		mov     [esp+10h], eax
		cmp     esi, ecx
		jl      short ___4ae80h
___4aeefh:
		mov     ecx, [esp+8]
		mov     edi, [esp+4]
		mov     ebp, [___243c98h]
		mov     ebx, [___243c88h]
		add     ecx, 0c50h
		add     edi, 190h
		inc     ebp
		mov     [esp+8], ecx
		mov     [esp+4], edi
		mov     [___243c98h], ebp
		cmp     ebp, ebx
		jl      near ___4ae58h
___4af26h:
		mov     [___243d08h], esi
		mov     [___243c9ch], edx
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
