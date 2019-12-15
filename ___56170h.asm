cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243cf4h
	extern	___1e6fd9h
	extern	___1de598h
	extern	___243ce4h
	extern	___243178h
	extern	___243174h
	extern	___243c60h

section .text

__GDECL(___56170h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     edx, [___243cf4h]
		xor     ecx, ecx
		test    edx, edx
		jle     near ___5622dh
		mov     [esp+4], ecx
		mov     [esp], ecx
___5619ah:
		mov     ebx, [___243cf4h]
		xor     eax, eax
		test    ebx, ebx
		jle     short ___56204h
		mov     esi, [esp]
		mov     ebp, [esp+4]
		xor     edx, edx
		xor     edi, edi
___561b1h:
		cmp     eax, ecx
		je      short ___561edh
		mov     bl, [esi+___1e6fd9h]
		cmp     bl, [edx+___1e6fd9h]
		jbe     short ___561edh
		cmp     dword [ebp+___1de598h], byte 0
		jle     short ___561edh
		cmp     dword [edi+___1de598h], byte 0
		jg      short ___561edh
		mov     bl, [esi+___1e6fd9h]
		mov     bh, [edx+___1e6fd9h]
		mov     [esi+___1e6fd9h], bh
		mov     [edx+___1e6fd9h], bl
___561edh:
		mov     ebx, [___243cf4h]
		add     edx, 35eh
		inc     eax
		add     edi, 94h
		cmp     eax, ebx
		jl      short ___561b1h
___56204h:
		mov     ebx, [esp]
		mov     esi, [esp+4]
		mov     edi, [___243cf4h]
		inc     ecx
		add     ebx, 35eh
		add     esi, 94h
		mov     [esp], ebx
		mov     [esp+4], esi
		cmp     ecx, edi
		jl      near ___5619ah
___5622dh:
		mov     ebp, [___243cf4h]
		xor     ecx, ecx
		test    ebp, ebp
		jle     near ___56326h
		xor     ebp, ebp
___5623fh:
		mov     eax, [ebp+___1de598h]
		test    eax, eax
		jne     short ___5628dh
		mov     edx, [___243ce4h]
		xor     ebx, ebx
		test    edx, edx
		jle     short ___56277h
		mov     edi, [___243ce4h]
		xor     edx, edx
		shl     edi, 2
___56260h:
		mov     esi, [edx+___243178h]
		cmp     esi, ecx
		jne     short ___5626fh
		mov     ebx, 1
___5626fh:
		add     edx, byte 4
		inc     eax
		cmp     edx, edi
		jl      short ___56260h
___56277h:
		test    ebx, ebx
		jne     short ___5628dh
		mov     eax, [___243ce4h]
		inc     eax
		mov     [eax*4+___243174h], ecx
		mov     [___243ce4h], eax
___5628dh:
		cmp     dword [ebp+___1de598h], byte 0
		jle     near ___56311h
		mov     ebx, 0ffffffffh
		mov     edx, [___243ce4h]
		xor     eax, eax
		test    edx, edx
		jle     short ___562c7h
		xor     edx, edx
___562adh:
		mov     esi, [edx+___243178h]
		cmp     esi, ecx
		jne     short ___562b9h
		mov     ebx, eax
___562b9h:
		mov     esi, [___243ce4h]
		inc     eax
		add     edx, byte 4
		cmp     eax, esi
		jl      short ___562adh
___562c7h:
		cmp     ebx, byte 0ffffffffh
		je      short ___56311h
		mov     edi, [___243ce4h]
		dec     edi
		mov     eax, ebx
		mov     [___243ce4h], edi
		cmp     ebx, edi
		jge     short ___56301h
		lea     esi, [edi*4+0]
		lea     edx, [ebx*4+0]
___562edh:
		add     edx, byte 4
		mov     ebx, [edx+___243178h]
		inc     eax
		mov     [edx+___243174h], ebx
		cmp     edx, esi
		jl      short ___562edh
___56301h:
		mov     eax, [___243ce4h]
		mov     dword [eax*4+___243178h], 0ffffffffh
___56311h:
		mov     esi, [___243cf4h]
		inc     ecx
		add     ebp, 94h
		cmp     ecx, esi
		jl      near ___5623fh
___56326h:
		mov     edi, [___243ce4h]
		xor     eax, eax
		test    edi, edi
		jle     short ___56360h
		mov     bl, al
		neg     bl
		mov     ebp, [___243ce4h]
		mov     bh, [___243cf4h]
		xor     edx, edx
		add     bl, bh
___56346h:
		imul    esi, [edx+___243178h], 35eh
		add     edx, byte 4
		inc     eax
		mov     [esi+___1e6fd9h], bl
		dec     bl
		cmp     eax, ebp
		jl      short ___56346h
___56360h:
		mov     [___243c60h], ecx
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
