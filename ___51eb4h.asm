cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1f249ch
	extern	___1de820h
	extern	___196dc8h
	extern	___1f2488h
	extern	___196d98h
	extern	___1f248ch
	extern	___196dcch
	extern	___1f24a0h
	extern	itoa_
	extern	___184280h
	extern	___424c8h
	extern	___184284h
	extern	___1f24a4h
	extern	___243334h

section .text

___51e94h:
dd	___52072h
dd	___52072h
dd	___51f65h
dd	___52072h
dd	___51fc3h
dd	___52072h
dd	___52018h
dd	___51fc3h
__GDECL(___51eb4h)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		xor     ebp, ebp
___51ec9h:
		cmp     dword [ebp+___1f249ch], byte 0
		jle     near ___5207dh
		mov     ebx, [___1de820h]
		test    ebx, ebx
		jle     near ___5207dh
		mov     ecx, [___196dc8h]
		mov     eax, [ebp+___1f2488h]
		mov     edx, [___196d98h]
		sub     eax, ecx
		add     edx, eax
		mov     [esp+10h], edx
		mov     eax, [ebp+___1f248ch]
		mov     edx, [ebp+___1f249ch]
		sub     eax, byte 0ah
		sar     edx, 3
		mov     esi, [___196dcch]
		add     eax, edx
		sub     eax, esi
		mov     edi, [esp+10h]
		mov     [esp+14h], eax
		cmp     edi, byte 0ffffffeeh
		jl      near ___52072h
		cmp     edi, 140h
		jge     near ___52072h
		test    eax, eax
		jl      near ___52072h
		add     eax, byte 6
		cmp     eax, dword 0c8h
		jge     near ___52072h
		mov     eax, [ebp+___1f24a0h]
		dec     eax
		cmp     eax, byte 7
		ja      near ___52072h
		jmp     near dword [cs:eax*4+___51e94h]
___51f65h:
		lea     edx, [esp+8]
		mov     eax, ebx
		mov     ebx, 0ah
		lea     esi, [esp+8]
		call    near itoa_
		mov     ax, [___184280h]
		mov     edi, esp
		mov     [esp], ax
		call 	__STRCAT
		mov     eax, [esp+14h]
		shl     eax, 9
		mov     edi, [esp+10h]
		add     eax, byte 60h
		mov     edx, esp
		add     eax, edi
		call    near ___424c8h
		jmp     near ___52072h
___51fc3h:
		mov     ebx, 0ah
		lea     edx, [esp+8]
		mov     esi, ___184284h
		mov     eax, [ebp+___1f24a4h]
		lea     edi, [esp+8]
		call    near itoa_
		call 	__STRCAT
		mov     eax, [esp+14h]
		shl     eax, 9
		mov     esi, [esp+10h]
		add     eax, byte 60h
		lea     edx, [esp+8]
		add     eax, esi
		jmp     short ___5206dh
___52018h:
		imul    eax, ebx, byte 0ah
		lea     edx, [esp+8]
		mov     ebx, 0ah
		lea     esi, [esp+8]
		call    near itoa_
		mov     ax, [___184280h]
		mov     edi, esp
		mov     [esp], ax
		call 	__STRCAT
		mov     eax, [esp+14h]
		shl     eax, 9
		mov     ecx, [esp+10h]
		add     eax, byte 60h
		mov     edx, esp
		add     eax, ecx
___5206dh:
		call    near ___424c8h
___52072h:
		mov     eax, [___243334h]
		sub     [ebp+___1f249ch], eax
___5207dh:
		add     ebp, 120h
		cmp     ebp, 10e0h
		jne     near ___51ec9h
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
