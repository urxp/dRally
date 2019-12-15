cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___19dec0h
	extern 	___1a0ffch
	extern 	___1a0ffbh
	extern 	___18918h

section .text

__GDECL(___197d0h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     [esp+4], eax
		mov     [esp+8], edx
___197eah:
		mov     esi, [esp+8]
		mov     ebx, [esp+4]
		lea     edx, [ebx+esi*1]
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     edi, [eax*4+___19dec0h]
___19805h:
		cmp     edi, [ebx*4+___19dec0h]
		jle     short ___19811h
		inc     ebx
		jmp     short ___19805h
___19811h:
		lea     eax, [esi*4+0]
___19818h:
		mov     edx, [eax+___19dec0h]
		cmp     edi, edx
		jge     short ___19828h
		dec     esi
		sub     eax, byte 4
		jmp     short ___19818h
___19828h:
		cmp     ebx, esi
		jg      short ___19876h
		mov     ebp, [ebx*4+___19dec0h]
		mov     [ebx*4+___19dec0h], edx
		imul    edx, esi, byte 0bh
		mov     [esp], ebp
		mov     [eax+___19dec0h], ebp
		imul    ebp, ebx, byte 0bh
		mov     eax, ebp
		add     ebp, byte 0bh
___1984eh:
		xor     ecx, ecx
		mov     cl, [eax+___1a0ffch]
		mov     [esp], ecx
		mov     cl, [edx+___1a0ffch]
		inc     edx
		mov     [eax+___1a0ffch], cl
		mov     cl, [esp]
		inc     eax
		mov     [edx+___1a0ffbh], cl
		cmp     eax, ebp
		jne     short ___1984eh
		dec     esi
		inc     ebx
___19876h:
		cmp     ebx, esi
		jl      short ___19805h
		mov     ecx, [esp+4]
		cmp     esi, ecx
		jle     short ___1988bh
		mov     edx, esi
		mov     eax, ecx
		call    near ___197d0h
___1988bh:
		cmp     ebx, [esp+8]
		jge     near ___18918h
		mov     [esp+4], ebx
		jmp     near ___197eah
