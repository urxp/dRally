cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___243d38h
	extern	___1f237ch
	extern	___1f2380h
	extern	___1f2384h
	extern	___1f2370h
	extern	rand_watcom106
	extern	___1f2374h
	extern	___1f2378h
	extern	___196dd0h
	extern	___1f2488h
	extern	___1f2490h
	extern	___1f248ch
	extern	___243d28h
	extern	___243d58h
	extern	___1de81ch
	extern	___19bd60h

section .text

__GDECL(___496b0h)
		push    44h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 28h
		mov     ebp, [___243d38h]
		xor     eax, eax
___496cbh:
		add     eax, 120h
		xor     edx, edx
		mov     [eax+___1f237ch], edx
		cmp     eax, dword 1680h
		jne     short ___496cbh
		xor     eax, eax
___496e1h:
		add     eax, 120h
		xor     ebx, ebx
		mov     [eax+___1f2380h], ebx
		cmp     eax, dword 1680h
		jne     short ___496e1h
		xor     eax, eax
___496f7h:
		add     eax, 120h
		xor     ecx, ecx
		mov     [eax+___1f2384h], ecx
		cmp     eax, dword 1680h
		jne     short ___496f7h
		xor     eax, eax
___4970dh:
		add     eax, 120h
		xor     esi, esi
		mov     [eax+___1f2370h], esi
		cmp     eax, dword 1680h
		jne     short ___4970dh
		xor     ebx, ebx
		mov     ecx, 32h
		mov     [___243d38h], ebp
___4972eh:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		add     ebx, 120h
		add     edx, byte 64h
		mov     [ebx+___1f2374h], edx
		cmp     ebx, 1680h
		jne     short ___4972eh
		xor     eax, eax
___49753h:
		add     eax, 120h
		xor     edi, edi
		mov     [eax+___1f2378h], edi
		cmp     eax, dword 1680h
		jne     short ___49753h
		mov     dword [___196dd0h], 15eh

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 4
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     near ___498c8h

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 2
		sar     edx, 1fh
		idiv    ebx
		add     edx, byte 0ch
		mov     [esp+0ch], edx
		lea     ecx, [edx*8+0]
		add     ecx, edx
		shl     ecx, 5
		cmp     dword [ecx+___1f2488h], byte 0
		jle     near ___498c8h

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    ebx
		add     edx, byte 7
		mov     [esp], ecx
		mov     [ecx+___1f2490h], edx
		add     ecx, ___1f2488h
		xor     ebx, ebx
		lea     edx, [ecx+20h]
___497deh:
		mov     eax, [esp]
		mov     eax, [eax+___1f248ch]
		add     eax, ebx
		mov     esi, [___243d28h]
		sub     eax, byte 8
		imul    esi, eax
		mov     ecx, [esp]
		mov     edi, [ecx+___1f2488h]
		mov     eax, [___243d58h]
		add     eax, edi
		mov     ecx, 10h
		sub     eax, byte 8
		mov     edi, edx
		add     esi, eax
		inc     ebx
		call 	__MOVS
		add     edx, byte 10h
		cmp     ebx, byte 10h
		jl      short ___497deh
		xor     eax, eax
		mov     [esp+24h], eax
		mov     eax, [esp+0ch]
		lea     edx, [eax*8+0]
		xor     ebx, ebx
		add     edx, eax
		mov     [esp+18h], ebx
		shl     edx, 5
		mov     edi, 10h
___4984bh:
		mov     ebx, [esp+18h]
		mov     ebp, [___243d38h]
		xor     eax, eax
		mov     [esp+1ch], ebx
___4985bh:
		mov     ebx, [edx+___1f2490h]
		shl     ebx, 8
		add     ebx, ebp
		mov     ecx, [esp+1ch]
		add     ebx, eax
		add     ebx, ecx
		cmp     byte [ebx+0ffffff00h], 0
		je      short ___498a5h
		mov     ecx, [esp+24h]
		add     ecx, [edx+___1f248ch]
		mov     esi, [___243d28h]
		sub     ecx, byte 8
		imul    esi, ecx
		mov     ecx, [___243d58h]
		add     ecx, eax
		add     ecx, [edx+___1f2488h]
		mov     bl, [ebx+0ffffff00h]
		mov     [ecx+esi*1-8], bl
___498a5h:
		inc     eax
		cmp     eax, byte 10h
		jl      short ___4985bh
		mov     ebx, [esp+24h]
		mov     eax, [esp+18h]
		mov     [___243d38h], ebp
		inc     ebx
		add     eax, edi
		mov     [esp+24h], ebx
		mov     [esp+18h], eax
		cmp     edi, ebx
		jg      short ___4984bh
___498c8h:
		cmp     dword [___1de81ch], byte 1
		jne     near ___49a21h
		cmp     dword [___19bd60h], byte 0
		jne     near ___49a21h

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 2
		sar     edx, 1fh
		idiv    ebx
		add     edx, byte 0eh
		mov     [esp+10h], edx
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 5
		cmp     dword [eax+___1f2488h], byte 0
		jle     near ___49a19h
		mov     ebx, 6
		mov     [esp+14h], eax
		mov     [eax+___1f2490h], ebx
		add     eax, ___1f2488h
		xor     edx, edx
		lea     ebx, [eax+20h]
___4992ch:
		mov     eax, [esp+14h]
		mov     eax, [eax+___1f248ch]
		add     eax, edx
		mov     esi, [___243d28h]
		sub     eax, byte 8
		imul    esi, eax
		mov     ecx, [esp+14h]
		mov     edi, [ecx+___1f2488h]
		mov     eax, [___243d58h]
		add     eax, edi
		mov     ecx, 10h
		sub     eax, byte 8
		mov     edi, ebx
		add     esi, eax
		inc     edx
		call 	__MOVS
		add     ebx, byte 10h
		cmp     edx, byte 10h
		jl      short ___4992ch
		xor     eax, eax
		mov     [esp+8], eax
		mov     eax, [esp+10h]
		lea     edx, [eax*8+0]
		xor     ebx, ebx
		add     edx, eax
		mov     [esp+4], ebx
		shl     edx, 5
		mov     edi, 10h
___4999bh:
		mov     ebx, [esp+4]
		mov     ebp, [___243d38h]
		xor     eax, eax
		mov     [esp+20h], ebx
___499abh:
		mov     ecx, [edx+___1f2490h]
		shl     ecx, 8
		lea     ebx, [ecx+ebp*1]
		mov     ecx, [esp+20h]
		add     ebx, eax
		add     ebx, ecx
		cmp     byte [ebx+0ffffff00h], 0
		je      short ___499f6h
		mov     ecx, [esp+8]
		add     ecx, [edx+___1f248ch]
		mov     esi, [___243d28h]
		sub     ecx, byte 8
		imul    esi, ecx
		mov     ecx, [___243d58h]
		add     ecx, eax
		add     ecx, [edx+___1f2488h]
		mov     bl, [ebx+0ffffff00h]
		mov     [ecx+esi*1-8], bl
___499f6h:
		inc     eax
		cmp     eax, byte 10h
		jl      short ___499abh
		mov     ebx, [esp+8]
		mov     eax, [esp+4]
		mov     [___243d38h], ebp
		inc     ebx
		add     eax, edi
		mov     [esp+8], ebx
		mov     [esp+4], eax
		cmp     edi, ebx
		jg      short ___4999bh
___49a19h:
		xor     esi, esi
		mov     [___1de81ch], esi
___49a21h:
		mov     ebp, [___243d38h]
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
