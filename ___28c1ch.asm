cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___1a0174h
	extern	___1a0178h
	extern	___1a017ch
	extern	___1a0170h
	extern	___1a0a50h
	extern	___1a0a54h
	extern	___1a0a58h
	extern	___1a0a5ch

section .text

__GDECL(___28c1ch)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a01fch], byte 5
		jne     short ___28c75h
		mov     esi, 0abeh
		mov     edi, 0ccbh
		mov     ebp, 0a41h
		mov     ecx, 9ddh
		mov     [___1a0174h], esi
		mov     [___1a0178h], edi
		mov     [___1a017ch], ebp
		mov     [___1a0170h], ecx
___28c75h:
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a01fch], byte 4
		jne     short ___28cb9h
		mov     esi, 6d6h
		mov     edi, 8cah
		mov     ebp, 84dh
		mov     ecx, 4e2h
		mov     [___1a0174h], esi
		mov     [___1a0178h], edi
		mov     [___1a017ch], ebp
		mov     [___1a0170h], ecx
___28cb9h:
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a01fch], byte 3
		jne     short ___28cfdh
		mov     esi, 226h
		mov     edi, 271h
		mov     ebp, 23ah
		mov     ecx, 1f4h
		mov     [___1a0174h], esi
		mov     [___1a0178h], edi
		mov     [___1a017ch], ebp
		mov     [___1a0170h], ecx
___28cfdh:
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a01fch], byte 2
		jne     short ___28d41h
		mov     esi, 1f4h
		mov     edi, 2a3h
		mov     ebp, 226h
		mov     ecx, 1c2h
		mov     [___1a0174h], esi
		mov     [___1a0178h], edi
		mov     [___1a017ch], ebp
		mov     [___1a0170h], ecx
___28d41h:
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a01fch], byte 1
		jne     short ___28d85h
		mov     esi, 0e1h
		mov     edi, 15eh
		mov     ebp, 145h
		mov     ecx, 0c8h
		mov     [___1a0174h], esi
		mov     [___1a0178h], edi
		mov     [___1a017ch], ebp
		mov     [___1a0170h], ecx
___28d85h:
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a01fch], byte 0
		jne     short ___28dc9h
		mov     esi, 0c8h
		mov     edi, 113h
		mov     ebp, 0fah
		mov     ecx, 96h
		mov     [___1a0174h], esi
		mov     [___1a0178h], edi
		mov     [___1a017ch], ebp
		mov     [___1a0170h], ecx
___28dc9h:
		mov     eax, 1
		cmp     eax, [___1a0a50h]
		jne     short ___28ddbh
		mov     eax, [___1a0170h]
___28ddbh:
		mov     ecx, [___1a0174h]
		cmp     eax, ecx
		jle     short ___28df0h
		cmp     dword [___1a0a54h], byte 1
		jne     short ___28df0h
		mov     eax, ecx
___28df0h:
		mov     edi, [___1a0178h]
		cmp     eax, edi
		jle     short ___28e05h
		cmp     dword [___1a0a58h], byte 1
		jne     short ___28e05h
		mov     eax, edi
___28e05h:
		cmp     eax, [___1a017ch]
		jle     short ___28e14h
		cmp     dword [___1a0a5ch], byte 1
___28e14h:
		mov     eax, 1
		mov     [___1a1ef8h], ebx
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
