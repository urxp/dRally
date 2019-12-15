cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___1859d0h
	extern 	___1859d4h
	extern 	___1a1f0ch__VGA13_BUFFER_B
	extern 	___1a0a60h
	extern 	___3f71ch__allocateMemory
	extern 	___1a1f18h
	extern 	___1a1f14h
	extern 	___1a1f24h
	extern 	___1a1f2ch
	extern 	___1a1f04h
	extern 	___1a1f34h
	extern 	___1859cch
	extern 	___1a1f38h
	extern 	___1859c8h
	extern 	___1a1f30h
	extern 	___1a1f08h
	extern 	___10784h
	extern 	___1a1f20h__VGA13_BUFFER_A
	extern 	___3f77ch__freeMemory

section .text

__GDECL(___108e8h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		xor     edx, edx
		xor     eax, eax
		mov     [___1859d0h], edx
		mov     [___1859d4h], edx
		mov     edx, [___1a1f0ch__VGA13_BUFFER_B]
___10911h:
		mov     ecx, [___1859d0h]
		inc     eax
		lea     esi, [ecx+1]
		inc     eax
		mov     bl, [ecx+edx*1]
		mov     [___1859d0h], esi
		mov     ecx, esi
		mov     [eax+___1a0a60h-2], bl
		inc     eax
		inc     esi
		mov     bl, [ecx+edx*1]
		mov     [___1859d0h], esi
		mov     ecx, esi
		mov     [eax+___1a0a60h-2], bl
		inc     esi
		mov     bl, [ecx+edx*1]
		mov     [___1859d0h], esi
		mov     [eax+___1a0a60h-1], bl
		cmp     eax, dword 300h
		jl      short ___10911h
		mov     eax, esi
		lea     ecx, [esi+1]
		mov     bh, [edx+eax*1]
		mov     eax, 1001h
		mov     [___1859d0h], ecx
		call    near ___3f71ch__allocateMemory
		mov     [___1a1f18h], eax
		mov     eax, 1001h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1f14h], eax
		mov     eax, 4004h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1f24h], eax
		xor     eax, eax
		mov     al, bh
		inc     eax
		mov     [___1a1f2ch], eax
		mov     ecx, eax
		mov     eax, 1
		shl     eax, cl
		mov     [___1a1f04h], eax
		mov     cl, bh
		mov     eax, 1
		xor     edi, edi
		shl     eax, cl
		mov     edx, [___1a1f18h]
		mov     [___1a1f34h], eax
		xor     ecx, ecx
		inc     eax
		mov     [___1859cch], ecx
		mov     [___1a1f38h], eax
		mov     eax, [___1a1f34h]
		mov     [___1859c8h], ecx
		add     eax, byte 2
		mov     [esp], ecx
		mov     [___1a1f30h], eax
		mov     [___1a1f08h], eax
___109e9h:
		call    near ___10784h
		mov     ebp, [___1a1f38h]
		mov     [esp+4], eax
		cmp     eax, ebp
		je      near ___10b57h
		mov     ecx, [___1a1f34h]
		cmp     eax, ecx
		jne     near ___10a8ah
		xor     eax, ecx
		mov     al, bh
		inc     eax
		mov     [___1a1f2ch], eax
		mov     eax, [___1a1f30h]
		mov     ecx, [___1a1f2ch]
		mov     [___1a1f08h], eax
		mov     eax, 1
		shl     eax, cl
		mov     [___1a1f04h], eax
___10a34h:
		call    near ___10784h
		mov     esi, [___1a1f34h]
		mov     [esp+4], eax
		cmp     eax, esi
		je      short ___10a34h
		cmp     eax, [___1a1f38h]
		je      near ___10b57h
		cmp     eax, [___1a1f08h]
		jl      short ___10a61h
		xor     eax, eax
		mov     [esp+4], eax
___10a61h:
		mov     eax, [esp+4]
		mov     ecx, [___1a1f20h__VGA13_BUFFER_A]
		mov     edi, eax
		mov     [esp], eax
		mov     eax, [___1859d4h]
		mov     bl, [esp+4]
		lea     esi, [eax+1]
		mov     [ecx+eax*1], bl
		mov     [___1859d4h], esi
		jmp     near ___109e9h
___10a8ah:
		mov     esi, [___1a1f08h]
		mov     ecx, eax
		cmp     eax, esi
		jl      short ___10a9fh
		inc     edx
		mov     al, [esp]
		mov     ecx, edi
		mov     [edx-1], al
___10a9fh:
		mov     ebp, [___1a1f30h]
		lea     eax, [edx+1]
		cmp     ecx, ebp
		jl      short ___10ac4h
		mov     esi, [___1a1f14h]
		mov     bl, [ecx+esi*1]
		mov     esi, [___1a1f24h]
		mov     [edx], bl
		mov     edx, eax
		mov     ecx, [esi+ecx*4]
		jmp     short ___10a9fh
___10ac4h:
		mov     esi, [___1a1f04h]
		mov     [edx], cl
		mov     edx, eax
		cmp     esi, [___1a1f08h]
		jle     short ___10b04h
		mov     eax, [___1a1f14h]
		mov     ebp, [___1a1f08h]
		add     eax, ebp
		mov     [esp], ecx
		mov     [eax], cl
		lea     ecx, [ebp*4+0]
		mov     esi, [___1a1f24h]
		lea     eax, [ebp+1]
		mov     [ecx+esi*1], edi
		mov     edi, [esp+4]
		mov     [___1a1f08h], eax
___10b04h:
		mov     ecx, [___1a1f04h]
		cmp     ecx, [___1a1f08h]
		jg      short ___10b2eh
		mov     esi, [___1a1f2ch]
		cmp     esi, byte 0ch
		jge     short ___10b2eh
		lea     eax, [esi+1]
		lea     ebp, [ecx+ecx*1]
		mov     [___1a1f2ch], eax
		mov     [___1a1f04h], ebp
___10b2eh:
		cmp     edx, [___1a1f18h]
		jbe     near ___109e9h
		mov     eax, [___1859d4h]
		mov     ecx, [___1a1f20h__VGA13_BUFFER_A]
		mov     bl, [edx-1]
		dec     edx
		lea     esi, [eax+1]
		mov     [ecx+eax*1], bl
		mov     [___1859d4h], esi
		jmp     short ___10b2eh
___10b57h:
		mov     eax, [___1a1f18h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1f14h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1f24h]
		call    near ___3f77ch__freeMemory
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
