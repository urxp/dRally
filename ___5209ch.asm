cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___243d38h
	extern	___196dd0h
	extern	___243334h
	extern	___1f2498h
	extern	___1f2490h
	extern	___196dd4h
	extern	__STOSB
	extern	rand_
	extern	___1f2494h
	extern	___1f2488h
	extern	___243ce8h
	extern	___1de5ach
	extern	___1f248ch
	extern	___243d28h
	extern	___243d58h

section .text

__GDECL(___5209ch)
		push    60h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 44h
		mov     ebp, [___243d38h]
		mov     edx, [___196dd0h]
		test    edx, edx
		jle     short ___520d0h
		mov     eax, [___243334h]
		mov     ecx, edx
		sub     ecx, eax
		mov     [___196dd0h], ecx
		jmp     short ___520d8h
___520d0h:
		xor     ebx, ebx
		mov     [___196dd0h], ebx
___520d8h:
		mov     edx, [___243334h]
		xor     eax, eax
___520e0h:
		mov     esi, [eax+___1f2498h]
		cmp     esi, 7d0h
		jge     short ___52100h
		cmp     dword [eax+___1f2490h], byte 0
		je      short ___52100h
		lea     ebx, [esi+edx*1]
		mov     [eax+___1f2498h], ebx
___52100h:
		add     eax, 120h
		cmp     eax, dword 0d80h
		jne     short ___520e0h
		mov     ecx, [___196dd0h]
		mov     [___243d38h], ebp
		test    ecx, ecx
		jne     near ___52429h
		cmp     dword [___196dd4h], byte 0
		jne     near ___52429h
		mov     [esp+18h], ecx
		xor     eax, eax
___52133h:
		mov     edx, [eax+___1f2490h]
		mov     ebp, [___243d38h]
		test    edx, edx
		jle     short ___52147h
		inc     dword [esp+18h]
___52147h:
		add     eax, 120h
		mov     [___243d38h], ebp
		cmp     eax, dword 0d80h
		jne     short ___52133h
		mov     ecx, 0ch
		mov     eax, esp
		xor     edx, edx
		call    near __STOSB
		xor     ecx, ecx
		mov     [esp+10h], ecx
___5216dh:
		call    near rand_
		mov     edx, eax
		mov     ebx, 0ch
		sar     edx, 1fh
		idiv    ebx
		mov     [esp+30h], edx
		cmp     byte [esp+edx*1], 1
		je      short ___5216dh
		mov     eax, [esp+30h]
		mov     byte [esp+eax*1], 1
		imul    eax, eax, 120h
		mov     edi, [eax+___1f2494h]
		mov     ebp, [___243d38h]
		test    edi, edi
		jle     short ___521b8h
		mov     edx, [___243334h]
		mov     ebx, edi
		sub     ebx, edx
		mov     [eax+___1f2494h], ebx
		jmp     short ___521c0h
___521b8h:
		xor     edx, edx
		mov     [eax+___1f2494h], edx
___521c0h:
		imul    ebx, [esp+30h], 120h
		mov     esi, [ebx+___1f2490h]
		mov     [___243d38h], ebp
		test    esi, esi
		jne     near ___52417h
		cmp     dword [ebx+___1f2488h], byte 0
		jle     near ___52417h
		cmp     dword [ebx+___1f2494h], byte 0
		jne     near ___52417h
		cmp     dword [esp+18h], byte 4
		jge     near ___52417h
		call    near rand_
		mov     edx, eax
		mov     ecx, 64h
		sar     edx, 1fh
		idiv    ecx
		imul    eax, [___243ce8h], 94h
		cmp     dword [eax+___1de5ach], byte 0
		je      near ___522aah
		mov     ebp, [___243d38h]
		test    edx, edx
		jl      short ___52242h
		cmp     edx, byte 1eh
		jge     short ___52242h
		mov     dword [ebx+___1f2490h], 1
___52242h:
		cmp     edx, byte 1eh
		jl      short ___5225eh
		cmp     edx, byte 41h
		jge     short ___5225eh
		imul    eax, [esp+30h], 120h
		mov     dword [eax+___1f2490h], 2
___5225eh:
		cmp     edx, byte 41h
		jl      short ___5227ah
		cmp     edx, byte 50h
		jge     short ___5227ah
		imul    eax, [esp+30h], 120h
		mov     dword [eax+___1f2490h], 3
___5227ah:
		cmp     edx, byte 50h
		jl      short ___52296h
		cmp     edx, byte 55h
		jge     short ___52296h
		imul    eax, [esp+30h], 120h
		mov     dword [eax+___1f2490h], 4
___52296h:
		cmp     edx, byte 55h
		jl      near ___52317h
		cmp     edx, byte 64h
		jge     near ___52317h
		jmp     short ___52305h
___522aah:
		mov     ebp, [___243d38h]
		test    edx, edx
		jl      short ___522c3h
		cmp     edx, byte 2dh
		jge     short ___522c3h
		mov     dword [ebx+___1f2490h], 2
___522c3h:
		cmp     edx, byte 2dh
		jl      short ___522dfh
		cmp     edx, byte 50h
		jge     short ___522dfh
		imul    eax, [esp+30h], 120h
		mov     dword [eax+___1f2490h], 3
___522dfh:
		cmp     edx, byte 50h
		jl      short ___522fbh
		cmp     edx, byte 5ah
		jge     short ___522fbh
		imul    eax, [esp+30h], 120h
		mov     dword [eax+___1f2490h], 4
___522fbh:
		cmp     edx, byte 5ah
		jl      short ___52317h
		cmp     edx, byte 64h
		jge     short ___52317h
___52305h:
		imul    eax, [esp+30h], 120h
		mov     dword [eax+___1f2490h], 5
___52317h:
		imul    eax, [esp+30h], 120h
		mov     edi, [esp+18h]
		mov     [___243d38h], ebp
		xor     esi, esi
		xor     edx, edx
		inc     edi
		mov     [esp+28h], eax
		mov     [eax+___1f2498h], esi
		add     eax, ___1f2488h
		mov     [esp+18h], edi
		lea     ebx, [eax+20h]
___52344h:
		mov     eax, [esp+28h]
		mov     eax, [eax+___1f248ch]
		add     eax, edx
		mov     ecx, [___243d28h]
		sub     eax, byte 8
		imul    eax, ecx
		mov     ecx, [esp+28h]
		mov     esi, [___243d58h]
		add     esi, [ecx+___1f2488h]
		mov     ecx, 10h
		sub     esi, byte 8
		mov     edi, ebx
		add     esi, eax
		inc     edx
		call 	__MOVS
		add     ebx, byte 10h
		cmp     edx, byte 10h
		jl      short ___52344h
		xor     edi, edi
		mov     eax, [esp+30h]
		mov     [esp+34h], edi
		imul    edx, eax, 120h
___523a1h:
		mov     ebx, [esp+34h]
		mov     ebp, [___243d38h]
		xor     eax, eax
		mov     [esp+40h], ebx
___523b1h:
		mov     ecx, [edx+___1f2490h]
		shl     ecx, 8
		lea     ebx, [ecx+ebp*1]
		mov     ecx, [esp+40h]
		add     ebx, eax
		add     ebx, ecx
		cmp     byte [ebx+0ffffff00h], 0
		je      short ___523fah
		mov     ecx, [edx+___1f248ch]
		add     ecx, edi
		mov     esi, [___243d28h]
		sub     ecx, byte 8
		imul    esi, ecx
		mov     ecx, [___243d58h]
		add     ecx, eax
		add     ecx, [edx+___1f2488h]
		mov     bl, [ebx+0ffffff00h]
		mov     [ecx+esi*1-8], bl
___523fah:
		inc     eax
		cmp     eax, byte 10h
		jl      short ___523b1h
		mov     esi, [esp+34h]
		inc     edi
		add     esi, byte 10h
		mov     [___243d38h], ebp
		mov     [esp+34h], esi
		cmp     edi, byte 10h
		jl      short ___523a1h
___52417h:
		mov     edi, [esp+10h]
		inc     edi
		mov     [esp+10h], edi
		cmp     edi, byte 0ch
		jl      near ___5216dh
___52429h:
		mov     eax, ___1f2488h
		mov     ebp, [___243d38h]
		xor     edx, edx
		add     eax, byte 20h
		mov     [esp+1ch], edx
		mov     [esp+14h], eax
___52441h:
		mov     edx, 7d0h
		mov     ebx, [esp+1ch]
		mov     eax, 7c6h
		xor     ecx, ecx
___52451h:
		mov     esi, [ebx+___1f2498h]
		cmp     eax, esi
		jge     short ___52464h
		cmp     edx, esi
		jle     short ___52464h
		mov     ecx, 1
___52464h:
		sub     edx, byte 14h
		sub     eax, byte 14h
		cmp     edx, 604h
		jge     short ___52451h
		test    ecx, ecx
		je      near ___524ffh
		xor     ebx, ebx
		mov     edx, [esp+1ch]
		mov     [esp+38h], ebx
		mov     [esp+0ch], ebx
		mov     edi, 10h
___5248dh:
		mov     ebx, [esp+38h]
		xor     eax, eax
		mov     [esp+3ch], ebx
___52497h:
		mov     ecx, [edx+___1f2490h]
		shl     ecx, 8
		lea     ebx, [ecx+ebp*1]
		mov     ecx, [esp+3ch]
		add     ebx, eax
		add     ebx, ecx
		cmp     byte [ebx+0ffffff00h], 0
		je      short ___524e2h
		mov     ecx, [esp+0ch]
		add     ecx, [edx+___1f248ch]
		mov     esi, [___243d28h]
		sub     ecx, byte 8
		imul    esi, ecx
		mov     ecx, [___243d58h]
		add     ecx, eax
		add     ecx, [edx+___1f2488h]
		mov     bl, [ebx+0ffffff00h]
		mov     [ecx+esi*1-8], bl
___524e2h:
		inc     eax
		cmp     eax, byte 10h
		jl      short ___52497h
		mov     ebx, [esp+0ch]
		mov     eax, [esp+38h]
		inc     ebx
		add     eax, edi
		mov     [esp+0ch], ebx
		mov     [esp+38h], eax
		cmp     edi, ebx
		jg      short ___5248dh
___524ffh:
		mov     edx, 7c6h
		mov     eax, [esp+1ch]
		mov     ebx, 7bch
		xor     ecx, ecx
___5250fh:
		mov     esi, [eax+___1f2498h]
		cmp     ebx, esi
		jge     short ___52522h
		cmp     edx, esi
		jle     short ___52522h
		mov     ecx, 1
___52522h:
		sub     edx, byte 14h
		sub     ebx, byte 14h
		cmp     edx, 5fah
		jge     short ___5250fh
		mov     [___243d38h], ebp
		test    ecx, ecx
		je      short ___52596h
		mov     eax, [esp+1ch]
		mov     edx, [esp+14h]
		xor     ebx, ebx
		mov     [esp+24h], eax
___52548h:
		mov     eax, [esp+24h]
		mov     eax, [eax+___1f248ch]
		add     eax, ebx
		mov     edi, [___243d28h]
		sub     eax, byte 8
		imul    edi, eax
		mov     ecx, [esp+24h]
		mov     esi, [ecx+___1f2488h]
		mov     eax, [___243d58h]
		add     eax, esi
		mov     ecx, 10h
		sub     eax, byte 8
		mov     esi, edx
		add     edi, eax
		inc     ebx
		call 	__MOVS
		add     edx, byte 10h
		cmp     ebx, byte 10h
		jl      short ___52548h
___52596h:
		mov     eax, [esp+1ch]
		cmp     dword [eax+___1f2498h], 7d0h
		jl      near ___52651h
		mov     ecx, [esp+1ch]
		mov     [esp+2ch], eax
		mov     eax, ___1f2488h
		add     eax, ecx
		xor     ebx, ebx
		add     eax, byte 20h
		xor     edx, edx
		mov     [esp+20h], eax
___525c4h:
		mov     eax, [esp+2ch]
		mov     eax, [eax+___1f248ch]
		add     eax, edx
		mov     edi, [___243d28h]
		sub     eax, byte 8
		imul    edi, eax
		mov     esi, [esp+20h]
		mov     ecx, [esp+2ch]
		mov     eax, [___243d58h]
		add     esi, ebx
		add     eax, [ecx+___1f2488h]
		add     ebx, byte 10h
		sub     eax, byte 8
		mov     ecx, 10h
		add     edi, eax
		inc     edx
		call 	__MOVS
		cmp     edx, byte 10h
		jl      short ___525c4h
		mov     eax, [esp+2ch]
		xor     esi, esi
		mov     [eax+___1f2498h], esi
		mov     [eax+___1f2490h], esi
		mov     dword [___196dd0h], 118h
		call    near rand_
		mov     edx, eax
		mov     ebx, 0c8h
		sar     edx, 1fh
		idiv    ebx
		mov     eax, [esp+2ch]
		add     edx, 12ch
		mov     [eax+___1f2494h], edx
___52651h:
		mov     ebx, [esp+1ch]
		mov     edx, [esp+14h]
		mov     ebp, [___243d38h]
		add     ebx, 120h
		add     edx, 120h
		mov     [esp+1ch], ebx
		mov     [esp+14h], edx
		cmp     ebx, 0d80h
		jne     near ___52441h
		add     esp, byte 44h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
