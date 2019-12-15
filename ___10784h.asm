cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___1859d0h
	extern 	___1859c8h
	extern 	___1a1f0ch__VGA13_BUFFER_B
	extern 	___1859cch
	extern 	___1a2042h
	extern 	___1a1f28h
	extern 	___1a2041h
	extern 	___1a2149h
	extern 	___1a1f2ch
	extern 	___1859d8h

section .text

__GDECL(___10784h)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     ebx, [___1859d0h]
		mov     esi, [___1859c8h]
		mov     edi, [___1a1f0ch__VGA13_BUFFER_B]
		cmp     dword [___1859cch], byte 0
		jne     short ___10806h
		test    esi, esi
		jg      short ___107e7h
		mov     eax, ebx
		mov     edx, edi
		mov     ecx, ___1a2042h
		inc     ebx
		movzx   esi, byte [edx+eax*1]
		mov     [___1a1f28h], ecx
		test    esi, esi
		je      short ___107e7h
		xor     eax, eax
		test    esi, esi
		jle     short ___107e7h
		mov     ecx, edi
___107d6h:
		mov     edx, ebx
		inc     eax
		mov     dl, [ecx+edx*1]
		inc     ebx
		mov     [eax+___1a2041h], dl
		cmp     eax, esi
		jl      short ___107d6h
___107e7h:
		mov     ebp, 8
		mov     eax, [___1a1f28h]
		dec     esi
		mov     [___1859cch], ebp
		mov     dl, [eax]
		inc     eax
		mov     [___1a2149h], dl
		mov     [___1a1f28h], eax
___10806h:
		mov     ecx, 8
		sub     ecx, [___1859cch]
		xor     eax, eax
		mov     al, [___1a2149h]
		sar     eax, cl
		mov     edx, [___1859cch]
		mov     [esp], eax
		cmp     edx, [___1a1f2ch]
		jge     near ___108a8h
___1082fh:
		test    esi, esi
		jg      short ___10864h
		mov     eax, ebx
		mov     edx, edi
		mov     ecx, ___1a2042h
		inc     ebx
		movzx   esi, byte [edx+eax*1]
		mov     [___1a1f28h], ecx
		test    esi, esi
		je      short ___10864h
		xor     eax, eax
		test    esi, esi
		jle     short ___10864h
		mov     ecx, edi
___10853h:
		mov     edx, ebx
		inc     eax
		mov     dl, [ecx+edx*1]
		inc     ebx
		mov     [eax+___1a2041h], dl
		cmp     eax, esi
		jl      short ___10853h
___10864h:
		mov     eax, [___1a1f28h]
		mov     cl, [___1859cch]
		mov     ebp, [___1859cch]
		dec     esi
		mov     dl, [eax]
		inc     eax
		mov     [___1a2149h], dl
		xor     edx, edx
		add     ebp, byte 8
		mov     dl, [___1a2149h]
		mov     [___1a1f28h], eax
		shl     edx, cl
		mov     ecx, [esp]
		mov     [___1859cch], ebp
		or      ecx, edx
		mov     eax, [___1a1f2ch]
		mov     [esp], ecx
		cmp     eax, ebp
		jg      short ___1082fh
___108a8h:
		mov     eax, [___1a1f2ch]
		mov     edx, [esp]
		mov     ebp, [___1859cch]
		mov     ecx, [eax*4+___1859d8h]
		sub     ebp, eax
		mov     eax, edx
		mov     [___1859cch], ebp
		and     eax, ecx
		mov     [___1a1f0ch__VGA13_BUFFER_B], edi
		mov     [___1859c8h], esi
		mov     [___1859d0h], ebx
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
