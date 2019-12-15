cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1e7ch
	extern	bpk_decode2
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR

section .text

__GDECL(___259e0h)
		push    1ch
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     [esp], eax
		mov     edi, edx
		mov     esi, ebx
		xor     eax, eax
		xor     ebx, ebx
		test    esi, esi
		jle     short ___25a0fh
		mov     edx, [esp+14h]
___25a03h:
		mov     ebp, [edx]
		add     edx, byte 4
		inc     eax
		add     ebx, ebp
		cmp     eax, esi
		jl      short ___25a03h
___25a0fh:
		add     ebx, ecx
		push    ebx
		mov     eax, [___1a1e7ch]
		push    eax
		call    near bpk_decode2
		mov     ebx, [esp]
		lea     eax, [edi*4+0]
		mov     ecx, 40h
		add     eax, edi
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		mov     esi, [___1a1e7ch]
		add     eax, edx
		mov     edx, 60h
		add     ebx, eax
		shr     dl, 2
___25a49h:
		mov     ch, dl
___25a4bh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___25a4bh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___25a49h
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		ret     4
