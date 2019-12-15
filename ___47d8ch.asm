cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___19bd60h
	extern	___61518h
	extern	___243cf4h
	extern	___24cee0h

section .text

__GDECL(___47d8ch)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     cl, al
		cmp     dword [___19bd60h], byte 0
		je      near ___47e84h
		call    near ___61518h
		xor     ebx, ebx
		mov     esi, [___243cf4h]
		mov     [esp+4], ebx
		test    esi, esi
		jle     near ___47e84h
		lea     eax, [esi*4+0]
		mov     [esp+8], ebx
		mov     [esp], eax
___47dd5h:
		xor     esi, esi
		mov     ebp, [esp+8]
		mov     [esp+0ch], esi
___47ddfh:
		imul    edi, [esp+0ch], byte 0ah
		mov     esi, [ebp+___24cee0h]
		xor     ebx, ebx
		mov     bx, [esi]
		neg     edi
		lea     eax, [ebx+edi*1]
		sub     ebx, byte 0ah
		xor     edx, edx
		add     edi, ebx
___47dfbh:
		mov     ebx, eax
		and     ebx, 0fffh
		cmp     cl, [esi+ebx*1+4]
		jne     short ___47e0ah
		inc     edx
___47e0ah:
		dec     eax
		cmp     eax, edi
		jne     short ___47dfbh
		cmp     edx, byte 9
		jne     short ___47e53h
		mov     edx, [esp+0ch]
		lea     edi, [edx*4+0]
		add     edi, edx
		mov     esi, [esp+4]
		add     edi, edi
		shl     esi, 2
		mov     eax, edi
		add     edi, byte 0ah
___47e2fh:
		mov     edx, [esi+___24cee0h]
		xor     ebx, ebx
		mov     bx, [edx]
		sub     ebx, eax
		and     ebx, 0fffh
		inc     eax
		mov     byte [edx+ebx*1+4], 0
		cmp     eax, edi
		jne     short ___47e2fh
		mov     eax, 1
		jmp     short ___47e86h
___47e53h:
		mov     edi, [esp+0ch]
		inc     edi
		mov     [esp+0ch], edi
		cmp     edi, byte 0ah
		jl      near ___47ddfh
		mov     edi, [esp+8]
		mov     ebp, [esp+4]
		mov     edx, [esp]
		add     edi, byte 4
		inc     ebp
		mov     [esp+8], edi
		mov     [esp+4], ebp
		cmp     edi, edx
		jl      near ___47dd5h
___47e84h:
		xor     eax, eax
___47e86h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
